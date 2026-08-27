#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0077[64] = {
    0x0008482415550201ull, 0x4020044588AA0000ull, 0x08144D022154AA55ull, 0x112A492AA2911000ull,
    0xA26AA681280010A9ull, 0x00428A9244800040ull, 0x4000080004402000ull, 0xA000080004440108ull,
    0x242124AAA2A49289ull, 0x5584CAA00000A608ull, 0x0042A4A451408AA5ull, 0x2AD54094A04880A0ull,
    0x45028165440CA4CAull, 0x6A56AA201009148Aull, 0x99294A4445090205ull, 0x50410A0089411282ull,
    0x2800082140112822ull, 0x894108A022504020ull, 0x4A84A84A84A844A0ull, 0x900908A0211404A8ull,
    0xB129221081028094ull, 0x2020001090A2500Aull, 0x00D00000A00886A8ull, 0x40085A500512A502ull,
    0xA8A9510080A022AAull, 0x4904020842040A04ull, 0x0940000000090156ull, 0x9012024009092A28ull,
    0x020AA19100484828ull, 0x0414011040020200ull, 0x8200880408108430ull, 0x6944052200000000ull,
    0x4908800900068080ull, 0xA465295284104009ull, 0x15310112949A544Aull, 0xA108408400014010ull,
    0x0912854812000000ull, 0x22512002854C1020ull, 0x002000000000020Cull, 0x840A020052901A28ull,
    0x1288412003094220ull, 0x56904A0220000000ull, 0xA20200882152D25Aull, 0x2500182A8B021022ull,
    0x20000202A20000A0ull, 0x5400008000000032ull, 0x2800000000800880ull, 0x0000C84000001015ull,
    0x0880540000020000ull, 0x1220108232020080ull, 0x20A4A00109409A84ull, 0x0444082164080482ull,
    0x0002000281000422ull, 0x8000C28001080024ull, 0x1280022410222002ull, 0x0200000420102151ull,
    0x4944005545A90111ull, 0x0104010122944294ull, 0x108041114A894801ull, 0x0084209001004124ull,
    0x4104608800280200ull, 0x1001000200008040ull, 0x4010004010040204ull, 0x8020545484400400ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0077[64] = {
    1u, 15u, 27u, 48u, 66u, 86u, 98u, 103u, 111u, 133u, 150u, 169u, 188u, 209u, 230u, 250u,
    265u, 277u, 291u, 311u, 326u, 343u, 355u, 367u, 384u, 403u, 415u, 425u, 440u, 455u, 463u, 474u,
    484u, 495u, 514u, 536u, 546u, 557u, 572u, 576u, 591u, 605u, 616u, 635u, 651u, 659u, 666u, 671u,
    679u, 685u, 696u, 712u, 725u, 732u, 741u, 752u, 761u, 780u, 794u, 809u, 819u, 829u, 834u, 841u,
};
void recomp_unit_0077_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,29,6,16 fprs=12,13,14,15 gpr_occ=4509 fpr_occ=147 gpr_total=6485 fpr_total=170
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08938000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0077[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0077[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08938000;
    case 2u: goto L_08938024;
    case 3u: goto L_08938040;
    case 4u: goto L_08938048;
    case 5u: goto L_08938050;
    case 6u: goto L_08938058;
    case 7u: goto L_08938060;
    case 8u: goto L_08938068;
    case 9u: goto L_08938070;
    case 10u: goto L_08938088;
    case 11u: goto L_08938094;
    case 12u: goto L_089380AC;
    case 13u: goto L_089380B8;
    case 14u: goto L_089380CC;
    case 15u: goto L_08938144;
    case 16u: goto L_0893814C;
    case 17u: goto L_08938154;
    case 18u: goto L_0893815C;
    case 19u: goto L_0893816C;
    case 20u: goto L_0893817C;
    case 21u: goto L_08938180;
    case 22u: goto L_08938188;
    case 23u: goto L_08938198;
    case 24u: goto L_089381A8;
    case 25u: goto L_089381D4;
    case 26u: goto L_089381F8;
    case 27u: goto L_08938200;
    case 28u: goto L_08938208;
    case 29u: goto L_08938210;
    case 30u: goto L_08938218;
    case 31u: goto L_08938224;
    case 32u: goto L_0893822C;
    case 33u: goto L_08938234;
    case 34u: goto L_0893823C;
    case 35u: goto L_08938248;
    case 36u: goto L_08938250;
    case 37u: goto L_08938258;
    case 38u: goto L_08938260;
    case 39u: goto L_08938274;
    case 40u: goto L_08938284;
    case 41u: goto L_089382A0;
    case 42u: goto L_089382A8;
    case 43u: goto L_089382AC;
    case 44u: goto L_089382B8;
    case 45u: goto L_089382C8;
    case 46u: goto L_089382D0;
    case 47u: goto L_089382EC;
    case 48u: goto L_08938330;
    case 49u: goto L_08938340;
    case 50u: goto L_08938350;
    case 51u: goto L_0893835C;
    case 52u: goto L_08938364;
    case 53u: goto L_08938374;
    case 54u: goto L_0893837C;
    case 55u: goto L_08938384;
    case 56u: goto L_0893838C;
    case 57u: goto L_08938394;
    case 58u: goto L_089383A0;
    case 59u: goto L_089383AC;
    case 60u: goto L_089383B8;
    case 61u: goto L_089383C4;
    case 62u: goto L_089383CC;
    case 63u: goto L_089383D4;
    case 64u: goto L_089383E0;
    case 65u: goto L_089383F0;
    case 66u: goto L_08938400;
    case 67u: goto L_0893840C;
    case 68u: goto L_08938414;
    case 69u: goto L_0893841C;
    case 70u: goto L_08938430;
    case 71u: goto L_0893846C;
    case 72u: goto L_08938474;
    case 73u: goto L_08938480;
    case 74u: goto L_0893849C;
    case 75u: goto L_089384A4;
    case 76u: goto L_089384A8;
    case 77u: goto L_089384B4;
    case 78u: goto L_089384BC;
    case 79u: goto L_089384C4;
    case 80u: goto L_089384CC;
    case 81u: goto L_089384D4;
    case 82u: goto L_089384D8;
    case 83u: goto L_089384E4;
    case 84u: goto L_089384F4;
    case 85u: goto L_089384FC;
    case 86u: goto L_08938518;
    case 87u: goto L_0893855C;
    case 88u: goto L_08938568;
    case 89u: goto L_08938578;
    case 90u: goto L_08938584;
    case 91u: goto L_08938590;
    case 92u: goto L_0893859C;
    case 93u: goto L_089385A4;
    case 94u: goto L_089385AC;
    case 95u: goto L_089385BC;
    case 96u: goto L_089385C4;
    case 97u: goto L_089385D8;
    case 98u: goto L_08938634;
    case 99u: goto L_08938658;
    case 100u: goto L_08938668;
    case 101u: goto L_089386AC;
    case 102u: goto L_089386F8;
    case 103u: goto L_0893870C;
    case 104u: goto L_08938720;
    case 105u: goto L_08938748;
    case 106u: goto L_08938758;
    case 107u: goto L_08938768;
    case 108u: goto L_089387AC;
    case 109u: goto L_089387F4;
    case 110u: goto L_089387FC;
    case 111u: goto L_08938800;
    case 112u: goto L_0893880C;
    case 113u: goto L_0893881C;
    case 114u: goto L_08938824;
    case 115u: goto L_08938830;
    case 116u: goto L_0893883C;
    case 117u: goto L_08938848;
    case 118u: goto L_08938854;
    case 119u: goto L_0893885C;
    case 120u: goto L_08938864;
    case 121u: goto L_08938874;
    case 122u: goto L_0893887C;
    case 123u: goto L_08938884;
    case 124u: goto L_0893888C;
    case 125u: goto L_08938894;
    case 126u: goto L_0893889C;
    case 127u: goto L_089388A8;
    case 128u: goto L_089388B4;
    case 129u: goto L_089388C0;
    case 130u: goto L_089388D4;
    case 131u: goto L_089388E8;
    case 132u: goto L_089388F4;
    case 133u: goto L_0893890C;
    case 134u: goto L_08938924;
    case 135u: goto L_08938928;
    case 136u: goto L_08938934;
    case 137u: goto L_0893893C;
    case 138u: goto L_08938994;
    case 139u: goto L_0893899C;
    case 140u: goto L_089389A4;
    case 141u: goto L_089389AC;
    case 142u: goto L_089389B8;
    case 143u: goto L_089389BC;
    case 144u: goto L_089389C8;
    case 145u: goto L_089389DC;
    case 146u: goto L_089389E0;
    case 147u: goto L_089389E8;
    case 148u: goto L_089389F0;
    case 149u: goto L_089389F8;
    case 150u: goto L_08938A00;
    case 151u: goto L_08938A08;
    case 152u: goto L_08938A14;
    case 153u: goto L_08938A1C;
    case 154u: goto L_08938A24;
    case 155u: goto L_08938A2C;
    case 156u: goto L_08938A3C;
    case 157u: goto L_08938A58;
    case 158u: goto L_08938A60;
    case 159u: goto L_08938A70;
    case 160u: goto L_08938A78;
    case 161u: goto L_08938A88;
    case 162u: goto L_08938A94;
    case 163u: goto L_08938A9C;
    case 164u: goto L_08938AA8;
    case 165u: goto L_08938AB4;
    case 166u: goto L_08938ABC;
    case 167u: goto L_08938AC4;
    case 168u: goto L_08938AD8;
    case 169u: goto L_08938B14;
    case 170u: goto L_08938B1C;
    case 171u: goto L_08938B3C;
    case 172u: goto L_08938B4C;
    case 173u: goto L_08938B58;
    case 174u: goto L_08938B74;
    case 175u: goto L_08938B7C;
    case 176u: goto L_08938B88;
    case 177u: goto L_08938B90;
    case 178u: goto L_08938B9C;
    case 179u: goto L_08938BB8;
    case 180u: goto L_08938BC0;
    case 181u: goto L_08938BC8;
    case 182u: goto L_08938BD0;
    case 183u: goto L_08938BD8;
    case 184u: goto L_08938BDC;
    case 185u: goto L_08938BE4;
    case 186u: goto L_08938BEC;
    case 187u: goto L_08938BF4;
    case 188u: goto L_08938C04;
    case 189u: goto L_08938C0C;
    case 190u: goto L_08938C18;
    case 191u: goto L_08938C1C;
    case 192u: goto L_08938C28;
    case 193u: goto L_08938C34;
    case 194u: goto L_08938C3C;
    case 195u: goto L_08938C48;
    case 196u: goto L_08938C4C;
    case 197u: goto L_08938C68;
    case 198u: goto L_08938C78;
    case 199u: goto L_08938C80;
    case 200u: goto L_08938C88;
    case 201u: goto L_08938C94;
    case 202u: goto L_08938C98;
    case 203u: goto L_08938CA0;
    case 204u: goto L_08938CBC;
    case 205u: goto L_08938CC4;
    case 206u: goto L_08938CE0;
    case 207u: goto L_08938CE8;
    case 208u: goto L_08938CF8;
    case 209u: goto L_08938D04;
    case 210u: goto L_08938D0C;
    case 211u: goto L_08938D1C;
    case 212u: goto L_08938D28;
    case 213u: goto L_08938D30;
    case 214u: goto L_08938D40;
    case 215u: goto L_08938D4C;
    case 216u: goto L_08938D70;
    case 217u: goto L_08938D94;
    case 218u: goto L_08938DA4;
    case 219u: goto L_08938DAC;
    case 220u: goto L_08938DB4;
    case 221u: goto L_08938DBC;
    case 222u: goto L_08938DC4;
    case 223u: goto L_08938DC8;
    case 224u: goto L_08938DD0;
    case 225u: goto L_08938DD8;
    case 226u: goto L_08938DE4;
    case 227u: goto L_08938DEC;
    case 228u: goto L_08938DF4;
    case 229u: goto L_08938DF8;
    case 230u: goto L_08938E00;
    case 231u: goto L_08938E08;
    case 232u: goto L_08938E24;
    case 233u: goto L_08938E40;
    case 234u: goto L_08938E4C;
    case 235u: goto L_08938E60;
    case 236u: goto L_08938E68;
    case 237u: goto L_08938E78;
    case 238u: goto L_08938E88;
    case 239u: goto L_08938E98;
    case 240u: goto L_08938EA4;
    case 241u: goto L_08938EAC;
    case 242u: goto L_08938EB8;
    case 243u: goto L_08938EC0;
    case 244u: goto L_08938ECC;
    case 245u: goto L_08938ED4;
    case 246u: goto L_08938EE0;
    case 247u: goto L_08938EEC;
    case 248u: goto L_08938EF0;
    case 249u: goto L_08938EFC;
    case 250u: goto L_08938F04;
    case 251u: goto L_08938F1C;
    case 252u: goto L_08938F24;
    case 253u: goto L_08938F30;
    case 254u: goto L_08938F40;
    case 255u: goto L_08938F58;
    case 256u: goto L_08938F60;
    case 257u: goto L_08938F6C;
    case 258u: goto L_08938F7C;
    case 259u: goto L_08938FA4;
    case 260u: goto L_08938FAC;
    case 261u: goto L_08938FC0;
    case 262u: goto L_08938FD8;
    case 263u: goto L_08938FF0;
    case 264u: goto L_08938FF8;
    case 265u: goto L_08939004;
    case 266u: goto L_08939014;
    case 267u: goto L_0893902C;
    case 268u: goto L_08939034;
    case 269u: goto L_08939040;
    case 270u: goto L_08939050;
    case 271u: goto L_08939078;
    case 272u: goto L_08939080;
    case 273u: goto L_08939094;
    case 274u: goto L_089390AC;
    case 275u: goto L_089390EC;
    case 276u: goto L_089390F4;
    case 277u: goto L_08939114;
    case 278u: goto L_08939138;
    case 279u: goto L_08939150;
    case 280u: goto L_08939158;
    case 281u: goto L_08939164;
    case 282u: goto L_08939174;
    case 283u: goto L_08939194;
    case 284u: goto L_0893919C;
    case 285u: goto L_089391AC;
    case 286u: goto L_089391C0;
    case 287u: goto L_089391D8;
    case 288u: goto L_089391E0;
    case 289u: goto L_089391EC;
    case 290u: goto L_089391FC;
    case 291u: goto L_08939214;
    case 292u: goto L_0893921C;
    case 293u: goto L_08939228;
    case 294u: goto L_08939238;
    case 295u: goto L_0893924C;
    case 296u: goto L_08939254;
    case 297u: goto L_0893925C;
    case 298u: goto L_08939268;
    case 299u: goto L_0893927C;
    case 300u: goto L_08939284;
    case 301u: goto L_0893928C;
    case 302u: goto L_08939298;
    case 303u: goto L_089392AC;
    case 304u: goto L_089392B4;
    case 305u: goto L_089392BC;
    case 306u: goto L_089392C8;
    case 307u: goto L_089392DC;
    case 308u: goto L_089392E4;
    case 309u: goto L_089392EC;
    case 310u: goto L_089392F8;
    case 311u: goto L_0893930C;
    case 312u: goto L_08939314;
    case 313u: goto L_0893931C;
    case 314u: goto L_08939328;
    case 315u: goto L_08939348;
    case 316u: goto L_08939350;
    case 317u: goto L_08939360;
    case 318u: goto L_08939374;
    case 319u: goto L_08939394;
    case 320u: goto L_0893939C;
    case 321u: goto L_089393AC;
    case 322u: goto L_089393C0;
    case 323u: goto L_089393CC;
    case 324u: goto L_089393F0;
    case 325u: goto L_089393FC;
    case 326u: goto L_08939408;
    case 327u: goto L_08939410;
    case 328u: goto L_0893941C;
    case 329u: goto L_0893943C;
    case 330u: goto L_08939444;
    case 331u: goto L_08939460;
    case 332u: goto L_0893947C;
    case 333u: goto L_08939490;
    case 334u: goto L_089394A4;
    case 335u: goto L_089394B4;
    case 336u: goto L_089394C0;
    case 337u: goto L_089394CC;
    case 338u: goto L_089394D4;
    case 339u: goto L_089394E0;
    case 340u: goto L_089394F0;
    case 341u: goto L_089394F4;
    case 342u: goto L_089394FC;
    case 343u: goto L_08939504;
    case 344u: goto L_0893950C;
    case 345u: goto L_08939530;
    case 346u: goto L_08939538;
    case 347u: goto L_08939544;
    case 348u: goto L_08939554;
    case 349u: goto L_0893955C;
    case 350u: goto L_08939570;
    case 351u: goto L_0893957C;
    case 352u: goto L_08939590;
    case 353u: goto L_089395D4;
    case 354u: goto L_089395F4;
    case 355u: goto L_0893960C;
    case 356u: goto L_08939614;
    case 357u: goto L_0893961C;
    case 358u: goto L_08939624;
    case 359u: goto L_08939628;
    case 360u: goto L_0893963C;
    case 361u: goto L_0893964C;
    case 362u: goto L_08939674;
    case 363u: goto L_0893967C;
    case 364u: goto L_089396D0;
    case 365u: goto L_089396D8;
    case 366u: goto L_089396DC;
    case 367u: goto L_08939704;
    case 368u: goto L_08939720;
    case 369u: goto L_08939728;
    case 370u: goto L_08939734;
    case 371u: goto L_0893973C;
    case 372u: goto L_08939744;
    case 373u: goto L_08939750;
    case 374u: goto L_08939760;
    case 375u: goto L_08939768;
    case 376u: goto L_08939790;
    case 377u: goto L_08939798;
    case 378u: goto L_089397A4;
    case 379u: goto L_089397AC;
    case 380u: goto L_089397B0;
    case 381u: goto L_089397B8;
    case 382u: goto L_089397CC;
    case 383u: goto L_089397F8;
    case 384u: goto L_08939804;
    case 385u: goto L_0893980C;
    case 386u: goto L_08939814;
    case 387u: goto L_0893981C;
    case 388u: goto L_08939824;
    case 389u: goto L_08939834;
    case 390u: goto L_08939854;
    case 391u: goto L_0893985C;
    case 392u: goto L_0893987C;
    case 393u: goto L_089398A0;
    case 394u: goto L_089398B0;
    case 395u: goto L_089398B8;
    case 396u: goto L_089398C0;
    case 397u: goto L_089398CC;
    case 398u: goto L_089398D4;
    case 399u: goto L_089398DC;
    case 400u: goto L_089398EC;
    case 401u: goto L_089398F4;
    case 402u: goto L_089398FC;
    case 403u: goto L_08939908;
    case 404u: goto L_08939924;
    case 405u: goto L_0893992C;
    case 406u: goto L_08939948;
    case 407u: goto L_08939964;
    case 408u: goto L_08939978;
    case 409u: goto L_0893998C;
    case 410u: goto L_089399A4;
    case 411u: goto L_089399C8;
    case 412u: goto L_089399E0;
    case 413u: goto L_089399EC;
    case 414u: goto L_089399F8;
    case 415u: goto L_08939A04;
    case 416u: goto L_08939A08;
    case 417u: goto L_08939A10;
    case 418u: goto L_08939A18;
    case 419u: goto L_08939A20;
    case 420u: goto L_08939A40;
    case 421u: goto L_08939A4C;
    case 422u: goto L_08939AD8;
    case 423u: goto L_08939AE0;
    case 424u: goto L_08939AEC;
    case 425u: goto L_08939B0C;
    case 426u: goto L_08939B14;
    case 427u: goto L_08939B24;
    case 428u: goto L_08939B2C;
    case 429u: goto L_08939B34;
    case 430u: goto L_08939B40;
    case 431u: goto L_08939B4C;
    case 432u: goto L_08939B60;
    case 433u: goto L_08939B6C;
    case 434u: goto L_08939B98;
    case 435u: goto L_08939BA4;
    case 436u: goto L_08939BC4;
    case 437u: goto L_08939BD0;
    case 438u: goto L_08939BF0;
    case 439u: goto L_08939BFC;
    case 440u: goto L_08939C0C;
    case 441u: goto L_08939C14;
    case 442u: goto L_08939C2C;
    case 443u: goto L_08939C38;
    case 444u: goto L_08939C4C;
    case 445u: goto L_08939C58;
    case 446u: goto L_08939C80;
    case 447u: goto L_08939C90;
    case 448u: goto L_08939C9C;
    case 449u: goto L_08939CA0;
    case 450u: goto L_08939CB4;
    case 451u: goto L_08939CBC;
    case 452u: goto L_08939CC4;
    case 453u: goto L_08939CCC;
    case 454u: goto L_08939CE4;
    case 455u: goto L_08939D24;
    case 456u: goto L_08939D44;
    case 457u: goto L_08939D78;
    case 458u: goto L_08939D90;
    case 459u: goto L_08939DA0;
    case 460u: goto L_08939DC8;
    case 461u: goto L_08939DD0;
    case 462u: goto L_08939DE8;
    case 463u: goto L_08939E10;
    case 464u: goto L_08939E14;
    case 465u: goto L_08939E28;
    case 466u: goto L_08939E3C;
    case 467u: goto L_08939E50;
    case 468u: goto L_08939E6C;
    case 469u: goto L_08939E88;
    case 470u: goto L_08939EAC;
    case 471u: goto L_08939EBC;
    case 472u: goto L_08939EE4;
    case 473u: goto L_08939EFC;
    case 474u: goto L_08939F84;
    case 475u: goto L_08939F94;
    case 476u: goto L_08939FA0;
    case 477u: goto L_08939FA8;
    case 478u: goto L_08939FC8;
    case 479u: goto L_08939FD8;
    case 480u: goto L_08939FE0;
    case 481u: goto L_08939FEC;
    case 482u: goto L_08939FF4;
    case 483u: goto L_08939FF8;
    case 484u: goto L_0893A01C;
    case 485u: goto L_0893A03C;
    case 486u: goto L_0893A044;
    case 487u: goto L_0893A048;
    case 488u: goto L_0893A080;
    case 489u: goto L_0893A08C;
    case 490u: goto L_0893A0BC;
    case 491u: goto L_0893A0CC;
    case 492u: goto L_0893A0E0;
    case 493u: goto L_0893A0EC;
    case 494u: goto L_0893A0F8;
    case 495u: goto L_0893A100;
    case 496u: goto L_0893A10C;
    case 497u: goto L_0893A138;
    case 498u: goto L_0893A150;
    case 499u: goto L_0893A168;
    case 500u: goto L_0893A17C;
    case 501u: goto L_0893A184;
    case 502u: goto L_0893A190;
    case 503u: goto L_0893A198;
    case 504u: goto L_0893A1A0;
    case 505u: goto L_0893A1AC;
    case 506u: goto L_0893A1B4;
    case 507u: goto L_0893A1C0;
    case 508u: goto L_0893A1C8;
    case 509u: goto L_0893A1D4;
    case 510u: goto L_0893A1D8;
    case 511u: goto L_0893A1E8;
    case 512u: goto L_0893A1F4;
    case 513u: goto L_0893A1FC;
    case 514u: goto L_0893A204;
    case 515u: goto L_0893A20C;
    case 516u: goto L_0893A218;
    case 517u: goto L_0893A228;
    case 518u: goto L_0893A230;
    case 519u: goto L_0893A238;
    case 520u: goto L_0893A244;
    case 521u: goto L_0893A24C;
    case 522u: goto L_0893A250;
    case 523u: goto L_0893A25C;
    case 524u: goto L_0893A268;
    case 525u: goto L_0893A270;
    case 526u: goto L_0893A27C;
    case 527u: goto L_0893A284;
    case 528u: goto L_0893A290;
    case 529u: goto L_0893A2A0;
    case 530u: goto L_0893A2C0;
    case 531u: goto L_0893A2D0;
    case 532u: goto L_0893A2D4;
    case 533u: goto L_0893A2E0;
    case 534u: goto L_0893A2E8;
    case 535u: goto L_0893A2F0;
    case 536u: goto L_0893A310;
    case 537u: goto L_0893A338;
    case 538u: goto L_0893A340;
    case 539u: goto L_0893A388;
    case 540u: goto L_0893A39C;
    case 541u: goto L_0893A3B8;
    case 542u: goto L_0893A3CC;
    case 543u: goto L_0893A3E0;
    case 544u: goto L_0893A3F4;
    case 545u: goto L_0893A3FC;
    case 546u: goto L_0893A464;
    case 547u: goto L_0893A470;
    case 548u: goto L_0893A48C;
    case 549u: goto L_0893A498;
    case 550u: goto L_0893A4A0;
    case 551u: goto L_0893A4A8;
    case 552u: goto L_0893A4BC;
    case 553u: goto L_0893A4C4;
    case 554u: goto L_0893A4D0;
    case 555u: goto L_0893A4E0;
    case 556u: goto L_0893A4EC;
    case 557u: goto L_0893A514;
    case 558u: goto L_0893A530;
    case 559u: goto L_0893A548;
    case 560u: goto L_0893A54C;
    case 561u: goto L_0893A558;
    case 562u: goto L_0893A560;
    case 563u: goto L_0893A568;
    case 564u: goto L_0893A57C;
    case 565u: goto L_0893A584;
    case 566u: goto L_0893A5B4;
    case 567u: goto L_0893A5C0;
    case 568u: goto L_0893A5D0;
    case 569u: goto L_0893A5D8;
    case 570u: goto L_0893A5E4;
    case 571u: goto L_0893A5F4;
    case 572u: goto L_0893A608;
    case 573u: goto L_0893A60C;
    case 574u: goto L_0893A624;
    case 575u: goto L_0893A6D4;
    case 576u: goto L_0893A70C;
    case 577u: goto L_0893A714;
    case 578u: goto L_0893A724;
    case 579u: goto L_0893A72C;
    case 580u: goto L_0893A730;
    case 581u: goto L_0893A750;
    case 582u: goto L_0893A75C;
    case 583u: goto L_0893A764;
    case 584u: goto L_0893A770;
    case 585u: goto L_0893A778;
    case 586u: goto L_0893A7A4;
    case 587u: goto L_0893A7C4;
    case 588u: goto L_0893A7CC;
    case 589u: goto L_0893A7E8;
    case 590u: goto L_0893A7FC;
    case 591u: goto L_0893A814;
    case 592u: goto L_0893A824;
    case 593u: goto L_0893A838;
    case 594u: goto L_0893A840;
    case 595u: goto L_0893A84C;
    case 596u: goto L_0893A860;
    case 597u: goto L_0893A864;
    case 598u: goto L_0893A894;
    case 599u: goto L_0893A8A0;
    case 600u: goto L_0893A8B8;
    case 601u: goto L_0893A8CC;
    case 602u: goto L_0893A8DC;
    case 603u: goto L_0893A8E4;
    case 604u: goto L_0893A8F0;
    case 605u: goto L_0893A974;
    case 606u: goto L_0893A984;
    case 607u: goto L_0893A9A4;
    case 608u: goto L_0893A9AC;
    case 609u: goto L_0893A9B8;
    case 610u: goto L_0893A9D0;
    case 611u: goto L_0893A9DC;
    case 612u: goto L_0893A9E4;
    case 613u: goto L_0893A9E8;
    case 614u: goto L_0893A9F0;
    case 615u: goto L_0893A9F8;
    case 616u: goto L_0893AA04;
    case 617u: goto L_0893AA0C;
    case 618u: goto L_0893AA10;
    case 619u: goto L_0893AA18;
    case 620u: goto L_0893AA24;
    case 621u: goto L_0893AA30;
    case 622u: goto L_0893AA38;
    case 623u: goto L_0893AA3C;
    case 624u: goto L_0893AA44;
    case 625u: goto L_0893AA50;
    case 626u: goto L_0893AA58;
    case 627u: goto L_0893AA60;
    case 628u: goto L_0893AA74;
    case 629u: goto L_0893AA8C;
    case 630u: goto L_0893AA9C;
    case 631u: goto L_0893AAC4;
    case 632u: goto L_0893AAE4;
    case 633u: goto L_0893AAF4;
    case 634u: goto L_0893AAFC;
    case 635u: goto L_0893AB04;
    case 636u: goto L_0893AB14;
    case 637u: goto L_0893AB30;
    case 638u: goto L_0893AB44;
    case 639u: goto L_0893AB60;
    case 640u: goto L_0893AB64;
    case 641u: goto L_0893AB6C;
    case 642u: goto L_0893AB7C;
    case 643u: goto L_0893AB84;
    case 644u: goto L_0893AB8C;
    case 645u: goto L_0893AB94;
    case 646u: goto L_0893ABAC;
    case 647u: goto L_0893ABB0;
    case 648u: goto L_0893ABE0;
    case 649u: goto L_0893ABE8;
    case 650u: goto L_0893ABF4;
    case 651u: goto L_0893AC14;
    case 652u: goto L_0893AC1C;
    case 653u: goto L_0893AC64;
    case 654u: goto L_0893AC74;
    case 655u: goto L_0893AC7C;
    case 656u: goto L_0893AC84;
    case 657u: goto L_0893ACA4;
    case 658u: goto L_0893ACF4;
    case 659u: goto L_0893AD04;
    case 660u: goto L_0893AD10;
    case 661u: goto L_0893AD14;
    case 662u: goto L_0893AD9C;
    case 663u: goto L_0893ADE8;
    case 664u: goto L_0893ADF0;
    case 665u: goto L_0893ADF8;
    case 666u: goto L_0893AE1C;
    case 667u: goto L_0893AE2C;
    case 668u: goto L_0893AE5C;
    case 669u: goto L_0893AEEC;
    case 670u: goto L_0893AEF4;
    case 671u: goto L_0893AF00;
    case 672u: goto L_0893AF08;
    case 673u: goto L_0893AF10;
    case 674u: goto L_0893AF30;
    case 675u: goto L_0893AF98;
    case 676u: goto L_0893AFAC;
    case 677u: goto L_0893AFB8;
    case 678u: goto L_0893AFBC;
    case 679u: goto L_0893B044;
    case 680u: goto L_0893B0A8;
    case 681u: goto L_0893B0B0;
    case 682u: goto L_0893B0B8;
    case 683u: goto L_0893B0DC;
    case 684u: goto L_0893B0EC;
    case 685u: goto L_0893B11C;
    case 686u: goto L_0893B144;
    case 687u: goto L_0893B164;
    case 688u: goto L_0893B170;
    case 689u: goto L_0893B174;
    case 690u: goto L_0893B184;
    case 691u: goto L_0893B19C;
    case 692u: goto L_0893B1B0;
    case 693u: goto L_0893B1D4;
    case 694u: goto L_0893B1E4;
    case 695u: goto L_0893B1F0;
    case 696u: goto L_0893B208;
    case 697u: goto L_0893B21C;
    case 698u: goto L_0893B224;
    case 699u: goto L_0893B22C;
    case 700u: goto L_0893B230;
    case 701u: goto L_0893B23C;
    case 702u: goto L_0893B258;
    case 703u: goto L_0893B260;
    case 704u: goto L_0893B26C;
    case 705u: goto L_0893B280;
    case 706u: goto L_0893B2B4;
    case 707u: goto L_0893B2BC;
    case 708u: goto L_0893B2C8;
    case 709u: goto L_0893B2D4;
    case 710u: goto L_0893B2DC;
    case 711u: goto L_0893B2F4;
    case 712u: goto L_0893B304;
    case 713u: goto L_0893B31C;
    case 714u: goto L_0893B328;
    case 715u: goto L_0893B34C;
    case 716u: goto L_0893B368;
    case 717u: goto L_0893B374;
    case 718u: goto L_0893B378;
    case 719u: goto L_0893B380;
    case 720u: goto L_0893B394;
    case 721u: goto L_0893B3AC;
    case 722u: goto L_0893B3C8;
    case 723u: goto L_0893B3D8;
    case 724u: goto L_0893B3E8;
    case 725u: goto L_0893B404;
    case 726u: goto L_0893B414;
    case 727u: goto L_0893B428;
    case 728u: goto L_0893B460;
    case 729u: goto L_0893B47C;
    case 730u: goto L_0893B484;
    case 731u: goto L_0893B4C4;
    case 732u: goto L_0893B508;
    case 733u: goto L_0893B514;
    case 734u: goto L_0893B54C;
    case 735u: goto L_0893B560;
    case 736u: goto L_0893B59C;
    case 737u: goto L_0893B5A4;
    case 738u: goto L_0893B5B8;
    case 739u: goto L_0893B5BC;
    case 740u: goto L_0893B5FC;
    case 741u: goto L_0893B604;
    case 742u: goto L_0893B634;
    case 743u: goto L_0893B644;
    case 744u: goto L_0893B654;
    case 745u: goto L_0893B670;
    case 746u: goto L_0893B688;
    case 747u: goto L_0893B694;
    case 748u: goto L_0893B6A4;
    case 749u: goto L_0893B6DC;
    case 750u: goto L_0893B6E4;
    case 751u: goto L_0893B6F0;
    case 752u: goto L_0893B700;
    case 753u: goto L_0893B710;
    case 754u: goto L_0893B718;
    case 755u: goto L_0893B720;
    case 756u: goto L_0893B734;
    case 757u: goto L_0893B750;
    case 758u: goto L_0893B774;
    case 759u: goto L_0893B788;
    case 760u: goto L_0893B7E4;
    case 761u: goto L_0893B800;
    case 762u: goto L_0893B810;
    case 763u: goto L_0893B820;
    case 764u: goto L_0893B840;
    case 765u: goto L_0893B84C;
    case 766u: goto L_0893B854;
    case 767u: goto L_0893B85C;
    case 768u: goto L_0893B860;
    case 769u: goto L_0893B868;
    case 770u: goto L_0893B878;
    case 771u: goto L_0893B880;
    case 772u: goto L_0893B888;
    case 773u: goto L_0893B890;
    case 774u: goto L_0893B898;
    case 775u: goto L_0893B8C8;
    case 776u: goto L_0893B8D8;
    case 777u: goto L_0893B8E0;
    case 778u: goto L_0893B8EC;
    case 779u: goto L_0893B8F8;
    case 780u: goto L_0893B908;
    case 781u: goto L_0893B910;
    case 782u: goto L_0893B91C;
    case 783u: goto L_0893B924;
    case 784u: goto L_0893B938;
    case 785u: goto L_0893B948;
    case 786u: goto L_0893B950;
    case 787u: goto L_0893B95C;
    case 788u: goto L_0893B964;
    case 789u: goto L_0893B974;
    case 790u: goto L_0893B980;
    case 791u: goto L_0893B9A0;
    case 792u: goto L_0893B9C8;
    case 793u: goto L_0893B9E0;
    case 794u: goto L_0893BA00;
    case 795u: goto L_0893BA2C;
    case 796u: goto L_0893BA38;
    case 797u: goto L_0893BA40;
    case 798u: goto L_0893BA4C;
    case 799u: goto L_0893BA5C;
    case 800u: goto L_0893BA64;
    case 801u: goto L_0893BA6C;
    case 802u: goto L_0893BA78;
    case 803u: goto L_0893BA80;
    case 804u: goto L_0893BA90;
    case 805u: goto L_0893BAA0;
    case 806u: goto L_0893BAB8;
    case 807u: goto L_0893BADC;
    case 808u: goto L_0893BAF0;
    case 809u: goto L_0893BB08;
    case 810u: goto L_0893BB14;
    case 811u: goto L_0893BB20;
    case 812u: goto L_0893BB38;
    case 813u: goto L_0893BB60;
    case 814u: goto L_0893BB90;
    case 815u: goto L_0893BB9C;
    case 816u: goto L_0893BBB4;
    case 817u: goto L_0893BBC8;
    case 818u: goto L_0893BBDC;
    case 819u: goto L_0893BC24;
    case 820u: goto L_0893BC4C;
    case 821u: goto L_0893BC54;
    case 822u: goto L_0893BC8C;
    case 823u: goto L_0893BC9C;
    case 824u: goto L_0893BCB4;
    case 825u: goto L_0893BCB8;
    case 826u: goto L_0893BCC8;
    case 827u: goto L_0893BCE0;
    case 828u: goto L_0893BCF8;
    case 829u: goto L_0893BD18;
    case 830u: goto L_0893BD3C;
    case 831u: goto L_0893BD84;
    case 832u: goto L_0893BDC0;
    case 833u: goto L_0893BDF0;
    case 834u: goto L_0893BE08;
    case 835u: goto L_0893BE24;
    case 836u: goto L_0893BE48;
    case 837u: goto L_0893BE70;
    case 838u: goto L_0893BE98;
    case 839u: goto L_0893BED0;
    case 840u: goto L_0893BEF8;
    case 841u: goto L_0893BF28;
    case 842u: goto L_0893BF58;
    case 843u: goto L_0893BF68;
    case 844u: goto L_0893BF7C;
    case 845u: goto L_0893BF88;
    case 846u: goto L_0893BF90;
    case 847u: goto L_0893BF98;
    case 848u: goto L_0893BFA8;
    case 849u: goto L_0893BFB0;
    case 850u: goto L_0893BFB8;
    case 851u: goto L_0893BFD4;
    case 852u: goto L_0893BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08938000:
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (ctx.gpr[7] | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08938050;
      }
      goto L_08938024;
    }
L_08938024:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08938050;
      }
      goto L_08938040;
    }
L_08938040:
    aot_gpr_31 = (0x08938048u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938048u) goto L_08938048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938048:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08938068;
      }
      goto L_08938050;
    }
L_08938050:
    aot_gpr_31 = (0x08938058u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938058u) goto L_08938058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938058:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
        goto L_08938070;
    }
    goto L_08938060;
L_08938060:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089380B8;
      }
      goto L_08938068;
    }
L_08938068:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089380B8;
      }
      goto L_08938070;
    }
L_08938070:
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089380B8;
      }
      goto L_08938088;
    }
L_08938088:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08938094u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 708u, 0x089AB5A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938094u) goto L_08938094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938094:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x089380ACu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089380ACu) goto L_089380AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089380AC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089380B8u);
    aot_gpr_5 = (0u | 700u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089380B8u) goto L_089380B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089380B8:
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
L_089380CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    { const std::uint32_t aot_run_words[6]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words); }
    aot_gpr_31 = (0x08938144u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938144u) goto L_08938144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938144:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_0893814C;
    }
L_0893814C:
    aot_gpr_31 = (0x08938154u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938154u) goto L_08938154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938154:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_0893815C;
    }
L_0893815C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 2u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
        goto L_08938180;
    }
    goto L_0893816C;
L_0893816C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_0893817C;
    }
L_0893817C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    goto L_08938180;
L_08938180:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_08938188;
    }
L_08938188:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
    ctx.gpr[20] = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_08938198;
    }
L_08938198:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
    aot_gpr_5 = (0u | 18u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_089381A8;
    }
L_089381A8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (17249u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_089381D4;
    }
L_089381D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (aot_gpr_4 ^ 13u);
    aot_gpr_4 = (aot_gpr_4 ^ 15u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08938208;
      }
      goto L_089381F8;
    }
L_089381F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938218;
      }
      goto L_08938200;
    }
L_08938200:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938208;
    }
L_08938208:
    aot_gpr_31 = (0x08938210u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938210u) goto L_08938210;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938210:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
      if (branch_taken) {
          goto L_0893822C;
      }
      goto L_08938218;
    }
L_08938218:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08938234;
      }
      goto L_08938224;
    }
L_08938224:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938260;
      }
      goto L_0893822C;
    }
L_0893822C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938234;
    }
L_08938234:
    aot_gpr_31 = (0x0893823Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893823Cu) goto L_0893823C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893823C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_08938258;
      }
      goto L_08938248;
    }
L_08938248:
    aot_gpr_31 = (0x08938250u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0031_entry, 31u, 452u, 0x08882930u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938250u) goto L_08938250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938250:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938260;
      }
      goto L_08938258;
    }
L_08938258:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938260;
    }
L_08938260:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1364)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08938364;
      }
      goto L_08938274;
    }
L_08938274:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 16u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
        goto L_089382AC;
    }
    goto L_08938284;
L_08938284:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_31 = (0x089382A0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089382A0u) goto L_089382A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089382A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08938364;
      }
      goto L_089382A8;
    }
L_089382A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    goto L_089382AC;
L_089382AC:
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08938364;
      }
      goto L_089382B8;
    }
L_089382B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 22u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08938364;
      }
      goto L_089382C8;
    }
L_089382C8:
    aot_gpr_31 = (0x089382D0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089382D0u) goto L_089382D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089382D0:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19292)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19296)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x089382ECu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089382ECu) goto L_089382EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089382EC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[20]);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[20] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 18u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08938330u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938330u) goto L_08938330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938330:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 118u);
    aot_gpr_31 = (0x08938340u);
    aot_gpr_6 = (0u | 1500u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 294u, 0x0891108Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938340u) goto L_08938340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938340:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1716), ctx.gpr[18]);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1716));
    aot_gpr_31 = (0x08938350u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938350u) goto L_08938350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938350:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893835Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893835Cu) goto L_0893835C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893835C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938364;
    }
L_08938364:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0893838C;
      }
      goto L_08938374;
    }
L_08938374:
    aot_gpr_31 = (0x0893837Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893837Cu) goto L_0893837C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893837C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[21] = (0u | 6u);
      if (branch_taken) {
          goto L_089383AC;
      }
      goto L_08938384;
    }
L_08938384:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
      if (branch_taken) {
          goto L_08938394;
      }
      goto L_0893838C;
    }
L_0893838C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938394;
    }
L_08938394:
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089383AC;
      }
      goto L_089383A0;
    }
L_089383A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_089383B8;
      }
      goto L_089383AC;
    }
L_089383AC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089383B8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 119u, 0x089B4624u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089383B8u) goto L_089383B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089383B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_08938400;
      }
      goto L_089383C4;
    }
L_089383C4:
    aot_gpr_31 = (0x089383CCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089383CCu) goto L_089383CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089383CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08938400;
      }
      goto L_089383D4;
    }
L_089383D4:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(2288));
    aot_gpr_31 = (0x089383E0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 988u, 0x08AB3DB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089383E0u) goto L_089383E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089383E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08938414;
      }
      goto L_089383F0;
    }
L_089383F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08938414;
      }
      goto L_08938400;
    }
L_08938400:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    if (aot_gpr_4 != ctx.gpr[21]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
        goto L_08938474;
    }
    goto L_0893840C;
L_0893840C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938414;
    }
L_08938414:
    aot_gpr_31 = (0x0893841Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893841Cu) goto L_0893841C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893841C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19284)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19288)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08938430u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938430u) goto L_08938430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938430:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19276)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19280)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_6 = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_6 = (ctx.gpr[1] | aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_4 ? 1u : 0u);
    aot_gpr_6 = (ctx.gpr[9] + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893846Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 654u, 0x089AB1F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893846Cu) goto L_0893846C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893846C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938474;
    }
L_08938474:
    aot_gpr_5 = (0u | 16u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
        goto L_089384A8;
    }
    goto L_08938480;
L_08938480:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_31 = (0x0893849Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893849Cu) goto L_0893849C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893849C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089384A4;
    }
L_089384A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    goto L_089384A8;
L_089384A8:
    ctx.gpr[20] = (0u | 9u);
    if (aot_gpr_4 != ctx.gpr[20]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
        goto L_089384D8;
    }
    goto L_089384B4;
L_089384B4:
    aot_gpr_31 = (0x089384BCu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089384BCu) goto L_089384BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089384BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089384C4;
    }
L_089384C4:
    aot_gpr_31 = (0x089384CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089384CCu) goto L_089384CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089384CC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089384D4;
    }
L_089384D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    goto L_089384D8;
L_089384D8:
    aot_gpr_5 = (0u | 22u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089384E4;
    }
L_089384E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089384F4;
    }
L_089384F4:
    aot_gpr_31 = (0x089384FCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089384FCu) goto L_089384FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089384FC:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19292)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19296)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08938518u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938518u) goto L_08938518;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938518:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[22]);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[22] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[23]);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 17u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0893855Cu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893855Cu) goto L_0893855C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893855C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08938568u);
    aot_gpr_5 = (0u | 118u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938568u) goto L_08938568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938568:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1716), ctx.gpr[18]);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1716));
    aot_gpr_31 = (0x08938578u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938578u) goto L_08938578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938578:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08938584u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938584u) goto L_08938584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_0893859C;
      }
      goto L_08938590;
    }
L_08938590:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893859Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 60u, 0x089103CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893859Cu) goto L_0893859C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893859C:
    aot_gpr_31 = (0x089385A4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089385A4u) goto L_089385A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089385A4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089385AC;
    }
L_089385AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089385BC;
    }
L_089385BC:
    aot_gpr_31 = (0x089385C4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089385C4u) goto L_089385C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089385C4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19268)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19272)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x089385D8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089385D8u) goto L_089385D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089385D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19260)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19264)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_6 = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_6 = (ctx.gpr[1] | aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_4 ? 1u : 0u);
    aot_gpr_6 = (ctx.gpr[9] + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 40u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[19] = (ctx.lo);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (15561u << 16u);
      if (branch_taken) {
          goto L_08938758;
      }
      goto L_08938634;
    }
L_08938634:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (16128u << 16u);
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    goto L_08938658;
L_08938658:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08938668u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938668u) goto L_08938668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938668:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x089386ACu);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089386ACu) goto L_089386AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089386AC:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = ctx.fpr[28] + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x089386F8u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089386F8u) goto L_089386F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089386F8:
    aot_fpr_12 = ctx.fpr[0] + ctx.fpr[24];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08938748;
      }
      goto L_0893870C;
    }
L_0893870C:
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_31 = (0x08938720u);
    ctx.gpr[30] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938720u) goto L_08938720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938720:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    ctx.gpr[7] = (aot_gpr_4 & 7u);
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (0u | 8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08938748u);
    ctx.gpr[10] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938748u) goto L_08938748;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938748:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08938658;
      }
      goto L_08938758;
    }
L_08938758:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    goto L_08938768;
L_08938768:
    { std::uint32_t aot_run_words[15]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
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
L_089387AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 14u);
    aot_gpr_6 = (aot_gpr_6 ^ 6u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[20] = (0u | 17u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089387FC;
      }
      goto L_089387F4;
    }
L_089387F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08938800;
      }
      goto L_089387FC;
    }
L_089387FC:
    ctx.gpr[18] = (0u | 0u);
    goto L_08938800;
L_08938800:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
      if (branch_taken) {
          goto L_08938848;
      }
      goto L_0893880C;
    }
L_0893880C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08938848;
      }
      goto L_0893881C;
    }
L_0893881C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08938848;
      }
      goto L_08938824;
    }
L_08938824:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08938848;
      }
      goto L_08938830;
    }
L_08938830:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893883Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893883Cu) goto L_0893883C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893883C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08938848u);
    aot_gpr_5 = (0u | 20000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938848u) goto L_08938848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938848:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_08938884;
      }
      goto L_08938854;
    }
L_08938854:
    aot_gpr_31 = (0x0893885Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893885Cu) goto L_0893885C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893885C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0893887C;
      }
      goto L_08938864;
    }
L_08938864:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    ctx.gpr[21] = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_0893888C;
      }
      goto L_08938874;
    }
L_08938874:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893899C;
      }
      goto L_0893887C;
    }
L_0893887C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938884;
    }
L_08938884:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_0893888C;
    }
L_0893888C:
    aot_gpr_31 = (0x08938894u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938894u) goto L_08938894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0893899C;
      }
      goto L_0893889C;
    }
L_0893889C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893899C;
      }
      goto L_089388A8;
    }
L_089388A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_16;
      if (branch_taken) {
          goto L_089388E8;
      }
      goto L_089388B4;
    }
L_089388B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893899C;
      }
      goto L_089388C0;
    }
L_089388C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2228));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[21];
      if (branch_taken) {
          goto L_0893899C;
      }
      goto L_089388D4;
    }
L_089388D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    aot_gpr_6 = (0u | 38u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_0893899C;
      }
      goto L_089388E8;
    }
L_089388E8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[19];
      if (branch_taken) {
          goto L_08938994;
      }
      goto L_089388F4;
    }
L_089388F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (0u | 2u);
    aot_gpr_5 = (aot_gpr_5 & 496u);
    aot_gpr_5 = (aot_gpr_5 >> 4u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
      if (branch_taken) {
          goto L_08938928;
      }
      goto L_0893890C;
    }
L_0893890C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (0u | 3u);
    aot_gpr_5 = (aot_gpr_5 & 496u);
    aot_gpr_5 = (aot_gpr_5 >> 4u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08938994;
      }
      goto L_08938924;
    }
L_08938924:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    goto L_08938928;
L_08938928:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(149))))));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[19];
      if (branch_taken) {
          goto L_08938994;
      }
      goto L_08938934;
    }
L_08938934:
    aot_gpr_31 = (0x0893893Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 365u, 0x08B41608u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893893Cu) goto L_0893893C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893893C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(352)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (17008u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_6 << 24u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 24u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 | 48u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    goto L_08938994;
L_08938994:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_0893899C;
    }
L_0893899C:
    aot_gpr_31 = (0x089389A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089389A4u) goto L_089389A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089389A4:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2276)));
        goto L_089389BC;
    }
    goto L_089389AC;
L_089389AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_089389F8;
      }
      goto L_089389B8;
    }
L_089389B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2276)));
    goto L_089389BC;
L_089389BC:
    ctx.gpr[21] = (0u | 2u);
    if (aot_gpr_4 != ctx.gpr[21]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
        goto L_089389E0;
    }
    goto L_089389C8;
L_089389C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089389F8;
      }
      goto L_089389DC;
    }
L_089389DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    goto L_089389E0;
L_089389E0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_089389F8;
      }
      goto L_089389E8;
    }
L_089389E8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08938A00;
      }
      goto L_089389F0;
    }
L_089389F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938A14;
      }
      goto L_089389F8;
    }
L_089389F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938A00;
    }
L_08938A00:
    aot_gpr_31 = (0x08938A08u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938A08u) goto L_08938A08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938A08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_08938A24;
      }
      goto L_08938A14;
    }
L_08938A14:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08938A2C;
      }
      goto L_08938A1C;
    }
L_08938A1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938A24;
    }
L_08938A24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938A2C;
    }
L_08938A2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (aot_gpr_4 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08938AA8;
      }
      goto L_08938A3C;
    }
L_08938A3C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_31 = (0x08938A58u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938A58u) goto L_08938A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938A58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08938A9C;
      }
      goto L_08938A60;
    }
L_08938A60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
    aot_gpr_5 = (0u | 31u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1364)));
        goto L_08938B1C;
    }
    goto L_08938A70;
L_08938A70:
    aot_gpr_31 = (0x08938A78u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0073_entry, 73u, 396u, 0x08929C28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938A78u) goto L_08938A78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938A78:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_31 = (0x08938A88u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938A88u) goto L_08938A88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938A88:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08938A94u);
    aot_gpr_5 = (0u | 20000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938A94u) goto L_08938A94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938A94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938A9C;
    }
L_08938A9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1764), aot_gpr_4);
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938AA8;
    }
L_08938AA8:
    aot_gpr_5 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 512u);
      if (branch_taken) {
          goto L_08938ABC;
      }
      goto L_08938AB4;
    }
L_08938AB4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08938A60;
      }
      goto L_08938ABC;
    }
L_08938ABC:
    aot_gpr_31 = (0x08938AC4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938AC4u) goto L_08938AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938AC4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19284)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19288)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08938AD8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938AD8u) goto L_08938AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938AD8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19276)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19280)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_6 = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_6 = (ctx.gpr[1] | aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_4 ? 1u : 0u);
    aot_gpr_6 = (ctx.gpr[9] + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08938B14u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 654u, 0x089AB1F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938B14u) goto L_08938B14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938B14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938B1C;
    }
L_08938B1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1364)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(23))))));
    aot_gpr_6 = (0u | 100u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(22))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08938B90;
      }
      goto L_08938B3C;
    }
L_08938B3C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_31 = (0x08938B4Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938B4Cu) goto L_08938B4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938B4C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08938B58u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938B58u) goto L_08938B58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938B58:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_31 = (0x08938B74u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938B74u) goto L_08938B74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938B74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938B7C;
    }
L_08938B7C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08938B88u);
    aot_gpr_5 = (0u | 142u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938B88u) goto L_08938B88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938B88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938B90;
    }
L_08938B90:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08938BC0;
      }
      goto L_08938B9C;
    }
L_08938B9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1948)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
    aot_gpr_4 = (ctx.gpr[19] << (aot_gpr_4 & 31u));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08938BDC;
      }
      goto L_08938BB8;
    }
L_08938BB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08938BC8;
      }
      goto L_08938BC0;
    }
L_08938BC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938BC8;
    }
L_08938BC8:
    aot_gpr_31 = (0x08938BD0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 514u, 0x08906558u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938BD0u) goto L_08938BD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938BD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08938BDC;
      }
      goto L_08938BD8;
    }
L_08938BD8:
    aot_gpr_4 = (0u | 0u);
    goto L_08938BDC;
L_08938BDC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08938D30;
      }
      goto L_08938BE4;
    }
L_08938BE4:
    aot_gpr_31 = (0x08938BECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938BECu) goto L_08938BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938BEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08938C0C;
      }
      goto L_08938BF4;
    }
L_08938BF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08938C0C;
      }
      goto L_08938C04;
    }
L_08938C04:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08938C1C;
      }
      goto L_08938C0C;
    }
L_08938C0C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08938C18u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 119u, 0x089B4624u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938C18u) goto L_08938C18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938C18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    goto L_08938C1C;
L_08938C1C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08938C3C;
      }
      goto L_08938C28;
    }
L_08938C28:
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
      if (branch_taken) {
          goto L_08938C48;
      }
      goto L_08938C34;
    }
L_08938C34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938C4C;
      }
      goto L_08938C3C;
    }
L_08938C3C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08938C4C;
      }
      goto L_08938C48;
    }
L_08938C48:
    aot_gpr_5 = (0u | 1u);
    goto L_08938C4C;
L_08938C4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08938C98;
      }
      goto L_08938C68;
    }
L_08938C68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (0u | 6u);
      if (branch_taken) {
          goto L_08938C88;
      }
      goto L_08938C78;
    }
L_08938C78:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
      if (branch_taken) {
          goto L_08938C94;
      }
      goto L_08938C80;
    }
L_08938C80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938C98;
      }
      goto L_08938C88;
    }
L_08938C88:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08938C98;
      }
      goto L_08938C94;
    }
L_08938C94:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    goto L_08938C98;
L_08938C98:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[21];
      if (branch_taken) {
          goto L_08938D0C;
      }
      goto L_08938CA0;
    }
L_08938CA0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_31 = (0x08938CBCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938CBCu) goto L_08938CBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938CBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08938CE8;
      }
      goto L_08938CC4;
    }
L_08938CC4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_31 = (0x08938CE0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938CE0u) goto L_08938CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938CE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08938D0C;
      }
      goto L_08938CE8;
    }
L_08938CE8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_31 = (0x08938CF8u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938CF8u) goto L_08938CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938CF8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08938D04u);
    aot_gpr_5 = (0u | 20000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938D04u) goto L_08938D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938D04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938D28;
      }
      goto L_08938D0C;
    }
L_08938D0C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_31 = (0x08938D1Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938D1Cu) goto L_08938D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938D1C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08938D28u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938D28u) goto L_08938D28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938D28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938D30;
    }
L_08938D30:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_31 = (0x08938D40u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938D40u) goto L_08938D40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938D40:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08938D4Cu);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938D4Cu) goto L_08938D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938D4C:
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
L_08938D70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08938E08;
      }
      goto L_08938D94;
    }
L_08938D94:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08938DD0;
      }
      goto L_08938DA4;
    }
L_08938DA4:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
        goto L_08938DC8;
    }
    goto L_08938DAC;
L_08938DAC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08938DC4;
      }
      goto L_08938DB4;
    }
L_08938DB4:
    if (aot_gpr_4 == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
        goto L_08938DC8;
    }
    goto L_08938DBC;
L_08938DBC:
    aot_gpr_31 = (0x08938DC4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938DC4u) goto L_08938DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938DC4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_08938DC8;
L_08938DC8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
      if (branch_taken) {
          goto L_08938DA4;
      }
      goto L_08938DD0;
    }
L_08938DD0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08938DF8;
      }
      goto L_08938DD8;
    }
L_08938DD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_08938DF8;
    }
    goto L_08938DE4;
L_08938DE4:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_08938DF8;
    }
    goto L_08938DEC;
L_08938DEC:
    aot_gpr_31 = (0x08938DF4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938DF4u) goto L_08938DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938DF4:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_08938DF8;
L_08938DF8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08938E08;
      }
      goto L_08938E00;
    }
L_08938E00:
    aot_gpr_31 = (0x08938E08u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938E08u) goto L_08938E08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938E08:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_08938E24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(7776), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08938E40u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18576));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938E40u) goto L_08938E40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938E40:
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
L_08938E4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08938E68;
      }
      goto L_08938E60;
    }
L_08938E60:
    aot_gpr_31 = (0x08938E68u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938E68u) goto L_08938E68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938E68:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
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
L_08938E78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08938E88u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_0893A10C;
L_08938E88:
    ctx.gpr[2] = (0u | 0u);
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
L_08938E98:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[9] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08938EFC;
      }
      goto L_08938EA4;
    }
L_08938EA4:
    ctx.gpr[7] = (0u | 92u);
    aot_gpr_6 = (0u | 32u);
    goto L_08938EAC;
L_08938EAC:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08938EC0;
      }
      goto L_08938EB8;
    }
L_08938EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 47u);
      if (branch_taken) {
          goto L_08938EE0;
      }
      goto L_08938EC0;
    }
L_08938EC0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 123 ? 1u : 0u);
      if (branch_taken) {
          goto L_08938EE0;
      }
      goto L_08938ECC;
    }
L_08938ECC:
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08938EE0;
      }
      goto L_08938ED4;
    }
L_08938ED4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    goto L_08938EE0;
L_08938EE0:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08938EF0;
      }
      goto L_08938EEC;
    }
L_08938EEC:
    ctx.gpr[9] = (aot_gpr_4 | 0u);
    goto L_08938EF0;
L_08938EF0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08938EAC;
      }
      goto L_08938EFC;
    }
L_08938EFC:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
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
L_08938F04:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08938F24;
      }
      goto L_08938F1C;
    }
L_08938F1C:
    aot_gpr_31 = (0x08938F24u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938F24u) goto L_08938F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938F24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_gpr_31 = (0x08938F30u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_089393CC;
L_08938F30:
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
L_08938F40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08938F60;
      }
      goto L_08938F58;
    }
L_08938F58:
    aot_gpr_31 = (0x08938F60u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938F60u) goto L_08938F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938F60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_gpr_31 = (0x08938F6Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08939460;
L_08938F6C:
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
L_08938F7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08938FAC;
      }
      goto L_08938FA4;
    }
L_08938FA4:
    aot_gpr_31 = (0x08938FACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938FACu) goto L_08938FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938FAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08938FC0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    goto L_089394A4;
L_08938FC0:
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
L_08938FD8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08938FF8;
      }
      goto L_08938FF0;
    }
L_08938FF0:
    aot_gpr_31 = (0x08938FF8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08938FF8u) goto L_08938FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08938FF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_gpr_31 = (0x08939004u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_089394FC;
L_08939004:
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
L_08939014:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08939034;
      }
      goto L_0893902C;
    }
L_0893902C:
    aot_gpr_31 = (0x08939034u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08939034u) goto L_08939034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939034:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_gpr_31 = (0x08939040u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08939504;
L_08939040:
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
L_08939050:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08939080;
      }
      goto L_08939078;
    }
L_08939078:
    aot_gpr_31 = (0x08939080u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08939080u) goto L_08939080;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939080:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08939094u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    goto L_0893950C;
L_08939094:
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
L_089390AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[9] & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_16 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089390F4;
      }
      goto L_089390EC;
    }
L_089390EC:
    aot_gpr_31 = (0x089390F4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089390F4u) goto L_089390F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089390F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08939114u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_08939590;
L_08939114:
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
L_08939138:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08939158;
      }
      goto L_08939150;
    }
L_08939150:
    aot_gpr_31 = (0x08939158u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08939158u) goto L_08939158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939158:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_gpr_31 = (0x08939164u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08939704;
L_08939164:
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
L_08939174:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0893919C;
      }
      goto L_08939194;
    }
L_08939194:
    aot_gpr_31 = (0x0893919Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893919Cu) goto L_0893919C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893919C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089391ACu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_089397CC;
L_089391AC:
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
L_089391C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089391E0;
      }
      goto L_089391D8;
    }
L_089391D8:
    aot_gpr_31 = (0x089391E0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089391E0u) goto L_089391E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089391E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_gpr_31 = (0x089391ECu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_0893987C;
L_089391EC:
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
L_089391FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0893921C;
      }
      goto L_08939214;
    }
L_08939214:
    aot_gpr_31 = (0x0893921Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893921Cu) goto L_0893921C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893921C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_gpr_31 = (0x08939228u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08939948;
L_08939228:
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
L_08939238:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08939254;
      }
      goto L_0893924C;
    }
L_0893924C:
    aot_gpr_31 = (0x08939254u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08939254u) goto L_08939254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939254:
    aot_gpr_31 = (0x0893925Cu);
    goto L_08938E4C;
L_0893925C:
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
L_08939268:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08939284;
      }
      goto L_0893927C;
    }
L_0893927C:
    aot_gpr_31 = (0x08939284u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08939284u) goto L_08939284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939284:
    aot_gpr_31 = (0x0893928Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    goto L_0893998C;
L_0893928C:
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
L_08939298:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089392B4;
      }
      goto L_089392AC;
    }
L_089392AC:
    aot_gpr_31 = (0x089392B4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089392B4u) goto L_089392B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089392B4:
    aot_gpr_31 = (0x089392BCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    goto L_089399E0;
L_089392BC:
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
L_089392C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089392E4;
      }
      goto L_089392DC;
    }
L_089392DC:
    aot_gpr_31 = (0x089392E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089392E4u) goto L_089392E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089392E4:
    aot_gpr_31 = (0x089392ECu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    goto L_08939A18;
L_089392EC:
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
L_089392F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08939314;
      }
      goto L_0893930C;
    }
L_0893930C:
    aot_gpr_31 = (0x08939314u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08939314u) goto L_08939314;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939314:
    aot_gpr_31 = (0x0893931Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    goto L_08939A20;
L_0893931C:
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
L_08939328:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08939350;
      }
      goto L_08939348;
    }
L_08939348:
    aot_gpr_31 = (0x08939350u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08939350u) goto L_08939350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939350:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08939360u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08939A10;
L_08939360:
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
L_08939374:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0893939C;
      }
      goto L_08939394;
    }
L_08939394:
    aot_gpr_31 = (0x0893939Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893939Cu) goto L_0893939C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893939C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089393ACu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08939C58;
L_089393AC:
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
L_089393C0:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
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
L_089393CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-528));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(512), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(516), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(520), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(524), aot_gpr_31);
    aot_gpr_31 = (0x089393F0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08939C14;
L_089393F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6896)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893943C;
      }
      goto L_089393FC;
    }
L_089393FC:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08939408u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08938E98;
L_08939408:
    aot_gpr_31 = (0x08939410u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 196u, 0x088B53C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08939410u) goto L_08939410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939410:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_0893943C;
      }
      goto L_0893941C;
    }
L_0893941C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6896)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(6896), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_0893943C;
L_0893943C:
    aot_gpr_31 = (0x08939444u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08939C38;
L_08939444:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(512), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(528));
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
L_08939460:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0893947Cu);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    goto L_08939C14;
L_0893947C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(6896)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_31 = (0x08939490u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6896), ctx.gpr[17]);
    goto L_08939C38;
L_08939490:
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
L_089394A4:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (0u | 2u);
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_6;
      if (branch_taken) {
          goto L_089394C0;
      }
      goto L_089394B4;
    }
L_089394B4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
      if (branch_taken) {
          goto L_089394D4;
      }
      goto L_089394C0;
    }
L_089394C0:
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_6;
      if (branch_taken) {
          goto L_089394D4;
      }
      goto L_089394CC;
    }
L_089394CC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    goto L_089394D4;
L_089394D4:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089394F4;
      }
      goto L_089394E0;
    }
L_089394E0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_089394F0;
    }
    goto L_089394F0;
L_089394F0:
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    goto L_089394F4;
L_089394F4:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), ctx.gpr[2]);
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
L_089394FC:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
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
L_08939504:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
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
L_0893950C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08939530u);
    ctx.gpr[10] = (0u | 0u);
    goto L_08939590;
L_08939530:
    aot_gpr_31 = (0x08939538u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B7347Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_0893955C;
      }
      goto L_08939544;
    }
L_08939544:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18548));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08939554u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08939A10;
L_08939554:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08939570;
      }
      goto L_0893955C;
    }
L_0893955C:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08939570u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-10840));
    goto L_08939A10;
L_08939570:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893957Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_0893987C;
L_0893957C:
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
L_08939590:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[21] = (ctx.gpr[9] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x089395D4u);
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    goto L_08939C14;
L_089395D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(6900)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(6900));
    aot_gpr_5 = (aot_gpr_5 - 0u);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08939614;
      }
      goto L_089395F4;
    }
L_089395F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08939624;
      }
      goto L_0893960C;
    }
L_0893960C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08939628;
      }
      goto L_08939614;
    }
L_08939614:
    aot_gpr_31 = (0x0893961Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08939C38;
L_0893961C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089396DC;
      }
      goto L_08939624;
    }
L_08939624:
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    goto L_08939628;
L_08939628:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_0893964C;
      }
      goto L_0893963C;
    }
L_0893963C:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0893964Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893964Cu) goto L_0893964C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893964C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), 0u);
      if (branch_taken) {
          goto L_0893967C;
      }
      goto L_08939674;
    }
L_08939674:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[20] = (aot_gpr_4 + ctx.gpr[20]);
    goto L_0893967C;
L_0893967C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(6908));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 - 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_31 = (0x089396D0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089396D0:
    aot_gpr_31 = (0x089396D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08939C38;
L_089396D8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_089396DC;
L_089396DC:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
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
L_08939704:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08939720u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    goto L_08939C14;
L_08939720:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_089397B0;
      }
      goto L_08939728;
    }
L_08939728:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_0893973C;
      }
      goto L_08939734;
    }
L_08939734:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0893973C;
      }
      goto L_0893973C;
    }
L_0893973C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089397B0;
      }
      goto L_08939744;
    }
L_08939744:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6916)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_16;
      if (branch_taken) {
          goto L_089397AC;
      }
      goto L_08939750;
    }
L_08939750:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
        goto L_08939768;
    }
    goto L_08939760;
L_08939760:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    goto L_08939768;
L_08939768:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089397B0;
      }
      goto L_08939790;
    }
L_08939790:
    aot_gpr_31 = (0x08939798u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08939C38;
L_08939798:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x089397A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089397A4u) goto L_089397A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089397A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089397B8;
      }
      goto L_089397AC;
    }
L_089397AC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), 0u);
    goto L_089397B0;
L_089397B0:
    aot_gpr_31 = (0x089397B8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08939C38;
L_089397B8:
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
L_089397CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x089397F8u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08939C14;
L_089397F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_0893980C;
      }
      goto L_08939804;
    }
L_08939804:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0893980C;
      }
      goto L_0893980C;
    }
L_0893980C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08939854;
      }
      goto L_08939814;
    }
L_08939814:
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08939824;
      }
      goto L_0893981C;
    }
L_0893981C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08939824;
L_08939824:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08939834u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08939834u) goto L_08939834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939834:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(6900));
    aot_gpr_4 = (aot_gpr_4 - 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_08939854;
L_08939854:
    aot_gpr_31 = (0x0893985Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08939C38;
L_0893985C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0893987C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_31 = (0x089398A0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    goto L_08939C14;
L_089398A0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x089398B0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08939C38;
L_089398B0:
    ctx.gpr[19] = (0u | 1000u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    goto L_089398B8;
L_089398B8:
    aot_gpr_31 = (0x089398C0u);
    ctx.pc = 0x08B7347Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089398C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_089398DC;
      }
      goto L_089398CC;
    }
L_089398CC:
    aot_gpr_31 = (0x089398D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089398D4u) goto L_089398D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089398D4:
    aot_gpr_31 = (0x089398DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 206u, 0x08934DB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089398DCu) goto L_089398DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089398DC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089398ECu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_089397CC;
L_089398EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089398FC;
      }
      goto L_089398F4;
    }
L_089398F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0893992C;
      }
      goto L_089398FC;
    }
L_089398FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x08939908u);
    aot_gpr_5 = (0u | 1u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939908:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_6 = (0u | 32u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08939924u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B734ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939924:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089398B8;
      }
      goto L_0893992C;
    }
L_0893992C:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
L_08939948:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08939964u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    goto L_08939C14;
L_08939964:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_31 = (0x08939978u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6920), ctx.gpr[17]);
    goto L_08939C38;
L_08939978:
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
L_0893998C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x089399A4u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08939C14;
L_089399A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(6908)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(6908));
    aot_gpr_5 = (aot_gpr_5 - 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.gpr[17] = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (0x089399C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08939C38;
L_089399C8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_089399E0:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08939A04;
      }
      goto L_089399EC;
    }
L_089399EC:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(45)));
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 1u);
        goto L_08939A08;
    }
    goto L_089399F8;
L_089399F8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(43)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08939A08;
      }
      goto L_08939A04;
    }
L_08939A04:
    aot_gpr_5 = (0u | 1u);
    goto L_08939A08;
L_08939A08:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_5 & 255u);
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
L_08939A10:
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
L_08939A18:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(46)));
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
L_08939A20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08939A40u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B734ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939A40:
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
L_08939A4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18524)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18528)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[8] < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    ctx.gpr[1] = (ctx.gpr[9] << 21u);
    ctx.gpr[10] = (ctx.gpr[8] >> 11u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 11u));
    ctx.gpr[10] = (ctx.gpr[1] | ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[11] >> 21u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[8] < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[2] = (aot_gpr_5 | 0u);
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[1] = (ctx.gpr[9] << 21u);
    ctx.gpr[8] = (ctx.gpr[8] >> 11u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 11u));
    ctx.gpr[8] = (ctx.gpr[1] | ctx.gpr[8]);
    aot_gpr_4 = (ctx.gpr[2] < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[3] - ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[2] - ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[7] - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < -32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08939AEC;
      }
      goto L_08939AD8;
    }
L_08939AD8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08939B2C;
      }
      goto L_08939AE0;
    }
L_08939AE0:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08939B14;
      }
      goto L_08939AEC;
    }
L_08939AEC:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 150u);
      if (branch_taken) {
          goto L_08939B34;
      }
      goto L_08939B0C;
    }
L_08939B0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 200u);
      if (branch_taken) {
          goto L_08939B40;
      }
      goto L_08939B14;
    }
L_08939B14:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08939B24u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    goto L_08939B4C;
L_08939B24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08939B40;
      }
      goto L_08939B2C;
    }
L_08939B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08939B40;
      }
      goto L_08939B34;
    }
L_08939B34:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(300));
    goto L_08939B40;
L_08939B40:
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
L_08939B4C:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08939B6C;
      }
      goto L_08939B60;
    }
L_08939B60:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_08939B6C;
L_08939B6C:
    aot_gpr_4 = (13747u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52830u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16295u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 3293u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
      if (branch_taken) {
          goto L_08939BA4;
      }
      goto L_08939B98;
    }
L_08939B98:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + aot_fpr_15;
    goto L_08939BA4;
L_08939BA4:
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (18749u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 29536u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = aot_fpr_14 + aot_fpr_15;
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08939BD0;
      }
      goto L_08939BC4;
    }
L_08939BC4:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_15;
    goto L_08939BD0;
L_08939BD0:
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (14976u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
        goto L_08939BFC;
    }
    goto L_08939BF0;
L_08939BF0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08939C0C;
      }
      goto L_08939BFC;
    }
L_08939BFC:
    ctx.gpr[2] = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (aot_gpr_4 + ctx.gpr[2]);
    goto L_08939C0C;
L_08939C0C:
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
L_08939C14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08939C2Cu);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = 0x08B734BCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939C2C:
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
L_08939C38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08939C4Cu);
    aot_gpr_5 = (0u | 1u);
    ctx.pc = 0x08B734A4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939C4C:
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
L_08939C58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_6 & 255u);
    aot_gpr_31 = (0x08939C80u);
    goto L_08939C14;
L_08939C80:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(41)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08939CA0;
      }
      goto L_08939C90;
    }
L_08939C90:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08939CA0;
      }
      goto L_08939C9C;
    }
L_08939C9C:
    aot_gpr_4 = (0u | 1u);
    goto L_08939CA0;
L_08939CA0:
    aot_gpr_5 = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x08939CB4u);
    aot_gpr_5 = (0u | 1u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939CB4:
    aot_gpr_31 = (0x08939CBCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08939C38;
L_08939CBC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08939CCC;
      }
      goto L_08939CC4;
    }
L_08939CC4:
    aot_gpr_31 = (0x08939CCCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08939A20;
L_08939CCC:
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
L_08939CE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(6900));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_16);
    ctx.gpr[17] = (ctx.gpr[17] - 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_31);
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27316));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(240));
    ctx.gpr[7] = (2196u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-27712));
    aot_gpr_5 = (0u | 128u);
    aot_gpr_31 = (0x08939D24u);
    aot_gpr_6 = (0u | 52u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08939D24u) goto L_08939D24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939D24:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6904), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6900), ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(6908));
    aot_gpr_4 = (aot_gpr_4 - 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6912), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6908), aot_gpr_4);
    aot_gpr_31 = (0x08939D44u);
    ctx.pc = 0x08B7347Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939D44:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6896), aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(60));
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    goto L_08939D78;
L_08939D78:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08939D78;
      }
      goto L_08939D90;
    }
L_08939D90:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(228));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(240));
    goto L_08939DA0;
L_08939DA0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08939DA0;
      }
      goto L_08939DC8;
    }
L_08939DC8:
    aot_gpr_31 = (0x08939DD0u);
    ctx.gpr[17] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 209u, 0x088B5488u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08939DD0u) goto L_08939DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939DD0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08939E28;
      }
      goto L_08939DE8;
    }
L_08939DE8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2047));
    ctx.gpr[8] = (ctx.gpr[8] >> 11u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08939E14;
      }
      goto L_08939E10;
    }
L_08939E10:
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    goto L_08939E14;
L_08939E14:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08939DE8;
      }
      goto L_08939E28;
    }
L_08939E28:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_6 = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08939E3Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-10816));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08939E3Cu) goto L_08939E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939E3C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6916), 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08939E50u);
    aot_gpr_6 = (0u | 511u);
    ctx.pc = 0x08B73694u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939E50:
    aot_gpr_4 = (2232u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_gpr_5 = (0u | 512u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08939E6Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-10784));
    ctx.pc = 0x08B734C4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939E6C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18520));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x08939E88u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B7341Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939E88:
    aot_gpr_5 = (2196u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18504));
    ctx.gpr[7] = (0u | 32768u);
    aot_gpr_6 = (0u | 32u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08939EACu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-29064));
    ctx.pc = 0x08B734B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939EAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_gpr_31 = (0x08939EBCu);
    aot_gpr_5 = (0u | 4u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939EBC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18476)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18480)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_16);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08939EE4u);
    aot_gpr_5 = (0u | 4u);
    ctx.pc = 0x08B73464u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08939EE4:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
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
L_08939EFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(6908));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    ctx.gpr[21] = (ctx.gpr[21] - 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(6908)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893A080;
      }
      goto L_08939F84;
    }
L_08939F84:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08939FA8;
      }
      goto L_08939F94;
    }
L_08939F94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(41)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08939FA8;
      }
      goto L_08939FA0;
    }
L_08939FA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0893A048;
      }
      goto L_08939FA8;
    }
L_08939FA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 >> 11u);
    ctx.gpr[23] = (ctx.gpr[23] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08939FC8u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    goto L_08939A4C;
L_08939FC8:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08939FE0;
      }
      goto L_08939FD8;
    }
L_08939FD8:
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    goto L_08939FE0;
L_08939FE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
        goto L_08939FF8;
    }
    goto L_08939FEC;
L_08939FEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0893A048;
      }
      goto L_08939FF4;
    }
L_08939FF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    goto L_08939FF8;
L_08939FF8:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(2047));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 11u));
    aot_gpr_5 = (aot_gpr_5 >> 21u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(2047));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 11u));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893A01Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    goto L_08939B4C;
L_0893A01C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[30]);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893A044;
      }
      goto L_0893A03C;
    }
L_0893A03C:
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    goto L_0893A044;
L_0893A044:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_0893A048;
L_0893A048:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08939F84;
      }
      goto L_0893A080;
    }
L_0893A080:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
        goto L_0893A08C;
    }
    goto L_0893A08C;
L_0893A08C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
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
L_0893A0BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893A100;
      }
      goto L_0893A0CC;
    }
L_0893A0CC:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27332));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5908), 0u);
      if (branch_taken) {
          goto L_0893A0EC;
      }
      goto L_0893A0E0;
    }
L_0893A0E0:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_0893A0EC;
L_0893A0EC:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893A100;
      }
      goto L_0893A0F8;
    }
L_0893A0F8:
    aot_gpr_31 = (0x0893A100u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893A100u) goto L_0893A100;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A100:
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
L_0893A10C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    goto L_0893A138;
L_0893A138:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552), aot_gpr_4);
    aot_gpr_31 = (0x0893A150u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.pc = 0x08B733DCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A150:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0893A168u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B734ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A168:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552)));
    aot_gpr_4 = (aot_gpr_4 | 128u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552), aot_gpr_4);
    aot_gpr_31 = (0x0893A17Cu);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.pc = 0x08B733DCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A17C:
    aot_gpr_31 = (0x0893A184u);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A184:
    aot_gpr_4 = (ctx.gpr[2] & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893A230;
      }
      goto L_0893A190;
    }
L_0893A190:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(6916), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    goto L_0893A198;
L_0893A198:
    aot_gpr_31 = (0x0893A1A0u);
    aot_gpr_16 = (0u | 0u);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A1A0:
    aot_gpr_4 = (ctx.gpr[2] & 1u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_16 = (0u | 1u);
        goto L_0893A1D8;
    }
    goto L_0893A1AC;
L_0893A1AC:
    aot_gpr_31 = (0x0893A1B4u);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A1B4:
    aot_gpr_4 = (ctx.gpr[2] & 32u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_16 = (0u | 1u);
        goto L_0893A1D8;
    }
    goto L_0893A1C0;
L_0893A1C0:
    aot_gpr_31 = (0x0893A1C8u);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A1C8:
    aot_gpr_4 = (ctx.gpr[2] & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893A1D8;
      }
      goto L_0893A1D4;
    }
L_0893A1D4:
    aot_gpr_16 = (0u | 1u);
    goto L_0893A1D8;
L_0893A1D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_31 = (0x0893A1E8u);
    aot_gpr_5 = (0u | 2u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A1E8:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x0893A1F4u);
    aot_gpr_5 = (0u | 1000u);
    ctx.pc = 0x08B7310Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A1F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
      if (branch_taken) {
          goto L_0893A204;
      }
      goto L_0893A1FC;
    }
L_0893A1FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893A228;
      }
      goto L_0893A204;
    }
L_0893A204:
    aot_gpr_31 = (0x0893A20Cu);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A20C:
    aot_gpr_4 = (ctx.gpr[2] & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893A228;
      }
      goto L_0893A218;
    }
L_0893A218:
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0893A230;
      }
      goto L_0893A228;
    }
L_0893A228:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893A198;
      }
      goto L_0893A230;
    }
L_0893A230:
    aot_gpr_31 = (0x0893A238u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_08939C14;
L_0893A238:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893A250;
      }
      goto L_0893A244;
    }
L_0893A244:
    aot_gpr_31 = (0x0893A24Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_08939EFC;
L_0893A24C:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(6916), ctx.gpr[2]);
    goto L_0893A250;
L_0893A250:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893A284;
      }
      goto L_0893A25C;
    }
L_0893A25C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x0893A268u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    ctx.pc = 0x08B734FCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A268:
    aot_gpr_31 = (0x0893A270u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_08939C38;
L_0893A270:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x0893A27Cu);
    aot_gpr_5 = (0u | 2u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A27C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893A770;
      }
      goto L_0893A284;
    }
L_0893A284:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893A2C0;
      }
      goto L_0893A290;
    }
L_0893A290:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893A2C0;
      }
      goto L_0893A2A0;
    }
L_0893A2A0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0893A2C0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893A2C0u) goto L_0893A2C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A2C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6920)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893A2D4;
      }
      goto L_0893A2D0;
    }
L_0893A2D0:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(6920), 0u);
    goto L_0893A2D4;
L_0893A2D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x0893A2E0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    ctx.pc = 0x08B734FCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A2E0:
    aot_gpr_31 = (0x0893A2E8u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_08939C38;
L_0893A2E8:
    aot_gpr_31 = (0x0893A2F0u);
    ctx.pc = 0x08B73494u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A2F0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18468)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18472)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0893A310u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893A310u) goto L_0893A310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A310:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_16 = (ctx.gpr[2] + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_16 < aot_gpr_4 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    ctx.gpr[17] = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_16 != aot_gpr_4;
      if (branch_taken) {
          goto L_0893A340;
      }
      goto L_0893A338;
    }
L_0893A338:
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_5;
      if (branch_taken) {
          goto L_0893A3B8;
      }
      goto L_0893A340;
    }
L_0893A340:
    ctx.gpr[1] = (ctx.gpr[17] << 21u);
    aot_gpr_4 = (aot_gpr_16 >> 11u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 11u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 >> 21u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[17]);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.gpr[1] = (aot_gpr_5 << 21u);
    aot_gpr_4 = (aot_gpr_4 >> 11u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 11u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0893A388u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_08939A4C;
L_0893A388:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893A39Cu);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B7369Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A39C:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0893A4A0;
      }
      goto L_0893A3B8;
    }
L_0893A3B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 & 2047u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (1u << 16u);
      if (branch_taken) {
          goto L_0893A3E0;
      }
      goto L_0893A3CC;
    }
L_0893A3CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_16 = (0u | 2048u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 & 2047u);
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_4);
    goto L_0893A3E0;
L_0893A3E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893A3FC;
      }
      goto L_0893A3F4;
    }
L_0893A3F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    goto L_0893A3FC;
L_0893A3FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[1] = (aot_gpr_5 << 21u);
    aot_gpr_6 = (aot_gpr_4 >> 11u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 11u));
    aot_gpr_6 = (ctx.gpr[1] | aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[7] >> 21u);
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_6 ? 1u : 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[9] + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(2047));
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 11u));
    ctx.gpr[1] = (ctx.gpr[7] << 21u);
    aot_gpr_6 = (aot_gpr_6 >> 11u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 11u));
    aot_gpr_6 = (ctx.gpr[1] | aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 >> 21u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(2047));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 11u));
    aot_gpr_31 = (0x0893A464u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_08939B4C;
L_0893A464:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 31u));
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[20] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0893A498;
      }
      goto L_0893A470;
    }
L_0893A470:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_31 = (0x0893A48Cu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.pc = 0x08B73624u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A48C:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0893A4A0;
      }
      goto L_0893A498;
    }
L_0893A498:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18476)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18480)));
    goto L_0893A4A0;
L_0893A4A0:
    aot_gpr_31 = (0x0893A4A8u);
    ctx.pc = 0x08B73494u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A4A8:
    aot_gpr_4 = (ctx.gpr[2] - ctx.gpr[23]);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x0893A4BCu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.pc = 0x08B7343Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A4BC:
    aot_gpr_31 = (0x0893A4C4u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_08939C14;
L_0893A4C4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893A54C;
      }
      goto L_0893A4D0;
    }
L_0893A4D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893A530;
      }
      goto L_0893A4E0;
    }
L_0893A4E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893A530;
      }
      goto L_0893A4EC;
    }
L_0893A4EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18460)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18464)));
    aot_gpr_6 = (ctx.gpr[19] ^ aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[7]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893A530;
      }
      goto L_0893A514;
    }
L_0893A514:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_5 = (21845u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21845));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 ^ aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_0893A530;
L_0893A530:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0893A548u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893A548u) goto L_0893A548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A548:
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    goto L_0893A54C;
L_0893A54C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x0893A558u);
    aot_gpr_5 = (0u | 4u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A558:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[18];
      if (branch_taken) {
          goto L_0893A568;
      }
      goto L_0893A560;
    }
L_0893A560:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[19];
      if (branch_taken) {
          goto L_0893A5D8;
      }
      goto L_0893A568;
    }
L_0893A568:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552)));
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552), aot_gpr_4);
    aot_gpr_31 = (0x0893A57Cu);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.pc = 0x08B733DCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A57C:
    aot_gpr_31 = (0x0893A584u);
    aot_gpr_4 = (0u | 5000u);
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18452)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18456)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893A5C0;
      }
      goto L_0893A5B4;
    }
L_0893A5B4:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0893A5D0;
      }
      goto L_0893A5C0;
    }
L_0893A5C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    goto L_0893A5D0;
L_0893A5D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(6916), 0u);
      if (branch_taken) {
          goto L_0893A730;
      }
      goto L_0893A5D8;
    }
L_0893A5D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893A5F4;
      }
      goto L_0893A5E4;
    }
L_0893A5E4:
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0893A730;
      }
      goto L_0893A5F4;
    }
L_0893A5F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893A60C;
      }
      goto L_0893A608;
    }
L_0893A608:
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_0893A60C;
L_0893A60C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552), aot_gpr_4);
    aot_gpr_31 = (0x0893A624u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.pc = 0x08B733DCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A624:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_6 + ctx.gpr[18]);
    ctx.gpr[8] = (aot_gpr_5 < ctx.gpr[18] ? 1u : 0u);
    aot_gpr_6 = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[19]);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_gpr_6 + ctx.gpr[18]);
    ctx.gpr[8] = (aot_gpr_5 < ctx.gpr[18] ? 1u : 0u);
    aot_gpr_6 = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[19]);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    aot_gpr_5 = (aot_gpr_6 < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[7] - ctx.gpr[19]);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[8] - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[18] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_0893A72C;
      }
      goto L_0893A6D4;
    }
L_0893A6D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893A72C;
      }
      goto L_0893A70C;
    }
L_0893A70C:
    aot_gpr_31 = (0x0893A714u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_08939C38;
L_0893A714:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x0893A724u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893A724u) goto L_0893A724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A724:
    aot_gpr_31 = (0x0893A72Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_08939C14;
L_0893A72C:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(6916), 0u);
    goto L_0893A730;
L_0893A730:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6908)));
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(6908));
    aot_gpr_5 = (aot_gpr_5 - 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893A75C;
      }
      goto L_0893A750;
    }
L_0893A750:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x0893A75Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    ctx.pc = 0x08B734FCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A75C:
    aot_gpr_31 = (0x0893A764u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_08939C38;
L_0893A764:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x0893A770u);
    aot_gpr_5 = (0u | 2u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A770:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893A138;
      }
      goto L_0893A778;
    }
L_0893A778:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
L_0893A7A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_0893A814;
      }
      goto L_0893A7C4;
    }
L_0893A7C4:
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_0893A7E8;
      }
      goto L_0893A7CC;
    }
L_0893A7CC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    goto L_0893A7E8;
L_0893A7E8:
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0893A7FCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 102u, 0x088906E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893A7FCu) goto L_0893A7FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A7FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(96));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), aot_gpr_4);
    goto L_0893A814;
L_0893A814:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
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
L_0893A824:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0893A838u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 98u, 0x08890624u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893A838u) goto L_0893A838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A838:
    aot_gpr_31 = (0x0893A840u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893A840u) goto L_0893A840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A840:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893A84Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 110u, 0x0889078Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893A84Cu) goto L_0893A84C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A84C:
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
L_0893A860:
    aot_gpr_5 = (0u | 0u);
    goto L_0893A864;
L_0893A864:
    aot_gpr_6 = (aot_gpr_5 << 4u);
    ctx.gpr[7] = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0893A864;
      }
      goto L_0893A894;
    }
L_0893A894:
    aot_gpr_5 = (0u | 25u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
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
L_0893A8A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0893A9A4;
      }
      goto L_0893A8B8;
    }
L_0893A8B8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893A9A4;
      }
      goto L_0893A8CC;
    }
L_0893A8CC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893A8DC;
L_0893A8DC:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893A974;
      }
      goto L_0893A8E4;
    }
L_0893A8E4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0893A974;
      }
      goto L_0893A8F0;
    }
L_0893A8F0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_6 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 << 4u);
    ctx.gpr[7] = (aot_gpr_4 - aot_gpr_6);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_4 = (ctx.gpr[7] - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
      if (branch_taken) {
          goto L_0893A8DC;
      }
      goto L_0893A974;
    }
L_0893A974:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893A9A4;
      }
      goto L_0893A984;
    }
L_0893A984:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_16 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
      ctx.gpr[8] = aot_run_words[3];
      ctx.gpr[9] = aot_run_words[4];
      ctx.gpr[10] = aot_run_words[5];
    }
    aot_gpr_31 = (0x0893A9A4u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893A9A4u) goto L_0893A9A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A9A4:
    aot_gpr_31 = (0x0893A9ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893AA9C;
L_0893A9AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893AA8C;
      }
      goto L_0893A9B8;
    }
L_0893A9B8:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2052)));
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_0893AA50;
      }
      goto L_0893A9D0;
    }
L_0893A9D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893A9E8;
      }
      goto L_0893A9DC;
    }
L_0893A9DC:
    aot_gpr_31 = (0x0893A9E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893A9E4u) goto L_0893A9E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A9E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0893A9E8;
L_0893A9E8:
    aot_gpr_31 = (0x0893A9F0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 580u, 0x089BABACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893A9F0u) goto L_0893A9F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893A9F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0893AA50;
      }
      goto L_0893A9F8;
    }
L_0893A9F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893AA10;
      }
      goto L_0893AA04;
    }
L_0893AA04:
    aot_gpr_31 = (0x0893AA0Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893AA0Cu) goto L_0893AA0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893AA0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0893AA10;
L_0893AA10:
    aot_gpr_31 = (0x0893AA18u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 552u, 0x089BAA4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893AA18u) goto L_0893AA18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893AA18:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893AA50;
      }
      goto L_0893AA24;
    }
L_0893AA24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893AA3C;
      }
      goto L_0893AA30;
    }
L_0893AA30:
    aot_gpr_31 = (0x0893AA38u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893AA38u) goto L_0893AA38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893AA38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0893AA3C;
L_0893AA3C:
    aot_gpr_31 = (0x0893AA44u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 552u, 0x089BAA4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893AA44u) goto L_0893AA44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893AA44:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893AA60;
      }
      goto L_0893AA50;
    }
L_0893AA50:
    aot_gpr_31 = (0x0893AA58u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893ABE8;
L_0893AA58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893AA8C;
      }
      goto L_0893AA60;
    }
L_0893AA60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893AA8C;
      }
      goto L_0893AA74;
    }
L_0893AA74:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), aot_gpr_4);
    goto L_0893AA8C;
L_0893AA8C:
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
L_0893AA9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1040));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1036), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_29 | 0u);
      if (branch_taken) {
          goto L_0893AB6C;
      }
      goto L_0893AAC4;
    }
L_0893AAC4:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_16 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
      ctx.gpr[8] = aot_run_words[3];
      ctx.gpr[9] = aot_run_words[4];
      ctx.gpr[10] = aot_run_words[5];
    }
    aot_gpr_31 = (0x0893AAE4u);
    ctx.gpr[11] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 515u, 0x08ABAD24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893AAE4u) goto L_0893AAE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893AAE4:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[7] = (0u | 32u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    goto L_0893AAF4;
L_0893AAF4:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_0893AB6C;
      }
      goto L_0893AAFC;
    }
L_0893AAFC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893AB6C;
      }
      goto L_0893AB04;
    }
L_0893AB04:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
      if (branch_taken) {
          goto L_0893AB30;
      }
      goto L_0893AB14;
    }
L_0893AB14:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(512), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[17]);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_29 + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0893AB64;
      }
      goto L_0893AB30;
    }
L_0893AB30:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_gpr_29 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_0893AB60;
      }
      goto L_0893AB44;
    }
L_0893AB44:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(512), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[17]);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_29 + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0893AB64;
      }
      goto L_0893AB60;
    }
L_0893AB60:
    aot_gpr_4 = (0u | 1u);
    goto L_0893AB64;
L_0893AB64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893AAF4;
      }
      goto L_0893AB6C;
    }
L_0893AB6C:
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(512), static_cast<std::uint16_t>(0u));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_0893AB8C;
      }
      goto L_0893AB7C;
    }
L_0893AB7C:
    aot_gpr_31 = (0x0893AB84u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893AB84u) goto L_0893AB84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893AB84:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(512));
    goto L_0893AB8C;
L_0893AB8C:
    aot_gpr_31 = (0x0893AB94u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 635u, 0x089BAFB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893AB94u) goto L_0893AB94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893AB94:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
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
L_0893ABAC:
    aot_gpr_5 = (0u | 0u);
    goto L_0893ABB0;
L_0893ABB0:
    aot_gpr_6 = (aot_gpr_5 << 4u);
    ctx.gpr[7] = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0893ABB0;
      }
      goto L_0893ABE0;
    }
L_0893ABE0:
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
L_0893ABE8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893AC14;
      }
      goto L_0893ABF4;
    }
L_0893ABF4:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10));
    aot_gpr_5 = (0u - aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    goto L_0893AC14;
L_0893AC14:
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
L_0893AC1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_6 & 65535u);
    ctx.gpr[19] = (ctx.gpr[7] & 65535u);
    ctx.gpr[20] = (ctx.gpr[8] & 65535u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_31 = (0x0893AC64u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 144u, 0x08AB8A34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893AC64u) goto L_0893AC64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893AC64:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0893AC74;
L_0893AC74:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893AE2C;
      }
      goto L_0893AC7C;
    }
L_0893AC7C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893AE2C;
      }
      goto L_0893AC84;
    }
L_0893AC84:
    aot_gpr_4 = (ctx.gpr[22] << 4u);
    aot_gpr_5 = (aot_gpr_4 - ctx.gpr[22]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0893ACF4;
      }
      goto L_0893ACA4;
    }
L_0893ACA4:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_gpr_5 = (0u - aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[30], ctx.gpr[30], ctx.gpr[30], ctx.gpr[30], ctx.gpr[30], ctx.gpr[30]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_0893ADE8;
      }
      goto L_0893ACF4;
    }
L_0893ACF4:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(14)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893ADE8;
      }
      goto L_0893AD04;
    }
L_0893AD04:
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[22]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 7u);
      if (branch_taken) {
          goto L_0893AD9C;
      }
      goto L_0893AD10;
    }
L_0893AD10:
    aot_gpr_6 = (aot_gpr_5 << 4u);
    goto L_0893AD14;
L_0893AD14:
    ctx.gpr[7] = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-40));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (aot_gpr_5 << 4u);
      if (branch_taken) {
          goto L_0893AD14;
      }
      goto L_0893AD9C;
    }
L_0893AD9C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_gpr_5 = (0u - aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[30], ctx.gpr[30], ctx.gpr[30], ctx.gpr[30], ctx.gpr[30], ctx.gpr[30]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_run_words); }
    ctx.gpr[23] = (0u | 1u);
    goto L_0893ADE8;
L_0893ADE8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_0893AE1C;
      }
      goto L_0893ADF0;
    }
L_0893ADF0:
    { const bool branch_taken = ctx.gpr[22] != 0u;
      if (branch_taken) {
          goto L_0893AE1C;
      }
      goto L_0893ADF8;
    }
L_0893ADF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_16 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
      ctx.gpr[8] = aot_run_words[3];
      ctx.gpr[9] = aot_run_words[4];
      ctx.gpr[10] = aot_run_words[5];
    }
    aot_gpr_31 = (0x0893AE1Cu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893AE1Cu) goto L_0893AE1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893AE1C:
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
      if (branch_taken) {
          goto L_0893AC74;
      }
      goto L_0893AE2C;
    }
L_0893AE2C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
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
L_0893AE5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1032), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1028), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1068), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1104)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1052), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1064), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1080), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1108)));
    aot_gpr_4 = (ctx.gpr[20] & 65535u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1112)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1084), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[8] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1044), aot_gpr_4);
    ctx.gpr[8] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1048), ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1072), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1076), ctx.gpr[22]);
    ctx.gpr[21] = (ctx.gpr[11] | 0u);
    ctx.gpr[22] = (ctx.gpr[10] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1040), ctx.gpr[9]);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1056), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1060), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1088), aot_gpr_31);
    aot_gpr_31 = (0x0893AEECu);
    ctx.gpr[11] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 515u, 0x08ABAD24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893AEECu) goto L_0893AEEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893AEEC:
    aot_gpr_31 = (0x0893AEF4u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 144u, 0x08AB8A34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893AEF4u) goto L_0893AEF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893AEF4:
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(1036), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[18] = (0u | 0u);
    goto L_0893AF00;
L_0893AF00:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893B0EC;
      }
      goto L_0893AF08;
    }
L_0893AF08:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893B0EC;
      }
      goto L_0893AF10;
    }
L_0893AF10:
    aot_gpr_4 = (ctx.gpr[17] << 4u);
    aot_gpr_5 = (aot_gpr_4 - ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0893AF98;
      }
      goto L_0893AF30;
    }
L_0893AF30:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1032)));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1040)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(10));
    aot_gpr_5 = (0u - aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1044)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(1036)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1028)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1024)));
    { const std::uint32_t aot_run_words[6]{aot_gpr_5, aot_gpr_6, ctx.gpr[30], ctx.gpr[23], ctx.gpr[22], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0893B0A8;
      }
      goto L_0893AF98;
    }
L_0893AF98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1048)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(14)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893B0A8;
      }
      goto L_0893AFAC;
    }
L_0893AFAC:
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 7u);
      if (branch_taken) {
          goto L_0893B044;
      }
      goto L_0893AFB8;
    }
L_0893AFB8:
    aot_gpr_6 = (aot_gpr_5 << 4u);
    goto L_0893AFBC;
L_0893AFBC:
    ctx.gpr[7] = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-40));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (aot_gpr_5 << 4u);
      if (branch_taken) {
          goto L_0893AFBC;
      }
      goto L_0893B044;
    }
L_0893B044:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1032)));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1040)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(10));
    aot_gpr_5 = (0u - aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1044)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(1036)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1028)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1024)));
    { const std::uint32_t aot_run_words[6]{aot_gpr_5, aot_gpr_6, ctx.gpr[30], ctx.gpr[23], ctx.gpr[22], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_run_words); }
    ctx.gpr[18] = (0u | 1u);
    goto L_0893B0A8;
L_0893B0A8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0893B0DC;
      }
      goto L_0893B0B0;
    }
L_0893B0B0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_0893B0DC;
      }
      goto L_0893B0B8;
    }
L_0893B0B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_16 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
      ctx.gpr[8] = aot_run_words[3];
      ctx.gpr[9] = aot_run_words[4];
      ctx.gpr[10] = aot_run_words[5];
    }
    aot_gpr_31 = (0x0893B0DCu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B0DCu) goto L_0893B0DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B0DC:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
      if (branch_taken) {
          goto L_0893AF00;
      }
      goto L_0893B0EC;
    }
L_0893B0EC:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1052), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1104));
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
L_0893B11C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (0u | 288u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_0893B164;
      }
      goto L_0893B144;
    }
L_0893B144:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
      if (branch_taken) {
          goto L_0893B174;
      }
      goto L_0893B164;
    }
L_0893B164:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x0893B170u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0126_entry, 126u, 163u, 0x089FCC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B170u) goto L_0893B170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B170:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_0893B174;
L_0893B174:
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
L_0893B184:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0893B19Cu);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(24));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0126_entry, 126u, 163u, 0x089FCC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B19Cu) goto L_0893B19C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B19C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), ctx.gpr[2]);
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
L_0893B1B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0893B1D4u);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18440));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 552u, 0x089FB820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B1D4u) goto L_0893B1D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B1D4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893B1E4u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 337u, 0x088B98ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B1E4u) goto L_0893B1E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B1E4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893B1F0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B1F0u) goto L_0893B1F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B1F0:
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
L_0893B208:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893B22C;
      }
      goto L_0893B21C;
    }
L_0893B21C:
    aot_gpr_31 = (0x0893B224u);
    goto L_0893B11C;
L_0893B224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893B230;
      }
      goto L_0893B22C;
    }
L_0893B22C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893B230;
L_0893B230:
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
L_0893B23C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0893B258u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_0893B208;
L_0893B258:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0893B26C;
      }
      goto L_0893B260;
    }
L_0893B260:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0893B26Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_0893B1B0;
L_0893B26C:
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
L_0893B280:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_31 = (0x0893B2B4u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    goto L_0893B208;
L_0893B2B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0893B328;
      }
      goto L_0893B2BC;
    }
L_0893B2BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_16 != aot_gpr_4;
      if (branch_taken) {
          goto L_0893B2DC;
      }
      goto L_0893B2C8;
    }
L_0893B2C8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0893B2D4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_0893B1B0;
L_0893B2D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893B328;
      }
      goto L_0893B2DC;
    }
L_0893B2DC:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (2232u << 16u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0893B2F4u);
    ctx.gpr[18] = (aot_gpr_6 + static_cast<std::uint32_t>(-10732));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 552u, 0x089FB820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B2F4u) goto L_0893B2F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B2F4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0893B304u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 552u, 0x089FB820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B304u) goto L_0893B304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B304:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0893B31Cu);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 337u, 0x088B98ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B31Cu) goto L_0893B31C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B31C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0893B328u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B328u) goto L_0893B328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B328:
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
L_0893B34C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (0u | 278u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_0893B378;
      }
      goto L_0893B368;
    }
L_0893B368:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x0893B374u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18424));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B374u) goto L_0893B374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B374:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_0893B378;
L_0893B378:
    aot_gpr_31 = (0x0893B380u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_0893B11C;
L_0893B380:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
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
L_0893B394:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
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
L_0893B3AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0893B3C8u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 212u, 0x08ABCF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B3C8u) goto L_0893B3C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B3C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_31 = (0x0893B3D8u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    goto L_0893B394;
L_0893B3D8:
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
L_0893B3E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0893B404u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    goto L_0893B34C;
L_0893B404:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0893B414u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    goto L_0893B3AC;
L_0893B414:
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
L_0893B428:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0893B484;
      }
      goto L_0893B460;
    }
L_0893B460:
    ctx.gpr[8] = (32768u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.gpr[9] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18408));
    ctx.gpr[7] = (0u | 12u);
    aot_gpr_31 = (0x0893B47Cu);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 139u, 0x08A9D300u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B47Cu) goto L_0893B47C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B47C:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_0893B484;
L_0893B484:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
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
L_0893B4C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18404));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x0893B508u);
    aot_gpr_6 = (0u | 200u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 533u, 0x089FB6ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B508u) goto L_0893B508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B508:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893B514u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_0893B428;
L_0893B514:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(696));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
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
L_0893B54C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), aot_gpr_6);
      if (branch_taken) {
          goto L_0893B59C;
      }
      goto L_0893B560;
    }
L_0893B560:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(696)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
      if (branch_taken) {
          goto L_0893B560;
      }
      goto L_0893B59C;
    }
L_0893B59C:
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
L_0893B5A4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_0893B5FC;
      }
      goto L_0893B5B8;
    }
L_0893B5B8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    goto L_0893B5BC;
L_0893B5BC:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(696)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[7] + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[8] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893B5BC;
      }
      goto L_0893B5FC;
    }
L_0893B5FC:
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
L_0893B604:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x0893B634u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B634u) goto L_0893B634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B634:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893B644u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B644u) goto L_0893B644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B644:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0893B654u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_0893B4C4;
L_0893B654:
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
L_0893B670:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0893B688u);
    aot_gpr_6 = (0u | 0u);
    goto L_0893B604;
L_0893B688:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893B694u);
    aot_gpr_5 = (0u | 1u);
    goto L_0893B54C;
L_0893B694:
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
L_0893B6A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_0893B720;
      }
      goto L_0893B6DC;
    }
L_0893B6DC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_0893B6E4;
L_0893B6E4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_6;
      if (branch_taken) {
          goto L_0893B700;
      }
      goto L_0893B6F0;
    }
L_0893B6F0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(60)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
      if (branch_taken) {
          goto L_0893B718;
      }
      goto L_0893B700;
    }
L_0893B700:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0893B6E4;
      }
      goto L_0893B710;
    }
L_0893B710:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893B720;
      }
      goto L_0893B718;
    }
L_0893B718:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893B7E4;
      }
      goto L_0893B720;
    }
L_0893B720:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18388));
    aot_gpr_31 = (0x0893B734u);
    aot_gpr_6 = (0u | 32u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 533u, 0x089FB6ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B734u) goto L_0893B734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B734:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0893B788;
      }
      goto L_0893B750;
    }
L_0893B750:
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(36));
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (32768u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18408));
    ctx.gpr[7] = (0u | 4u);
    aot_gpr_31 = (0x0893B774u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 139u, 0x08A9D300u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B774u) goto L_0893B774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B774:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(28)));
    goto L_0893B788;
L_0893B788:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[7], aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(68));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_0893B7E4;
L_0893B7E4:
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
L_0893B800:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
      if (branch_taken) {
          goto L_0893B84C;
      }
      goto L_0893B810;
    }
L_0893B810:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[2] << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    goto L_0893B820;
L_0893B820:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(696)));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0893B854;
      }
      goto L_0893B840;
    }
L_0893B840:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0893B820;
      }
      goto L_0893B84C;
    }
L_0893B84C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893B854;
      }
      goto L_0893B854;
    }
L_0893B854:
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
L_0893B85C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    goto L_0893B860;
L_0893B860:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893B880;
      }
      goto L_0893B868;
    }
L_0893B868:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_0893B880;
      }
      goto L_0893B878;
    }
L_0893B878:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0893B860;
      }
      goto L_0893B880;
    }
L_0893B880:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893B890;
      }
      goto L_0893B888;
    }
L_0893B888:
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    goto L_0893B890;
L_0893B890:
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
L_0893B898:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0893B8E0;
      }
      goto L_0893B8C8;
    }
L_0893B8C8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 7u);
    aot_gpr_31 = (0x0893B8D8u);
    aot_gpr_6 = (0u | 255u);
    goto L_0893B394;
L_0893B8D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893B980;
      }
      goto L_0893B8E0;
    }
L_0893B8E0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0893B8ECu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_0893B800;
L_0893B8EC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
      if (branch_taken) {
          goto L_0893B924;
      }
      goto L_0893B8F8;
    }
L_0893B8F8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x0893B908u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    goto L_0893B394;
L_0893B908:
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_0893B980;
      }
      goto L_0893B910;
    }
L_0893B910:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0893B91Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_0893B85C;
L_0893B91C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893B980;
      }
      goto L_0893B924;
    }
L_0893B924:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0893B938u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893B898;
L_0893B938:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893B964;
      }
      goto L_0893B948;
    }
L_0893B948:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_0893B980;
      }
      goto L_0893B950;
    }
L_0893B950:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0893B95Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 212u, 0x08ABCF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893B95Cu) goto L_0893B95C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893B95C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0893B980;
      }
      goto L_0893B964;
    }
L_0893B964:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893B974u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_0893B6A4;
L_0893B974:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (0u | 6u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_0893B980;
L_0893B980:
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
L_0893B9A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x0893B9C8u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    goto L_0893B34C;
L_0893B9C8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893B9E0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    goto L_0893B898;
L_0893B9E0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0893BA00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 12u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_16 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0893BA64;
      }
      goto L_0893BA2C;
    }
L_0893BA2C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
      if (branch_taken) {
          goto L_0893BA40;
      }
      goto L_0893BA38;
    }
L_0893BA38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0893BA4C;
      }
      goto L_0893BA40;
    }
L_0893BA40:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x0893BA4Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 194u, 0x08ABCDC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BA4Cu) goto L_0893BA4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BA4C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893BA5Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 218u, 0x08ABD018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BA5Cu) goto L_0893BA5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BA5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893BAA0;
      }
      goto L_0893BA64;
    }
L_0893BA64:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893BA78;
      }
      goto L_0893BA6C;
    }
L_0893BA6C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893BA78u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 275u, 0x08ABD4FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BA78u) goto L_0893BA78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BA78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
      if (branch_taken) {
          goto L_0893BAA0;
      }
      goto L_0893BA80;
    }
L_0893BA80:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893BA90u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 194u, 0x08ABCDC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BA90u) goto L_0893BA90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BA90:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893BAA0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 112u, 0x08ABC74Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BAA0u) goto L_0893BAA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BAA0:
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
L_0893BAB8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0893BADCu);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    goto L_0893B54C;
L_0893BADC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18376));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893BAF0u);
    aot_gpr_6 = (0u | 100u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 533u, 0x089FB6ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BAF0u) goto L_0893BAF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BAF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0893BB14;
      }
      goto L_0893BB08;
    }
L_0893BB08:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18364));
    aot_gpr_31 = (0x0893BB14u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893B670;
L_0893BB14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x0893BB20u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 194u, 0x08ABCDC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BB20u) goto L_0893BB20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BB20:
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
L_0893BB38:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_5);
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
L_0893BB60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0893BB90u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_0893B5A4;
L_0893BB90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893BBB4;
      }
      goto L_0893BB9C;
    }
L_0893BB9C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 33u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0893BBB4u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BBB4u) goto L_0893BBB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BBB4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_31 = (0x0893BBC8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 176u, 0x08ABCC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BBC8u) goto L_0893BBC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BBC8:
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
L_0893BBDC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0893BC54;
      }
      goto L_0893BC24;
    }
L_0893BC24:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (4u << 16u);
    ctx.gpr[9] = (2232u << 16u);
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(52));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x0893BC4Cu);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-10688));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 139u, 0x08A9D300u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BC4Cu) goto L_0893BC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BC4C:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_0893BC54;
L_0893BC54:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (0u | 34u);
    aot_gpr_31 = (0x0893BC8Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 436u, 0x08ABE004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BC8Cu) goto L_0893BC8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BC8C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_31 = (0x0893BC9Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    goto L_0893B394;
L_0893BC9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 5u);
      if (branch_taken) {
          goto L_0893BCF8;
      }
      goto L_0893BCB4;
    }
L_0893BCB4:
    ctx.gpr[19] = (aot_gpr_16 | 0u);
    goto L_0893BCB8;
L_0893BCB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (0u | 4u);
    if (aot_gpr_5 == ctx.gpr[20]) {
    aot_gpr_4 = (0u | 0u);
        goto L_0893BCC8;
    }
    goto L_0893BCC8;
L_0893BCC8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0893BCE0u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BCE0u) goto L_0893BCE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BCE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0893BCB8;
      }
      goto L_0893BCF8;
    }
L_0893BCF8:
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
L_0893BD18:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0893BD3Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 74u, 0x08AB0668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BD3Cu) goto L_0893BD3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BD3C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t aot_run_words[4]{0u, aot_gpr_5, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[17] + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0893BD84u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 588u, 0x08A93C14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BD84u) goto L_0893BD84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BD84:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[17] + static_cast<std::uint32_t>(44), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(aot_gpr_5));
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
L_0893BDC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x0893BDF0u);
    aot_gpr_5 = (0u | 0u);
    goto L_0893B5A4;
L_0893BDF0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 27u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x0893BE08u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BE08u) goto L_0893BE08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BE08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    aot_gpr_31 = (0x0893BE24u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BE24u) goto L_0893BE24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BE24:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_31 = (0x0893BE48u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BE48u) goto L_0893BE48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BE48:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    aot_gpr_31 = (0x0893BE70u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BE70u) goto L_0893BE70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BE70:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_31 = (0x0893BE98u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BE98u) goto L_0893BE98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BE98:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_31 = (0x0893BED0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BED0u) goto L_0893BED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BED0:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_31 = (0x0893BEF8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BEF8u) goto L_0893BEF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BEF8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), aot_gpr_4);
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
L_0893BF28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1568));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1548), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1556), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1552), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1560), aot_gpr_31);
    aot_gpr_31 = (0x0893BF58u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BF58u) goto L_0893BF58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BF58:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893BF68u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BF68u) goto L_0893BF68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BF68:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893BF7Cu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 569u, 0x089FB95Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BF7Cu) goto L_0893BF7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BF7C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(52));
    aot_gpr_31 = (0x0893BF88u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_0893BD18;
L_0893BF88:
    aot_gpr_31 = (0x0893BF90u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_0893B11C;
L_0893BF90:
    aot_gpr_31 = (0x0893BF98u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 508u, 0x0893DF20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BF98u) goto L_0893BF98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BF98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 288u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18360));
      if (branch_taken) {
          goto L_0893BFB0;
      }
      goto L_0893BFA8;
    }
L_0893BFA8:
    aot_gpr_31 = (0x0893BFB0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BFB0u) goto L_0893BFB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BFB0:
    aot_gpr_31 = (0x0893BFB8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_0893BDC0;
L_0893BFB8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1548), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1568));
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
L_0893BFD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_31 = (0x0893BFFCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 280u, 0x08ABD558u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893BFFCu) goto L_0893BFFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893BFFC:
    aot_gpr_31 = (0x0893C004u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893B11C;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0077(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0077_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_77(Runtime &runtime) {
    runtime.register_generated_unit(77u, 0x08938000u, 16384u, &recomp_unit_0077, &recomp_unit_0077_entry);
    runtime.register_function(0x08938000u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938024u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938040u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938048u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938050u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938058u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938060u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938068u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938070u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938088u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938094u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938144u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893814Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938154u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893815Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893816Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893817Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938180u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938188u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938198u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938200u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938208u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938210u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938218u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938224u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893822Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938234u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893823Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938248u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938250u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938258u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938260u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938274u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938284u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938330u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938340u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938350u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893835Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938364u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938374u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893837Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938384u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893838Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938394u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938400u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893840Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938414u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893841Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938430u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893846Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938474u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938480u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893849Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938518u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893855Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938568u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938578u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938584u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938590u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893859Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938634u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938658u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938668u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893870Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938720u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938748u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938758u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938768u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938800u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893880Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893881Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938824u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938830u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893883Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938848u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938854u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893885Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938864u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938874u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893887Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938884u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893888Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938894u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893889Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893890Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938924u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938928u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938934u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893893Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938994u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893899Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938ABCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938ECCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938ED4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939004u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939014u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893902Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939034u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939040u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939050u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939078u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939080u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939094u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939114u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939138u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939150u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939158u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939164u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939174u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939194u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893919Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939214u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893921Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939228u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939238u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893924Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939254u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893925Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939268u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893927Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939284u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893928Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939298u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893930Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939314u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893931Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939328u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939348u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939350u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939360u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939374u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939394u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893939Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939408u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939410u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893941Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893943Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939444u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939460u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893947Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939490u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939504u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893950Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939530u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939538u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939544u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939554u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893955Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939570u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893957Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939590u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893960Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939614u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893961Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939624u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939628u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893963Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893964Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939674u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893967Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939704u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939720u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939728u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939734u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893973Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939744u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939750u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939760u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939768u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939790u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939798u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939804u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893980Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939814u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893981Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939824u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939834u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939854u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893985Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893987Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939908u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939924u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893992Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939948u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939964u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939978u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893998Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A01Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A03Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A044u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A048u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A080u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A08Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A100u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A10Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A138u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A150u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A168u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A17Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A184u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A190u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A198u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A204u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A20Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A218u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A228u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A230u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A238u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A244u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A24Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A250u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A25Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A268u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A270u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A27Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A284u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A290u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A310u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A338u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A340u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A388u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A39Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A464u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A470u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A48Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A498u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A514u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A530u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A548u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A54Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A558u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A560u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A568u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A57Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A584u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A608u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A60Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A624u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A70Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A714u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A724u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A72Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A730u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A750u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A75Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A764u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A770u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A778u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A814u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A824u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A838u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A840u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A84Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A860u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A864u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A894u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A974u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A984u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B044u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B11Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B144u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B164u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B170u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B174u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B184u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B19Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B208u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B21Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B224u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B22Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B230u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B23Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B258u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B260u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B26Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B280u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B304u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B31Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B328u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B34Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B368u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B374u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B378u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B380u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B394u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B404u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B414u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B428u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B460u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B47Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B484u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B508u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B514u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B54Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B560u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B59Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B604u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B634u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B644u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B654u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B670u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B688u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B694u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B700u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B710u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B718u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B720u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B734u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B750u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B774u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B788u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B800u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B810u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B820u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B840u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B84Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B854u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B85Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B860u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B868u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B878u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B880u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B888u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B890u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B898u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B908u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B910u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B91Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B924u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B938u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B948u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B950u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B95Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B964u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B974u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B980u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BADCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BDC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BDF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BED0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BEF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFFCu, &recomp_unit_0077, "recomp_unit_0077");
}
} // namespace psprecomp
