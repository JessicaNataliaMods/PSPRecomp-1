#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0100[64] = {
    0x05028A4A0A444501ull, 0x294A005500294280ull, 0x4028052A014A0140ull, 0x94028052500A0149ull,
    0x0240500A2500A014ull, 0x1045441015214015ull, 0x052D145145145145ull, 0x29280500A4A00500ull,
    0x34AA911280800940ull, 0x5001400692800A00ull, 0x4000014A002800D2ull, 0x0A003494005001A5ull,
    0x000A500140069280ull, 0x00A4A002800D2A00ull, 0x527490A820212805ull, 0x21549D242A93A485ull,
    0x3A485527490AA4E9ull, 0xAA4E921549D242A9ull, 0x242A93A485527490ull, 0x27490AA4E921549Dull,
    0x4028052500A0052Dull, 0x94028052500A0149ull, 0x02A500A9402A500Aull, 0x4A01528054A01528ull,
    0x5414015280152805ull, 0xA025505012A82809ull, 0x2A500A9401528054ull, 0x500A9402A500A940ull,
    0x012A82809541402Aull, 0x541404AA0A025505ull, 0x00A5280500A52809ull, 0x8294402280528095ull,
    0xD0120A0241494002ull, 0x0482814A28254088ull, 0x1411502114048294ull, 0x8A02414A024140A5ull,
    0x2945045408500AA0ull, 0xA822809052809050ull, 0x4502945045421402ull, 0x9402A82280914A02ull,
    0x805500A5402A500Aull, 0x28A28A28A28822AAull, 0x145145145104528Aull, 0xA01494028052D145ull,
    0x412A08A0144A4A00ull, 0x8A80400040628151ull, 0x5053A4855408A850ull, 0x5053A4850129D244ull,
    0xA0A7490A0253A488ull, 0x749280A749248110ull, 0xA0A10A0AA889080Aull, 0x4214B0A1248A0A10ull,
    0x04A56925295A4922ull, 0x8000000000000080ull, 0x2200D04000840842ull, 0x0000000000008000ull,
    0x6820004204214000ull, 0x0000000400011100ull, 0x0210210A00000000ull, 0x0020000888034100ull,
    0x0000000000000211ull, 0x006820000840210Aull, 0x0200008880000221ull, 0x4214000000000000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0100[64] = {
    1u, 18u, 34u, 48u, 64u, 77u, 93u, 115u, 129u, 146u, 158u, 169u, 184u, 196u, 209u, 228u,
    253u, 280u, 307u, 331u, 358u, 374u, 390u, 407u, 425u, 442u, 460u, 478u, 495u, 512u, 531u, 547u,
    564u, 579u, 595u, 611u, 628u, 645u, 661u, 678u, 695u, 712u, 733u, 753u, 772u, 788u, 802u, 823u,
    845u, 867u, 888u, 906u, 924u, 948u, 950u, 961u, 962u, 972u, 976u, 982u, 990u, 993u, 1003u, 1010u,
};
void recomp_unit_0100_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,29,28,2 fprs=12,13,20,26 gpr_occ=3293 fpr_occ=480 gpr_total=5495 fpr_total=601
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_28 = ctx.gpr[28];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_26 = ctx.fpr[26];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.gpr[28] = aot_gpr_28; ctx.gpr[2] = aot_gpr_2; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[26] = aot_fpr_26; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_28 = ctx.gpr[28]; aot_gpr_2 = ctx.gpr[2]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_26 = ctx.fpr[26]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08994000u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0100[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0100[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08994000;
    case 2u: goto L_08994020;
    case 3u: goto L_08994028;
    case 4u: goto L_08994038;
    case 5u: goto L_08994048;
    case 6u: goto L_08994058;
    case 7u: goto L_08994064;
    case 8u: goto L_0899406C;
    case 9u: goto L_08994084;
    case 10u: goto L_0899408C;
    case 11u: goto L_08994098;
    case 12u: goto L_089940A4;
    case 13u: goto L_089940AC;
    case 14u: goto L_089940BC;
    case 15u: goto L_089940C4;
    case 16u: goto L_089940E0;
    case 17u: goto L_089940E8;
    case 18u: goto L_0899411C;
    case 19u: goto L_08994124;
    case 20u: goto L_08994138;
    case 21u: goto L_08994140;
    case 22u: goto L_0899414C;
    case 23u: goto L_08994154;
    case 24u: goto L_08994180;
    case 25u: goto L_08994188;
    case 26u: goto L_08994190;
    case 27u: goto L_08994198;
    case 28u: goto L_089941C4;
    case 29u: goto L_089941CC;
    case 30u: goto L_089941D8;
    case 31u: goto L_089941E0;
    case 32u: goto L_089941EC;
    case 33u: goto L_089941F4;
    case 34u: goto L_08994218;
    case 35u: goto L_08994220;
    case 36u: goto L_08994244;
    case 37u: goto L_0899424C;
    case 38u: goto L_08994258;
    case 39u: goto L_08994260;
    case 40u: goto L_08994284;
    case 41u: goto L_0899428C;
    case 42u: goto L_08994294;
    case 43u: goto L_089942A0;
    case 44u: goto L_089942A8;
    case 45u: goto L_089942CC;
    case 46u: goto L_089942D4;
    case 47u: goto L_089942F8;
    case 48u: goto L_08994300;
    case 49u: goto L_0899430C;
    case 50u: goto L_08994318;
    case 51u: goto L_08994320;
    case 52u: goto L_08994344;
    case 53u: goto L_0899434C;
    case 54u: goto L_08994370;
    case 55u: goto L_08994378;
    case 56u: goto L_08994384;
    case 57u: goto L_08994390;
    case 58u: goto L_08994398;
    case 59u: goto L_089943BC;
    case 60u: goto L_089943C4;
    case 61u: goto L_089943E8;
    case 62u: goto L_089943F0;
    case 63u: goto L_089943FC;
    case 64u: goto L_08994408;
    case 65u: goto L_08994410;
    case 66u: goto L_08994434;
    case 67u: goto L_0899443C;
    case 68u: goto L_08994460;
    case 69u: goto L_08994468;
    case 70u: goto L_08994474;
    case 71u: goto L_08994484;
    case 72u: goto L_0899448C;
    case 73u: goto L_089944B0;
    case 74u: goto L_089944B8;
    case 75u: goto L_089944D8;
    case 76u: goto L_089944E4;
    case 77u: goto L_08994500;
    case 78u: goto L_08994508;
    case 79u: goto L_08994510;
    case 80u: goto L_08994538;
    case 81u: goto L_08994540;
    case 82u: goto L_08994554;
    case 83u: goto L_08994560;
    case 84u: goto L_08994568;
    case 85u: goto L_08994570;
    case 86u: goto L_08994590;
    case 87u: goto L_089945A8;
    case 88u: goto L_089945B8;
    case 89u: goto L_089945C0;
    case 90u: goto L_089945C8;
    case 91u: goto L_089945D8;
    case 92u: goto L_089945F0;
    case 93u: goto L_08994600;
    case 94u: goto L_08994608;
    case 95u: goto L_08994618;
    case 96u: goto L_08994620;
    case 97u: goto L_08994630;
    case 98u: goto L_08994638;
    case 99u: goto L_08994648;
    case 100u: goto L_08994650;
    case 101u: goto L_08994660;
    case 102u: goto L_08994668;
    case 103u: goto L_08994678;
    case 104u: goto L_08994680;
    case 105u: goto L_08994690;
    case 106u: goto L_08994698;
    case 107u: goto L_089946A8;
    case 108u: goto L_089946B0;
    case 109u: goto L_089946C0;
    case 110u: goto L_089946C8;
    case 111u: goto L_089946CC;
    case 112u: goto L_089946D4;
    case 113u: goto L_089946E0;
    case 114u: goto L_089946E8;
    case 115u: goto L_08994720;
    case 116u: goto L_08994728;
    case 117u: goto L_08994754;
    case 118u: goto L_0899475C;
    case 119u: goto L_08994768;
    case 120u: goto L_08994774;
    case 121u: goto L_0899477C;
    case 122u: goto L_089947A0;
    case 123u: goto L_089947A8;
    case 124u: goto L_089947CC;
    case 125u: goto L_089947D4;
    case 126u: goto L_089947E0;
    case 127u: goto L_089947EC;
    case 128u: goto L_089947F4;
    case 129u: goto L_08994818;
    case 130u: goto L_08994820;
    case 131u: goto L_0899482C;
    case 132u: goto L_0899485C;
    case 133u: goto L_0899487C;
    case 134u: goto L_08994884;
    case 135u: goto L_08994890;
    case 136u: goto L_089948A0;
    case 137u: goto L_089948B0;
    case 138u: goto L_089948BC;
    case 139u: goto L_089948C4;
    case 140u: goto L_089948CC;
    case 141u: goto L_089948D4;
    case 142u: goto L_089948DC;
    case 143u: goto L_089948E8;
    case 144u: goto L_089948F0;
    case 145u: goto L_089948F4;
    case 146u: goto L_08994924;
    case 147u: goto L_0899492C;
    case 148u: goto L_0899495C;
    case 149u: goto L_08994964;
    case 150u: goto L_08994970;
    case 151u: goto L_0899497C;
    case 152u: goto L_08994984;
    case 153u: goto L_08994988;
    case 154u: goto L_089949B8;
    case 155u: goto L_089949C0;
    case 156u: goto L_089949F0;
    case 157u: goto L_089949F8;
    case 158u: goto L_08994A04;
    case 159u: goto L_08994A10;
    case 160u: goto L_08994A18;
    case 161u: goto L_08994A1C;
    case 162u: goto L_08994A4C;
    case 163u: goto L_08994A54;
    case 164u: goto L_08994A84;
    case 165u: goto L_08994A8C;
    case 166u: goto L_08994A98;
    case 167u: goto L_08994AA0;
    case 168u: goto L_08994AF8;
    case 169u: goto L_08994B00;
    case 170u: goto L_08994B08;
    case 171u: goto L_08994B14;
    case 172u: goto L_08994B1C;
    case 173u: goto L_08994B20;
    case 174u: goto L_08994B50;
    case 175u: goto L_08994B58;
    case 176u: goto L_08994B88;
    case 177u: goto L_08994B90;
    case 178u: goto L_08994B9C;
    case 179u: goto L_08994BA8;
    case 180u: goto L_08994BB0;
    case 181u: goto L_08994BB4;
    case 182u: goto L_08994BE4;
    case 183u: goto L_08994BEC;
    case 184u: goto L_08994C1C;
    case 185u: goto L_08994C24;
    case 186u: goto L_08994C30;
    case 187u: goto L_08994C3C;
    case 188u: goto L_08994C44;
    case 189u: goto L_08994C48;
    case 190u: goto L_08994C78;
    case 191u: goto L_08994C80;
    case 192u: goto L_08994CB0;
    case 193u: goto L_08994CB8;
    case 194u: goto L_08994CC4;
    case 195u: goto L_08994CCC;
    case 196u: goto L_08994D24;
    case 197u: goto L_08994D2C;
    case 198u: goto L_08994D34;
    case 199u: goto L_08994D40;
    case 200u: goto L_08994D48;
    case 201u: goto L_08994D4C;
    case 202u: goto L_08994D7C;
    case 203u: goto L_08994D84;
    case 204u: goto L_08994DB4;
    case 205u: goto L_08994DBC;
    case 206u: goto L_08994DC8;
    case 207u: goto L_08994DD4;
    case 208u: goto L_08994DDC;
    case 209u: goto L_08994E00;
    case 210u: goto L_08994E08;
    case 211u: goto L_08994E2C;
    case 212u: goto L_08994E34;
    case 213u: goto L_08994E40;
    case 214u: goto L_08994E54;
    case 215u: goto L_08994E74;
    case 216u: goto L_08994E8C;
    case 217u: goto L_08994E94;
    case 218u: goto L_08994E9C;
    case 219u: goto L_08994EB0;
    case 220u: goto L_08994EBC;
    case 221u: goto L_08994EC8;
    case 222u: goto L_08994ED0;
    case 223u: goto L_08994ED4;
    case 224u: goto L_08994ED8;
    case 225u: goto L_08994EE4;
    case 226u: goto L_08994EF0;
    case 227u: goto L_08994EF8;
    case 228u: goto L_08994F00;
    case 229u: goto L_08994F08;
    case 230u: goto L_08994F1C;
    case 231u: goto L_08994F28;
    case 232u: goto L_08994F34;
    case 233u: goto L_08994F3C;
    case 234u: goto L_08994F40;
    case 235u: goto L_08994F44;
    case 236u: goto L_08994F50;
    case 237u: goto L_08994F5C;
    case 238u: goto L_08994F64;
    case 239u: goto L_08994F6C;
    case 240u: goto L_08994F74;
    case 241u: goto L_08994F88;
    case 242u: goto L_08994F94;
    case 243u: goto L_08994FA0;
    case 244u: goto L_08994FA8;
    case 245u: goto L_08994FAC;
    case 246u: goto L_08994FB0;
    case 247u: goto L_08994FBC;
    case 248u: goto L_08994FC8;
    case 249u: goto L_08994FD0;
    case 250u: goto L_08994FD8;
    case 251u: goto L_08994FE0;
    case 252u: goto L_08994FF4;
    case 253u: goto L_08995000;
    case 254u: goto L_0899500C;
    case 255u: goto L_08995014;
    case 256u: goto L_08995018;
    case 257u: goto L_0899501C;
    case 258u: goto L_08995028;
    case 259u: goto L_08995034;
    case 260u: goto L_0899503C;
    case 261u: goto L_08995044;
    case 262u: goto L_0899504C;
    case 263u: goto L_08995060;
    case 264u: goto L_0899506C;
    case 265u: goto L_08995078;
    case 266u: goto L_08995080;
    case 267u: goto L_08995084;
    case 268u: goto L_08995088;
    case 269u: goto L_08995094;
    case 270u: goto L_089950A0;
    case 271u: goto L_089950A8;
    case 272u: goto L_089950B0;
    case 273u: goto L_089950B8;
    case 274u: goto L_089950CC;
    case 275u: goto L_089950D8;
    case 276u: goto L_089950E4;
    case 277u: goto L_089950EC;
    case 278u: goto L_089950F0;
    case 279u: goto L_089950F4;
    case 280u: goto L_08995100;
    case 281u: goto L_0899510C;
    case 282u: goto L_08995114;
    case 283u: goto L_0899511C;
    case 284u: goto L_08995124;
    case 285u: goto L_08995138;
    case 286u: goto L_08995144;
    case 287u: goto L_08995150;
    case 288u: goto L_08995158;
    case 289u: goto L_0899515C;
    case 290u: goto L_08995160;
    case 291u: goto L_0899516C;
    case 292u: goto L_08995178;
    case 293u: goto L_08995180;
    case 294u: goto L_08995188;
    case 295u: goto L_08995190;
    case 296u: goto L_089951A4;
    case 297u: goto L_089951B0;
    case 298u: goto L_089951BC;
    case 299u: goto L_089951C4;
    case 300u: goto L_089951C8;
    case 301u: goto L_089951CC;
    case 302u: goto L_089951D8;
    case 303u: goto L_089951E4;
    case 304u: goto L_089951EC;
    case 305u: goto L_089951F4;
    case 306u: goto L_089951FC;
    case 307u: goto L_08995210;
    case 308u: goto L_0899521C;
    case 309u: goto L_08995228;
    case 310u: goto L_08995230;
    case 311u: goto L_08995234;
    case 312u: goto L_08995238;
    case 313u: goto L_08995244;
    case 314u: goto L_08995250;
    case 315u: goto L_08995258;
    case 316u: goto L_08995260;
    case 317u: goto L_08995268;
    case 318u: goto L_0899527C;
    case 319u: goto L_08995288;
    case 320u: goto L_08995294;
    case 321u: goto L_0899529C;
    case 322u: goto L_089952A0;
    case 323u: goto L_089952A4;
    case 324u: goto L_089952B0;
    case 325u: goto L_089952BC;
    case 326u: goto L_089952C4;
    case 327u: goto L_089952CC;
    case 328u: goto L_089952D4;
    case 329u: goto L_089952E8;
    case 330u: goto L_089952F4;
    case 331u: goto L_08995300;
    case 332u: goto L_08995308;
    case 333u: goto L_0899530C;
    case 334u: goto L_08995310;
    case 335u: goto L_0899531C;
    case 336u: goto L_08995328;
    case 337u: goto L_08995330;
    case 338u: goto L_08995338;
    case 339u: goto L_08995340;
    case 340u: goto L_08995354;
    case 341u: goto L_08995360;
    case 342u: goto L_0899536C;
    case 343u: goto L_08995374;
    case 344u: goto L_08995378;
    case 345u: goto L_0899537C;
    case 346u: goto L_08995388;
    case 347u: goto L_08995394;
    case 348u: goto L_0899539C;
    case 349u: goto L_089953A4;
    case 350u: goto L_089953AC;
    case 351u: goto L_089953C0;
    case 352u: goto L_089953CC;
    case 353u: goto L_089953D8;
    case 354u: goto L_089953E0;
    case 355u: goto L_089953E4;
    case 356u: goto L_089953E8;
    case 357u: goto L_089953F4;
    case 358u: goto L_08995400;
    case 359u: goto L_08995408;
    case 360u: goto L_0899540C;
    case 361u: goto L_08995414;
    case 362u: goto L_08995420;
    case 363u: goto L_08995428;
    case 364u: goto L_08995454;
    case 365u: goto L_0899545C;
    case 366u: goto L_08995480;
    case 367u: goto L_08995488;
    case 368u: goto L_08995494;
    case 369u: goto L_089954A0;
    case 370u: goto L_089954A8;
    case 371u: goto L_089954CC;
    case 372u: goto L_089954D4;
    case 373u: goto L_089954F8;
    case 374u: goto L_08995500;
    case 375u: goto L_0899550C;
    case 376u: goto L_08995518;
    case 377u: goto L_08995520;
    case 378u: goto L_08995544;
    case 379u: goto L_0899554C;
    case 380u: goto L_08995570;
    case 381u: goto L_08995578;
    case 382u: goto L_08995584;
    case 383u: goto L_08995590;
    case 384u: goto L_08995598;
    case 385u: goto L_089955BC;
    case 386u: goto L_089955C4;
    case 387u: goto L_089955E8;
    case 388u: goto L_089955F0;
    case 389u: goto L_089955FC;
    case 390u: goto L_08995604;
    case 391u: goto L_0899560C;
    case 392u: goto L_08995630;
    case 393u: goto L_08995638;
    case 394u: goto L_08995644;
    case 395u: goto L_0899564C;
    case 396u: goto L_08995654;
    case 397u: goto L_08995678;
    case 398u: goto L_08995680;
    case 399u: goto L_0899568C;
    case 400u: goto L_08995694;
    case 401u: goto L_0899569C;
    case 402u: goto L_089956C0;
    case 403u: goto L_089956C8;
    case 404u: goto L_089956D4;
    case 405u: goto L_089956DC;
    case 406u: goto L_089956E4;
    case 407u: goto L_0899570C;
    case 408u: goto L_08995714;
    case 409u: goto L_08995720;
    case 410u: goto L_08995728;
    case 411u: goto L_08995730;
    case 412u: goto L_08995754;
    case 413u: goto L_0899575C;
    case 414u: goto L_08995768;
    case 415u: goto L_08995770;
    case 416u: goto L_08995778;
    case 417u: goto L_0899579C;
    case 418u: goto L_089957A4;
    case 419u: goto L_089957B0;
    case 420u: goto L_089957B8;
    case 421u: goto L_089957C0;
    case 422u: goto L_089957E4;
    case 423u: goto L_089957EC;
    case 424u: goto L_089957F8;
    case 425u: goto L_08995800;
    case 426u: goto L_08995808;
    case 427u: goto L_0899582C;
    case 428u: goto L_08995834;
    case 429u: goto L_08995840;
    case 430u: goto L_08995848;
    case 431u: goto L_08995850;
    case 432u: goto L_0899587C;
    case 433u: goto L_08995884;
    case 434u: goto L_08995890;
    case 435u: goto L_08995898;
    case 436u: goto L_089958A0;
    case 437u: goto L_089958C8;
    case 438u: goto L_089958D0;
    case 439u: goto L_089958E8;
    case 440u: goto L_089958F0;
    case 441u: goto L_089958F8;
    case 442u: goto L_08995900;
    case 443u: goto L_0899590C;
    case 444u: goto L_0899592C;
    case 445u: goto L_08995934;
    case 446u: goto L_0899594C;
    case 447u: goto L_08995954;
    case 448u: goto L_0899595C;
    case 449u: goto L_08995964;
    case 450u: goto L_08995970;
    case 451u: goto L_08995990;
    case 452u: goto L_08995998;
    case 453u: goto L_089959B0;
    case 454u: goto L_089959B8;
    case 455u: goto L_089959C0;
    case 456u: goto L_089959C8;
    case 457u: goto L_089959D4;
    case 458u: goto L_089959F4;
    case 459u: goto L_089959FC;
    case 460u: goto L_08995A08;
    case 461u: goto L_08995A10;
    case 462u: goto L_08995A18;
    case 463u: goto L_08995A3C;
    case 464u: goto L_08995A44;
    case 465u: goto L_08995A50;
    case 466u: goto L_08995A58;
    case 467u: goto L_08995A60;
    case 468u: goto L_08995A88;
    case 469u: goto L_08995A90;
    case 470u: goto L_08995A9C;
    case 471u: goto L_08995AA4;
    case 472u: goto L_08995AAC;
    case 473u: goto L_08995AD0;
    case 474u: goto L_08995AD8;
    case 475u: goto L_08995AE4;
    case 476u: goto L_08995AEC;
    case 477u: goto L_08995AF4;
    case 478u: goto L_08995B18;
    case 479u: goto L_08995B20;
    case 480u: goto L_08995B2C;
    case 481u: goto L_08995B34;
    case 482u: goto L_08995B3C;
    case 483u: goto L_08995B60;
    case 484u: goto L_08995B68;
    case 485u: goto L_08995B74;
    case 486u: goto L_08995B7C;
    case 487u: goto L_08995B84;
    case 488u: goto L_08995BA8;
    case 489u: goto L_08995BB0;
    case 490u: goto L_08995BBC;
    case 491u: goto L_08995BC4;
    case 492u: goto L_08995BCC;
    case 493u: goto L_08995BF0;
    case 494u: goto L_08995BF8;
    case 495u: goto L_08995C04;
    case 496u: goto L_08995C0C;
    case 497u: goto L_08995C14;
    case 498u: goto L_08995C38;
    case 499u: goto L_08995C40;
    case 500u: goto L_08995C58;
    case 501u: goto L_08995C60;
    case 502u: goto L_08995C68;
    case 503u: goto L_08995C70;
    case 504u: goto L_08995C7C;
    case 505u: goto L_08995C9C;
    case 506u: goto L_08995CA4;
    case 507u: goto L_08995CBC;
    case 508u: goto L_08995CC4;
    case 509u: goto L_08995CCC;
    case 510u: goto L_08995CD4;
    case 511u: goto L_08995CE0;
    case 512u: goto L_08995D00;
    case 513u: goto L_08995D08;
    case 514u: goto L_08995D20;
    case 515u: goto L_08995D28;
    case 516u: goto L_08995D30;
    case 517u: goto L_08995D38;
    case 518u: goto L_08995D44;
    case 519u: goto L_08995D64;
    case 520u: goto L_08995D6C;
    case 521u: goto L_08995D84;
    case 522u: goto L_08995D8C;
    case 523u: goto L_08995D94;
    case 524u: goto L_08995D9C;
    case 525u: goto L_08995DA8;
    case 526u: goto L_08995DC8;
    case 527u: goto L_08995DD0;
    case 528u: goto L_08995DE8;
    case 529u: goto L_08995DF0;
    case 530u: goto L_08995DF8;
    case 531u: goto L_08995E00;
    case 532u: goto L_08995E0C;
    case 533u: goto L_08995E2C;
    case 534u: goto L_08995E34;
    case 535u: goto L_08995E40;
    case 536u: goto L_08995E48;
    case 537u: goto L_08995E54;
    case 538u: goto L_08995E5C;
    case 539u: goto L_08995E80;
    case 540u: goto L_08995E88;
    case 541u: goto L_08995EAC;
    case 542u: goto L_08995EB4;
    case 543u: goto L_08995EC0;
    case 544u: goto L_08995EC8;
    case 545u: goto L_08995ED4;
    case 546u: goto L_08995EDC;
    case 547u: goto L_08995F00;
    case 548u: goto L_08995F08;
    case 549u: goto L_08995F10;
    case 550u: goto L_08995F1C;
    case 551u: goto L_08995F3C;
    case 552u: goto L_08995F44;
    case 553u: goto L_08995F50;
    case 554u: goto L_08995F58;
    case 555u: goto L_08995F7C;
    case 556u: goto L_08995F84;
    case 557u: goto L_08995F94;
    case 558u: goto L_08995FB8;
    case 559u: goto L_08995FC8;
    case 560u: goto L_08995FD0;
    case 561u: goto L_08995FDC;
    case 562u: goto L_08995FE4;
    case 563u: goto L_08995FFC;
    case 564u: goto L_08996004;
    case 565u: goto L_08996038;
    case 566u: goto L_08996040;
    case 567u: goto L_0899604C;
    case 568u: goto L_08996058;
    case 569u: goto L_08996060;
    case 570u: goto L_08996078;
    case 571u: goto L_08996084;
    case 572u: goto L_089960A4;
    case 573u: goto L_089960AC;
    case 574u: goto L_089960C4;
    case 575u: goto L_089960D0;
    case 576u: goto L_089960F0;
    case 577u: goto L_089960F8;
    case 578u: goto L_089960FC;
    case 579u: goto L_0899610C;
    case 580u: goto L_0899611C;
    case 581u: goto L_08996138;
    case 582u: goto L_08996140;
    case 583u: goto L_08996148;
    case 584u: goto L_08996154;
    case 585u: goto L_0899616C;
    case 586u: goto L_08996174;
    case 587u: goto L_08996184;
    case 588u: goto L_0899618C;
    case 589u: goto L_08996198;
    case 590u: goto L_089961A0;
    case 591u: goto L_089961BC;
    case 592u: goto L_089961C4;
    case 593u: goto L_089961DC;
    case 594u: goto L_089961E8;
    case 595u: goto L_08996208;
    case 596u: goto L_08996210;
    case 597u: goto L_0899621C;
    case 598u: goto L_08996224;
    case 599u: goto L_0899623C;
    case 600u: goto L_08996248;
    case 601u: goto L_08996268;
    case 602u: goto L_08996270;
    case 603u: goto L_08996280;
    case 604u: goto L_08996294;
    case 605u: goto L_089962B0;
    case 606u: goto L_089962B8;
    case 607u: goto L_089962C0;
    case 608u: goto L_089962D0;
    case 609u: goto L_089962E8;
    case 610u: goto L_089962F0;
    case 611u: goto L_08996300;
    case 612u: goto L_08996308;
    case 613u: goto L_08996314;
    case 614u: goto L_0899631C;
    case 615u: goto L_08996338;
    case 616u: goto L_08996340;
    case 617u: goto L_08996358;
    case 618u: goto L_08996364;
    case 619u: goto L_08996384;
    case 620u: goto L_0899638C;
    case 621u: goto L_08996398;
    case 622u: goto L_089963A0;
    case 623u: goto L_089963B8;
    case 624u: goto L_089963C4;
    case 625u: goto L_089963E4;
    case 626u: goto L_089963EC;
    case 627u: goto L_089963FC;
    case 628u: goto L_08996414;
    case 629u: goto L_0899641C;
    case 630u: goto L_08996424;
    case 631u: goto L_0899642C;
    case 632u: goto L_08996450;
    case 633u: goto L_08996458;
    case 634u: goto L_0899646C;
    case 635u: goto L_08996488;
    case 636u: goto L_08996490;
    case 637u: goto L_08996498;
    case 638u: goto L_089964A8;
    case 639u: goto L_089964C0;
    case 640u: goto L_089964C8;
    case 641u: goto L_089964D8;
    case 642u: goto L_089964E0;
    case 643u: goto L_089964EC;
    case 644u: goto L_089964F4;
    case 645u: goto L_08996510;
    case 646u: goto L_08996518;
    case 647u: goto L_08996530;
    case 648u: goto L_0899653C;
    case 649u: goto L_0899655C;
    case 650u: goto L_08996564;
    case 651u: goto L_08996570;
    case 652u: goto L_08996578;
    case 653u: goto L_08996590;
    case 654u: goto L_0899659C;
    case 655u: goto L_089965BC;
    case 656u: goto L_089965C4;
    case 657u: goto L_089965D4;
    case 658u: goto L_089965EC;
    case 659u: goto L_089965F4;
    case 660u: goto L_089965FC;
    case 661u: goto L_08996604;
    case 662u: goto L_08996628;
    case 663u: goto L_08996630;
    case 664u: goto L_08996644;
    case 665u: goto L_08996658;
    case 666u: goto L_08996660;
    case 667u: goto L_08996668;
    case 668u: goto L_08996678;
    case 669u: goto L_08996690;
    case 670u: goto L_08996698;
    case 671u: goto L_089966A8;
    case 672u: goto L_089966B0;
    case 673u: goto L_089966BC;
    case 674u: goto L_089966C4;
    case 675u: goto L_089966E0;
    case 676u: goto L_089966E8;
    case 677u: goto L_089966F8;
    case 678u: goto L_08996704;
    case 679u: goto L_08996724;
    case 680u: goto L_0899672C;
    case 681u: goto L_08996738;
    case 682u: goto L_08996740;
    case 683u: goto L_08996750;
    case 684u: goto L_0899675C;
    case 685u: goto L_0899677C;
    case 686u: goto L_08996784;
    case 687u: goto L_08996794;
    case 688u: goto L_089967AC;
    case 689u: goto L_089967B4;
    case 690u: goto L_089967BC;
    case 691u: goto L_089967C4;
    case 692u: goto L_089967E8;
    case 693u: goto L_089967F0;
    case 694u: goto L_089967FC;
    case 695u: goto L_08996804;
    case 696u: goto L_0899680C;
    case 697u: goto L_08996830;
    case 698u: goto L_08996838;
    case 699u: goto L_08996844;
    case 700u: goto L_0899684C;
    case 701u: goto L_08996854;
    case 702u: goto L_08996878;
    case 703u: goto L_08996880;
    case 704u: goto L_08996888;
    case 705u: goto L_08996894;
    case 706u: goto L_0899689C;
    case 707u: goto L_089968C0;
    case 708u: goto L_089968C8;
    case 709u: goto L_089968D0;
    case 710u: goto L_089968D8;
    case 711u: goto L_089968FC;
    case 712u: goto L_08996904;
    case 713u: goto L_0899690C;
    case 714u: goto L_08996914;
    case 715u: goto L_0899691C;
    case 716u: goto L_08996924;
    case 717u: goto L_08996934;
    case 718u: goto L_0899694C;
    case 719u: goto L_0899695C;
    case 720u: goto L_08996964;
    case 721u: goto L_08996974;
    case 722u: goto L_0899697C;
    case 723u: goto L_0899698C;
    case 724u: goto L_08996994;
    case 725u: goto L_089969A4;
    case 726u: goto L_089969AC;
    case 727u: goto L_089969BC;
    case 728u: goto L_089969C4;
    case 729u: goto L_089969D4;
    case 730u: goto L_089969DC;
    case 731u: goto L_089969EC;
    case 732u: goto L_089969F4;
    case 733u: goto L_08996A04;
    case 734u: goto L_08996A0C;
    case 735u: goto L_08996A1C;
    case 736u: goto L_08996A24;
    case 737u: goto L_08996A30;
    case 738u: goto L_08996A38;
    case 739u: goto L_08996A48;
    case 740u: goto L_08996A60;
    case 741u: goto L_08996A70;
    case 742u: goto L_08996A78;
    case 743u: goto L_08996A88;
    case 744u: goto L_08996A90;
    case 745u: goto L_08996AA0;
    case 746u: goto L_08996AA8;
    case 747u: goto L_08996AB8;
    case 748u: goto L_08996AC0;
    case 749u: goto L_08996AD0;
    case 750u: goto L_08996AD8;
    case 751u: goto L_08996AE8;
    case 752u: goto L_08996AF0;
    case 753u: goto L_08996B00;
    case 754u: goto L_08996B08;
    case 755u: goto L_08996B18;
    case 756u: goto L_08996B20;
    case 757u: goto L_08996B30;
    case 758u: goto L_08996B38;
    case 759u: goto L_08996B3C;
    case 760u: goto L_08996B44;
    case 761u: goto L_08996B50;
    case 762u: goto L_08996B58;
    case 763u: goto L_08996B7C;
    case 764u: goto L_08996B84;
    case 765u: goto L_08996BA8;
    case 766u: goto L_08996BB0;
    case 767u: goto L_08996BBC;
    case 768u: goto L_08996BC8;
    case 769u: goto L_08996BD0;
    case 770u: goto L_08996BF4;
    case 771u: goto L_08996BFC;
    case 772u: goto L_08996C24;
    case 773u: goto L_08996C2C;
    case 774u: goto L_08996C38;
    case 775u: goto L_08996C44;
    case 776u: goto L_08996C4C;
    case 777u: goto L_08996C58;
    case 778u: goto L_08996C68;
    case 779u: goto L_08996C70;
    case 780u: goto L_08996C94;
    case 781u: goto L_08996C9C;
    case 782u: goto L_08996CAC;
    case 783u: goto L_08996CC4;
    case 784u: goto L_08996CCC;
    case 785u: goto L_08996CD4;
    case 786u: goto L_08996CE0;
    case 787u: goto L_08996CF8;
    case 788u: goto L_08996D00;
    case 789u: goto L_08996D10;
    case 790u: goto L_08996D18;
    case 791u: goto L_08996D20;
    case 792u: goto L_08996D3C;
    case 793u: goto L_08996D44;
    case 794u: goto L_08996D54;
    case 795u: goto L_08996D58;
    case 796u: goto L_08996D78;
    case 797u: goto L_08996DB8;
    case 798u: goto L_08996DDC;
    case 799u: goto L_08996DE4;
    case 800u: goto L_08996DEC;
    case 801u: goto L_08996DFC;
    case 802u: goto L_08996E10;
    case 803u: goto L_08996E18;
    case 804u: goto L_08996E2C;
    case 805u: goto L_08996E34;
    case 806u: goto L_08996E3C;
    case 807u: goto L_08996E4C;
    case 808u: goto L_08996E68;
    case 809u: goto L_08996E70;
    case 810u: goto L_08996E78;
    case 811u: goto L_08996E80;
    case 812u: goto L_08996E88;
    case 813u: goto L_08996E9C;
    case 814u: goto L_08996EA8;
    case 815u: goto L_08996EB4;
    case 816u: goto L_08996EBC;
    case 817u: goto L_08996EC0;
    case 818u: goto L_08996EC4;
    case 819u: goto L_08996ED0;
    case 820u: goto L_08996ED8;
    case 821u: goto L_08996EF0;
    case 822u: goto L_08996EF8;
    case 823u: goto L_08996F08;
    case 824u: goto L_08996F18;
    case 825u: goto L_08996F24;
    case 826u: goto L_08996F30;
    case 827u: goto L_08996F38;
    case 828u: goto L_08996F3C;
    case 829u: goto L_08996F40;
    case 830u: goto L_08996F4C;
    case 831u: goto L_08996F54;
    case 832u: goto L_08996F60;
    case 833u: goto L_08996F80;
    case 834u: goto L_08996F88;
    case 835u: goto L_08996F9C;
    case 836u: goto L_08996FA8;
    case 837u: goto L_08996FB4;
    case 838u: goto L_08996FBC;
    case 839u: goto L_08996FC0;
    case 840u: goto L_08996FC4;
    case 841u: goto L_08996FD0;
    case 842u: goto L_08996FD8;
    case 843u: goto L_08996FF0;
    case 844u: goto L_08996FF8;
    case 845u: goto L_0899700C;
    case 846u: goto L_0899701C;
    case 847u: goto L_08997028;
    case 848u: goto L_08997034;
    case 849u: goto L_0899703C;
    case 850u: goto L_08997040;
    case 851u: goto L_08997044;
    case 852u: goto L_08997050;
    case 853u: goto L_08997058;
    case 854u: goto L_08997064;
    case 855u: goto L_08997084;
    case 856u: goto L_0899708C;
    case 857u: goto L_089970A0;
    case 858u: goto L_089970AC;
    case 859u: goto L_089970B8;
    case 860u: goto L_089970C0;
    case 861u: goto L_089970C4;
    case 862u: goto L_089970C8;
    case 863u: goto L_089970D4;
    case 864u: goto L_089970DC;
    case 865u: goto L_089970F4;
    case 866u: goto L_089970FC;
    case 867u: goto L_08997110;
    case 868u: goto L_08997120;
    case 869u: goto L_0899713C;
    case 870u: goto L_08997148;
    case 871u: goto L_08997154;
    case 872u: goto L_08997160;
    case 873u: goto L_0899716C;
    case 874u: goto L_08997178;
    case 875u: goto L_08997180;
    case 876u: goto L_08997184;
    case 877u: goto L_08997188;
    case 878u: goto L_08997194;
    case 879u: goto L_0899719C;
    case 880u: goto L_089971BC;
    case 881u: goto L_089971C4;
    case 882u: goto L_089971D0;
    case 883u: goto L_089971DC;
    case 884u: goto L_089971E8;
    case 885u: goto L_089971F0;
    case 886u: goto L_089971F4;
    case 887u: goto L_089971F8;
    case 888u: goto L_08997204;
    case 889u: goto L_0899720C;
    case 890u: goto L_0899722C;
    case 891u: goto L_08997240;
    case 892u: goto L_0899724C;
    case 893u: goto L_0899725C;
    case 894u: goto L_0899726C;
    case 895u: goto L_08997274;
    case 896u: goto L_0899727C;
    case 897u: goto L_08997284;
    case 898u: goto L_0899728C;
    case 899u: goto L_089972A4;
    case 900u: goto L_089972AC;
    case 901u: goto L_089972C0;
    case 902u: goto L_089972D4;
    case 903u: goto L_089972DC;
    case 904u: goto L_089972F4;
    case 905u: goto L_089972FC;
    case 906u: goto L_08997310;
    case 907u: goto L_08997324;
    case 908u: goto L_0899732C;
    case 909u: goto L_08997344;
    case 910u: goto L_0899734C;
    case 911u: goto L_0899735C;
    case 912u: goto L_08997368;
    case 913u: goto L_08997374;
    case 914u: goto L_08997380;
    case 915u: goto L_08997394;
    case 916u: goto L_0899739C;
    case 917u: goto L_089973B0;
    case 918u: goto L_089973B4;
    case 919u: goto L_089973BC;
    case 920u: goto L_089973C8;
    case 921u: goto L_089973D0;
    case 922u: goto L_089973E4;
    case 923u: goto L_089973F8;
    case 924u: goto L_08997404;
    case 925u: goto L_08997414;
    case 926u: goto L_08997420;
    case 927u: goto L_0899742C;
    case 928u: goto L_08997438;
    case 929u: goto L_08997444;
    case 930u: goto L_0899744C;
    case 931u: goto L_08997450;
    case 932u: goto L_08997458;
    case 933u: goto L_08997460;
    case 934u: goto L_0899746C;
    case 935u: goto L_08997474;
    case 936u: goto L_08997480;
    case 937u: goto L_08997488;
    case 938u: goto L_08997494;
    case 939u: goto L_089974A0;
    case 940u: goto L_089974AC;
    case 941u: goto L_089974B4;
    case 942u: goto L_089974B8;
    case 943u: goto L_089974C0;
    case 944u: goto L_089974C8;
    case 945u: goto L_089974D4;
    case 946u: goto L_089974DC;
    case 947u: goto L_089974E8;
    case 948u: goto L_0899751C;
    case 949u: goto L_089975FC;
    case 950u: goto L_08997604;
    case 951u: goto L_08997618;
    case 952u: goto L_0899762C;
    case 953u: goto L_08997648;
    case 954u: goto L_0899765C;
    case 955u: goto L_08997698;
    case 956u: goto L_089976B0;
    case 957u: goto L_089976B8;
    case 958u: goto L_089976BC;
    case 959u: goto L_089976E4;
    case 960u: goto L_089976F4;
    case 961u: goto L_0899773C;
    case 962u: goto L_08997838;
    case 963u: goto L_08997840;
    case 964u: goto L_08997854;
    case 965u: goto L_08997868;
    case 966u: goto L_08997884;
    case 967u: goto L_08997898;
    case 968u: goto L_089978D4;
    case 969u: goto L_089978EC;
    case 970u: goto L_089978F4;
    case 971u: goto L_089978F8;
    case 972u: goto L_08997920;
    case 973u: goto L_08997930;
    case 974u: goto L_08997940;
    case 975u: goto L_08997988;
    case 976u: goto L_08997A84;
    case 977u: goto L_08997A8C;
    case 978u: goto L_08997AA0;
    case 979u: goto L_08997AB4;
    case 980u: goto L_08997AD0;
    case 981u: goto L_08997AE4;
    case 982u: goto L_08997B20;
    case 983u: goto L_08997B38;
    case 984u: goto L_08997B40;
    case 985u: goto L_08997B44;
    case 986u: goto L_08997B6C;
    case 987u: goto L_08997B7C;
    case 988u: goto L_08997B8C;
    case 989u: goto L_08997BD4;
    case 990u: goto L_08997C00;
    case 991u: goto L_08997C10;
    case 992u: goto L_08997C24;
    case 993u: goto L_08997D04;
    case 994u: goto L_08997D0C;
    case 995u: goto L_08997D20;
    case 996u: goto L_08997D34;
    case 997u: goto L_08997D58;
    case 998u: goto L_08997D6C;
    case 999u: goto L_08997DB4;
    case 1000u: goto L_08997DCC;
    case 1001u: goto L_08997DD4;
    case 1002u: goto L_08997DD8;
    case 1003u: goto L_08997E00;
    case 1004u: goto L_08997E14;
    case 1005u: goto L_08997E24;
    case 1006u: goto L_08997E7C;
    case 1007u: goto L_08997E8C;
    case 1008u: goto L_08997E9C;
    case 1009u: goto L_08997EE4;
    case 1010u: goto L_08997FC8;
    case 1011u: goto L_08997FD0;
    case 1012u: goto L_08997FE4;
    case 1013u: goto L_08997FF8;
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
L_08994000:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[10] = (ctx.lo);
    aot_gpr_31 = (0x08994020u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[10]);
    goto L_08996D78;
L_08994020:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994028;
    }
L_08994028:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08994138;
      }
      goto L_08994038;
    }
L_08994038:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(84));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-15068));
    aot_gpr_31 = (0x08994048u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994048u) goto L_08994048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994048:
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_28);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8160)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0899406C;
      }
      goto L_08994058;
    }
L_08994058:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(92));
    aot_gpr_31 = (0x08994064u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-15056));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994064u) goto L_08994064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994064:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994084;
      }
      goto L_0899406C;
    }
L_0899406C:
    ctx.gpr[6] = (ctx.gpr[18] + aot_gpr_28);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[6] + static_cast<std::uint32_t>(8160)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(92));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-15048));
    aot_gpr_31 = (0x08994084u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994084u) goto L_08994084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994084:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089940C4;
      }
      goto L_0899408C;
    }
L_0899408C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089940AC;
      }
      goto L_08994098;
    }
L_08994098:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089940E8;
      }
      goto L_089940A4;
    }
L_089940A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994124;
      }
      goto L_089940AC;
    }
L_089940AC:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-15036));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(92));
    aot_gpr_31 = (0x089940BCu);
    ctx.gpr[6] = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089940BCu) goto L_089940BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089940BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089940C4;
    }
L_089940C4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(84));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089940E0u);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_089940E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089940E8;
    }
L_089940E8:
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-23472));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-15028));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x0899411Cu);
    ctx.gpr[9] = (0u | 8u);
    goto L_08996D78;
L_0899411C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994124;
    }
L_08994124:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08994038;
      }
      goto L_08994138;
    }
L_08994138:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08994154;
      }
      goto L_08994140;
    }
L_08994140:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_28 + static_cast<std::uint32_t>(8156)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08994188;
      }
      goto L_0899414C;
    }
L_0899414C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089941CC;
      }
      goto L_08994154;
    }
L_08994154:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9376)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9380)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-15020));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(104));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(108));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994180u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994180:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994188;
    }
L_08994188:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08994198;
      }
      goto L_08994190;
    }
L_08994190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089941CC;
      }
      goto L_08994198;
    }
L_08994198:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_28 + static_cast<std::uint32_t>(8156)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_28 + static_cast<std::uint32_t>(8158)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-15012));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(116));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089941C4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089941C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089941CC;
    }
L_089941CC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0899428C;
      }
      goto L_089941D8;
    }
L_089941D8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089941F4;
      }
      goto L_089941E0;
    }
L_089941E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08994220;
      }
      goto L_089941EC;
    }
L_089941EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899424C;
      }
      goto L_089941F4;
    }
L_089941F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9300)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-15004));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(120));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994218u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994218:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994220;
    }
L_08994220:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9384)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14996));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(124));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994244u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994244:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899424C;
    }
L_0899424C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08994260;
      }
      goto L_08994258;
    }
L_08994258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899428C;
      }
      goto L_08994260;
    }
L_08994260:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9304)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14988));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994284u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994284:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899428C;
    }
L_0899428C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089942A8;
      }
      goto L_08994294;
    }
L_08994294:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089942D4;
      }
      goto L_089942A0;
    }
L_089942A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994300;
      }
      goto L_089942A8;
    }
L_089942A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9308)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14980));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(132));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089942CCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089942CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089942D4;
    }
L_089942D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9312)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14972));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(136));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089942F8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089942F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994300;
    }
L_08994300:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08994320;
      }
      goto L_0899430C;
    }
L_0899430C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_0899434C;
      }
      goto L_08994318;
    }
L_08994318:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994378;
      }
      goto L_08994320;
    }
L_08994320:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9320)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14964));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(140));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994344u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994344:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899434C;
    }
L_0899434C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7880)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14956));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994370u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994370:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994378;
    }
L_08994378:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08994398;
      }
      goto L_08994384;
    }
L_08994384:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089943C4;
      }
      goto L_08994390;
    }
L_08994390:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089943F0;
      }
      goto L_08994398;
    }
L_08994398:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9332)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14948));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(148));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089943BCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089943BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089943C4;
    }
L_089943C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9336)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14940));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089943E8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089943E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089943F0;
    }
L_089943F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08994410;
      }
      goto L_089943FC;
    }
L_089943FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_0899443C;
      }
      goto L_08994408;
    }
L_08994408:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994468;
      }
      goto L_08994410;
    }
L_08994410:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9036)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14932));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(156));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994434u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994434:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899443C;
    }
L_0899443C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9032)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14924));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994460u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994460:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994468;
    }
L_08994468:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_0899448C;
      }
      goto L_08994474;
    }
L_08994474:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-15220)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8912)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089944B8;
      }
      goto L_08994484;
    }
L_08994484:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994500;
      }
      goto L_0899448C;
    }
L_0899448C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8676)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14916));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(164));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089944B0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089944B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089944B8;
    }
L_089944B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8912)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(80));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-15220), aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_089944E4;
      }
      goto L_089944D8;
    }
L_089944D8:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_089944E4;
L_089944E4:
    aot_gpr_4 = (17279u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 28836u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-15216), aot_gpr_4);
    goto L_08994500;
L_08994500:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-15216)));
        goto L_08994510;
    }
    goto L_08994508;
L_08994508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08994540;
      }
      goto L_08994510;
    }
L_08994510:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(168));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[6] = (0u | 3u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14908));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08994538u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08996D78;
L_08994538:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994540;
    }
L_08994540:
    ctx.gpr[6] = (0u | 7u);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089945B8;
      }
      goto L_08994554;
    }
L_08994554:
    ctx.gpr[7] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 9u);
      if (branch_taken) {
          goto L_08994570;
      }
      goto L_08994560;
    }
L_08994560:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 12u);
      if (branch_taken) {
          goto L_08994570;
      }
      goto L_08994568;
    }
L_08994568:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
      if (branch_taken) {
          goto L_089945A8;
      }
      goto L_08994570;
    }
L_08994570:
    ctx.gpr[8] = (2279u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(17488));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_089945A8;
      }
      goto L_08994590;
    }
L_08994590:
    aot_gpr_4 = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_4 << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17488));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_089945A8;
L_089945A8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08994554;
      }
      goto L_089945B8;
    }
L_089945B8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_089946CC;
      }
      goto L_089945C0;
    }
L_089945C0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
      if (branch_taken) {
          goto L_089946C8;
      }
      goto L_089945C8;
    }
L_089945C8:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_089945D8;
    }
L_089945D8:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4944)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089945F0:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14900));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14892));
    aot_gpr_31 = (0x08994600u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994600u) goto L_08994600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994600:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994608;
    }
L_08994608:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14900));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14884));
    aot_gpr_31 = (0x08994618u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994618u) goto L_08994618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994618:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994620;
    }
L_08994620:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14900));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14876));
    aot_gpr_31 = (0x08994630u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994630u) goto L_08994630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994630:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994638;
    }
L_08994638:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14900));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14868));
    aot_gpr_31 = (0x08994648u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994648u) goto L_08994648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994648:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994650;
    }
L_08994650:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14900));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14860));
    aot_gpr_31 = (0x08994660u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994660u) goto L_08994660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994660:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994668;
    }
L_08994668:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14900));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14852));
    aot_gpr_31 = (0x08994678u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994678u) goto L_08994678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994678:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994680;
    }
L_08994680:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14900));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14844));
    aot_gpr_31 = (0x08994690u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994690u) goto L_08994690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994690:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_08994698;
    }
L_08994698:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14900));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14836));
    aot_gpr_31 = (0x089946A8u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089946A8u) goto L_089946A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089946A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089946C0;
      }
      goto L_089946B0;
    }
L_089946B0:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14900));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14828));
    aot_gpr_31 = (0x089946C0u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089946C0u) goto L_089946C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089946C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089946C8;
    }
L_089946C8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089946CC;
L_089946CC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (2279u << 16u);
      if (branch_taken) {
          goto L_089946E8;
      }
      goto L_089946D4;
    }
L_089946D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08994728;
      }
      goto L_089946E0;
    }
L_089946E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899475C;
      }
      goto L_089946E8;
    }
L_089946E8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17488));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14820));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(172));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994720u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994720:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994728;
    }
L_08994728:
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17488));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14812));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994754u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994754:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899475C;
    }
L_0899475C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_0899477C;
      }
      goto L_08994768;
    }
L_08994768:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089947A8;
      }
      goto L_08994774;
    }
L_08994774:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089947D4;
      }
      goto L_0899477C;
    }
L_0899477C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9324)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14804));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(180));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089947A0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089947A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089947A8;
    }
L_089947A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9316)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14796));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(184));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089947CCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089947CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089947D4;
    }
L_089947D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089947F4;
      }
      goto L_089947E0;
    }
L_089947E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08994820;
      }
      goto L_089947EC;
    }
L_089947EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994884;
      }
      goto L_089947F4;
    }
L_089947F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9328)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14788));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(188));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994818u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994818:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994820;
    }
L_08994820:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9316)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0899485C;
      }
      goto L_0899482C;
    }
L_0899482C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9328)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9316)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[14];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0899485C;
L_0899485C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14780));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x0899487Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_0899487C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994884;
    }
L_08994884:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7872)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089948A0;
      }
      goto L_08994890;
    }
L_08994890:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7872), aot_gpr_4);
    aot_gpr_31 = (0x089948A0u);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089948A0u) goto L_089948A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089948A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7868)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08994D2C;
      }
      goto L_089948B0;
    }
L_089948B0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08994B00;
      }
      goto L_089948BC;
    }
L_089948BC:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08994B00;
      }
      goto L_089948C4;
    }
L_089948C4:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08994B00;
      }
      goto L_089948CC;
    }
L_089948CC:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08994B00;
      }
      goto L_089948D4;
    }
L_089948D4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (17616u << 16u);
      if (branch_taken) {
          goto L_089948F4;
      }
      goto L_089948DC;
    }
L_089948DC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (17616u << 16u);
      if (branch_taken) {
          goto L_0899492C;
      }
      goto L_089948E8;
    }
L_089948E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994964;
      }
      goto L_089948F0;
    }
L_089948F0:
    aot_gpr_4 = (17616u << 16u);
    goto L_089948F4;
L_089948F4:
    aot_gpr_4 = (aot_gpr_4 | 49152u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9084)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14772));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(196));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08994924u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08996D78;
L_08994924:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899492C;
    }
L_0899492C:
    aot_gpr_4 = (aot_gpr_4 | 49152u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9080)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14764));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(200));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x0899495Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08996D78;
L_0899495C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994964;
    }
L_08994964:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (17616u << 16u);
      if (branch_taken) {
          goto L_08994988;
      }
      goto L_08994970;
    }
L_08994970:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (17616u << 16u);
      if (branch_taken) {
          goto L_089949C0;
      }
      goto L_0899497C;
    }
L_0899497C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089949F8;
      }
      goto L_08994984;
    }
L_08994984:
    aot_gpr_4 = (17616u << 16u);
    goto L_08994988;
L_08994988:
    aot_gpr_4 = (aot_gpr_4 | 49152u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9068)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14756));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(204));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x089949B8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08996D78;
L_089949B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089949C0;
    }
L_089949C0:
    aot_gpr_4 = (aot_gpr_4 | 49152u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9072)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14748));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x089949F0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08996D78;
L_089949F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089949F8;
    }
L_089949F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (17616u << 16u);
      if (branch_taken) {
          goto L_08994A1C;
      }
      goto L_08994A04;
    }
L_08994A04:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (17616u << 16u);
      if (branch_taken) {
          goto L_08994A54;
      }
      goto L_08994A10;
    }
L_08994A10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994A8C;
      }
      goto L_08994A18;
    }
L_08994A18:
    aot_gpr_4 = (17616u << 16u);
    goto L_08994A1C;
L_08994A1C:
    aot_gpr_4 = (aot_gpr_4 | 49152u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9076)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14740));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(212));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08994A4Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08996D78;
L_08994A4C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994A54;
    }
L_08994A54:
    aot_gpr_4 = (aot_gpr_4 | 49152u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9064)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14732));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08994A84u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08996D78;
L_08994A84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994A8C;
    }
L_08994A8C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9084)));
        goto L_08994AA0;
    }
    goto L_08994A98;
L_08994A98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08994D2C;
      }
      goto L_08994AA0;
    }
L_08994AA0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9080)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9068)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9076)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9064)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9072)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[14];
    aot_gpr_4 = (17616u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49152u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[17];
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14724));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(220));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08994AF8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08996D78;
L_08994AF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994B00;
    }
L_08994B00:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9084)));
        goto L_08994B20;
    }
    goto L_08994B08;
L_08994B08:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9080)));
        goto L_08994B58;
    }
    goto L_08994B14;
L_08994B14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994B90;
      }
      goto L_08994B1C;
    }
L_08994B1C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9084)));
    goto L_08994B20;
L_08994B20:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14716));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08994B50u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08996D78;
L_08994B50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994B58;
    }
L_08994B58:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14708));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(228));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08994B88u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08996D78;
L_08994B88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994B90;
    }
L_08994B90:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9068)));
        goto L_08994BB4;
    }
    goto L_08994B9C;
L_08994B9C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9072)));
        goto L_08994BEC;
    }
    goto L_08994BA8;
L_08994BA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994C24;
      }
      goto L_08994BB0;
    }
L_08994BB0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9068)));
    goto L_08994BB4;
L_08994BB4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14700));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(232));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08994BE4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08996D78;
L_08994BE4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994BEC;
    }
L_08994BEC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14692));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(236));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08994C1Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08996D78;
L_08994C1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994C24;
    }
L_08994C24:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9076)));
        goto L_08994C48;
    }
    goto L_08994C30;
L_08994C30:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9064)));
        goto L_08994C80;
    }
    goto L_08994C3C;
L_08994C3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994CB8;
      }
      goto L_08994C44;
    }
L_08994C44:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9076)));
    goto L_08994C48;
L_08994C48:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14684));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08994C78u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08996D78;
L_08994C78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994C80;
    }
L_08994C80:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14676));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(244));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08994CB0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08996D78;
L_08994CB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994CB8;
    }
L_08994CB8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9084)));
        goto L_08994CCC;
    }
    goto L_08994CC4;
L_08994CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08994D2C;
      }
      goto L_08994CCC;
    }
L_08994CCC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9080)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9068)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9076)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9064)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9072)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[14];
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14668));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (0u | 1u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[17];
    ctx.gpr[9] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[10]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_31 = (0x08994D24u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08996D78;
L_08994D24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994D2C;
    }
L_08994D2C:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8088)));
        goto L_08994D4C;
    }
    goto L_08994D34;
L_08994D34:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8092)));
        goto L_08994D84;
    }
    goto L_08994D40;
L_08994D40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994DBC;
      }
      goto L_08994D48;
    }
L_08994D48:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8088)));
    goto L_08994D4C;
L_08994D4C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14660));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(252));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08994D7Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08996D78;
L_08994D7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994D84;
    }
L_08994D84:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14652));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08994DB4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08996D78;
L_08994DB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994DBC;
    }
L_08994DBC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08994DDC;
      }
      goto L_08994DC8;
    }
L_08994DC8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08994E08;
      }
      goto L_08994DD4;
    }
L_08994DD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08994E34;
      }
      goto L_08994DDC;
    }
L_08994DDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8096)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14644));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(260));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994E00u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994E00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994E08;
    }
L_08994E08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8100)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14636));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(264));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994E2Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994E2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994E34;
    }
L_08994E34:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14628));
      if (branch_taken) {
          goto L_08994E74;
      }
      goto L_08994E40;
    }
L_08994E40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8104)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089953A4;
      }
      goto L_08994E54;
    }
L_08994E54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8104)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4904)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08994E74:
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08994E8Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08994E8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994E94;
    }
L_08994E94:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_08994EF8;
      }
      goto L_08994E9C;
    }
L_08994E9C:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08994ED8;
      }
      goto L_08994EB0;
    }
L_08994EB0:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08994EBCu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994EBCu) goto L_08994EBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994EBC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08994ED4;
      }
      goto L_08994EC8;
    }
L_08994EC8:
    aot_gpr_31 = (0x08994ED0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994ED0u) goto L_08994ED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994ED0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08994ED4;
L_08994ED4:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08994ED8;
L_08994ED8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08994EE4u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14620));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994EE4u) goto L_08994EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994EE4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08994EF0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994EF0u) goto L_08994EF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994EF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994EF8;
    }
L_08994EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08994F00;
    }
L_08994F00:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_08994F64;
      }
      goto L_08994F08;
    }
L_08994F08:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08994F44;
      }
      goto L_08994F1C;
    }
L_08994F1C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08994F28u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994F28u) goto L_08994F28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994F28:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08994F40;
      }
      goto L_08994F34;
    }
L_08994F34:
    aot_gpr_31 = (0x08994F3Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994F3Cu) goto L_08994F3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994F3C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08994F40;
L_08994F40:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08994F44;
L_08994F44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08994F50u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14612));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994F50u) goto L_08994F50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994F50:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08994F5Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994F5Cu) goto L_08994F5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994F5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994F64;
    }
L_08994F64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08994F6C;
    }
L_08994F6C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_08994FD0;
      }
      goto L_08994F74;
    }
L_08994F74:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08994FB0;
      }
      goto L_08994F88;
    }
L_08994F88:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08994F94u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994F94u) goto L_08994F94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994F94:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08994FAC;
      }
      goto L_08994FA0;
    }
L_08994FA0:
    aot_gpr_31 = (0x08994FA8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994FA8u) goto L_08994FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994FA8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08994FAC;
L_08994FAC:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08994FB0;
L_08994FB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08994FBCu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14604));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994FBCu) goto L_08994FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994FBC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08994FC8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08994FC8u) goto L_08994FC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08994FC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08994FD0;
    }
L_08994FD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08994FD8;
    }
L_08994FD8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_0899503C;
      }
      goto L_08994FE0;
    }
L_08994FE0:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_0899501C;
      }
      goto L_08994FF4;
    }
L_08994FF4:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08995000u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995000u) goto L_08995000;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995000:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08995018;
      }
      goto L_0899500C;
    }
L_0899500C:
    aot_gpr_31 = (0x08995014u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995014u) goto L_08995014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995014:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08995018;
L_08995018:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_0899501C;
L_0899501C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08995028u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14596));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995028u) goto L_08995028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995028:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08995034u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995034u) goto L_08995034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995034:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899503C;
    }
L_0899503C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08995044;
    }
L_08995044:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_089950A8;
      }
      goto L_0899504C;
    }
L_0899504C:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08995088;
      }
      goto L_08995060;
    }
L_08995060:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0899506Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899506Cu) goto L_0899506C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899506C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08995084;
      }
      goto L_08995078;
    }
L_08995078:
    aot_gpr_31 = (0x08995080u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995080u) goto L_08995080;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995080:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08995084;
L_08995084:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08995088;
L_08995088:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08995094u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14588));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995094u) goto L_08995094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995094:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089950A0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089950A0u) goto L_089950A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089950A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089950A8;
    }
L_089950A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_089950B0;
    }
L_089950B0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_08995114;
      }
      goto L_089950B8;
    }
L_089950B8:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_089950F4;
      }
      goto L_089950CC;
    }
L_089950CC:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x089950D8u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089950D8u) goto L_089950D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089950D8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089950F0;
      }
      goto L_089950E4;
    }
L_089950E4:
    aot_gpr_31 = (0x089950ECu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089950ECu) goto L_089950EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089950EC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089950F0;
L_089950F0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089950F4;
L_089950F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08995100u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14580));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995100u) goto L_08995100;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995100:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0899510Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899510Cu) goto L_0899510C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899510C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995114;
    }
L_08995114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_0899511C;
    }
L_0899511C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_08995180;
      }
      goto L_08995124;
    }
L_08995124:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08995160;
      }
      goto L_08995138;
    }
L_08995138:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08995144u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995144u) goto L_08995144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995144:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0899515C;
      }
      goto L_08995150;
    }
L_08995150:
    aot_gpr_31 = (0x08995158u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995158u) goto L_08995158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995158:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899515C;
L_0899515C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08995160;
L_08995160:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0899516Cu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14572));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899516Cu) goto L_0899516C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899516C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08995178u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995178u) goto L_08995178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995178:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995180;
    }
L_08995180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08995188;
    }
L_08995188:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_089951EC;
      }
      goto L_08995190;
    }
L_08995190:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_089951CC;
      }
      goto L_089951A4;
    }
L_089951A4:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x089951B0u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089951B0u) goto L_089951B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089951B0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089951C8;
      }
      goto L_089951BC;
    }
L_089951BC:
    aot_gpr_31 = (0x089951C4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089951C4u) goto L_089951C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089951C4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089951C8;
L_089951C8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089951CC;
L_089951CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x089951D8u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14564));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089951D8u) goto L_089951D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089951D8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089951E4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089951E4u) goto L_089951E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089951E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089951EC;
    }
L_089951EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_089951F4;
    }
L_089951F4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_08995258;
      }
      goto L_089951FC;
    }
L_089951FC:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08995238;
      }
      goto L_08995210;
    }
L_08995210:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0899521Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899521Cu) goto L_0899521C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899521C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08995234;
      }
      goto L_08995228;
    }
L_08995228:
    aot_gpr_31 = (0x08995230u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995230u) goto L_08995230;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995230:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08995234;
L_08995234:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08995238;
L_08995238:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08995244u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14556));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995244u) goto L_08995244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995244:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08995250u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995250u) goto L_08995250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995250:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995258;
    }
L_08995258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08995260;
    }
L_08995260:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_089952C4;
      }
      goto L_08995268;
    }
L_08995268:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_089952A4;
      }
      goto L_0899527C;
    }
L_0899527C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08995288u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995288u) goto L_08995288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995288:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089952A0;
      }
      goto L_08995294;
    }
L_08995294:
    aot_gpr_31 = (0x0899529Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899529Cu) goto L_0899529C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899529C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089952A0;
L_089952A0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_089952A4;
L_089952A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x089952B0u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14548));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089952B0u) goto L_089952B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089952B0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089952BCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089952BCu) goto L_089952BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089952BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089952C4;
    }
L_089952C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_089952CC;
    }
L_089952CC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_08995330;
      }
      goto L_089952D4;
    }
L_089952D4:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08995310;
      }
      goto L_089952E8;
    }
L_089952E8:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x089952F4u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089952F4u) goto L_089952F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089952F4:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0899530C;
      }
      goto L_08995300;
    }
L_08995300:
    aot_gpr_31 = (0x08995308u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995308u) goto L_08995308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995308:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899530C;
L_0899530C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08995310;
L_08995310:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0899531Cu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14540));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899531Cu) goto L_0899531C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899531C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08995328u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995328u) goto L_08995328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995328:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995330;
    }
L_08995330:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_08995338;
    }
L_08995338:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_0899539C;
      }
      goto L_08995340;
    }
L_08995340:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_0899537C;
      }
      goto L_08995354;
    }
L_08995354:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08995360u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995360u) goto L_08995360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995360:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08995378;
      }
      goto L_0899536C;
    }
L_0899536C:
    aot_gpr_31 = (0x08995374u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995374u) goto L_08995374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995374:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08995378;
L_08995378:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_0899537C;
L_0899537C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08995388u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14532));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995388u) goto L_08995388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995388:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08995394u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995394u) goto L_08995394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995394:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899539C;
    }
L_0899539C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899540C;
      }
      goto L_089953A4;
    }
L_089953A4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_08995408;
      }
      goto L_089953AC;
    }
L_089953AC:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(-8144), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[16] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_089953E8;
      }
      goto L_089953C0;
    }
L_089953C0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x089953CCu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089953CCu) goto L_089953CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089953CC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_089953E4;
      }
      goto L_089953D8;
    }
L_089953D8:
    aot_gpr_31 = (0x089953E0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089953E0u) goto L_089953E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089953E0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089953E4;
L_089953E4:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_089953E8;
L_089953E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x089953F4u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14524));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089953F4u) goto L_089953F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089953F4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08995400u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995400u) goto L_08995400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995400:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995408;
    }
L_08995408:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0899540C;
L_0899540C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995428;
      }
      goto L_08995414;
    }
L_08995414:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_0899545C;
      }
      goto L_08995420;
    }
L_08995420:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08995488;
      }
      goto L_08995428;
    }
L_08995428:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8108)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8112)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14516));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(268));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995454u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995454:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899545C;
    }
L_0899545C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9048)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14508));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(276));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995480u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995480:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995488;
    }
L_08995488:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089954A8;
      }
      goto L_08995494;
    }
L_08995494:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089954D4;
      }
      goto L_089954A0;
    }
L_089954A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08995500;
      }
      goto L_089954A8;
    }
L_089954A8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9052)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14500));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(280));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089954CCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089954CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089954D4;
    }
L_089954D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9056)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14492));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(284), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(284));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089954F8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089954F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995500;
    }
L_08995500:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995520;
      }
      goto L_0899550C;
    }
L_0899550C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_0899554C;
      }
      goto L_08995518;
    }
L_08995518:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08995578;
      }
      goto L_08995520;
    }
L_08995520:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9060)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14484));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995544u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995544:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899554C;
    }
L_0899554C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8144)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14476));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(292));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995570u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995570:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995578;
    }
L_08995578:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995598;
      }
      goto L_08995584;
    }
L_08995584:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089955C4;
      }
      goto L_08995590;
    }
L_08995590:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089955F0;
      }
      goto L_08995598;
    }
L_08995598:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9040)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14468));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(296));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089955BCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089955BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089955C4;
    }
L_089955C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9044)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14460));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(300));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089955E8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089955E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089955F0;
    }
L_089955F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9352)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995638;
      }
      goto L_089955FC;
    }
L_089955FC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_0899560C;
      }
      goto L_08995604;
    }
L_08995604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995638;
      }
      goto L_0899560C;
    }
L_0899560C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9352)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14452));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(304), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995630u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995630:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995638;
    }
L_08995638:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9360)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995680;
      }
      goto L_08995644;
    }
L_08995644:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995654;
      }
      goto L_0899564C;
    }
L_0899564C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995680;
      }
      goto L_08995654;
    }
L_08995654:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9360)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14444));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(308), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(308));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995678u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995678:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995680;
    }
L_08995680:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8116)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_089956C8;
      }
      goto L_0899568C;
    }
L_0899568C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_0899569C;
      }
      goto L_08995694;
    }
L_08995694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089956C8;
      }
      goto L_0899569C;
    }
L_0899569C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8116)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14436));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(312), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(312));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089956C0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089956C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089956C8;
    }
L_089956C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8120)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995714;
      }
      goto L_089956D4;
    }
L_089956D4:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8120)));
        goto L_089956E4;
    }
    goto L_089956DC;
L_089956DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995714;
      }
      goto L_089956E4;
    }
L_089956E4:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(316));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[6] = (0u | 3u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14428));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x0899570Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08996D78;
L_0899570C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995714;
    }
L_08995714:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9348)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0899575C;
      }
      goto L_08995720;
    }
L_08995720:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995730;
      }
      goto L_08995728;
    }
L_08995728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899575C;
      }
      goto L_08995730;
    }
L_08995730:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9348)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14420));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(320), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995754u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995754:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899575C;
    }
L_0899575C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9364)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_089957A4;
      }
      goto L_08995768;
    }
L_08995768:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995778;
      }
      goto L_08995770;
    }
L_08995770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089957A4;
      }
      goto L_08995778;
    }
L_08995778:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9364)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14412));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(324), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(324));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x0899579Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_0899579C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089957A4;
    }
L_089957A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9356)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_089957EC;
      }
      goto L_089957B0;
    }
L_089957B0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089957C0;
      }
      goto L_089957B8;
    }
L_089957B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089957EC;
      }
      goto L_089957C0;
    }
L_089957C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9356)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14404));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(328));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089957E4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089957E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089957EC;
    }
L_089957EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9368)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995834;
      }
      goto L_089957F8;
    }
L_089957F8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995808;
      }
      goto L_08995800;
    }
L_08995800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995834;
      }
      goto L_08995808;
    }
L_08995808:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9368)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14396));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(332), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(332));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x0899582Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_0899582C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995834;
    }
L_08995834:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8148)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995884;
      }
      goto L_08995840;
    }
L_08995840:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995850;
      }
      goto L_08995848;
    }
L_08995848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995884;
      }
      goto L_08995850;
    }
L_08995850:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8148)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8152)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(340), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14388));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(340));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x0899587Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_0899587C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995884;
    }
L_08995884:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8196)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_089958D0;
      }
      goto L_08995890;
    }
L_08995890:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8196)));
        goto L_089958A0;
    }
    goto L_08995898;
L_08995898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089958D0;
      }
      goto L_089958A0;
    }
L_089958A0:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(344));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[6] = (0u | 3u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14380));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x089958C8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08996D78;
L_089958C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089958D0;
    }
L_089958D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8200)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08995934;
      }
      goto L_089958E8;
    }
L_089958E8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089958F8;
      }
      goto L_089958F0;
    }
L_089958F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995934;
      }
      goto L_089958F8;
    }
L_089958F8:
    aot_gpr_31 = (0x08995900u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8200)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995900u) goto L_08995900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995900:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8200)));
    aot_gpr_31 = (0x0899590Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(348), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899590Cu) goto L_0899590C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899590C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(352), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14372));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(348));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x0899592Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_0899592C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995934;
    }
L_08995934:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8204)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08995998;
      }
      goto L_0899594C;
    }
L_0899594C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_0899595C;
      }
      goto L_08995954;
    }
L_08995954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995998;
      }
      goto L_0899595C;
    }
L_0899595C:
    aot_gpr_31 = (0x08995964u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8204)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995964u) goto L_08995964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995964:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8204)));
    aot_gpr_31 = (0x08995970u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(356), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995970u) goto L_08995970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995970:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14364));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(356));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(360));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08995990u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995990:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995998;
    }
L_08995998:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8208)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089959FC;
      }
      goto L_089959B0;
    }
L_089959B0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089959C0;
      }
      goto L_089959B8;
    }
L_089959B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089959FC;
      }
      goto L_089959C0;
    }
L_089959C0:
    aot_gpr_31 = (0x089959C8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8208)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089959C8u) goto L_089959C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089959C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8208)));
    aot_gpr_31 = (0x089959D4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(364), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089959D4u) goto L_089959D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089959D4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14356));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(364));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x089959F4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089959F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089959FC;
    }
L_089959FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8168)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995A44;
      }
      goto L_08995A08;
    }
L_08995A08:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995A18;
      }
      goto L_08995A10;
    }
L_08995A10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995A44;
      }
      goto L_08995A18;
    }
L_08995A18:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8168)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14348));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(372), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(372));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995A3Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995A3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995A44;
    }
L_08995A44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8212)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995A90;
      }
      goto L_08995A50;
    }
L_08995A50:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8212)));
        goto L_08995A60;
    }
    goto L_08995A58;
L_08995A58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995A90;
      }
      goto L_08995A60;
    }
L_08995A60:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(376));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[6] = (0u | 3u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14340));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08995A88u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08996D78;
L_08995A88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995A90;
    }
L_08995A90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8216)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995AD8;
      }
      goto L_08995A9C;
    }
L_08995A9C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995AAC;
      }
      goto L_08995AA4;
    }
L_08995AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995AD8;
      }
      goto L_08995AAC;
    }
L_08995AAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8216)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14332));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(380), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(380));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995AD0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995AD0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995AD8;
    }
L_08995AD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8220)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995B20;
      }
      goto L_08995AE4;
    }
L_08995AE4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995AF4;
      }
      goto L_08995AEC;
    }
L_08995AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995B20;
      }
      goto L_08995AF4;
    }
L_08995AF4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8220)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14324));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(384), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995B18u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995B18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995B20;
    }
L_08995B20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8224)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995B68;
      }
      goto L_08995B2C;
    }
L_08995B2C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995B3C;
      }
      goto L_08995B34;
    }
L_08995B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995B68;
      }
      goto L_08995B3C;
    }
L_08995B3C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8224)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14316));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(388), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(388));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995B60u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995B60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995B68;
    }
L_08995B68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8228)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995BB0;
      }
      goto L_08995B74;
    }
L_08995B74:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995B84;
      }
      goto L_08995B7C;
    }
L_08995B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995BB0;
      }
      goto L_08995B84;
    }
L_08995B84:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8228)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14308));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(392), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(392));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995BA8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995BA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995BB0;
    }
L_08995BB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8232)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995BF8;
      }
      goto L_08995BBC;
    }
L_08995BBC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995BCC;
      }
      goto L_08995BC4;
    }
L_08995BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995BF8;
      }
      goto L_08995BCC;
    }
L_08995BCC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8232)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14300));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(396), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(396));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995BF0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995BF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995BF8;
    }
L_08995BF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8236)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995C40;
      }
      goto L_08995C04;
    }
L_08995C04:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995C14;
      }
      goto L_08995C0C;
    }
L_08995C0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995C40;
      }
      goto L_08995C14;
    }
L_08995C14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8236)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14292));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(400), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(400));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995C38u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995C38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995C40;
    }
L_08995C40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8240)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08995CA4;
      }
      goto L_08995C58;
    }
L_08995C58:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995C68;
      }
      goto L_08995C60;
    }
L_08995C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995CA4;
      }
      goto L_08995C68;
    }
L_08995C68:
    aot_gpr_31 = (0x08995C70u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8240)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995C70u) goto L_08995C70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995C70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8240)));
    aot_gpr_31 = (0x08995C7Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(404), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995C7Cu) goto L_08995C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995C7C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(408), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14284));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(404));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(408));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08995C9Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995C9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995CA4;
    }
L_08995CA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8244)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08995D08;
      }
      goto L_08995CBC;
    }
L_08995CBC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995CCC;
      }
      goto L_08995CC4;
    }
L_08995CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995D08;
      }
      goto L_08995CCC;
    }
L_08995CCC:
    aot_gpr_31 = (0x08995CD4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8244)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995CD4u) goto L_08995CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995CD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8244)));
    aot_gpr_31 = (0x08995CE0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(412), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995CE0u) goto L_08995CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995CE0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(416), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14276));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(412));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(416));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08995D00u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995D00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995D08;
    }
L_08995D08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8248)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08995D6C;
      }
      goto L_08995D20;
    }
L_08995D20:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995D30;
      }
      goto L_08995D28;
    }
L_08995D28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995D6C;
      }
      goto L_08995D30;
    }
L_08995D30:
    aot_gpr_31 = (0x08995D38u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8248)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995D38u) goto L_08995D38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995D38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8248)));
    aot_gpr_31 = (0x08995D44u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(420), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995D44u) goto L_08995D44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995D44:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(424), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14268));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(420));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(424));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08995D64u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995D64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995D6C;
    }
L_08995D6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8252)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08995DD0;
      }
      goto L_08995D84;
    }
L_08995D84:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995D94;
      }
      goto L_08995D8C;
    }
L_08995D8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995DD0;
      }
      goto L_08995D94;
    }
L_08995D94:
    aot_gpr_31 = (0x08995D9Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8252)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995D9Cu) goto L_08995D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995D9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8252)));
    aot_gpr_31 = (0x08995DA8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995DA8u) goto L_08995DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995DA8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(432), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14260));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(428));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(432));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08995DC8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995DC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995DD0;
    }
L_08995DD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8256)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08995E34;
      }
      goto L_08995DE8;
    }
L_08995DE8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995DF8;
      }
      goto L_08995DF0;
    }
L_08995DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995E34;
      }
      goto L_08995DF8;
    }
L_08995DF8:
    aot_gpr_31 = (0x08995E00u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8256)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995E00u) goto L_08995E00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995E00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8256)));
    aot_gpr_31 = (0x08995E0Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(436), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995E0Cu) goto L_08995E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995E0C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(440), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14252));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(436));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(440));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08995E2Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995E2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995E34;
    }
L_08995E34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8172)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995EB4;
      }
      goto L_08995E40;
    }
L_08995E40:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995E5C;
      }
      goto L_08995E48;
    }
L_08995E48:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995E88;
      }
      goto L_08995E54;
    }
L_08995E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995EB4;
      }
      goto L_08995E5C;
    }
L_08995E5C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8172)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14244));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(444), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(444));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995E80u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995E80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995E88;
    }
L_08995E88:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8176)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14236));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(448));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995EACu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995EAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995EB4;
    }
L_08995EB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8280)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08995F84;
      }
      goto L_08995EC0;
    }
L_08995EC0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995EDC;
      }
      goto L_08995EC8;
    }
L_08995EC8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995F08;
      }
      goto L_08995ED4;
    }
L_08995ED4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08995F44;
      }
      goto L_08995EDC;
    }
L_08995EDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8280)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14228));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(452), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(452));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995F00u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995F00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995F08;
    }
L_08995F08:
    aot_gpr_31 = (0x08995F10u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8272)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995F10u) goto L_08995F10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995F10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8272)));
    aot_gpr_31 = (0x08995F1Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(456), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995F1Cu) goto L_08995F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995F1C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(460), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14220));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(456));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(460));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08995F3Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995F3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995F44;
    }
L_08995F44:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08995F58;
      }
      goto L_08995F50;
    }
L_08995F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995F84;
      }
      goto L_08995F58;
    }
L_08995F58:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8276)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14212));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(464));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995F7Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995F7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08995F84;
    }
L_08995F84:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0899610C;
      }
      goto L_08995F94;
    }
L_08995F94:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17624));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089960FC;
      }
      goto L_08995FB8;
    }
L_08995FB8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(468));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14204));
    aot_gpr_31 = (0x08995FC8u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08995FC8u) goto L_08995FC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08995FC8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(468));
      if (branch_taken) {
          goto L_08995FE4;
      }
      goto L_08995FD0;
    }
L_08995FD0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996004;
      }
      goto L_08995FDC;
    }
L_08995FDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996040;
      }
      goto L_08995FE4;
    }
L_08995FE4:
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08995FFCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08995FFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996004;
    }
L_08996004:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17624));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14192));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(488), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(488));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996038u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_08996038:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996040;
    }
L_08996040:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996060;
      }
      goto L_0899604C;
    }
L_0899604C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089960AC;
      }
      goto L_08996058;
    }
L_08996058:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089960F8;
      }
      goto L_08996060;
    }
L_08996060:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17704));
    ctx.gpr[16] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x08996078u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996078u) goto L_08996078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996078:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08996084u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(492), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996084u) goto L_08996084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996084:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(496), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14184));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(492));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(496));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x089960A4u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_089960A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089960AC;
    }
L_089960AC:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17664));
    ctx.gpr[16] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x089960C4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089960C4u) goto L_089960C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089960C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x089960D0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(500), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089960D0u) goto L_089960D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089960D0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(504), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14176));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(500));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(504));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x089960F0u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_089960F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089960F8;
    }
L_089960F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089960FC;
L_089960FC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08995F94;
      }
      goto L_0899610C;
    }
L_0899610C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08996280;
      }
      goto L_0899611C;
    }
L_0899611C:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17904));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08996270;
      }
      goto L_08996138;
    }
L_08996138:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08996174;
      }
      goto L_08996140;
    }
L_08996140:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14168));
      if (branch_taken) {
          goto L_08996154;
      }
      goto L_08996148;
    }
L_08996148:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08996174;
      }
      goto L_08996154;
    }
L_08996154:
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x0899616Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_0899616C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996174;
    }
L_08996174:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(508));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14160));
    aot_gpr_31 = (0x08996184u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996184u) goto L_08996184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996184:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089961A0;
      }
      goto L_0899618C;
    }
L_0899618C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089961C4;
      }
      goto L_08996198;
    }
L_08996198:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996210;
      }
      goto L_089961A0;
    }
L_089961A0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(508));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089961BCu);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_089961BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089961C4;
    }
L_089961C4:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17936));
    ctx.gpr[16] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x089961DCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089961DCu) goto L_089961DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089961DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x089961E8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(528), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089961E8u) goto L_089961E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089961E8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(532), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14184));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08996208u);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_08996208:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996210;
    }
L_08996210:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996224;
      }
      goto L_0899621C;
    }
L_0899621C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996270;
      }
      goto L_08996224;
    }
L_08996224:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17904));
    ctx.gpr[16] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x0899623Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899623Cu) goto L_0899623C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899623C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08996248u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996248u) goto L_08996248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996248:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14176));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(536));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(540));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08996268u);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_08996268:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996270;
    }
L_08996270:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0899611C;
      }
      goto L_08996280;
    }
L_08996280:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089963FC;
      }
      goto L_08996294;
    }
L_08996294:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17744));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089963EC;
      }
      goto L_089962B0;
    }
L_089962B0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_089962F0;
      }
      goto L_089962B8;
    }
L_089962B8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14148));
      if (branch_taken) {
          goto L_089962D0;
      }
      goto L_089962C0;
    }
L_089962C0:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089962F0;
      }
      goto L_089962D0;
    }
L_089962D0:
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089962E8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089962E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089962F0;
    }
L_089962F0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(544));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14160));
    aot_gpr_31 = (0x08996300u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996300u) goto L_08996300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996300:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_0899631C;
      }
      goto L_08996308;
    }
L_08996308:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996340;
      }
      goto L_08996314;
    }
L_08996314:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899638C;
      }
      goto L_0899631C;
    }
L_0899631C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(544));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996338u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_08996338:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996340;
    }
L_08996340:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17792));
    ctx.gpr[16] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x08996358u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996358u) goto L_08996358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996358:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08996364u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(564), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996364u) goto L_08996364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996364:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(568), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14184));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(564));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(568));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08996384u);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_08996384:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899638C;
    }
L_0899638C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089963A0;
      }
      goto L_08996398;
    }
L_08996398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089963EC;
      }
      goto L_089963A0;
    }
L_089963A0:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17744));
    ctx.gpr[16] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x089963B8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089963B8u) goto L_089963B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089963B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x089963C4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(572), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089963C4u) goto L_089963C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089963C4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(576), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14176));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(572));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(576));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x089963E4u);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_089963E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089963EC;
    }
L_089963EC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08996294;
      }
      goto L_089963FC;
    }
L_089963FC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8260)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08996458;
      }
      goto L_08996414;
    }
L_08996414:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08996458;
      }
      goto L_0899641C;
    }
L_0899641C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_0899642C;
      }
      goto L_08996424;
    }
L_08996424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996458;
      }
      goto L_0899642C;
    }
L_0899642C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8260)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14140));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(580));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996450u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_08996450:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996458;
    }
L_08996458:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089965D4;
      }
      goto L_0899646C;
    }
L_0899646C:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17840));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089965C4;
      }
      goto L_08996488;
    }
L_08996488:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_089964C8;
      }
      goto L_08996490;
    }
L_08996490:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14132));
      if (branch_taken) {
          goto L_089964A8;
      }
      goto L_08996498;
    }
L_08996498:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089964C8;
      }
      goto L_089964A8;
    }
L_089964A8:
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089964C0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089964C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089964C8;
    }
L_089964C8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(584));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14160));
    aot_gpr_31 = (0x089964D8u);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089964D8u) goto L_089964D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089964D8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089964F4;
      }
      goto L_089964E0;
    }
L_089964E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996518;
      }
      goto L_089964EC;
    }
L_089964EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996564;
      }
      goto L_089964F4;
    }
L_089964F4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(584));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996510u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_08996510:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996518;
    }
L_08996518:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17872));
    ctx.gpr[16] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x08996530u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996530u) goto L_08996530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996530:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0899653Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(604), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899653Cu) goto L_0899653C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899653C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(608), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14184));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(604));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(608));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x0899655Cu);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_0899655C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996564;
    }
L_08996564:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996578;
      }
      goto L_08996570;
    }
L_08996570:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089965C4;
      }
      goto L_08996578;
    }
L_08996578:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17840));
    ctx.gpr[16] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x08996590u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996590u) goto L_08996590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996590:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0899659Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(612), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899659Cu) goto L_0899659C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899659C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(616), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14176));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(612));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(616));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x089965BCu);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_089965BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089965C4;
    }
L_089965C4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0899646C;
      }
      goto L_089965D4;
    }
L_089965D4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8264)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08996630;
      }
      goto L_089965EC;
    }
L_089965EC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08996630;
      }
      goto L_089965F4;
    }
L_089965F4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996604;
      }
      goto L_089965FC;
    }
L_089965FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996630;
      }
      goto L_08996604;
    }
L_08996604:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8264)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14140));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(620), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(620));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996628u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_08996628:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996630;
    }
L_08996630:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08996794;
      }
      goto L_08996644;
    }
L_08996644:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_28 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(9416)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08996784;
      }
      goto L_08996658;
    }
L_08996658:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08996698;
      }
      goto L_08996660;
    }
L_08996660:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14124));
      if (branch_taken) {
          goto L_08996678;
      }
      goto L_08996668;
    }
L_08996668:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08996698;
      }
      goto L_08996678;
    }
L_08996678:
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996690u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996690:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996698;
    }
L_08996698:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(624));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14160));
    aot_gpr_31 = (0x089966A8u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089966A8u) goto L_089966A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089966A8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089966C4;
      }
      goto L_089966B0;
    }
L_089966B0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089966E8;
      }
      goto L_089966BC;
    }
L_089966BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899672C;
      }
      goto L_089966C4;
    }
L_089966C4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(624));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089966E0u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_089966E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089966E8;
    }
L_089966E8:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    ctx.gpr[16] = (aot_gpr_28 + aot_gpr_4);
    aot_gpr_31 = (0x089966F8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9432)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089966F8u) goto L_089966F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089966F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9432)));
    aot_gpr_31 = (0x08996704u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(644), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996704u) goto L_08996704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996704:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(648), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14184));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(644));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(648));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08996724u);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_08996724:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_0899672C;
    }
L_0899672C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996740;
      }
      goto L_08996738;
    }
L_08996738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996784;
      }
      goto L_08996740;
    }
L_08996740:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    ctx.gpr[16] = (aot_gpr_28 + aot_gpr_4);
    aot_gpr_31 = (0x08996750u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 311u, 0x08991550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996750u) goto L_08996750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996750:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9416)));
    aot_gpr_31 = (0x0899675Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 314u, 0x08991574u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899675Cu) goto L_0899675C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899675C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(656), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14176));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(652));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(656));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x0899677Cu);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_0899677C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996784;
    }
L_08996784:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08996644;
      }
      goto L_08996794;
    }
L_08996794:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8268)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089967F0;
      }
      goto L_089967AC;
    }
L_089967AC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_089967F0;
      }
      goto L_089967B4;
    }
L_089967B4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089967C4;
      }
      goto L_089967BC;
    }
L_089967BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089967F0;
      }
      goto L_089967C4;
    }
L_089967C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8268)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14140));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(660));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089967E8u);
    ctx.gpr[9] = (0u | 2u);
    goto L_08996D78;
L_089967E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089967F0;
    }
L_089967F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9372)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08996838;
      }
      goto L_089967FC;
    }
L_089967FC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_0899680C;
      }
      goto L_08996804;
    }
L_08996804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996838;
      }
      goto L_0899680C;
    }
L_0899680C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9372)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14116));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(664), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(664));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996830u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996830:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996838;
    }
L_08996838:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9404)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08996880;
      }
      goto L_08996844;
    }
L_08996844:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996854;
      }
      goto L_0899684C;
    }
L_0899684C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996880;
      }
      goto L_08996854;
    }
L_08996854:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9404)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14108));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(668), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(668));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996878u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996878:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996880;
    }
L_08996880:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_0899689C;
      }
      goto L_08996888;
    }
L_08996888:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9388)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089968C8;
      }
      goto L_08996894;
    }
L_08996894:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996904;
      }
      goto L_0899689C;
    }
L_0899689C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8684)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14100));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(672), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(672));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089968C0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089968C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_089968C8;
    }
L_089968C8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_089968D8;
      }
      goto L_089968D0;
    }
L_089968D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996904;
      }
      goto L_089968D8;
    }
L_089968D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9388)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14092));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(676), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(676));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089968FCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_089968FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996904;
    }
L_08996904:
    aot_gpr_31 = (0x0899690Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 286u, 0x089913B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899690Cu) goto L_0899690C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899690C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08996B3C;
      }
      goto L_08996914;
    }
L_08996914:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
      if (branch_taken) {
          goto L_08996A24;
      }
      goto L_0899691C;
    }
L_0899691C:
    aot_gpr_31 = (0x08996924u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 293u, 0x08991444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996924u) goto L_08996924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996924:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08996A0C;
      }
      goto L_08996934;
    }
L_08996934:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4856)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0899694C:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14084));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14076));
    aot_gpr_31 = (0x0899695Cu);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899695Cu) goto L_0899695C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899695C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_08996964;
    }
L_08996964:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14084));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14068));
    aot_gpr_31 = (0x08996974u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996974u) goto L_08996974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996974:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_0899697C;
    }
L_0899697C:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14084));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14060));
    aot_gpr_31 = (0x0899698Cu);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899698Cu) goto L_0899698C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899698C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_08996994;
    }
L_08996994:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14084));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14052));
    aot_gpr_31 = (0x089969A4u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089969A4u) goto L_089969A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089969A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_089969AC;
    }
L_089969AC:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14084));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14044));
    aot_gpr_31 = (0x089969BCu);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089969BCu) goto L_089969BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089969BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_089969C4;
    }
L_089969C4:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14084));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14036));
    aot_gpr_31 = (0x089969D4u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089969D4u) goto L_089969D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089969D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_089969DC;
    }
L_089969DC:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14084));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14028));
    aot_gpr_31 = (0x089969ECu);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089969ECu) goto L_089969EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089969EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_089969F4;
    }
L_089969F4:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14084));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14020));
    aot_gpr_31 = (0x08996A04u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996A04u) goto L_08996A04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996A04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996A1C;
      }
      goto L_08996A0C;
    }
L_08996A0C:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14084));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14012));
    aot_gpr_31 = (0x08996A1Cu);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996A1Cu) goto L_08996A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996A1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996A24;
    }
L_08996A24:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
      if (branch_taken) {
          goto L_08996B38;
      }
      goto L_08996A30;
    }
L_08996A30:
    aot_gpr_31 = (0x08996A38u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 298u, 0x08991490u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996A38u) goto L_08996A38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996A38:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08996B20;
      }
      goto L_08996A48;
    }
L_08996A48:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4824)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08996A60:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14004));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14076));
    aot_gpr_31 = (0x08996A70u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996A70u) goto L_08996A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996A70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996A78;
    }
L_08996A78:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14004));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14068));
    aot_gpr_31 = (0x08996A88u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996A88u) goto L_08996A88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996A88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996A90;
    }
L_08996A90:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14004));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14060));
    aot_gpr_31 = (0x08996AA0u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996AA0u) goto L_08996AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996AA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996AA8;
    }
L_08996AA8:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14004));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14052));
    aot_gpr_31 = (0x08996AB8u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996AB8u) goto L_08996AB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996AB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996AC0;
    }
L_08996AC0:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14004));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14044));
    aot_gpr_31 = (0x08996AD0u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996AD0u) goto L_08996AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996AD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996AD8;
    }
L_08996AD8:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14004));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14036));
    aot_gpr_31 = (0x08996AE8u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996AE8u) goto L_08996AE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996AE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996AF0;
    }
L_08996AF0:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14004));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14028));
    aot_gpr_31 = (0x08996B00u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996B00u) goto L_08996B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996B00:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996B08;
    }
L_08996B08:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14004));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14020));
    aot_gpr_31 = (0x08996B18u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996B18u) goto L_08996B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996B18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996B30;
      }
      goto L_08996B20;
    }
L_08996B20:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-14004));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-14012));
    aot_gpr_31 = (0x08996B30u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996B30u) goto L_08996B30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996B30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996B38;
    }
L_08996B38:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08996B3C;
L_08996B3C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996B58;
      }
      goto L_08996B44;
    }
L_08996B44:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996B84;
      }
      goto L_08996B50;
    }
L_08996B50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996BB0;
      }
      goto L_08996B58;
    }
L_08996B58:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9344)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-13996));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(680), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(680));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996B7Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996B7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996B84;
    }
L_08996B84:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9392)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-13988));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(684), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(684));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996BA8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996BA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996BB0;
    }
L_08996BB0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996BD0;
      }
      goto L_08996BBC;
    }
L_08996BBC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[16]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7904)));
        goto L_08996BFC;
    }
    goto L_08996BC8;
L_08996BC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996C2C;
      }
      goto L_08996BD0;
    }
L_08996BD0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9396)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-13980));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(688));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996BF4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996BF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996BFC;
    }
L_08996BFC:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(692));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[6] = (0u | 3u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-13972));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08996C24u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08996D78;
L_08996C24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996C2C;
    }
L_08996C2C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996C4C;
      }
      goto L_08996C38;
    }
L_08996C38:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996C70;
      }
      goto L_08996C44;
    }
L_08996C44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996C9C;
      }
      goto L_08996C4C;
    }
L_08996C4C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9088)));
    aot_gpr_31 = (0x08996C58u);
    ctx.gpr[16] = (aot_gpr_28 + static_cast<std::uint32_t>(-13964));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 170u, 0x08990C28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996C58u) goto L_08996C58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996C58:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08996C68u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 319u, 0x089915A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996C68u) goto L_08996C68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996C68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996C70;
    }
L_08996C70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8140)));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-13956));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(696), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(696));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996C94u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996C94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996C9C;
    }
L_08996C9C:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D54;
      }
      goto L_08996CAC;
    }
L_08996CAC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_28 + static_cast<std::uint32_t>(9400)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 << (ctx.gpr[19] & 31u));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08996D44;
      }
      goto L_08996CC4;
    }
L_08996CC4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08996D00;
      }
      goto L_08996CCC;
    }
L_08996CCC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-13948));
      if (branch_taken) {
          goto L_08996CE0;
      }
      goto L_08996CD4;
    }
L_08996CD4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08996D00;
      }
      goto L_08996CE0;
    }
L_08996CE0:
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996CF8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08996D78;
L_08996CF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996D00;
    }
L_08996D00:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(700));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-13940));
    aot_gpr_31 = (0x08996D10u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996D10u) goto L_08996D10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996D10:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_08996D20;
      }
      goto L_08996D18;
    }
L_08996D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08996D44;
      }
      goto L_08996D20;
    }
L_08996D20:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(700));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08996D3Cu);
    ctx.gpr[9] = (0u | 4u);
    goto L_08996D78;
L_08996D3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08996D58;
      }
      goto L_08996D44;
    }
L_08996D44:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08996CAC;
      }
      goto L_08996D54;
    }
L_08996D54:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    goto L_08996D58;
L_08996D58:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(708), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(736));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08996D78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-592));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(564), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(548), aot_run_words); }
    { const std::uint32_t aot_run_words[6]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(568), aot_run_words); }
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(528), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08996DE4;
      }
      goto L_08996DB8;
    }
L_08996DB8:
    ctx.gpr[21] = (2247u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-800), static_cast<std::uint8_t>(0u));
    ctx.gpr[23] = (2238u << 16u);
    ctx.gpr[20] = (2238u << 16u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-800));
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(-8144));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(17512));
      if (branch_taken) {
          goto L_08996DEC;
      }
      goto L_08996DDC;
    }
L_08996DDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996E34;
      }
      goto L_08996DE4;
    }
L_08996DE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089974E8;
      }
      goto L_08996DEC;
    }
L_08996DEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08996E18;
      }
      goto L_08996DFC;
    }
L_08996DFC:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-13932));
    aot_gpr_31 = (0x08996E10u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996E10u) goto L_08996E10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996E10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08996E2C;
      }
      goto L_08996E18;
    }
L_08996E18:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-13924));
    aot_gpr_31 = (0x08996E2Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996E2Cu) goto L_08996E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996E2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089973BC;
      }
      goto L_08996E34;
    }
L_08996E34:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08997240;
      }
      goto L_08996E3C;
    }
L_08996E3C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_08996E4C;
    }
L_08996E4C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(532), ctx.gpr[22]);
    ctx.gpr[30] = (aot_gpr_28 + static_cast<std::uint32_t>(-13904));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08996EF8;
      }
      goto L_08996E68;
    }
L_08996E68:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08996F88;
      }
      goto L_08996E70;
    }
L_08996E70:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089970FC;
      }
      goto L_08996E78;
    }
L_08996E78:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0899708C;
      }
      goto L_08996E80;
    }
L_08996E80:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
      if (branch_taken) {
          goto L_08996FF8;
      }
      goto L_08996E88;
    }
L_08996E88:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-13916));
      if (branch_taken) {
          goto L_08996EC4;
      }
      goto L_08996E9C;
    }
L_08996E9C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08996EA8u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996EA8u) goto L_08996EA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996EA8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08996EC0;
      }
      goto L_08996EB4;
    }
L_08996EB4:
    aot_gpr_31 = (0x08996EBCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996EBCu) goto L_08996EBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996EBC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08996EC0;
L_08996EC0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08996EC4;
L_08996EC4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08996ED0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996ED0u) goto L_08996ED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996ED0:
    aot_gpr_31 = (0x08996ED8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996ED8u) goto L_08996ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996ED8:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08996EF0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996EF0u) goto L_08996EF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996EF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_08996EF8;
    }
L_08996EF8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08996F08u);
    ctx.gpr[20] = (aot_gpr_28 + static_cast<std::uint32_t>(-13896));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996F08u) goto L_08996F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996F08:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08996F40;
      }
      goto L_08996F18;
    }
L_08996F18:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08996F24u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996F24u) goto L_08996F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996F24:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08996F3C;
      }
      goto L_08996F30;
    }
L_08996F30:
    aot_gpr_31 = (0x08996F38u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996F38u) goto L_08996F38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996F38:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08996F3C;
L_08996F3C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08996F40;
L_08996F40:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08996F4Cu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996F4Cu) goto L_08996F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996F4C:
    aot_gpr_31 = (0x08996F54u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996F54u) goto L_08996F54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996F54:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08996F60u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996F60u) goto L_08996F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996F60:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08996F80u);
    ctx.gpr[10] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996F80u) goto L_08996F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996F80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_08996F88;
    }
L_08996F88:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-13880));
      if (branch_taken) {
          goto L_08996FC4;
      }
      goto L_08996F9C;
    }
L_08996F9C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08996FA8u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996FA8u) goto L_08996FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996FA8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08996FC0;
      }
      goto L_08996FB4;
    }
L_08996FB4:
    aot_gpr_31 = (0x08996FBCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996FBCu) goto L_08996FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996FBC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08996FC0;
L_08996FC0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08996FC4;
L_08996FC4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08996FD0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996FD0u) goto L_08996FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996FD0:
    aot_gpr_31 = (0x08996FD8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996FD8u) goto L_08996FD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996FD8:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08996FF0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08996FF0u) goto L_08996FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08996FF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_08996FF8;
    }
L_08996FF8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (2232u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0899700Cu);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5008));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899700Cu) goto L_0899700C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899700C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08997044;
      }
      goto L_0899701C;
    }
L_0899701C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08997028u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997028u) goto L_08997028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997028:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08997040;
      }
      goto L_08997034;
    }
L_08997034:
    aot_gpr_31 = (0x0899703Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899703Cu) goto L_0899703C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899703C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08997040;
L_08997040:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08997044;
L_08997044:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08997050u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997050u) goto L_08997050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997050:
    aot_gpr_31 = (0x08997058u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997058u) goto L_08997058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997058:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08997064u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997064u) goto L_08997064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997064:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08997084u);
    ctx.gpr[10] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997084u) goto L_08997084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997084:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_0899708C;
    }
L_0899708C:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-13864));
      if (branch_taken) {
          goto L_089970C8;
      }
      goto L_089970A0;
    }
L_089970A0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x089970ACu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089970ACu) goto L_089970AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089970AC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_089970C4;
      }
      goto L_089970B8;
    }
L_089970B8:
    aot_gpr_31 = (0x089970C0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089970C0u) goto L_089970C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089970C0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089970C4;
L_089970C4:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_089970C8;
L_089970C8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089970D4u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089970D4u) goto L_089970D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089970D4:
    aot_gpr_31 = (0x089970DCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089970DCu) goto L_089970DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089970DC:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089970F4u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089970F4u) goto L_089970F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089970F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_089970FC;
    }
L_089970FC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(544), ctx.gpr[17]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08997110u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7872)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997110u) goto L_08997110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997110:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08997120u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997120u) goto L_08997120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997120:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(524), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(520), ctx.gpr[16]);
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    ctx.gpr[16] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(544)));
      if (branch_taken) {
          goto L_08997148;
      }
      goto L_0899713C;
    }
L_0899713C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7872), ctx.gpr[17]);
    aot_gpr_31 = (0x08997148u);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997148u) goto L_08997148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997148:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7868)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_089971C4;
      }
      goto L_08997154;
    }
L_08997154:
    ctx.gpr[18] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4988));
      if (branch_taken) {
          goto L_08997188;
      }
      goto L_08997160;
    }
L_08997160:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0899716Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899716Cu) goto L_0899716C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899716C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08997184;
      }
      goto L_08997178;
    }
L_08997178:
    aot_gpr_31 = (0x08997180u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997180u) goto L_08997180;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997180:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08997184;
L_08997184:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08997188;
L_08997188:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08997194u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997194u) goto L_08997194;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997194:
    aot_gpr_31 = (0x0899719Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 300u, 0x089F5A5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899719Cu) goto L_0899719C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899719C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(520)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089971BCu);
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089971BCu) goto L_089971BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089971BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0899722C;
      }
      goto L_089971C4;
    }
L_089971C4:
    ctx.gpr[18] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4968));
      if (branch_taken) {
          goto L_089971F8;
      }
      goto L_089971D0;
    }
L_089971D0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x089971DCu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089971DCu) goto L_089971DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089971DC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_089971F4;
      }
      goto L_089971E8;
    }
L_089971E8:
    aot_gpr_31 = (0x089971F0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089971F0u) goto L_089971F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089971F0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089971F4;
L_089971F4:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_089971F8;
L_089971F8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08997204u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997204u) goto L_08997204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997204:
    aot_gpr_31 = (0x0899720Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 300u, 0x089F5A5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899720Cu) goto L_0899720C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899720C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(520)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0899722Cu);
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899722Cu) goto L_0899722C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899722C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (2238u << 16u);
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_08997240;
    }
L_08997240:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_0899724C;
    }
L_0899724C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_0899725C;
    }
L_0899725C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089972AC;
      }
      goto L_0899726C;
    }
L_0899726C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089972DC;
      }
      goto L_08997274;
    }
L_08997274:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899734C;
      }
      goto L_0899727C;
    }
L_0899727C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0899732C;
      }
      goto L_08997284;
    }
L_08997284:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
      if (branch_taken) {
          goto L_089972FC;
      }
      goto L_0899728C;
    }
L_0899728C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-13848));
    aot_gpr_31 = (0x089972A4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089972A4u) goto L_089972A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089972A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_089972AC;
    }
L_089972AC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x089972C0u);
    ctx.gpr[16] = (aot_gpr_28 + static_cast<std::uint32_t>(-13844));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089972C0u) goto L_089972C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089972C0:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089972D4u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089972D4u) goto L_089972D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089972D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_089972DC;
    }
L_089972DC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-13836));
    aot_gpr_31 = (0x089972F4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089972F4u) goto L_089972F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089972F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_089972FC;
    }
L_089972FC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08997310u);
    ctx.gpr[16] = (aot_gpr_28 + static_cast<std::uint32_t>(-13828));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997310u) goto L_08997310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997310:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08997324u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997324u) goto L_08997324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997324:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_0899732C;
    }
L_0899732C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-13820));
    aot_gpr_31 = (0x08997344u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997344u) goto L_08997344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997344:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089973B4;
      }
      goto L_0899734C;
    }
L_0899734C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7872)));
    aot_gpr_31 = (0x0899735Cu);
    ctx.gpr[16] = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899735Cu) goto L_0899735C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899735C:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08997374;
      }
      goto L_08997368;
    }
L_08997368:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7872), ctx.gpr[17]);
    aot_gpr_31 = (0x08997374u);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997374u) goto L_08997374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997374:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7868)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
      if (branch_taken) {
          goto L_0899739C;
      }
      goto L_08997380;
    }
L_08997380:
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-13816));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08997394u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997394u) goto L_08997394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997394:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089973B0;
      }
      goto L_0899739C;
    }
L_0899739C:
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-13808));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x089973B0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089973B0u) goto L_089973B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089973B0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    goto L_089973B4;
L_089973B4:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(536)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(540)));
    goto L_089973BC;
L_089973BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08997488;
      }
      goto L_089973C8;
    }
L_089973C8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08997488;
      }
      goto L_089973D0;
    }
L_089973D0:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(512));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-15696));
    aot_gpr_31 = (0x089973E4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089973E4u) goto L_089973E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089973E4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(528)));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08997414;
      }
      goto L_089973F8;
    }
L_089973F8:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08997404u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 846u, 0x08887B30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997404u) goto L_08997404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997404:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089973F8;
      }
      goto L_08997414;
    }
L_08997414:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08997420u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997420u) goto L_08997420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997420:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08997458;
      }
      goto L_0899742C;
    }
L_0899742C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08997438u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997438u) goto L_08997438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997438:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08997450;
      }
      goto L_08997444;
    }
L_08997444:
    aot_gpr_31 = (0x0899744Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899744Cu) goto L_0899744C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899744C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08997450;
L_08997450:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08997458;
L_08997458:
    aot_gpr_31 = (0x08997460u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997460u) goto L_08997460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997460:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0899746Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 846u, 0x08887B30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899746Cu) goto L_0899746C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899746C:
    aot_gpr_31 = (0x08997474u);
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(-8144));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 340u, 0x089F5C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997474u) goto L_08997474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997474:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08997480u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997480u) goto L_08997480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997480:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089974E8;
      }
      goto L_08997488;
    }
L_08997488:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089974C0;
      }
      goto L_08997494;
    }
L_08997494:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x089974A0u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089974A0u) goto L_089974A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089974A0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089974B8;
      }
      goto L_089974AC;
    }
L_089974AC:
    aot_gpr_31 = (0x089974B4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089974B4u) goto L_089974B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089974B4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089974B8;
L_089974B8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089974C0;
L_089974C0:
    aot_gpr_31 = (0x089974C8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089974C8u) goto L_089974C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089974C8:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089974D4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089974D4u) goto L_089974D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089974D4:
    aot_gpr_31 = (0x089974DCu);
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(-8144));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 340u, 0x089F5C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089974DCu) goto L_089974DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089974DC:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x089974E8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089974E8u) goto L_089974E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089974E8:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(548), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      ctx.gpr[23] = aot_run_words[8];
      ctx.gpr[30] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0899751C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    ctx.gpr[30] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(aot_fpr_26), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_31);
    aot_gpr_4 = (0u | 200u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (48819u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[6] = (14673u << 16u);
    aot_gpr_4 = (16051u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_26 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[6] = (ctx.gpr[6] | 46871u);
    aot_gpr_4 = (15820u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13780)));
    aot_gpr_4 = (16000u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13784)));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    goto L_089975FC;
L_089975FC:
    aot_gpr_31 = (0x08997604u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997604u) goto L_08997604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997604:
    aot_fpr_12 = aot_fpr_26 - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08997618u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997618u) goto L_08997618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997618:
    aot_fpr_12 = aot_fpr_26 - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x0899762Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899762Cu) goto L_0899762C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899762C:
    aot_fpr_12 = ctx.fpr[30] - ctx.fpr[24];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_31 = (0x08997648u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997648u) goto L_08997648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997648:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13788)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13792)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0899765Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899765Cu) goto L_0899765C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899765C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[22]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[22] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[23]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 & 255u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-13800), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08997698u);
    ctx.gpr[17] = (ctx.gpr[17] & 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997698u) goto L_08997698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997698:
    aot_fpr_12 = ctx.fpr[28] - ctx.fpr[22];
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-13800)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
      if (branch_taken) {
          goto L_089976B8;
      }
      goto L_089976B0;
    }
L_089976B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089976BC;
      }
      goto L_089976B8;
    }
L_089976B8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_089976BC;
L_089976BC:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 62u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089976E4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089976E4u) goto L_089976E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089976E4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089975FC;
      }
      goto L_089976F4;
    }
L_089976F4:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_fpr_26 = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      ctx.gpr[16] = aot_run_words[6];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0899773C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    ctx.gpr[30] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[15]{aot_gpr_5, std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(aot_fpr_26), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_31);
    aot_gpr_4 = (0u | 144u);
    aot_gpr_5 = (0u | 173u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 196u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 100u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 142u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (14673u << 16u);
    aot_gpr_5 = (0u | 190u);
    aot_gpr_4 = (aot_gpr_4 | 46871u);
    ctx.gpr[6] = (0u | 198u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (0u | 120u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (48819u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16051u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_26 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13780)));
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_4 = (16000u << 16u);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13784)));
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    goto L_08997838;
L_08997838:
    aot_gpr_31 = (0x08997840u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997840u) goto L_08997840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997840:
    aot_fpr_12 = aot_fpr_26 - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08997854u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997854u) goto L_08997854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997854:
    aot_fpr_12 = aot_fpr_26 - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08997868u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997868u) goto L_08997868;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997868:
    aot_fpr_12 = ctx.fpr[30] - ctx.fpr[24];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_31 = (0x08997884u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997884u) goto L_08997884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997884:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13788)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13792)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08997898u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997898u) goto L_08997898;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997898:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[22]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[22] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[23]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 & 255u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-13800), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x089978D4u);
    ctx.gpr[17] = (ctx.gpr[17] & 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089978D4u) goto L_089978D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089978D4:
    aot_fpr_12 = ctx.fpr[28] - ctx.fpr[22];
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-13800)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
      if (branch_taken) {
          goto L_089978F4;
      }
      goto L_089978EC;
    }
L_089978EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089978F8;
      }
      goto L_089978F4;
    }
L_089978F4:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_089978F8;
L_089978F8:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 62u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08997920u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997920u) goto L_08997920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997920:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08997838;
      }
      goto L_08997930;
    }
L_08997930:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (0u | 80u);
    aot_gpr_31 = (0x08997940u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997940u) goto L_08997940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997940:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_fpr_26 = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      ctx.gpr[16] = aot_run_words[6];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08997988:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    ctx.gpr[30] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[15]{aot_gpr_5, std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(aot_fpr_26), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_31);
    aot_gpr_4 = (0u | 144u);
    aot_gpr_5 = (0u | 173u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 196u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 100u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 142u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (14673u << 16u);
    aot_gpr_5 = (0u | 190u);
    aot_gpr_4 = (aot_gpr_4 | 46871u);
    ctx.gpr[6] = (0u | 198u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (0u | 120u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (48819u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16051u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_26 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13780)));
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_4 = (16000u << 16u);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13784)));
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    goto L_08997A84;
L_08997A84:
    aot_gpr_31 = (0x08997A8Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997A8Cu) goto L_08997A8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997A8C:
    aot_fpr_12 = aot_fpr_26 - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08997AA0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997AA0u) goto L_08997AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997AA0:
    aot_fpr_12 = aot_fpr_26 - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08997AB4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997AB4u) goto L_08997AB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997AB4:
    aot_fpr_12 = ctx.fpr[30] - ctx.fpr[24];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_31 = (0x08997AD0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997AD0u) goto L_08997AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997AD0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13788)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13792)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08997AE4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997AE4u) goto L_08997AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997AE4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[22]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[22] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[23]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 & 255u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-13800), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08997B20u);
    ctx.gpr[17] = (ctx.gpr[17] & 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997B20u) goto L_08997B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997B20:
    aot_fpr_12 = ctx.fpr[28] - ctx.fpr[22];
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-13800)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
      if (branch_taken) {
          goto L_08997B40;
      }
      goto L_08997B38;
    }
L_08997B38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08997B44;
      }
      goto L_08997B40;
    }
L_08997B40:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_08997B44;
L_08997B44:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 62u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08997B6Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997B6Cu) goto L_08997B6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997B6C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08997A84;
      }
      goto L_08997B7C;
    }
L_08997B7C:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (0u | 80u);
    aot_gpr_31 = (0x08997B8Cu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997B8Cu) goto L_08997B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997B8C:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_fpr_26 = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      ctx.gpr[16] = aot_run_words[6];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08997BD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08997C00u);
    goto L_0899751C;
L_08997C00:
    aot_gpr_4 = (0u | 84u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08997C10u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997C10u) goto L_08997C10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997C10:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
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
L_08997C24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-192));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[13]{aot_gpr_5, std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(aot_fpr_26), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_run_words); }
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (48819u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (14673u << 16u);
    aot_gpr_4 = (16051u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_26 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 | 46871u);
    aot_gpr_4 = (15820u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (16128u << 16u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[23] = (aot_gpr_28 + static_cast<std::uint32_t>(-13776));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    goto L_08997D04;
L_08997D04:
    aot_gpr_31 = (0x08997D0Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997D0Cu) goto L_08997D0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997D0C:
    aot_fpr_12 = aot_fpr_26 - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08997D20u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997D20u) goto L_08997D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997D20:
    aot_fpr_12 = aot_fpr_26 - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08997D34u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997D34u) goto L_08997D34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997D34:
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[22];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_31 = (0x08997D58u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997D58u) goto L_08997D58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997D58:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13788)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13792)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08997D6Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997D6Cu) goto L_08997D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997D6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13780)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13784)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (aot_gpr_2 >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + aot_gpr_4);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_4 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (aot_gpr_4 & 255u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-13800), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08997DB4u);
    ctx.gpr[18] = (ctx.gpr[18] & 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997DB4u) goto L_08997DB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997DB4:
    aot_fpr_12 = ctx.fpr[30] - ctx.fpr[24];
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-13800)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
      if (branch_taken) {
          goto L_08997DD4;
      }
      goto L_08997DCC;
    }
L_08997DCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08997DD8;
      }
      goto L_08997DD4;
    }
L_08997DD4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    goto L_08997DD8;
L_08997DD8:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 62u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08997E00u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997E00u) goto L_08997E00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997E00:
    aot_gpr_4 = (0u | 7u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.hi);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08997E7C;
      }
      goto L_08997E14;
    }
L_08997E14:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08997E24u);
    ctx.gpr[6] = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997E24u) goto L_08997E24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997E24:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-13800)));
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[8] = (aot_gpr_29 + aot_gpr_4);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (0u | 9u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08997E7Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997E7Cu) goto L_08997E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997E7C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08997D04;
      }
      goto L_08997E8C;
    }
L_08997E8C:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_gpr_4 = (0u | 83u);
    aot_gpr_31 = (0x08997E9Cu);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997E9Cu) goto L_08997E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997E9C:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_fpr_26 = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      ctx.gpr[16] = aot_run_words[6];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08997EE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    ctx.gpr[30] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[15]{aot_gpr_5, std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(aot_fpr_26), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_31);
    aot_gpr_4 = (0u | 200u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (48819u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[6] = (14673u << 16u);
    aot_gpr_4 = (16051u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_26 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[6] = (ctx.gpr[6] | 46871u);
    aot_gpr_4 = (15820u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13780)));
    aot_gpr_4 = (16000u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-13784)));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    goto L_08997FC8;
L_08997FC8:
    aot_gpr_31 = (0x08997FD0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997FD0u) goto L_08997FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997FD0:
    aot_fpr_12 = aot_fpr_26 - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08997FE4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997FE4u) goto L_08997FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997FE4:
    aot_fpr_12 = aot_fpr_26 - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08997FF8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_28, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08997FF8u) goto L_08997FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08997FF8:
    aot_fpr_12 = ctx.fpr[30] - ctx.fpr[24];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.pc = 0x08998000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0100(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0100_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_100(Runtime &runtime) {
    runtime.register_generated_unit(100u, 0x08994000u, 16384u, &recomp_unit_0100, &recomp_unit_0100_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08994000u, &recomp_unit_0100, "recomp_unit_0100",
                                          kEntryMasks_recomp_unit_0100, 64u);
}
} // namespace psprecomp
