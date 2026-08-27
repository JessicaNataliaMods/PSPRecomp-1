#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0200[64] = {
    0x0984920000000111ull, 0x0000001000052610ull, 0x0002000800008000ull, 0x1000400010008000ull,
    0x0010000828008002ull, 0x8080800224004002ull, 0x12889144A4008404ull, 0x0000548090112112ull,
    0x2022001400000140ull, 0x926880A240400212ull, 0x00080100202D6926ull, 0xA691449206948901ull,
    0xB5A49A48080B5A54ull, 0xA549048020040080ull, 0x021031348A249034ull, 0x0150150D00D0B509ull,
    0x041014848224040Dull, 0x042A855008248224ull, 0x086B109021208901ull, 0xA001224084811202ull,
    0x0904181482240820ull, 0x950861A569692501ull, 0x22DA494400001254ull, 0x40D225349A206909ull,
    0x11121210800A6934ull, 0x2444888911111111ull, 0x2444448891111222ull, 0x0010CD1034C42122ull,
    0x4440820002808004ull, 0x8000102000000800ull, 0x2000908008000014ull, 0x081008C002011509ull,
    0x0040514800091000ull, 0x400004030C800140ull, 0xA44020002A092493ull, 0x0044208840000121ull,
    0x0491090000044408ull, 0x0280000200440001ull, 0xA000000400220000ull, 0x4002420000000000ull,
    0x200000A111281040ull, 0x1008488480000224ull, 0x0140000A88002000ull, 0x8080048400000000ull,
    0x0904040001014082ull, 0x5552400800001441ull, 0x20090B5240008302ull, 0x0406420401200040ull,
    0x288A904C15490010ull, 0x14284A480040C120ull, 0x804C12028D101510ull, 0x80140A04A4800404ull,
    0x00130480A34400A8ull, 0x9149226A48001012ull, 0x002A4A8001420000ull, 0x0356A448004010D0ull,
    0x1A2D490010182405ull, 0xA069490040C12028ull, 0x2400411200830480ull, 0x30480A22A2416855ull,
    0x48A9048008024010ull, 0x1030108281A89209ull, 0xA209A882D0092000ull, 0x005A92008008318Eull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0200[64] = {
    1u, 11u, 18u, 21u, 25u, 31u, 39u, 54u, 66u, 73u, 88u, 102u, 123u, 148u, 160u, 178u,
    197u, 211u, 227u, 243u, 256u, 269u, 293u, 310u, 332u, 349u, 366u, 383u, 400u, 409u, 413u, 420u,
    432u, 441u, 450u, 466u, 475u, 485u, 491u, 496u, 500u, 510u, 520u, 527u, 532u, 541u, 554u, 568u,
    577u, 594u, 608u, 624u, 636u, 650u, 667u, 677u, 693u, 710u, 726u, 737u, 757u, 769u, 785u, 801u,
};
void recomp_unit_0200_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,31,6,16 fprs=12,13,14,16 gpr_occ=4034 fpr_occ=659 gpr_total=5647 fpr_total=1124
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_16 = ctx.fpr[16];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[16] = aot_fpr_16; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_16 = ctx.fpr[16]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B24000u;
        entry_id = 0u;
        if (entry_delta < 16348u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0200[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0200[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B24000;
    case 2u: goto L_08B24010;
    case 3u: goto L_08B24020;
    case 4u: goto L_08B240A4;
    case 5u: goto L_08B240B0;
    case 6u: goto L_08B240BC;
    case 7u: goto L_08B240C8;
    case 8u: goto L_08B240DC;
    case 9u: goto L_08B240E0;
    case 10u: goto L_08B240EC;
    case 11u: goto L_08B24110;
    case 12u: goto L_08B24124;
    case 13u: goto L_08B24128;
    case 14u: goto L_08B24134;
    case 15u: goto L_08B24140;
    case 16u: goto L_08B24148;
    case 17u: goto L_08B24190;
    case 18u: goto L_08B2423C;
    case 19u: goto L_08B2428C;
    case 20u: goto L_08B242C4;
    case 21u: goto L_08B2433C;
    case 22u: goto L_08B24370;
    case 23u: goto L_08B243B8;
    case 24u: goto L_08B243F0;
    case 25u: goto L_08B24404;
    case 26u: goto L_08B2443C;
    case 27u: goto L_08B2446C;
    case 28u: goto L_08B24474;
    case 29u: goto L_08B2448C;
    case 30u: goto L_08B244D0;
    case 31u: goto L_08B24504;
    case 32u: goto L_08B24538;
    case 33u: goto L_08B24568;
    case 34u: goto L_08B24574;
    case 35u: goto L_08B24584;
    case 36u: goto L_08B245BC;
    case 37u: goto L_08B245DC;
    case 38u: goto L_08B245FC;
    case 39u: goto L_08B24608;
    case 40u: goto L_08B24628;
    case 41u: goto L_08B2463C;
    case 42u: goto L_08B24668;
    case 43u: goto L_08B24674;
    case 44u: goto L_08B2467C;
    case 45u: goto L_08B24688;
    case 46u: goto L_08B24698;
    case 47u: goto L_08B246A0;
    case 48u: goto L_08B246B0;
    case 49u: goto L_08B246BC;
    case 50u: goto L_08B246CC;
    case 51u: goto L_08B246DC;
    case 52u: goto L_08B246E4;
    case 53u: goto L_08B246F0;
    case 54u: goto L_08B24704;
    case 55u: goto L_08B24710;
    case 56u: goto L_08B24720;
    case 57u: goto L_08B24734;
    case 58u: goto L_08B24740;
    case 59u: goto L_08B24750;
    case 60u: goto L_08B24770;
    case 61u: goto L_08B2477C;
    case 62u: goto L_08B2479C;
    case 63u: goto L_08B247A8;
    case 64u: goto L_08B247B0;
    case 65u: goto L_08B247B8;
    case 66u: goto L_08B24818;
    case 67u: goto L_08B24820;
    case 68u: goto L_08B24888;
    case 69u: goto L_08B24890;
    case 70u: goto L_08B248C4;
    case 71u: goto L_08B248D4;
    case 72u: goto L_08B248F4;
    case 73u: goto L_08B24904;
    case 74u: goto L_08B24910;
    case 75u: goto L_08B24924;
    case 76u: goto L_08B24958;
    case 77u: goto L_08B24978;
    case 78u: goto L_08B24984;
    case 79u: goto L_08B24994;
    case 80u: goto L_08B2499C;
    case 81u: goto L_08B249BC;
    case 82u: goto L_08B249CC;
    case 83u: goto L_08B249D4;
    case 84u: goto L_08B249D8;
    case 85u: goto L_08B249E4;
    case 86u: goto L_08B249F0;
    case 87u: goto L_08B249FC;
    case 88u: goto L_08B24A04;
    case 89u: goto L_08B24A08;
    case 90u: goto L_08B24A14;
    case 91u: goto L_08B24A20;
    case 92u: goto L_08B24A2C;
    case 93u: goto L_08B24A34;
    case 94u: goto L_08B24A38;
    case 95u: goto L_08B24A40;
    case 96u: goto L_08B24A48;
    case 97u: goto L_08B24A4C;
    case 98u: goto L_08B24A54;
    case 99u: goto L_08B24A74;
    case 100u: goto L_08B24AA0;
    case 101u: goto L_08B24ACC;
    case 102u: goto L_08B24B00;
    case 103u: goto L_08B24B20;
    case 104u: goto L_08B24B2C;
    case 105u: goto L_08B24B3C;
    case 106u: goto L_08B24B48;
    case 107u: goto L_08B24B50;
    case 108u: goto L_08B24B5C;
    case 109u: goto L_08B24B64;
    case 110u: goto L_08B24B68;
    case 111u: goto L_08B24B84;
    case 112u: goto L_08B24B90;
    case 113u: goto L_08B24B9C;
    case 114u: goto L_08B24BA8;
    case 115u: goto L_08B24BB8;
    case 116u: goto L_08B24BC0;
    case 117u: goto L_08B24BD0;
    case 118u: goto L_08B24BDC;
    case 119u: goto L_08B24BE4;
    case 120u: goto L_08B24BE8;
    case 121u: goto L_08B24BF4;
    case 122u: goto L_08B24BFC;
    case 123u: goto L_08B24C08;
    case 124u: goto L_08B24C10;
    case 125u: goto L_08B24C18;
    case 126u: goto L_08B24C24;
    case 127u: goto L_08B24C2C;
    case 128u: goto L_08B24C30;
    case 129u: goto L_08B24C38;
    case 130u: goto L_08B24C40;
    case 131u: goto L_08B24C44;
    case 132u: goto L_08B24C4C;
    case 133u: goto L_08B24C6C;
    case 134u: goto L_08B24C8C;
    case 135u: goto L_08B24C98;
    case 136u: goto L_08B24CA4;
    case 137u: goto L_08B24CAC;
    case 138u: goto L_08B24CB0;
    case 139u: goto L_08B24CBC;
    case 140u: goto L_08B24CC8;
    case 141u: goto L_08B24CD4;
    case 142u: goto L_08B24CDC;
    case 143u: goto L_08B24CE0;
    case 144u: goto L_08B24CE8;
    case 145u: goto L_08B24CF0;
    case 146u: goto L_08B24CF4;
    case 147u: goto L_08B24CFC;
    case 148u: goto L_08B24D1C;
    case 149u: goto L_08B24D48;
    case 150u: goto L_08B24D74;
    case 151u: goto L_08B24D9C;
    case 152u: goto L_08B24DA8;
    case 153u: goto L_08B24DC0;
    case 154u: goto L_08B24DCC;
    case 155u: goto L_08B24DD8;
    case 156u: goto L_08B24DE0;
    case 157u: goto L_08B24DE8;
    case 158u: goto L_08B24DF4;
    case 159u: goto L_08B24DFC;
    case 160u: goto L_08B24E08;
    case 161u: goto L_08B24E10;
    case 162u: goto L_08B24E14;
    case 163u: goto L_08B24E30;
    case 164u: goto L_08B24E3C;
    case 165u: goto L_08B24E48;
    case 166u: goto L_08B24E54;
    case 167u: goto L_08B24E64;
    case 168u: goto L_08B24E6C;
    case 169u: goto L_08B24E7C;
    case 170u: goto L_08B24E88;
    case 171u: goto L_08B24E90;
    case 172u: goto L_08B24E94;
    case 173u: goto L_08B24EA0;
    case 174u: goto L_08B24EB0;
    case 175u: goto L_08B24EB4;
    case 176u: goto L_08B24ED0;
    case 177u: goto L_08B24EE4;
    case 178u: goto L_08B24F00;
    case 179u: goto L_08B24F0C;
    case 180u: goto L_08B24F20;
    case 181u: goto L_08B24F28;
    case 182u: goto L_08B24F30;
    case 183u: goto L_08B24F34;
    case 184u: goto L_08B24F3C;
    case 185u: goto L_08B24F50;
    case 186u: goto L_08B24F58;
    case 187u: goto L_08B24F5C;
    case 188u: goto L_08B24F80;
    case 189u: goto L_08B24F88;
    case 190u: goto L_08B24F8C;
    case 191u: goto L_08B24FA0;
    case 192u: goto L_08B24FA8;
    case 193u: goto L_08B24FB0;
    case 194u: goto L_08B24FD0;
    case 195u: goto L_08B24FD8;
    case 196u: goto L_08B24FE0;
    case 197u: goto L_08B25000;
    case 198u: goto L_08B25008;
    case 199u: goto L_08B2500C;
    case 200u: goto L_08B25028;
    case 201u: goto L_08B25048;
    case 202u: goto L_08B25054;
    case 203u: goto L_08B25064;
    case 204u: goto L_08B2507C;
    case 205u: goto L_08B25088;
    case 206u: goto L_08B2509C;
    case 207u: goto L_08B250A8;
    case 208u: goto L_08B250B0;
    case 209u: goto L_08B250D0;
    case 210u: goto L_08B250E8;
    case 211u: goto L_08B25108;
    case 212u: goto L_08B25114;
    case 213u: goto L_08B25124;
    case 214u: goto L_08B2513C;
    case 215u: goto L_08B25148;
    case 216u: goto L_08B25154;
    case 217u: goto L_08B2516C;
    case 218u: goto L_08B25190;
    case 219u: goto L_08B25198;
    case 220u: goto L_08B251A0;
    case 221u: goto L_08B251A8;
    case 222u: goto L_08B251BC;
    case 223u: goto L_08B251C4;
    case 224u: goto L_08B251CC;
    case 225u: goto L_08B251D4;
    case 226u: goto L_08B251E8;
    case 227u: goto L_08B25200;
    case 228u: goto L_08B25220;
    case 229u: goto L_08B2522C;
    case 230u: goto L_08B2523C;
    case 231u: goto L_08B25254;
    case 232u: goto L_08B25260;
    case 233u: goto L_08B25274;
    case 234u: goto L_08B25290;
    case 235u: goto L_08B2529C;
    case 236u: goto L_08B252B0;
    case 237u: goto L_08B252C0;
    case 238u: goto L_08B252C4;
    case 239u: goto L_08B252CC;
    case 240u: goto L_08B252D4;
    case 241u: goto L_08B252D8;
    case 242u: goto L_08B252EC;
    case 243u: goto L_08B25304;
    case 244u: goto L_08B25324;
    case 245u: goto L_08B25330;
    case 246u: goto L_08B25340;
    case 247u: goto L_08B2535C;
    case 248u: goto L_08B25368;
    case 249u: goto L_08B2537C;
    case 250u: goto L_08B25398;
    case 251u: goto L_08B253A4;
    case 252u: goto L_08B253B4;
    case 253u: goto L_08B253C0;
    case 254u: goto L_08B253F4;
    case 255u: goto L_08B253FC;
    case 256u: goto L_08B25414;
    case 257u: goto L_08B2542C;
    case 258u: goto L_08B25448;
    case 259u: goto L_08B25454;
    case 260u: goto L_08B25464;
    case 261u: goto L_08B2547C;
    case 262u: goto L_08B25488;
    case 263u: goto L_08B25490;
    case 264u: goto L_08B254AC;
    case 265u: goto L_08B254B0;
    case 266u: goto L_08B254C8;
    case 267u: goto L_08B254E0;
    case 268u: goto L_08B254EC;
    case 269u: goto L_08B25500;
    case 270u: goto L_08B25520;
    case 271u: goto L_08B25528;
    case 272u: goto L_08B25534;
    case 273u: goto L_08B25540;
    case 274u: goto L_08B2554C;
    case 275u: goto L_08B25554;
    case 276u: goto L_08B25558;
    case 277u: goto L_08B25560;
    case 278u: goto L_08B2556C;
    case 279u: goto L_08B25574;
    case 280u: goto L_08B25578;
    case 281u: goto L_08B25580;
    case 282u: goto L_08B25588;
    case 283u: goto L_08B25594;
    case 284u: goto L_08B2559C;
    case 285u: goto L_08B255A0;
    case 286u: goto L_08B255B4;
    case 287u: goto L_08B255B8;
    case 288u: goto L_08B255CC;
    case 289u: goto L_08B255E0;
    case 290u: goto L_08B255E8;
    case 291u: goto L_08B255F0;
    case 292u: goto L_08B255FC;
    case 293u: goto L_08B25608;
    case 294u: goto L_08B25610;
    case 295u: goto L_08B25618;
    case 296u: goto L_08B25624;
    case 297u: goto L_08B25630;
    case 298u: goto L_08B25688;
    case 299u: goto L_08B25698;
    case 300u: goto L_08B256A0;
    case 301u: goto L_08B256AC;
    case 302u: goto L_08B256B8;
    case 303u: goto L_08B256C4;
    case 304u: goto L_08B256CC;
    case 305u: goto L_08B256D0;
    case 306u: goto L_08B256D8;
    case 307u: goto L_08B256DC;
    case 308u: goto L_08B256E4;
    case 309u: goto L_08B256F4;
    case 310u: goto L_08B25700;
    case 311u: goto L_08B2570C;
    case 312u: goto L_08B25720;
    case 313u: goto L_08B2572C;
    case 314u: goto L_08B25734;
    case 315u: goto L_08B25738;
    case 316u: goto L_08B25754;
    case 317u: goto L_08B25764;
    case 318u: goto L_08B2576C;
    case 319u: goto L_08B25770;
    case 320u: goto L_08B2577C;
    case 321u: goto L_08B25788;
    case 322u: goto L_08B25790;
    case 323u: goto L_08B25794;
    case 324u: goto L_08B257A0;
    case 325u: goto L_08B257A8;
    case 326u: goto L_08B257B4;
    case 327u: goto L_08B257C4;
    case 328u: goto L_08B257D0;
    case 329u: goto L_08B257D8;
    case 330u: goto L_08B257DC;
    case 331u: goto L_08B257F8;
    case 332u: goto L_08B25808;
    case 333u: goto L_08B25810;
    case 334u: goto L_08B25814;
    case 335u: goto L_08B25820;
    case 336u: goto L_08B2582C;
    case 337u: goto L_08B25834;
    case 338u: goto L_08B25838;
    case 339u: goto L_08B25844;
    case 340u: goto L_08B2584C;
    case 341u: goto L_08B2587C;
    case 342u: goto L_08B25890;
    case 343u: goto L_08B258A4;
    case 344u: goto L_08B258B0;
    case 345u: goto L_08B258C4;
    case 346u: goto L_08B258D0;
    case 347u: goto L_08B258E0;
    case 348u: goto L_08B258F0;
    case 349u: goto L_08B25900;
    case 350u: goto L_08B25910;
    case 351u: goto L_08B25920;
    case 352u: goto L_08B25930;
    case 353u: goto L_08B25940;
    case 354u: goto L_08B25950;
    case 355u: goto L_08B25960;
    case 356u: goto L_08B25970;
    case 357u: goto L_08B25980;
    case 358u: goto L_08B2598C;
    case 359u: goto L_08B2599C;
    case 360u: goto L_08B259AC;
    case 361u: goto L_08B259BC;
    case 362u: goto L_08B259C8;
    case 363u: goto L_08B259D8;
    case 364u: goto L_08B259E8;
    case 365u: goto L_08B259F4;
    case 366u: goto L_08B25A04;
    case 367u: goto L_08B25A14;
    case 368u: goto L_08B25A24;
    case 369u: goto L_08B25A30;
    case 370u: goto L_08B25A40;
    case 371u: goto L_08B25A50;
    case 372u: goto L_08B25A60;
    case 373u: goto L_08B25A70;
    case 374u: goto L_08B25A7C;
    case 375u: goto L_08B25A8C;
    case 376u: goto L_08B25A9C;
    case 377u: goto L_08B25AA8;
    case 378u: goto L_08B25AB8;
    case 379u: goto L_08B25AC8;
    case 380u: goto L_08B25AD8;
    case 381u: goto L_08B25AE8;
    case 382u: goto L_08B25AF4;
    case 383u: goto L_08B25B04;
    case 384u: goto L_08B25B14;
    case 385u: goto L_08B25B20;
    case 386u: goto L_08B25B34;
    case 387u: goto L_08B25B48;
    case 388u: goto L_08B25B58;
    case 389u: goto L_08B25B5C;
    case 390u: goto L_08B25B68;
    case 391u: goto L_08B25B70;
    case 392u: goto L_08B25B74;
    case 393u: goto L_08B25B90;
    case 394u: goto L_08B25BA0;
    case 395u: goto L_08B25BA8;
    case 396u: goto L_08B25BAC;
    case 397u: goto L_08B25BB8;
    case 398u: goto L_08B25BBC;
    case 399u: goto L_08B25BD0;
    case 400u: goto L_08B25C08;
    case 401u: goto L_08B25C3C;
    case 402u: goto L_08B25C5C;
    case 403u: goto L_08B25C64;
    case 404u: goto L_08B25CA4;
    case 405u: goto L_08B25CBC;
    case 406u: goto L_08B25CD8;
    case 407u: goto L_08B25CE8;
    case 408u: goto L_08B25CF8;
    case 409u: goto L_08B25D2C;
    case 410u: goto L_08B25D94;
    case 411u: goto L_08B25DB0;
    case 412u: goto L_08B25DFC;
    case 413u: goto L_08B25E08;
    case 414u: goto L_08B25E10;
    case 415u: goto L_08B25E6C;
    case 416u: goto L_08B25E9C;
    case 417u: goto L_08B25EB0;
    case 418u: goto L_08B25EBC;
    case 419u: goto L_08B25EF4;
    case 420u: goto L_08B25F00;
    case 421u: goto L_08B25F0C;
    case 422u: goto L_08B25F20;
    case 423u: goto L_08B25F28;
    case 424u: goto L_08B25F30;
    case 425u: goto L_08B25F40;
    case 426u: goto L_08B25F64;
    case 427u: goto L_08B25F98;
    case 428u: goto L_08B25F9C;
    case 429u: goto L_08B25FAC;
    case 430u: goto L_08B25FD0;
    case 431u: goto L_08B25FEC;
    case 432u: goto L_08B26030;
    case 433u: goto L_08B26040;
    case 434u: goto L_08B2604C;
    case 435u: goto L_08B2608C;
    case 436u: goto L_08B26098;
    case 437u: goto L_08B260A0;
    case 438u: goto L_08B260B0;
    case 439u: goto L_08B260B8;
    case 440u: goto L_08B260D8;
    case 441u: goto L_08B26118;
    case 442u: goto L_08B26120;
    case 443u: goto L_08B2615C;
    case 444u: goto L_08B26168;
    case 445u: goto L_08B2616C;
    case 446u: goto L_08B26180;
    case 447u: goto L_08B26184;
    case 448u: goto L_08B261A8;
    case 449u: goto L_08B261F8;
    case 450u: goto L_08B26200;
    case 451u: goto L_08B26204;
    case 452u: goto L_08B26210;
    case 453u: goto L_08B2621C;
    case 454u: goto L_08B26228;
    case 455u: goto L_08B26234;
    case 456u: goto L_08B26240;
    case 457u: goto L_08B2624C;
    case 458u: goto L_08B26264;
    case 459u: goto L_08B2626C;
    case 460u: goto L_08B26274;
    case 461u: goto L_08B262B4;
    case 462u: goto L_08B262D8;
    case 463u: goto L_08B262E8;
    case 464u: goto L_08B262F4;
    case 465u: goto L_08B262FC;
    case 466u: goto L_08B26300;
    case 467u: goto L_08B26314;
    case 468u: goto L_08B26320;
    case 469u: goto L_08B26378;
    case 470u: goto L_08B2638C;
    case 471u: goto L_08B2639C;
    case 472u: goto L_08B263B4;
    case 473u: goto L_08B263C8;
    case 474u: goto L_08B263D8;
    case 475u: goto L_08B2640C;
    case 476u: goto L_08B26428;
    case 477u: goto L_08B26438;
    case 478u: goto L_08B26448;
    case 479u: goto L_08B264A0;
    case 480u: goto L_08B264AC;
    case 481u: goto L_08B264C0;
    case 482u: goto L_08B264D0;
    case 483u: goto L_08B264DC;
    case 484u: goto L_08B264E8;
    case 485u: goto L_08B26500;
    case 486u: goto L_08B26548;
    case 487u: goto L_08B26558;
    case 488u: goto L_08B26584;
    case 489u: goto L_08B265DC;
    case 490u: goto L_08B265E4;
    case 491u: goto L_08B26644;
    case 492u: goto L_08B26654;
    case 493u: goto L_08B26688;
    case 494u: goto L_08B266F4;
    case 495u: goto L_08B266FC;
    case 496u: goto L_08B267A4;
    case 497u: goto L_08B267B8;
    case 498u: goto L_08B267C4;
    case 499u: goto L_08B267F8;
    case 500u: goto L_08B26818;
    case 501u: goto L_08B26830;
    case 502u: goto L_08B2684C;
    case 503u: goto L_08B26854;
    case 504u: goto L_08B26860;
    case 505u: goto L_08B26870;
    case 506u: goto L_08B26880;
    case 507u: goto L_08B26894;
    case 508u: goto L_08B2689C;
    case 509u: goto L_08B268F4;
    case 510u: goto L_08B26908;
    case 511u: goto L_08B26914;
    case 512u: goto L_08B26924;
    case 513u: goto L_08B2697C;
    case 514u: goto L_08B26988;
    case 515u: goto L_08B2699C;
    case 516u: goto L_08B269AC;
    case 517u: goto L_08B269B8;
    case 518u: goto L_08B269CC;
    case 519u: goto L_08B269F0;
    case 520u: goto L_08B26A34;
    case 521u: goto L_08B26A6C;
    case 522u: goto L_08B26A7C;
    case 523u: goto L_08B26A84;
    case 524u: goto L_08B26A8C;
    case 525u: goto L_08B26AD8;
    case 526u: goto L_08B26AE0;
    case 527u: goto L_08B26B88;
    case 528u: goto L_08B26B9C;
    case 529u: goto L_08B26BA8;
    case 530u: goto L_08B26BDC;
    case 531u: goto L_08B26BFC;
    case 532u: goto L_08B26C04;
    case 533u: goto L_08B26C1C;
    case 534u: goto L_08B26C38;
    case 535u: goto L_08B26C40;
    case 536u: goto L_08B26C60;
    case 537u: goto L_08B26CA8;
    case 538u: goto L_08B26CC8;
    case 539u: goto L_08B26CE0;
    case 540u: goto L_08B26CEC;
    case 541u: goto L_08B26D00;
    case 542u: goto L_08B26D18;
    case 543u: goto L_08B26D28;
    case 544u: goto L_08B26D30;
    case 545u: goto L_08B26D8C;
    case 546u: goto L_08B26DB8;
    case 547u: goto L_08B26DC4;
    case 548u: goto L_08B26DD0;
    case 549u: goto L_08B26DD8;
    case 550u: goto L_08B26DE0;
    case 551u: goto L_08B26DE8;
    case 552u: goto L_08B26DF0;
    case 553u: goto L_08B26DF8;
    case 554u: goto L_08B26E04;
    case 555u: goto L_08B26E20;
    case 556u: goto L_08B26E24;
    case 557u: goto L_08B26E3C;
    case 558u: goto L_08B26E78;
    case 559u: goto L_08B26E84;
    case 560u: goto L_08B26E90;
    case 561u: goto L_08B26E98;
    case 562u: goto L_08B26EA0;
    case 563u: goto L_08B26EA4;
    case 564u: goto L_08B26EAC;
    case 565u: goto L_08B26EC0;
    case 566u: goto L_08B26ECC;
    case 567u: goto L_08B26EF4;
    case 568u: goto L_08B26F18;
    case 569u: goto L_08B26F54;
    case 570u: goto L_08B26F60;
    case 571u: goto L_08B26F88;
    case 572u: goto L_08B26FA4;
    case 573u: goto L_08B26FB8;
    case 574u: goto L_08B26FC4;
    case 575u: goto L_08B26FC8;
    case 576u: goto L_08B26FE8;
    case 577u: goto L_08B27010;
    case 578u: goto L_08B27040;
    case 579u: goto L_08B2704C;
    case 580u: goto L_08B27058;
    case 581u: goto L_08B27060;
    case 582u: goto L_08B27068;
    case 583u: goto L_08B27070;
    case 584u: goto L_08B27088;
    case 585u: goto L_08B2708C;
    case 586u: goto L_08B27098;
    case 587u: goto L_08B270B0;
    case 588u: goto L_08B270BC;
    case 589u: goto L_08B270C4;
    case 590u: goto L_08B270CC;
    case 591u: goto L_08B270DC;
    case 592u: goto L_08B270EC;
    case 593u: goto L_08B270F4;
    case 594u: goto L_08B27114;
    case 595u: goto L_08B27120;
    case 596u: goto L_08B27138;
    case 597u: goto L_08B2713C;
    case 598u: goto L_08B27158;
    case 599u: goto L_08B2718C;
    case 600u: goto L_08B27198;
    case 601u: goto L_08B271A4;
    case 602u: goto L_08B271AC;
    case 603u: goto L_08B271B8;
    case 604u: goto L_08B271CC;
    case 605u: goto L_08B271D4;
    case 606u: goto L_08B271E8;
    case 607u: goto L_08B271F0;
    case 608u: goto L_08B27210;
    case 609u: goto L_08B27220;
    case 610u: goto L_08B27228;
    case 611u: goto L_08B27230;
    case 612u: goto L_08B27250;
    case 613u: goto L_08B27260;
    case 614u: goto L_08B27268;
    case 615u: goto L_08B2726C;
    case 616u: goto L_08B2727C;
    case 617u: goto L_08B27284;
    case 618u: goto L_08B272A4;
    case 619u: goto L_08B272B0;
    case 620u: goto L_08B272C8;
    case 621u: goto L_08B272CC;
    case 622u: goto L_08B272D8;
    case 623u: goto L_08B272FC;
    case 624u: goto L_08B27308;
    case 625u: goto L_08B27328;
    case 626u: goto L_08B2735C;
    case 627u: goto L_08B27368;
    case 628u: goto L_08B27374;
    case 629u: goto L_08B2737C;
    case 630u: goto L_08B27388;
    case 631u: goto L_08B273A4;
    case 632u: goto L_08B273AC;
    case 633u: goto L_08B273C8;
    case 634u: goto L_08B273D0;
    case 635u: goto L_08B273FC;
    case 636u: goto L_08B2740C;
    case 637u: goto L_08B27414;
    case 638u: goto L_08B2741C;
    case 639u: goto L_08B27448;
    case 640u: goto L_08B27458;
    case 641u: goto L_08B27460;
    case 642u: goto L_08B27464;
    case 643u: goto L_08B27474;
    case 644u: goto L_08B2747C;
    case 645u: goto L_08B2749C;
    case 646u: goto L_08B274A8;
    case 647u: goto L_08B274C0;
    case 648u: goto L_08B274C4;
    case 649u: goto L_08B274D0;
    case 650u: goto L_08B27504;
    case 651u: goto L_08B27510;
    case 652u: goto L_08B27530;
    case 653u: goto L_08B2756C;
    case 654u: goto L_08B27578;
    case 655u: goto L_08B27584;
    case 656u: goto L_08B2758C;
    case 657u: goto L_08B27594;
    case 658u: goto L_08B27598;
    case 659u: goto L_08B275A4;
    case 660u: goto L_08B275B4;
    case 661u: goto L_08B275C0;
    case 662u: goto L_08B275CC;
    case 663u: goto L_08B275D8;
    case 664u: goto L_08B275E0;
    case 665u: goto L_08B275F0;
    case 666u: goto L_08B275FC;
    case 667u: goto L_08B27644;
    case 668u: goto L_08B27658;
    case 669u: goto L_08B27660;
    case 670u: goto L_08B2769C;
    case 671u: goto L_08B276A4;
    case 672u: goto L_08B276AC;
    case 673u: goto L_08B276B8;
    case 674u: goto L_08B276C4;
    case 675u: goto L_08B276CC;
    case 676u: goto L_08B276D4;
    case 677u: goto L_08B27710;
    case 678u: goto L_08B27718;
    case 679u: goto L_08B2771C;
    case 680u: goto L_08B27730;
    case 681u: goto L_08B27758;
    case 682u: goto L_08B2778C;
    case 683u: goto L_08B27798;
    case 684u: goto L_08B277A8;
    case 685u: goto L_08B277B4;
    case 686u: goto L_08B277BC;
    case 687u: goto L_08B277C4;
    case 688u: goto L_08B277C8;
    case 689u: goto L_08B277D0;
    case 690u: goto L_08B277D8;
    case 691u: goto L_08B277E0;
    case 692u: goto L_08B277E4;
    case 693u: goto L_08B27800;
    case 694u: goto L_08B27808;
    case 695u: goto L_08B27828;
    case 696u: goto L_08B27834;
    case 697u: goto L_08B2784C;
    case 698u: goto L_08B27850;
    case 699u: goto L_08B27870;
    case 700u: goto L_08B278A0;
    case 701u: goto L_08B278AC;
    case 702u: goto L_08B278B8;
    case 703u: goto L_08B278C0;
    case 704u: goto L_08B278C8;
    case 705u: goto L_08B278CC;
    case 706u: goto L_08B278D4;
    case 707u: goto L_08B278E4;
    case 708u: goto L_08B278EC;
    case 709u: goto L_08B278F0;
    case 710u: goto L_08B2790C;
    case 711u: goto L_08B27914;
    case 712u: goto L_08B27934;
    case 713u: goto L_08B27940;
    case 714u: goto L_08B27958;
    case 715u: goto L_08B2795C;
    case 716u: goto L_08B27978;
    case 717u: goto L_08B279A0;
    case 718u: goto L_08B279AC;
    case 719u: goto L_08B279B8;
    case 720u: goto L_08B279C0;
    case 721u: goto L_08B279CC;
    case 722u: goto L_08B279D4;
    case 723u: goto L_08B279D8;
    case 724u: goto L_08B279F4;
    case 725u: goto L_08B279FC;
    case 726u: goto L_08B27A1C;
    case 727u: goto L_08B27A28;
    case 728u: goto L_08B27A40;
    case 729u: goto L_08B27A44;
    case 730u: goto L_08B27A5C;
    case 731u: goto L_08B27A84;
    case 732u: goto L_08B27A90;
    case 733u: goto L_08B27AA0;
    case 734u: goto L_08B27AB8;
    case 735u: goto L_08B27AE8;
    case 736u: goto L_08B27AF4;
    case 737u: goto L_08B27B00;
    case 738u: goto L_08B27B08;
    case 739u: goto L_08B27B10;
    case 740u: goto L_08B27B18;
    case 741u: goto L_08B27B2C;
    case 742u: goto L_08B27B34;
    case 743u: goto L_08B27B38;
    case 744u: goto L_08B27B40;
    case 745u: goto L_08B27B58;
    case 746u: goto L_08B27B64;
    case 747u: goto L_08B27B74;
    case 748u: goto L_08B27B7C;
    case 749u: goto L_08B27B84;
    case 750u: goto L_08B27B94;
    case 751u: goto L_08B27BA4;
    case 752u: goto L_08B27BAC;
    case 753u: goto L_08B27BCC;
    case 754u: goto L_08B27BD8;
    case 755u: goto L_08B27BF0;
    case 756u: goto L_08B27BF4;
    case 757u: goto L_08B27C10;
    case 758u: goto L_08B27C38;
    case 759u: goto L_08B27C44;
    case 760u: goto L_08B27C6C;
    case 761u: goto L_08B27C9C;
    case 762u: goto L_08B27CA8;
    case 763u: goto L_08B27CC0;
    case 764u: goto L_08B27CCC;
    case 765u: goto L_08B27CD4;
    case 766u: goto L_08B27CDC;
    case 767u: goto L_08B27CEC;
    case 768u: goto L_08B27CF8;
    case 769u: goto L_08B27D00;
    case 770u: goto L_08B27D0C;
    case 771u: goto L_08B27D24;
    case 772u: goto L_08B27D30;
    case 773u: goto L_08B27D3C;
    case 774u: goto L_08B27D4C;
    case 775u: goto L_08B27D54;
    case 776u: goto L_08B27D5C;
    case 777u: goto L_08B27D60;
    case 778u: goto L_08B27D7C;
    case 779u: goto L_08B27D84;
    case 780u: goto L_08B27D9C;
    case 781u: goto L_08B27DB0;
    case 782u: goto L_08B27DD0;
    case 783u: goto L_08B27DD4;
    case 784u: goto L_08B27DF0;
    case 785u: goto L_08B27E34;
    case 786u: goto L_08B27E40;
    case 787u: goto L_08B27E4C;
    case 788u: goto L_08B27E70;
    case 789u: goto L_08B27E78;
    case 790u: goto L_08B27E7C;
    case 791u: goto L_08B27E84;
    case 792u: goto L_08B27E9C;
    case 793u: goto L_08B27EAC;
    case 794u: goto L_08B27EB4;
    case 795u: goto L_08B27EBC;
    case 796u: goto L_08B27EC0;
    case 797u: goto L_08B27ECC;
    case 798u: goto L_08B27EE4;
    case 799u: goto L_08B27EF4;
    case 800u: goto L_08B27EFC;
    case 801u: goto L_08B27F04;
    case 802u: goto L_08B27F08;
    case 803u: goto L_08B27F0C;
    case 804u: goto L_08B27F1C;
    case 805u: goto L_08B27F20;
    case 806u: goto L_08B27F30;
    case 807u: goto L_08B27F34;
    case 808u: goto L_08B27F4C;
    case 809u: goto L_08B27F7C;
    case 810u: goto L_08B27FA4;
    case 811u: goto L_08B27FB0;
    case 812u: goto L_08B27FBC;
    case 813u: goto L_08B27FC4;
    case 814u: goto L_08B27FCC;
    case 815u: goto L_08B27FD0;
    case 816u: goto L_08B27FD8;
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
L_08B24000:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(216)));
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[20];
    aot_gpr_31 = (0x08B24010u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(242));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24010u) goto L_08B24010;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24010:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(242)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(668)));
      if (branch_taken) {
          goto L_08B24110;
      }
      goto L_08B24020;
    }
L_08B24020:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(216)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x08B240A4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 365u, 0x0889A004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B240A4u) goto L_08B240A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B240A4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(240))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B24110;
      }
      goto L_08B240B0;
    }
L_08B240B0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08B240BCu);
    aot_gpr_4 = (0u | 496u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B240BCu) goto L_08B240BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B240BC:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08B240E0;
      }
      goto L_08B240C8;
    }
L_08B240C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(68)));
    aot_gpr_31 = (0x08B240DCu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B240DCu) goto L_08B240DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B240DC:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08B240E0;
L_08B240E0:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_31 = (0x08B240ECu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B240ECu) goto L_08B240EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B240EC:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (9u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10176));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_31 = (0x08B24110u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24110u) goto L_08B24110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24110:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 762u, 0x08B23EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B24124;
    }
L_08B24124:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(232)));
    goto L_08B24128;
L_08B24128:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B24148;
      }
      goto L_08B24134;
    }
L_08B24134:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B24148;
      }
      goto L_08B24140;
    }
L_08B24140:
    aot_gpr_31 = (0x08B24148u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24148u) goto L_08B24148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24148:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(672), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
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
      ctx.gpr[30] = aot_run_words[14];
      aot_gpr_31 = aot_run_words[15];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(736));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B24190:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-544));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_gpr_4 << 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(508), ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (ctx.gpr[7] + ctx.gpr[17]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(6))))));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[7] = (aot_gpr_6 & 56u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 & 7u);
    aot_gpr_5 = (ctx.gpr[7] >> 3u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_4 & 56u);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    aot_gpr_6 = (aot_gpr_6 >> 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(504), aot_gpr_16);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t aot_run_words[7]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(512), aot_run_words); }
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08B2423C;
    }
    goto L_08B2423C;
L_08B2423C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[20] = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08B2428Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 603u, 0x08976BF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2428Cu) goto L_08B2428C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2428C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08B242C4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 603u, 0x08976BF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B242C4u) goto L_08B242C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B242C4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5)));
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08B24474;
      }
      goto L_08B2433C;
    }
L_08B2433C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(5)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (15744u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_31 = (0x08B24370u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 606u, 0x08B22E6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24370u) goto L_08B24370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24370:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[22];
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_31 = (0x08B243B8u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 606u, 0x08B22E6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B243B8u) goto L_08B243B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B243B8:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B243F0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 699u, 0x08B23774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B243F0u) goto L_08B243F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B243F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_31 = (0x08B24404u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 606u, 0x08B22E6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24404u) goto L_08B24404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24404:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_31 = (0x08B2443Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 606u, 0x08B22E6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2443Cu) goto L_08B2443C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2443C:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B2446Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 699u, 0x08B23774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2446Cu) goto L_08B2446C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2446C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B24504;
      }
      goto L_08B24474;
    }
L_08B24474:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    aot_gpr_31 = (0x08B2448Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 606u, 0x08B22E6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2448Cu) goto L_08B2448C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2448C:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    aot_gpr_31 = (0x08B244D0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 606u, 0x08B22E6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B244D0u) goto L_08B244D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B244D0:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B24504u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 699u, 0x08B23774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24504u) goto L_08B24504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24504:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(496), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      ctx.gpr[23] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B24538:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2233u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-31868));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    goto L_08B24568;
L_08B24568:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B24574u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24574u) goto L_08B24574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24574:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B24584u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24584u) goto L_08B24584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5)));
    aot_gpr_5 = (aot_gpr_5 | 16u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B24568;
      }
      goto L_08B245BC;
    }
L_08B245BC:
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
L_08B245DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B245FCu);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 640u, 0x08A93FC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B245FCu) goto L_08B245FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B245FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B24628;
      }
      goto L_08B24608;
    }
L_08B24608:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    aot_gpr_4 = (aot_gpr_4 << (aot_gpr_16 & 31u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B24628;
      }
      goto L_08B24628;
    }
L_08B24628:
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
L_08B2463C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_4 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B2467C;
      }
      goto L_08B24668;
    }
L_08B24668:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B246A0;
      }
      goto L_08B24674;
    }
L_08B24674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24464));
      if (branch_taken) {
          goto L_08B246B0;
      }
      goto L_08B2467C;
    }
L_08B2467C:
    ctx.gpr[7] = (0u | 7u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08B24674;
      }
      goto L_08B24688;
    }
L_08B24688:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08B24698u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 640u, 0x08A93FC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24698u) goto L_08B24698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24698:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B246B0;
      }
      goto L_08B246A0;
    }
L_08B246A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08B246B0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 640u, 0x08A93FC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B246B0u) goto L_08B246B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B246B0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B246BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (2235u << 16u);
      if (branch_taken) {
          goto L_08B246E4;
      }
      goto L_08B246CC;
    }
L_08B246CC:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-30256));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_6);
      if (branch_taken) {
          goto L_08B246E4;
      }
      goto L_08B246DC;
    }
L_08B246DC:
    aot_gpr_31 = (0x08B246E4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B246E4u) goto L_08B246E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B246E4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B246F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B24704u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 131u, 0x0890482Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24704u) goto L_08B24704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24704:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B24710u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 165u, 0x08904AA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24710u) goto L_08B24710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24710:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B24720:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B24734u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 131u, 0x0890482Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24734u) goto L_08B24734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24734:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2)));
    aot_gpr_31 = (0x08B24740u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 165u, 0x08904AA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24740u) goto L_08B24740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24740:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B24750:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08B24770u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24770u) goto L_08B24770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24770:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B2477C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(56));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08B2479Cu);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2479Cu) goto L_08B2479C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2479C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B247A8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B247B0:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B247B8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_5 = (0u | 65535u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B24818:
    jump_target = aot_gpr_31;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3960)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B24820:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3968)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3972)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_31);
    aot_gpr_31 = (0x08B24888u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24888u) goto L_08B24888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24888:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B248C4;
      }
      goto L_08B24890;
    }
L_08B24890:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3960)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B248C4;
L_08B248C4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B248D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B248F4u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 555u, 0x088079D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B248F4u) goto L_08B248F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B248F4:
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(4096));
    aot_gpr_31 = (0x08B24904u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24904u) goto L_08B24904;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24904:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B24910u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24910u) goto L_08B24910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24910:
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
L_08B24924:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_gpr_31 = (0x08B24958u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24958u) goto L_08B24958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24958:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B24978u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24978u) goto L_08B24978;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24978:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B24984u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24984u) goto L_08B24984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24984:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[22] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08B2499C;
      }
      goto L_08B24994;
    }
L_08B24994:
    aot_gpr_31 = (0x08B2499Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2499Cu) goto L_08B2499C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2499C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (0u | 5u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 5u);
    aot_gpr_31 = (0x08B249BCu);
    ctx.gpr[8] = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 447u, 0x0880E03Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B249BCu) goto L_08B249BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B249BC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B249D8;
    }
    goto L_08B249CC;
L_08B249CC:
    aot_gpr_31 = (0x08B249D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B249D4u) goto L_08B249D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B249D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B249D8;
L_08B249D8:
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B249E4u);
    aot_gpr_6 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 483u, 0x0880E374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B249E4u) goto L_08B249E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B249E4:
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_31 = (0x08B249F0u);
    aot_gpr_4 = (0u | 116u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B249F0u) goto L_08B249F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B249F0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B24A08;
      }
      goto L_08B249FC;
    }
L_08B249FC:
    aot_gpr_31 = (0x08B24A04u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 446u, 0x08A3EDBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24A04u) goto L_08B24A04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24A04:
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    goto L_08B24A08;
L_08B24A08:
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(116));
    aot_gpr_31 = (0x08B24A14u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24A14u) goto L_08B24A14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24A14:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B24A20u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 623u, 0x088BAFE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24A20u) goto L_08B24A20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24A20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B24A38;
    }
    goto L_08B24A2C;
L_08B24A2C:
    aot_gpr_31 = (0x08B24A34u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24A34u) goto L_08B24A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24A34:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B24A38;
L_08B24A38:
    if (ctx.gpr[19] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B24A4C;
    }
    goto L_08B24A40;
L_08B24A40:
    aot_gpr_31 = (0x08B24A48u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24A48u) goto L_08B24A48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24A48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B24A4C;
L_08B24A4C:
    aot_gpr_31 = (0x08B24A54u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24A54u) goto L_08B24A54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24A54:
    aot_gpr_4 = (ctx.gpr[2] << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(656));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B24A74u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 8u, 0x08ADC0B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24A74u) goto L_08B24A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24A74:
    aot_gpr_4 = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08B24AA0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B248D4;
L_08B24AA0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B24ACC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_gpr_31 = (0x08B24B00u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24B00u) goto L_08B24B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24B00:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B24B20u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24B20u) goto L_08B24B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24B20:
    ctx.gpr[20] = (0u | 5u);
    aot_gpr_31 = (0x08B24B2Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24B2Cu) goto L_08B24B2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24B2C:
    ctx.gpr[21] = (2237u << 16u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08B24B50;
      }
      goto L_08B24B3C;
    }
L_08B24B3C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B24B48u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24B48u) goto L_08B24B48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24B48:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B24B50;
L_08B24B50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B24B68;
    }
    goto L_08B24B5C;
L_08B24B5C:
    aot_gpr_31 = (0x08B24B64u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24B64u) goto L_08B24B64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24B64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B24B68;
L_08B24B68:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B24B84u);
    ctx.gpr[8] = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 447u, 0x0880E03Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24B84u) goto L_08B24B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24B84:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B24B90u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24B90u) goto L_08B24B90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24B90:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B24BF4;
      }
      goto L_08B24B9C;
    }
L_08B24B9C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B24BA8u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24BA8u) goto L_08B24BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24BA8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B24BC0;
      }
      goto L_08B24BB8;
    }
L_08B24BB8:
    aot_gpr_31 = (0x08B24BC0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24BC0u) goto L_08B24BC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24BC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B24BD0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24BD0u) goto L_08B24BD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24BD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B24BE8;
    }
    goto L_08B24BDC;
L_08B24BDC:
    aot_gpr_31 = (0x08B24BE4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24BE4u) goto L_08B24BE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24BE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B24BE8;
L_08B24BE8:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B24BF4u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 483u, 0x0880E374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24BF4u) goto L_08B24BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24BF4:
    aot_gpr_31 = (0x08B24BFCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24BFCu) goto L_08B24BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24BFC:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B24C8C;
      }
      goto L_08B24C08;
    }
L_08B24C08:
    aot_gpr_31 = (0x08B24C10u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24C10u) goto L_08B24C10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24C10:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
      if (branch_taken) {
          goto L_08B24C8C;
      }
      goto L_08B24C18;
    }
L_08B24C18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B24C30;
    }
    goto L_08B24C24;
L_08B24C24:
    aot_gpr_31 = (0x08B24C2Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24C2Cu) goto L_08B24C2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24C2C:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B24C30;
L_08B24C30:
    if (ctx.gpr[20] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B24C44;
    }
    goto L_08B24C38;
L_08B24C38:
    aot_gpr_31 = (0x08B24C40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24C40u) goto L_08B24C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24C40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B24C44;
L_08B24C44:
    aot_gpr_31 = (0x08B24C4Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24C4Cu) goto L_08B24C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24C4C:
    aot_gpr_4 = (ctx.gpr[2] << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(656));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B24C6Cu);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24C6Cu) goto L_08B24C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24C6C:
    aot_gpr_4 = (ctx.gpr[2] & 255u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B24C8C;
L_08B24C8C:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_31 = (0x08B24C98u);
    aot_gpr_4 = (0u | 116u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24C98u) goto L_08B24C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24C98:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B24CB0;
      }
      goto L_08B24CA4;
    }
L_08B24CA4:
    aot_gpr_31 = (0x08B24CACu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 446u, 0x08A3EDBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24CACu) goto L_08B24CAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24CAC:
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    goto L_08B24CB0;
L_08B24CB0:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(116));
    aot_gpr_31 = (0x08B24CBCu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24CBCu) goto L_08B24CBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24CBC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B24CC8u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 623u, 0x088BAFE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24CC8u) goto L_08B24CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24CC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B24CE0;
    }
    goto L_08B24CD4;
L_08B24CD4:
    aot_gpr_31 = (0x08B24CDCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24CDCu) goto L_08B24CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24CDC:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B24CE0;
L_08B24CE0:
    if (ctx.gpr[20] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B24CF4;
    }
    goto L_08B24CE8;
L_08B24CE8:
    aot_gpr_31 = (0x08B24CF0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24CF0u) goto L_08B24CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24CF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B24CF4;
L_08B24CF4:
    aot_gpr_31 = (0x08B24CFCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24CFCu) goto L_08B24CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24CFC:
    aot_gpr_4 = (ctx.gpr[2] << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(656));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B24D1Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 8u, 0x08ADC0B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24D1Cu) goto L_08B24D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24D1C:
    aot_gpr_4 = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08B24D48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B248D4;
L_08B24D48:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B24D74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_31);
    aot_gpr_31 = (0x08B24D9Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24D9Cu) goto L_08B24D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24D9C:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_08B24DE0;
      }
      goto L_08B24DA8;
    }
L_08B24DA8:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08B24DC0u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24DC0u) goto L_08B24DC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24DC0:
    ctx.gpr[17] = (0u | 5u);
    aot_gpr_31 = (0x08B24DCCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24DCCu) goto L_08B24DCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24DCC:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B24DE8;
      }
      goto L_08B24DD8;
    }
L_08B24DD8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B24DFC;
      }
      goto L_08B24DE0;
    }
L_08B24DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B24EB4;
      }
      goto L_08B24DE8;
    }
L_08B24DE8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B24DF4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24DF4u) goto L_08B24DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24DF4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B24DFC;
L_08B24DFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B24E14;
    }
    goto L_08B24E08;
L_08B24E08:
    aot_gpr_31 = (0x08B24E10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24E10u) goto L_08B24E10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24E10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B24E14;
L_08B24E14:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B24E30u);
    ctx.gpr[8] = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 447u, 0x0880E03Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24E30u) goto L_08B24E30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24E30:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B24E3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24E3Cu) goto L_08B24E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24E3C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B24EA0;
      }
      goto L_08B24E48;
    }
L_08B24E48:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B24E54u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24E54u) goto L_08B24E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24E54:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B24E6C;
      }
      goto L_08B24E64;
    }
L_08B24E64:
    aot_gpr_31 = (0x08B24E6Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24E6Cu) goto L_08B24E6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24E6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B24E7Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24E7Cu) goto L_08B24E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24E7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B24E94;
    }
    goto L_08B24E88;
L_08B24E88:
    aot_gpr_31 = (0x08B24E90u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24E90u) goto L_08B24E90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24E90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B24E94;
L_08B24E94:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B24EA0u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 483u, 0x0880E374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24EA0u) goto L_08B24EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24EA0:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B24EB0u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24EB0u) goto L_08B24EB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24EB0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08B24EB4;
L_08B24EB4:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B24ED0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B24EE4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24EE4u) goto L_08B24EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24EE4:
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_08B24F0C;
      }
      goto L_08B24F00;
    }
L_08B24F00:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B24F20;
      }
      goto L_08B24F0C;
    }
L_08B24F0C:
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_16 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (aot_gpr_5 + aot_gpr_16);
    goto L_08B24F20;
L_08B24F20:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B24F34;
      }
      goto L_08B24F28;
    }
L_08B24F28:
    aot_gpr_31 = (0x08B24F30u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24F30u) goto L_08B24F30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24F30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B24F34;
L_08B24F34:
    aot_gpr_31 = (0x08B24F3Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24F3Cu) goto L_08B24F3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24F3C:
    aot_gpr_16 = (ctx.gpr[2] << 4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_16);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + aot_gpr_5);
      if (branch_taken) {
          goto L_08B24F5C;
      }
      goto L_08B24F50;
    }
L_08B24F50:
    aot_gpr_31 = (0x08B24F58u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24F58u) goto L_08B24F58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24F58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B24F5C;
L_08B24F5C:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(656));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B24F8C;
      }
      goto L_08B24F80;
    }
L_08B24F80:
    aot_gpr_31 = (0x08B24F88u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24F88u) goto L_08B24F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24F88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B24F8C;
L_08B24F8C:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(628), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
      if (branch_taken) {
          goto L_08B24FB0;
      }
      goto L_08B24FA0;
    }
L_08B24FA0:
    aot_gpr_31 = (0x08B24FA8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24FA8u) goto L_08B24FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24FA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    goto L_08B24FB0;
L_08B24FB0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(656));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-225));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
      if (branch_taken) {
          goto L_08B24FE0;
      }
      goto L_08B24FD0;
    }
L_08B24FD0:
    aot_gpr_31 = (0x08B24FD8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B24FD8u) goto L_08B24FD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B24FD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    goto L_08B24FE0;
L_08B24FE0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(656));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B2500C;
      }
      goto L_08B25000;
    }
L_08B25000:
    aot_gpr_31 = (0x08B25008u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25008u) goto L_08B25008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25008:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B2500C;
L_08B2500C:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(665), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B25028:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(4096));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_31 = (0x08B25048u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25048u) goto L_08B25048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25048:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B250D0;
      }
      goto L_08B25054;
    }
L_08B25054:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B250D0;
      }
      goto L_08B25064;
    }
L_08B25064:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B2507Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2507Cu) goto L_08B2507C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2507C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B250D0;
      }
      goto L_08B25088;
    }
L_08B25088:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 2u);
    aot_gpr_31 = (0x08B2509Cu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2509Cu) goto L_08B2509C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2509C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08B250B0;
      }
      goto L_08B250A8;
    }
L_08B250A8:
    aot_gpr_31 = (0x08B250B0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B250B0u) goto L_08B250B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B250B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(640));
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08B250D0;
L_08B250D0:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
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
L_08B250E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(4096));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B25108u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25108u) goto L_08B25108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25108:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B251E8;
      }
      goto L_08B25114;
    }
L_08B25114:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_08B251E8;
      }
      goto L_08B25124;
    }
L_08B25124:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B2513Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2513Cu) goto L_08B2513C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2513C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B251E8;
      }
      goto L_08B25148;
    }
L_08B25148:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B25154u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25154u) goto L_08B25154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25154:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B2516Cu);
    aot_gpr_16 = (aot_gpr_6 & 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2516Cu) goto L_08B2516C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2516C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[17] = (aot_gpr_4 << 4u);
    aot_gpr_6 = (ctx.gpr[17] + ctx.gpr[17]);
    aot_gpr_5 = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_6);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (ctx.gpr[7] << (aot_gpr_16 & 31u));
      if (branch_taken) {
          goto L_08B251BC;
      }
      goto L_08B25190;
    }
L_08B25190:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B251A8;
      }
      goto L_08B25198;
    }
L_08B25198:
    aot_gpr_31 = (0x08B251A0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B251A0u) goto L_08B251A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B251A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    goto L_08B251A8;
L_08B251A8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(668));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_16);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B251E8;
      }
      goto L_08B251BC;
    }
L_08B251BC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B251D4;
      }
      goto L_08B251C4;
    }
L_08B251C4:
    aot_gpr_31 = (0x08B251CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B251CCu) goto L_08B251CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B251CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    goto L_08B251D4;
L_08B251D4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(668));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (~(aot_gpr_16 | 0u));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B251E8;
L_08B251E8:
    ctx.gpr[2] = (0u | 0u);
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
L_08B25200:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(4096));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B25220u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25220u) goto L_08B25220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25220:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B252EC;
      }
      goto L_08B2522C;
    }
L_08B2522C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B252EC;
      }
      goto L_08B2523C;
    }
L_08B2523C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x08B25254u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25254u) goto L_08B25254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25254:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B252EC;
      }
      goto L_08B25260;
    }
L_08B25260:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08B25274u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25274u) goto L_08B25274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25274:
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_08B2529C;
      }
      goto L_08B25290;
    }
L_08B25290:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B252B0;
      }
      goto L_08B2529C;
    }
L_08B2529C:
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    goto L_08B252B0;
L_08B252B0:
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_6 = (ctx.gpr[17] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08B252C4;
      }
      goto L_08B252C0;
    }
L_08B252C0:
    ctx.gpr[17] = (aot_gpr_5 << 8u);
    goto L_08B252C4;
L_08B252C4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B252D8;
      }
      goto L_08B252CC;
    }
L_08B252CC:
    aot_gpr_31 = (0x08B252D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B252D4u) goto L_08B252D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B252D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B252D8;
L_08B252D8:
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(624), ctx.gpr[17]);
    goto L_08B252EC;
L_08B252EC:
    ctx.gpr[2] = (0u | 0u);
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
L_08B25304:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(4096));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B25324u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25324u) goto L_08B25324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25324:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B25414;
      }
      goto L_08B25330;
    }
L_08B25330:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25414;
      }
      goto L_08B25340;
    }
L_08B25340:
    aot_gpr_16 = (2237u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B2535Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2535Cu) goto L_08B2535C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2535C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B25414;
      }
      goto L_08B25368;
    }
L_08B25368:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08B2537Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2537Cu) goto L_08B2537C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2537C:
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
        goto L_08B253A4;
    }
    goto L_08B25398;
L_08B25398:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B253B4;
      }
      goto L_08B253A4;
    }
L_08B253A4:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_08B253B4;
L_08B253B4:
    aot_gpr_5 = (aot_gpr_4 & 65535u);
    aot_gpr_31 = (0x08B253C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B253C0u) goto L_08B253C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B253C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 << 8u);
    aot_gpr_16 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B253FC;
      }
      goto L_08B253F4;
    }
L_08B253F4:
    aot_gpr_31 = (0x08B253FCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B253FCu) goto L_08B253FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B253FC:
    aot_gpr_4 = (ctx.gpr[17] << 4u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(624), aot_gpr_16);
    goto L_08B25414;
L_08B25414:
    ctx.gpr[2] = (0u | 0u);
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
L_08B2542C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(4096));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08B25448u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25448u) goto L_08B25448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25448:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B254B0;
      }
      goto L_08B25454;
    }
L_08B25454:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_16;
      if (branch_taken) {
          goto L_08B254B0;
      }
      goto L_08B25464;
    }
L_08B25464:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x08B2547Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2547Cu) goto L_08B2547C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2547C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B254AC;
      }
      goto L_08B25488;
    }
L_08B25488:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B254AC;
      }
      goto L_08B25490;
    }
L_08B25490:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08B254ACu);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B254ACu) goto L_08B254AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B254AC:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_16);
    goto L_08B254B0;
L_08B254B0:
    ctx.gpr[2] = (0u | 0u);
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
L_08B254C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B254E0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B254E0u) goto L_08B254E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B254E0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B254ECu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B254ECu) goto L_08B254EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B254EC:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B25500:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B25520u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25520u) goto L_08B25520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25520:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
      if (branch_taken) {
          goto L_08B25588;
      }
      goto L_08B25528;
    }
L_08B25528:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B25534u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25534u) goto L_08B25534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25534:
    aot_gpr_4 = (0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B25560;
      }
      goto L_08B25540;
    }
L_08B25540:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08B25558;
    }
    goto L_08B2554C;
L_08B2554C:
    aot_gpr_31 = (0x08B25554u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25554u) goto L_08B25554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25554:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08B25558;
L_08B25558:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(11240), 0u);
      if (branch_taken) {
          goto L_08B25580;
      }
      goto L_08B25560;
    }
L_08B25560:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08B25578;
    }
    goto L_08B2556C;
L_08B2556C:
    aot_gpr_31 = (0x08B25574u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25574u) goto L_08B25574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25574:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08B25578;
L_08B25578:
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(11240), aot_gpr_5);
    goto L_08B25580;
L_08B25580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B255B8;
      }
      goto L_08B25588;
    }
L_08B25588:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08B255A0;
    }
    goto L_08B25594;
L_08B25594:
    aot_gpr_31 = (0x08B2559Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2559Cu) goto L_08B2559C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2559C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08B255A0;
L_08B255A0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(11240)));
    aot_gpr_5 = (aot_gpr_5 ^ 2u);
    aot_gpr_31 = (0x08B255B4u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B255B4u) goto L_08B255B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B255B4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B255B8;
L_08B255B8:
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
L_08B255CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2233u << 16u);
      if (branch_taken) {
          goto L_08B255F0;
      }
      goto L_08B255E0;
    }
L_08B255E0:
    aot_gpr_31 = (0x08B255E8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B255E8u) goto L_08B255E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B255E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (2233u << 16u);
    goto L_08B255F0;
L_08B255F0:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(4096));
    aot_gpr_31 = (0x08B255FCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-31800));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 270u, 0x08885284u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B255FCu) goto L_08B255FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B255FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2233u << 16u);
      if (branch_taken) {
          goto L_08B25618;
      }
      goto L_08B25608;
    }
L_08B25608:
    aot_gpr_31 = (0x08B25610u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25610u) goto L_08B25610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25610:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (2233u << 16u);
    goto L_08B25618;
L_08B25618:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08B25624u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-31620));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25624u) goto L_08B25624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25624:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B25630:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    aot_gpr_6 = (2246u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4106)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(31024));
    ctx.gpr[18] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_6);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(15280));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), aot_gpr_16, ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_4);
      if (branch_taken) {
          goto L_08B256A0;
      }
      goto L_08B25688;
    }
L_08B25688:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B25698u);
    aot_gpr_6 = (0u | 1344u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25698u) goto L_08B25698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25698:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4106), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B256A0;
L_08B256A0:
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    goto L_08B256AC;
L_08B256AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (0u | 15u);
      if (branch_taken) {
          goto L_08B256DC;
      }
      goto L_08B256B8;
    }
L_08B256B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B256D0;
    }
    goto L_08B256C4;
L_08B256C4:
    aot_gpr_31 = (0x08B256CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B256CCu) goto L_08B256CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B256CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B256D0;
L_08B256D0:
    aot_gpr_31 = (0x08B256D8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 412u, 0x0880DC1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B256D8u) goto L_08B256D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B256D8:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_08B256DC;
L_08B256DC:
    aot_gpr_31 = (0x08B256E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B256E4u) goto L_08B256E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B256E4:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(57)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B25BBC;
      }
      goto L_08B256F4;
    }
L_08B256F4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B25BBC;
      }
      goto L_08B25700;
    }
L_08B25700:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_16;
      if (branch_taken) {
          goto L_08B257A8;
      }
      goto L_08B2570C;
    }
L_08B2570C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B257A8;
      }
      goto L_08B25720;
    }
L_08B25720:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B25738;
    }
    goto L_08B2572C;
L_08B2572C:
    aot_gpr_31 = (0x08B25734u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25734u) goto L_08B25734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25734:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B25738;
L_08B25738:
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 4u);
    aot_gpr_31 = (0x08B25754u);
    ctx.gpr[8] = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 447u, 0x0880E03Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25754u) goto L_08B25754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25754:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B25770;
    }
    goto L_08B25764;
L_08B25764:
    aot_gpr_31 = (0x08B2576Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2576Cu) goto L_08B2576C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2576C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B25770;
L_08B25770:
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B2577Cu);
    aot_gpr_6 = (0u | 52u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2577Cu) goto L_08B2577C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2577C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B25794;
    }
    goto L_08B25788;
L_08B25788:
    aot_gpr_31 = (0x08B25790u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25790u) goto L_08B25790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25790:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B25794;
L_08B25794:
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B257A0u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 483u, 0x0880E374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B257A0u) goto L_08B257A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B257A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_16);
      if (branch_taken) {
          goto L_08B25BBC;
      }
      goto L_08B257A8;
    }
L_08B257A8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_16;
      if (branch_taken) {
          goto L_08B257C4;
      }
      goto L_08B257B4;
    }
L_08B257B4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr_6 = (0u | 16u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08B2584C;
      }
      goto L_08B257C4;
    }
L_08B257C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B257DC;
    }
    goto L_08B257D0;
L_08B257D0:
    aot_gpr_31 = (0x08B257D8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B257D8u) goto L_08B257D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B257D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B257DC;
L_08B257DC:
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 4u);
    aot_gpr_31 = (0x08B257F8u);
    ctx.gpr[8] = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 447u, 0x0880E03Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B257F8u) goto L_08B257F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B257F8:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B25814;
    }
    goto L_08B25808;
L_08B25808:
    aot_gpr_31 = (0x08B25810u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25810u) goto L_08B25810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25810:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B25814;
L_08B25814:
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B25820u);
    aot_gpr_6 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25820u) goto L_08B25820;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25820:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B25838;
    }
    goto L_08B2582C;
L_08B2582C:
    aot_gpr_31 = (0x08B25834u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25834u) goto L_08B25834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25834:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B25838;
L_08B25838:
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B25844u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 483u, 0x0880E374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25844u) goto L_08B25844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25844:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_16);
      if (branch_taken) {
          goto L_08B25BBC;
      }
      goto L_08B2584C;
    }
L_08B2584C:
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_gpr_31 = (0x08B2587Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2587Cu) goto L_08B2587C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2587C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B25BBC;
      }
      goto L_08B25890;
    }
L_08B25890:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    ctx.gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_08B258B0;
      }
      goto L_08B258A4;
    }
L_08B258A4:
    aot_gpr_16 = (65504u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-8193));
      if (branch_taken) {
          goto L_08B25B5C;
      }
      goto L_08B258B0;
    }
L_08B258B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08B258D0;
      }
      goto L_08B258C4;
    }
L_08B258C4:
    aot_gpr_16 = (49152u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-16385));
      if (branch_taken) {
          goto L_08B25B5C;
      }
      goto L_08B258D0;
    }
L_08B258D0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 331u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25980;
      }
      goto L_08B258E0;
    }
L_08B258E0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 332u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25980;
      }
      goto L_08B258F0;
    }
L_08B258F0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 333u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25980;
      }
      goto L_08B25900;
    }
L_08B25900:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 334u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25980;
      }
      goto L_08B25910;
    }
L_08B25910:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 335u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25980;
      }
      goto L_08B25920;
    }
L_08B25920:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 336u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25980;
      }
      goto L_08B25930;
    }
L_08B25930:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 337u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25980;
      }
      goto L_08B25940;
    }
L_08B25940:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 338u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25980;
      }
      goto L_08B25950;
    }
L_08B25950:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 339u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25980;
      }
      goto L_08B25960;
    }
L_08B25960:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 340u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25980;
      }
      goto L_08B25970;
    }
L_08B25970:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 341u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B2598C;
      }
      goto L_08B25980;
    }
L_08B25980:
    aot_gpr_16 = (53200u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B25B5C;
      }
      goto L_08B2598C;
    }
L_08B2598C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 342u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B259BC;
      }
      goto L_08B2599C;
    }
L_08B2599C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 343u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B259BC;
      }
      goto L_08B259AC;
    }
L_08B259AC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 344u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B259C8;
      }
      goto L_08B259BC;
    }
L_08B259BC:
    aot_gpr_16 = (40864u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B25B5C;
      }
      goto L_08B259C8;
    }
L_08B259C8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 346u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B259E8;
      }
      goto L_08B259D8;
    }
L_08B259D8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 347u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B259F4;
      }
      goto L_08B259E8;
    }
L_08B259E8:
    aot_gpr_16 = (53247u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08B25B5C;
      }
      goto L_08B259F4;
    }
L_08B259F4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 349u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25A24;
      }
      goto L_08B25A04;
    }
L_08B25A04:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 350u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25A24;
      }
      goto L_08B25A14;
    }
L_08B25A14:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 351u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B25A30;
      }
      goto L_08B25A24;
    }
L_08B25A24:
    aot_gpr_16 = (32767u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08B25B5C;
      }
      goto L_08B25A30;
    }
L_08B25A30:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 353u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25A70;
      }
      goto L_08B25A40;
    }
L_08B25A40:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 354u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25A70;
      }
      goto L_08B25A50;
    }
L_08B25A50:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 355u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25A70;
      }
      goto L_08B25A60;
    }
L_08B25A60:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 356u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B25A7C;
      }
      goto L_08B25A70;
    }
L_08B25A70:
    aot_gpr_16 = (65535u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08B25B5C;
      }
      goto L_08B25A7C;
    }
L_08B25A7C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 352u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25A9C;
      }
      goto L_08B25A8C;
    }
L_08B25A8C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 348u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B25AA8;
      }
      goto L_08B25A9C;
    }
L_08B25A9C:
    aot_gpr_16 = (65487u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08B25B5C;
      }
      goto L_08B25AA8;
    }
L_08B25AA8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 359u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25AE8;
      }
      goto L_08B25AB8;
    }
L_08B25AB8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 360u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25AE8;
      }
      goto L_08B25AC8;
    }
L_08B25AC8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 361u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25AE8;
      }
      goto L_08B25AD8;
    }
L_08B25AD8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 362u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B25AF4;
      }
      goto L_08B25AE8;
    }
L_08B25AE8:
    aot_gpr_16 = (65440u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B25B5C;
      }
      goto L_08B25AF4;
    }
L_08B25AF4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 357u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B25B14;
      }
      goto L_08B25B04;
    }
L_08B25B04:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 358u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B25B20;
      }
      goto L_08B25B14;
    }
L_08B25B14:
    aot_gpr_16 = (65408u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-12289));
      if (branch_taken) {
          goto L_08B25B5C;
      }
      goto L_08B25B20;
    }
L_08B25B20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08B25B48;
      }
      goto L_08B25B34;
    }
L_08B25B34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08B25B58;
      }
      goto L_08B25B48;
    }
L_08B25B48:
    aot_gpr_16 = (46588u << 16u);
    ctx.gpr[19] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08B25B5C;
      }
      goto L_08B25B58;
    }
L_08B25B58:
    aot_gpr_16 = (0u | 1u);
    goto L_08B25B5C;
L_08B25B5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B25B74;
    }
    goto L_08B25B68;
L_08B25B68:
    aot_gpr_31 = (0x08B25B70u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25B70u) goto L_08B25B70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25B70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B25B74;
L_08B25B74:
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B25B90u);
    ctx.gpr[8] = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 447u, 0x0880E03Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25B90u) goto L_08B25B90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25B90:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08B25BAC;
    }
    goto L_08B25BA0;
L_08B25BA0:
    aot_gpr_31 = (0x08B25BA8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25BA8u) goto L_08B25BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25BA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08B25BAC;
L_08B25BAC:
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B25BB8u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 483u, 0x0880E374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25BB8u) goto L_08B25BB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25BB8:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_16);
    goto L_08B25BBC;
L_08B25BBC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[21] < static_cast<std::uint32_t>(336) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08B256AC;
      }
      goto L_08B25BD0;
    }
L_08B25BD0:
    ctx.gpr[2] = (0u | 1u);
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B25C08:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (2281u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-30400));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (2281u << 16u);
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4112), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29888));
    goto L_08B25C3C;
L_08B25C3C:
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B25C3C;
      }
      goto L_08B25C5C;
    }
L_08B25C5C:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B25C64:
    ctx.gpr[9] = (2236u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(32304));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    aot_fpr_16 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.fpr[18] = ctx.fpr[18] - aot_fpr_16;
    aot_gpr_6 = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (16816u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08B25E08;
      }
      goto L_08B25CA4;
    }
L_08B25CA4:
    ctx.gpr[10] = (49584u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B25E08;
      }
      goto L_08B25CBC;
    }
L_08B25CBC:
    aot_fpr_16 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_fpr_16 = aot_fpr_16 - ctx.fpr[0];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_16 < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B25E08;
      }
      goto L_08B25CD8;
    }
L_08B25CD8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_16 <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B25E08;
      }
      goto L_08B25CE8;
    }
L_08B25CE8:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7908)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08B25E08;
      }
      goto L_08B25CF8;
    }
L_08B25CF8:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_16; const float ft = aot_fpr_16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_16 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_16 = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[0];
    aot_fpr_16 = ctx.fpr[18] + aot_fpr_16;
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = aot_fpr_16 + ctx.fpr[19];
    ctx.fpr[18] = std::sqrt(ctx.fpr[18]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[9] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B25E08;
      }
      goto L_08B25D2C;
    }
L_08B25D2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7908)));
    ctx.gpr[10] = (aot_gpr_4 << 6u);
    aot_gpr_4 = (2280u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-592));
    ctx.gpr[10] = (ctx.gpr[10] + aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7908)));
    aot_gpr_5 = (aot_gpr_5 << 6u);
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7908)));
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (16772u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B25DB0;
      }
      goto L_08B25D94;
    }
L_08B25D94:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7908)));
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08B25DFC;
      }
      goto L_08B25DB0;
    }
L_08B25DB0:
    aot_fpr_12 = ctx.fpr[18] / ctx.fpr[17];
    aot_gpr_5 = (16192u << 16u);
    aot_gpr_6 = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7908)));
    ctx.gpr[8] = (ctx.gpr[8] << 6u);
    aot_gpr_4 = (ctx.gpr[8] + aot_gpr_4);
    aot_fpr_16 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_16;
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[18] - aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B25DFC;
L_08B25DFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7908)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7908), aot_gpr_4);
    goto L_08B25E08;
L_08B25E08:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B25E10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7908)));
    aot_gpr_6 = (16256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), aot_gpr_16};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    { const std::uint32_t aot_run_words[7]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B25FEC;
      }
      goto L_08B25E6C;
    }
L_08B25E6C:
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (2280u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-592));
    aot_gpr_4 = (16384u << 16u);
    ctx.gpr[19] = (0u | 3u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08B25E9C;
L_08B25E9C:
    aot_gpr_4 = (ctx.gpr[17] << 6u);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[19];
      if (branch_taken) {
          goto L_08B25FD0;
      }
      goto L_08B25EB0;
    }
L_08B25EB0:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[20];
      if (branch_taken) {
          goto L_08B25FD0;
      }
      goto L_08B25EBC;
    }
L_08B25EBC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B25FD0;
      }
      goto L_08B25EF4;
    }
L_08B25EF4:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[21];
      if (branch_taken) {
          goto L_08B25F0C;
      }
      goto L_08B25F00;
    }
L_08B25F00:
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08B25FD0;
      }
      goto L_08B25F0C;
    }
L_08B25F0C:
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[24];
        goto L_08B25F28;
    }
    goto L_08B25F20;
L_08B25F20:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08B25F30;
      }
      goto L_08B25F28;
    }
L_08B25F28:
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] - aot_fpr_12;
    goto L_08B25F30;
L_08B25F30:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(ctx.fpr[28])) && aot_fpr_13 == ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B25FD0;
      }
      goto L_08B25F40;
    }
L_08B25F40:
    aot_fpr_13 = ctx.fpr[20] / aot_fpr_13;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_6);
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[22];
      if (branch_taken) {
          goto L_08B25F9C;
      }
      goto L_08B25F64;
    }
L_08B25F64:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[23]);
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[24];
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[28] <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08B25F98;
    }
    goto L_08B25F98;
L_08B25F98:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_08B25F9C;
L_08B25F9C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B25FD0;
      }
      goto L_08B25FAC;
    }
L_08B25FAC:
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(44)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x08B25FD0u);
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 645u, 0x088B7728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B25FD0u) goto L_08B25FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B25FD0:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7908)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B25E9C;
      }
      goto L_08B25FEC;
    }
L_08B25FEC:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words);
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
      aot_gpr_31 = aot_run_words[13];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B26030:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B26040u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 658u, 0x088B7894u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26040u) goto L_08B26040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26040:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B2604C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[18] = (2281u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-30400));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[18]);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_31);
    goto L_08B2608C;
L_08B2608C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B26098u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26098u) goto L_08B26098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26098:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B260B8;
      }
      goto L_08B260A0;
    }
L_08B260A0:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B2608C;
      }
      goto L_08B260B0;
    }
L_08B260B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B260D8;
      }
      goto L_08B260B8;
    }
L_08B260B8:
    aot_gpr_5 = (2281u << 16u);
    aot_gpr_4 = (ctx.gpr[21] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-29888));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B26184;
      }
      goto L_08B260D8;
    }
L_08B260D8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16800u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08B26118u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26118u) goto L_08B26118;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26118:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B26180;
      }
      goto L_08B26120;
    }
L_08B26120:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4112)));
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4112)));
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_5 = (2281u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-29888));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    aot_gpr_4 = (0u - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B26168;
      }
      goto L_08B2615C;
    }
L_08B2615C:
    ctx.gpr[19] = (aot_gpr_4 & 31u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B2616C;
      }
      goto L_08B26168;
    }
L_08B26168:
    ctx.gpr[19] = (ctx.gpr[19] & 31u);
    goto L_08B2616C;
L_08B2616C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4112), ctx.gpr[19]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B26184;
      }
      goto L_08B26180;
    }
L_08B26180:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B26184;
L_08B26184:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B261A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-416));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(352), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_08B26204;
    }
    goto L_08B261F8;
L_08B261F8:
    aot_gpr_31 = (0x08B26200u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26200u) goto L_08B26200;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26200:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08B26204;
L_08B26204:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B2626C;
      }
      goto L_08B26210;
    }
L_08B26210:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08B2621Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2621Cu) goto L_08B2621C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2621C:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08B26228u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26228u) goto L_08B26228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26228:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x08B26234u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26234u) goto L_08B26234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26234:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x08B26240u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26240u) goto L_08B26240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26240:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8760)));
    aot_gpr_31 = (0x08B2624Cu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2624Cu) goto L_08B2624C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2624C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7908)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(300), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2280u << 16u);
      if (branch_taken) {
          goto L_08B26274;
      }
      goto L_08B26264;
    }
L_08B26264:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B26C60;
      }
      goto L_08B2626C;
    }
L_08B2626C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B26C60;
      }
      goto L_08B26274;
    }
L_08B26274:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-592));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(304), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(308), aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[22] = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (16688u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (2234u << 16u);
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(52));
    aot_gpr_4 = (16704u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(13680));
    goto L_08B262B4;
L_08B262B4:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(300))))));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(304)));
    aot_gpr_6 = (aot_gpr_6 << 6u);
    ctx.gpr[17] = (aot_gpr_6 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    aot_gpr_5 = (16544u << 16u);
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
    aot_fpr_16 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08B262E8;
      }
      goto L_08B262D8;
    }
L_08B262D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B26C40;
      }
      goto L_08B262E8;
    }
L_08B262E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08B262FC;
      }
      goto L_08B262F4;
    }
L_08B262F4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7900)));
      if (branch_taken) {
          goto L_08B26300;
      }
      goto L_08B262FC;
    }
L_08B262FC:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08B26300;
L_08B26300:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[26]) || std::isnan(aot_fpr_12)) && ctx.fpr[26] == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B26C38;
      }
      goto L_08B26314;
    }
L_08B26314:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08B26854;
      }
      goto L_08B26320;
    }
L_08B26320:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(308)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B2638C;
      }
      goto L_08B26378;
    }
L_08B26378:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_16;
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = ctx.fpr[15] + aot_fpr_16;
      if (branch_taken) {
          goto L_08B2639C;
      }
      goto L_08B2638C;
    }
L_08B2638C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_16;
    ctx.fpr[15] = ctx.fpr[15] + aot_fpr_16;
    goto L_08B2639C;
L_08B2639C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B263C8;
      }
      goto L_08B263B4;
    }
L_08B263B4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_16;
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = aot_fpr_13 + aot_fpr_16;
      if (branch_taken) {
          goto L_08B263D8;
      }
      goto L_08B263C8;
    }
L_08B263C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_16;
    aot_fpr_13 = aot_fpr_13 + aot_fpr_16;
    goto L_08B263D8;
L_08B263D8:
    aot_fpr_16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_16));
    ctx.gpr[21] = (aot_gpr_4 << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), aot_gpr_4);
      if (branch_taken) {
          goto L_08B26428;
      }
      goto L_08B2640C;
    }
L_08B2640C:
    aot_gpr_4 = (0u - ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
      if (branch_taken) {
          goto L_08B26438;
      }
      goto L_08B26428;
    }
L_08B26428:
    aot_gpr_4 = (ctx.gpr[21] & 3u);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_4 << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    goto L_08B26438;
L_08B26438:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(296)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B2684C;
      }
      goto L_08B26448;
    }
L_08B26448:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (17182u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (aot_gpr_5 << 16u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (0u - aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 & 3u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_5 = (0u - aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_gpr_4);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), aot_gpr_5);
    goto L_08B264A0;
L_08B264A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08B264C0;
      }
      goto L_08B264AC;
    }
L_08B264AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(292)));
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_16 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 16u));
      if (branch_taken) {
          goto L_08B264D0;
      }
      goto L_08B264C0;
    }
L_08B264C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(288)));
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_16 = (aot_gpr_4 << 16u);
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 16u));
    goto L_08B264D0;
L_08B264D0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B26830;
      }
      goto L_08B264DC;
    }
L_08B264DC:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    goto L_08B264E8;
L_08B264E8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 2u));
    aot_gpr_6 = (ctx.gpr[19] ^ aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 & 15u);
    aot_gpr_4 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B26818;
      }
      goto L_08B26500;
    }
L_08B26500:
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_16);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = ctx.fpr[22] - aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_fpr_16 = std::bit_cast<float>(0u);
    aot_fpr_13 = ctx.fpr[20] - aot_fpr_13;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[18] = (aot_gpr_4 << 16u);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_16)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08B26818;
      }
      goto L_08B26548;
    }
L_08B26548:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B26818;
      }
      goto L_08B26558;
    }
L_08B26558:
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16840u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B26818;
      }
      goto L_08B26584;
    }
L_08B26584:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08B265DCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B265DCu) goto L_08B265DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B265DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (16294u << 16u);
      if (branch_taken) {
          goto L_08B26818;
      }
      goto L_08B265E4;
    }
L_08B265E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr_16 = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[19] = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_14;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = ctx.fpr[20] - aot_fpr_13;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = aot_fpr_16 - ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_16));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_16 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_16 = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_16 = aot_fpr_16 + ctx.fpr[18];
    aot_fpr_14 = aot_fpr_16 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B26818;
      }
      goto L_08B26644;
    }
L_08B26644:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B26818;
      }
      goto L_08B26654;
    }
L_08B26654:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16840u << 16u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_16 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_16 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_13 = aot_fpr_12 - aot_fpr_16;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B26818;
      }
      goto L_08B26688;
    }
L_08B26688:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_16 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_16 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 / ctx.fpr[28];
    aot_fpr_12 = aot_fpr_16 / aot_fpr_12;
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = ctx.fpr[24] - aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[17] = std::sqrt(aot_fpr_13);
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_16 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[17] = ctx.fpr[17] / aot_fpr_16;
    aot_fpr_13 = std::sqrt(aot_fpr_13);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_16;
    ctx.gpr[8] = (0u | 1u);
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    aot_gpr_31 = (0x08B266F4u);
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B266F4u) goto L_08B266F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B266F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B26818;
      }
      goto L_08B266FC;
    }
L_08B266FC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(340), ctx.gpr[22]);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(aot_gpr_16));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(336), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[30] = ctx.fpr[24] / ctx.fpr[22];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[23]);
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_16 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[18] = (aot_gpr_5 & 255u);
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_16 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_16 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[21] = (aot_gpr_5 & 255u);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    aot_fpr_16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_16));
    aot_gpr_4 = (aot_gpr_4 & 8191u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_16));
    aot_gpr_16 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_31 = (0x08B267A4u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 351u, 0x08B553F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B267A4u) goto L_08B267A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B267A4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4132)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4128)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B267B8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_16, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B267B8u) goto L_08B267B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B267B8:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B267C4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B267C4u) goto L_08B267C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B267C4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(320)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_fpr_16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (0u | 255u);
    aot_gpr_31 = (0x08B267F8u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 157u, 0x08AA9F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B267F8u) goto L_08B267F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B267F8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(312)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(316)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(324), aot_run_words);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
    }
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(336))))));
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(338))))));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(340)));
    goto L_08B26818;
L_08B26818:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_16 = (aot_gpr_4 << 16u);
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B264E8;
      }
      goto L_08B26830;
    }
L_08B26830:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(296)));
    ctx.gpr[21] = (aot_gpr_4 << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B264A0;
      }
      goto L_08B2684C;
    }
L_08B2684C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B26C38;
      }
      goto L_08B26854;
    }
L_08B26854:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B26880;
      }
      goto L_08B26860;
    }
L_08B26860:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B26880;
      }
      goto L_08B26870;
    }
L_08B26870:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B26C38;
      }
      goto L_08B26880;
    }
L_08B26880:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B26894u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    goto L_08B2604C;
L_08B26894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B26C38;
      }
      goto L_08B2689C;
    }
L_08B2689C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (16656u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_16 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[15] = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    aot_fpr_12 = aot_fpr_16 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_fpr_13 = aot_fpr_16 + aot_fpr_13;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (aot_gpr_4 & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(284), aot_gpr_5);
      if (branch_taken) {
          goto L_08B26908;
      }
      goto L_08B268F4;
    }
L_08B268F4:
    aot_gpr_4 = (0u - aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[21] - aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
      if (branch_taken) {
          goto L_08B26914;
      }
      goto L_08B26908;
    }
L_08B26908:
    aot_gpr_4 = (ctx.gpr[21] - aot_gpr_6);
    ctx.gpr[21] = (aot_gpr_4 << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    goto L_08B26914;
L_08B26914:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(284)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B26C38;
      }
      goto L_08B26924;
    }
L_08B26924:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (17156u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (16656u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (aot_gpr_6 << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_4 & 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), aot_gpr_6);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(280), aot_gpr_6);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_5);
    goto L_08B2697C;
L_08B2697C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08B2699C;
      }
      goto L_08B26988;
    }
L_08B26988:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(280)));
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_16 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 16u));
      if (branch_taken) {
          goto L_08B269AC;
      }
      goto L_08B2699C;
    }
L_08B2699C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(268)));
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_16 = (aot_gpr_4 << 16u);
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 16u));
    goto L_08B269AC;
L_08B269AC:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 1u));
      if (branch_taken) {
          goto L_08B26C1C;
      }
      goto L_08B269B8;
    }
L_08B269B8:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 >> 31u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[19] = (ctx.gpr[21] + aot_gpr_4);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
    goto L_08B269CC;
L_08B269CC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 1u));
    aot_gpr_4 = (aot_gpr_4 >> 31u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_6 = (ctx.gpr[19] ^ aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 & 15u);
    aot_gpr_4 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B26C04;
      }
      goto L_08B269F0;
    }
L_08B269F0:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_16);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = ctx.fpr[22] - aot_fpr_13;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    ctx.gpr[18] = (aot_gpr_4 << 16u);
    ctx.fpr[15] = aot_fpr_12 - ctx.fpr[15];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[15];
    aot_fpr_13 = std::sqrt(aot_fpr_13);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B26C04;
      }
      goto L_08B26A34;
    }
L_08B26A34:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_fpr_16 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[22] - ctx.fpr[15];
    aot_fpr_16 = aot_fpr_12 - aot_fpr_16;
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = aot_fpr_16; const float ft = aot_fpr_16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_16 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_16 = fs * ft; }
    ctx.fpr[20] = ctx.fpr[15] + aot_fpr_16;
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    aot_gpr_4 = (16816u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B26C04;
      }
      goto L_08B26A6C;
    }
L_08B26A6C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < ctx.fpr[30])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[15] = ctx.fpr[20] - ctx.fpr[30];
        goto L_08B26A84;
    }
    goto L_08B26A7C;
L_08B26A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08B26A8C;
      }
      goto L_08B26A84;
    }
L_08B26A84:
    ctx.fpr[20] = ctx.fpr[15] / ctx.fpr[30];
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[20];
    goto L_08B26A8C;
L_08B26A8C:
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    aot_gpr_4 = (16332u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[9]);
    aot_fpr_12 = ctx.fpr[15] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_13;
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08B26AD8u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26AD8u) goto L_08B26AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26AD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B26BFC;
      }
      goto L_08B26AE0;
    }
L_08B26AE0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(348), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(344), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(340), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[30] = ctx.fpr[24] / ctx.fpr[26];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[23]);
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_16 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[18] = (aot_gpr_5 & 255u);
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_16 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_16 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[22] = (aot_gpr_5 & 255u);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    aot_fpr_16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_16));
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_16));
    ctx.gpr[19] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_31 = (0x08B26B88u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 351u, 0x08B553F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26B88u) goto L_08B26B88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26B88:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4140)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4136)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B26B9Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_16, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26B9Cu) goto L_08B26B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26B9C:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B26BA8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26BA8u) goto L_08B26BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26BA8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(324)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_fpr_16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (0u | 255u);
    aot_gpr_31 = (0x08B26BDCu);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 157u, 0x08AA9F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26BDCu) goto L_08B26BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26BDC:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(332)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(328)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(316)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(312)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(320)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(340), aot_run_words);
      ctx.gpr[22] = aot_run_words[0];
      ctx.gpr[19] = aot_run_words[1];
      ctx.gpr[20] = aot_run_words[2];
    }
    goto L_08B26BFC;
L_08B26BFC:
    aot_gpr_4 = (16656u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B26C04;
L_08B26C04:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2));
    aot_gpr_16 = (aot_gpr_4 << 16u);
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B269CC;
      }
      goto L_08B26C1C;
    }
L_08B26C1C:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(2));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(284)));
    ctx.gpr[21] = (aot_gpr_4 << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B2697C;
      }
      goto L_08B26C38;
    }
L_08B26C38:
    aot_gpr_31 = (0x08B26C40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 59u, 0x08AA8BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26C40u) goto L_08B26C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26C40:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(300))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7908)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(300), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B262B4;
      }
      goto L_08B26C60;
    }
L_08B26C60:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(352), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
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
      ctx.gpr[30] = aot_run_words[14];
      aot_gpr_31 = aot_run_words[15];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B26CA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(10204));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B26CC8u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26CC8u) goto L_08B26CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26CC8:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(10208));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x08B26CE0u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26CE0u) goto L_08B26CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26CE0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B26CEC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B26D28;
      }
      goto L_08B26D00;
    }
L_08B26D00:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31368)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B26D18:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(468), aot_gpr_5);
      if (branch_taken) {
          goto L_08B26D28;
      }
      goto L_08B26D28;
    }
L_08B26D28:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B26D30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B26D8C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08B26DB8u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26DB8u) goto L_08B26DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26DB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B26DC4u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26DC4u) goto L_08B26DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26DC4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B26DE8;
      }
      goto L_08B26DD0;
    }
L_08B26DD0:
    aot_gpr_31 = (0x08B26DD8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26DD8u) goto L_08B26DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26DD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B26E20;
      }
      goto L_08B26DE0;
    }
L_08B26DE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B26DF0;
      }
      goto L_08B26DE8;
    }
L_08B26DE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B26E24;
      }
      goto L_08B26DF0;
    }
L_08B26DF0:
    aot_gpr_31 = (0x08B26DF8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 765u, 0x08863DD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26DF8u) goto L_08B26DF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26DF8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B26E20;
      }
      goto L_08B26E04;
    }
L_08B26E04:
    aot_gpr_4 = (2239u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08B26E20u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21784));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 331u, 0x0886565Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26E20u) goto L_08B26E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26E20:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B26E24;
L_08B26E24:
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
L_08B26E3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    aot_gpr_31 = (0x08B26E78u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26E78u) goto L_08B26E78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26E78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B26E84u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26E84u) goto L_08B26E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26E84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B26E90u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26E90u) goto L_08B26E90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26E90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B26EA0;
      }
      goto L_08B26E98;
    }
L_08B26E98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08B26EA4;
      }
      goto L_08B26EA0;
    }
L_08B26EA0:
    aot_gpr_4 = (0u | 0u);
    goto L_08B26EA4;
L_08B26EA4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B26EC0;
      }
      goto L_08B26EAC;
    }
L_08B26EAC:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B26ECC;
      }
      goto L_08B26EC0;
    }
L_08B26EC0:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08B26ECC;
L_08B26ECC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B26EF4u);
    aot_gpr_6 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26EF4u) goto L_08B26EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26EF4:
    ctx.gpr[2] = (0u | 0u);
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
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B26F18:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 4u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    aot_gpr_31 = (0x08B26F54u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26F54u) goto L_08B26F54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26F54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B26F60u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26F60u) goto L_08B26F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26F60:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08B26F88u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 257u, 0x08809600u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26F88u) goto L_08B26F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26F88:
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (50042u << 16u);
      if (branch_taken) {
          goto L_08B26FB8;
      }
      goto L_08B26FA4;
    }
L_08B26FA4:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B26FC8;
      }
      goto L_08B26FB8;
    }
L_08B26FB8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08B26FC4u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26FC4u) goto L_08B26FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26FC4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B26FC8;
L_08B26FC8:
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(527));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x08B26FE8u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 211u, 0x08B312F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B26FE8u) goto L_08B26FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B26FE8:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B27010:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08B27040u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27040u) goto L_08B27040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27040:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B2704Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2704Cu) goto L_08B2704C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2704C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B270CC;
      }
      goto L_08B27058;
    }
L_08B27058:
    aot_gpr_31 = (0x08B27060u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27060u) goto L_08B27060;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27060:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B27098;
      }
      goto L_08B27068;
    }
L_08B27068:
    aot_gpr_31 = (0x08B27070u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089474C4, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27070u) goto L_08B27070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27070:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[17];
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
      if (branch_taken) {
          goto L_08B2708C;
      }
      goto L_08B27088;
    }
L_08B27088:
    ctx.gpr[18] = (0u | 0u);
    goto L_08B2708C;
L_08B2708C:
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08B270DC;
      }
      goto L_08B27098;
    }
L_08B27098:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_6 = (0u | 58u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_6;
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
      if (branch_taken) {
          goto L_08B270BC;
      }
      goto L_08B270B0;
    }
L_08B270B0:
    aot_gpr_6 = (0u | 57u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_6;
      if (branch_taken) {
          goto L_08B270C4;
      }
      goto L_08B270BC;
    }
L_08B270BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B270DC;
      }
      goto L_08B270C4;
    }
L_08B270C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08B270DC;
      }
      goto L_08B270CC;
    }
L_08B270CC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    goto L_08B270DC;
L_08B270DC:
    aot_gpr_6 = (ctx.gpr[18] & 255u);
    ctx.gpr[18] = (aot_gpr_6 ^ aot_gpr_4);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B270F4;
      }
      goto L_08B270EC;
    }
L_08B270EC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08B2713C;
      }
      goto L_08B270F4;
    }
L_08B270F4:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27120;
      }
      goto L_08B27114;
    }
L_08B27114:
    aot_gpr_4 = (ctx.gpr[18] & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B2713C;
      }
      goto L_08B27120;
    }
L_08B27120:
    aot_gpr_4 = (ctx.gpr[18] | aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B2713C;
      }
      goto L_08B27138;
    }
L_08B27138:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2713C;
L_08B2713C:
    ctx.gpr[2] = (0u | 0u);
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
L_08B27158:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 6u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B2718Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2718Cu) goto L_08B2718C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2718C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B27198u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27198u) goto L_08B27198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27198:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B271A4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B271A4u) goto L_08B271A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B271A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B271D4;
      }
      goto L_08B271AC;
    }
L_08B271AC:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08B271B8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 1011u, 0x08AE3E80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B271B8u) goto L_08B271B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B271B8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B271E8;
      }
      goto L_08B271CC;
    }
L_08B271CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B271E8;
      }
      goto L_08B271D4;
    }
L_08B271D4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[2]);
    }
    ctx.gpr[18] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08B271E8;
L_08B271E8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B27230;
      }
      goto L_08B271F0;
    }
L_08B271F0:
    aot_fpr_16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_16));
    aot_gpr_31 = (0x08B27210u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27210u) goto L_08B27210;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27210:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27228;
      }
      goto L_08B27220;
    }
L_08B27220:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08B2726C;
      }
      goto L_08B27228;
    }
L_08B27228:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B2726C;
      }
      goto L_08B27230;
    }
L_08B27230:
    aot_fpr_16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_16));
    aot_gpr_31 = (0x08B27250u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27250u) goto L_08B27250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27250:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27268;
      }
      goto L_08B27260;
    }
L_08B27260:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08B2726C;
      }
      goto L_08B27268;
    }
L_08B27268:
    aot_gpr_5 = (0u | 0u);
    goto L_08B2726C;
L_08B2726C:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27284;
      }
      goto L_08B2727C;
    }
L_08B2727C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B272CC;
      }
      goto L_08B27284;
    }
L_08B27284:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B272B0;
      }
      goto L_08B272A4;
    }
L_08B272A4:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B272CC;
      }
      goto L_08B272B0;
    }
L_08B272B0:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B272CC;
      }
      goto L_08B272C8;
    }
L_08B272C8:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B272CC;
L_08B272CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B272FC;
      }
      goto L_08B272D8;
    }
L_08B272D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_5 = (49864u << 16u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_16 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x08B272FCu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B272FCu) goto L_08B272FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B272FC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B27308;
      }
      goto L_08B27308;
    }
L_08B27308:
    ctx.gpr[2] = (0u | 0u);
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
L_08B27328:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B2735Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2735Cu) goto L_08B2735C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2735C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B27368u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27368u) goto L_08B27368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27368:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B27374u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27374u) goto L_08B27374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27374:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B273AC;
      }
      goto L_08B2737C;
    }
L_08B2737C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08B27388u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 1011u, 0x08AE3E80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27388u) goto L_08B27388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27388:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.fpr[17] = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_16 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[2]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[3]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[4]);
    }
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B273C8;
      }
      goto L_08B273A4;
    }
L_08B273A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B273C8;
      }
      goto L_08B273AC;
    }
L_08B273AC:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.fpr[17] = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_16 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[2]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[3]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[4]);
    }
    ctx.gpr[18] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08B273C8;
L_08B273C8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B2741C;
      }
      goto L_08B273D0;
    }
L_08B273D0:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_16));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_fpr_16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_gpr_31 = (0x08B273FCu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 799u, 0x08AAF984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B273FCu) goto L_08B273FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B273FC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27414;
      }
      goto L_08B2740C;
    }
L_08B2740C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08B27464;
      }
      goto L_08B27414;
    }
L_08B27414:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B27464;
      }
      goto L_08B2741C;
    }
L_08B2741C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_16));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_fpr_16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_gpr_31 = (0x08B27448u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 799u, 0x08AAF984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27448u) goto L_08B27448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27448:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27460;
      }
      goto L_08B27458;
    }
L_08B27458:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08B27464;
      }
      goto L_08B27460;
    }
L_08B27460:
    aot_gpr_5 = (0u | 0u);
    goto L_08B27464;
L_08B27464:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B2747C;
      }
      goto L_08B27474;
    }
L_08B27474:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B274C4;
      }
      goto L_08B2747C;
    }
L_08B2747C:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B274A8;
      }
      goto L_08B2749C;
    }
L_08B2749C:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B274C4;
      }
      goto L_08B274A8;
    }
L_08B274A8:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B274C4;
      }
      goto L_08B274C0;
    }
L_08B274C0:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B274C4;
L_08B274C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B27504;
      }
      goto L_08B274D0;
    }
L_08B274D0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_16 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    { const float fs = aot_fpr_16; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_16 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_16 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08B27504u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27504u) goto L_08B27504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27504:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B27510;
      }
      goto L_08B27510;
    }
L_08B27510:
    ctx.gpr[2] = (0u | 0u);
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
L_08B27530:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_31 = (0x08B2756Cu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2756Cu) goto L_08B2756C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2756C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B27578u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27578u) goto L_08B27578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27578:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B27584u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27584u) goto L_08B27584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27584:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B27594;
      }
      goto L_08B2758C;
    }
L_08B2758C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08B27598;
      }
      goto L_08B27594;
    }
L_08B27594:
    ctx.gpr[17] = (0u | 0u);
    goto L_08B27598;
L_08B27598:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_31 = (0x08B275A4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B275A4u) goto L_08B275A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B275A4:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7996)));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
      if (branch_taken) {
          goto L_08B2771C;
      }
      goto L_08B275B4;
    }
L_08B275B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B2771C;
      }
      goto L_08B275C0;
    }
L_08B275C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_31 = (0x08B275CCu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B275CCu) goto L_08B275CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B275CC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08B27644;
      }
      goto L_08B275D8;
    }
L_08B275D8:
    aot_gpr_31 = (0x08B275E0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 369u, 0x08B41658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B275E0u) goto L_08B275E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B275E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(612)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B27644;
      }
      goto L_08B275F0;
    }
L_08B275F0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7992)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B27644;
      }
      goto L_08B275FC;
    }
L_08B275FC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5444)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5436), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5444), aot_gpr_4);
    aot_gpr_4 = (2239u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7996)));
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08B27644u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21784));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 331u, 0x0886565Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27644u) goto L_08B27644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27644:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7996), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(612)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B276A4;
      }
      goto L_08B27658;
    }
L_08B27658:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_08B27718;
      }
      goto L_08B27660;
    }
L_08B27660:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5444)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5444), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5436), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7992), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2239u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7996)));
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B2769Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21784));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2769Cu) goto L_08B2769C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2769C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7996)));
      if (branch_taken) {
          goto L_08B2771C;
      }
      goto L_08B276A4;
    }
L_08B276A4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B276C4;
      }
      goto L_08B276AC;
    }
L_08B276AC:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_08B276D4;
      }
      goto L_08B276B8;
    }
L_08B276B8:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7992), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7996)));
      if (branch_taken) {
          goto L_08B2771C;
      }
      goto L_08B276C4;
    }
L_08B276C4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B276B8;
      }
      goto L_08B276CC;
    }
L_08B276CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B27718;
      }
      goto L_08B276D4;
    }
L_08B276D4:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5444)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5448)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5444), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5448), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7992), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2239u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7996)));
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B27710u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21784));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27710u) goto L_08B27710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27710:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7996)));
      if (branch_taken) {
          goto L_08B2771C;
      }
      goto L_08B27718;
    }
L_08B27718:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7996)));
    goto L_08B2771C;
L_08B2771C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B27730u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27730u) goto L_08B27730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27730:
    ctx.gpr[2] = (0u | 0u);
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
L_08B27758:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B2778Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B2778Cu) goto L_08B2778C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B2778C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B27798u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27798u) goto L_08B27798;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27798:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B277A8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B277A8u) goto L_08B277A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B277A8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B277B4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B277B4u) goto L_08B277B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B277B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B277C4;
      }
      goto L_08B277BC;
    }
L_08B277BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08B277C8;
      }
      goto L_08B277C4;
    }
L_08B277C4:
    ctx.gpr[18] = (0u | 0u);
    goto L_08B277C8;
L_08B277C8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B277E0;
      }
      goto L_08B277D0;
    }
L_08B277D0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
      if (branch_taken) {
          goto L_08B277E0;
      }
      goto L_08B277D8;
    }
L_08B277D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B277E4;
      }
      goto L_08B277E0;
    }
L_08B277E0:
    aot_gpr_4 = (0u | 0u);
    goto L_08B277E4;
L_08B277E4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27808;
      }
      goto L_08B27800;
    }
L_08B27800:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B27850;
      }
      goto L_08B27808;
    }
L_08B27808:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27834;
      }
      goto L_08B27828;
    }
L_08B27828:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B27850;
      }
      goto L_08B27834;
    }
L_08B27834:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B27850;
      }
      goto L_08B2784C;
    }
L_08B2784C:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B27850;
L_08B27850:
    ctx.gpr[2] = (0u | 0u);
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
L_08B27870:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08B278A0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B278A0u) goto L_08B278A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B278A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B278ACu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B278ACu) goto L_08B278AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B278AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B278B8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B278B8u) goto L_08B278B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B278B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B278C8;
      }
      goto L_08B278C0;
    }
L_08B278C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08B278CC;
      }
      goto L_08B278C8;
    }
L_08B278C8:
    ctx.gpr[17] = (0u | 0u);
    goto L_08B278CC;
L_08B278CC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B278EC;
      }
      goto L_08B278D4;
    }
L_08B278D4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B278EC;
      }
      goto L_08B278E4;
    }
L_08B278E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B278F0;
      }
      goto L_08B278EC;
    }
L_08B278EC:
    aot_gpr_4 = (0u | 0u);
    goto L_08B278F0;
L_08B278F0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27914;
      }
      goto L_08B2790C;
    }
L_08B2790C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B2795C;
      }
      goto L_08B27914;
    }
L_08B27914:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27940;
      }
      goto L_08B27934;
    }
L_08B27934:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B2795C;
      }
      goto L_08B27940;
    }
L_08B27940:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B2795C;
      }
      goto L_08B27958;
    }
L_08B27958:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2795C;
L_08B2795C:
    ctx.gpr[2] = (0u | 0u);
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
L_08B27978:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B279A0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B279A0u) goto L_08B279A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B279A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B279ACu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B279ACu) goto L_08B279AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B279AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B279B8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B279B8u) goto L_08B279B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B279B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B279D4;
      }
      goto L_08B279C0;
    }
L_08B279C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B279D4;
      }
      goto L_08B279CC;
    }
L_08B279CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B279D8;
      }
      goto L_08B279D4;
    }
L_08B279D4:
    aot_gpr_4 = (0u | 0u);
    goto L_08B279D8;
L_08B279D8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B279FC;
      }
      goto L_08B279F4;
    }
L_08B279F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B27A44;
      }
      goto L_08B279FC;
    }
L_08B279FC:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27A28;
      }
      goto L_08B27A1C;
    }
L_08B27A1C:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B27A44;
      }
      goto L_08B27A28;
    }
L_08B27A28:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B27A44;
      }
      goto L_08B27A40;
    }
L_08B27A40:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B27A44;
L_08B27A44:
    ctx.gpr[2] = (0u | 0u);
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
L_08B27A5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B27A84u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27A84u) goto L_08B27A84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27A84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B27A90u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27A90u) goto L_08B27A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27A90:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08B27AA0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 53u, 0x089082C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27AA0u) goto L_08B27AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27AA0:
    ctx.gpr[2] = (0u | 0u);
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
L_08B27AB8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08B27AE8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27AE8u) goto L_08B27AE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27AE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B27AF4u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27AF4u) goto L_08B27AF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27AF4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B27B84;
      }
      goto L_08B27B00;
    }
L_08B27B00:
    aot_gpr_31 = (0x08B27B08u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27B08u) goto L_08B27B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27B08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B27B40;
      }
      goto L_08B27B10;
    }
L_08B27B10:
    aot_gpr_31 = (0x08B27B18u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089474C4, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27B18u) goto L_08B27B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27B18:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[18];
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
      if (branch_taken) {
          goto L_08B27B34;
      }
      goto L_08B27B2C;
    }
L_08B27B2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 1u);
      if (branch_taken) {
          goto L_08B27B38;
      }
      goto L_08B27B34;
    }
L_08B27B34:
    aot_gpr_6 = (0u | 0u);
    goto L_08B27B38;
L_08B27B38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B27B94;
      }
      goto L_08B27B40;
    }
L_08B27B40:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    ctx.gpr[7] = (0u | 58u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
      if (branch_taken) {
          goto L_08B27B74;
      }
      goto L_08B27B58;
    }
L_08B27B58:
    ctx.gpr[7] = (0u | 57u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
      if (branch_taken) {
          goto L_08B27B74;
      }
      goto L_08B27B64;
    }
L_08B27B64:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 38u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08B27B7C;
      }
      goto L_08B27B74;
    }
L_08B27B74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 1u);
      if (branch_taken) {
          goto L_08B27B94;
      }
      goto L_08B27B7C;
    }
L_08B27B7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08B27B94;
      }
      goto L_08B27B84;
    }
L_08B27B84:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    goto L_08B27B94;
L_08B27B94:
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_5 = (aot_gpr_6 ^ aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27BAC;
      }
      goto L_08B27BA4;
    }
L_08B27BA4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B27BF4;
      }
      goto L_08B27BAC;
    }
L_08B27BAC:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27BD8;
      }
      goto L_08B27BCC;
    }
L_08B27BCC:
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B27BF4;
      }
      goto L_08B27BD8;
    }
L_08B27BD8:
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B27BF4;
      }
      goto L_08B27BF0;
    }
L_08B27BF0:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B27BF4;
L_08B27BF4:
    ctx.gpr[2] = (0u | 0u);
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
L_08B27C10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B27C38u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27C38u) goto L_08B27C38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27C38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B27C44u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27C44u) goto L_08B27C44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27C44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(684)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(684), aot_gpr_4);
    ctx.gpr[2] = (0u | 0u);
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
L_08B27C6C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_31 = (0x08B27C9Cu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27C9Cu) goto L_08B27C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27C9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B27CA8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27CA8u) goto L_08B27CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27CA8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B27CC0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27CC0u) goto L_08B27CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27CC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08B27CD4;
    }
    goto L_08B27CCC;
L_08B27CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B27CDC;
      }
      goto L_08B27CD4;
    }
L_08B27CD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    goto L_08B27CDC;
L_08B27CDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B27CECu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27CECu) goto L_08B27CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27CEC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B27CF8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27CF8u) goto L_08B27CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27CF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B27D24;
      }
      goto L_08B27D00;
    }
L_08B27D00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B27D24;
      }
      goto L_08B27D0C;
    }
L_08B27D0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B27D30;
      }
      goto L_08B27D24;
    }
L_08B27D24:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    goto L_08B27D30;
L_08B27D30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_31 = (0x08B27D3Cu);
    aot_gpr_5 = (ctx.gpr[17] & 65535u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 516u, 0x08A8EA74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27D3Cu) goto L_08B27D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27D3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08B27D4Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 313u, 0x08A8DAA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27D4Cu) goto L_08B27D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27D4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B27D5C;
      }
      goto L_08B27D54;
    }
L_08B27D54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B27D60;
      }
      goto L_08B27D5C;
    }
L_08B27D5C:
    aot_gpr_4 = (0u | 0u);
    goto L_08B27D60;
L_08B27D60:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B27D84;
      }
      goto L_08B27D7C;
    }
L_08B27D7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B27DD4;
      }
      goto L_08B27D84;
    }
L_08B27D84:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08B27DB0;
      }
      goto L_08B27D9C;
    }
L_08B27D9C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B27DD4;
      }
      goto L_08B27DB0;
    }
L_08B27DB0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B27DD4;
      }
      goto L_08B27DD0;
    }
L_08B27DD0:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B27DD4;
L_08B27DD4:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B27DF0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    aot_gpr_31 = (0x08B27E34u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27E34u) goto L_08B27E34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27E34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B27E40u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27E40u) goto L_08B27E40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27E40:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B27E4Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27E4Cu) goto L_08B27E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27E4C:
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17204u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_gpr_4 = (17332u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B27E78;
      }
      goto L_08B27E70;
    }
L_08B27E70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08B27E7C;
      }
      goto L_08B27E78;
    }
L_08B27E78:
    aot_gpr_4 = (0u | 0u);
    goto L_08B27E7C;
L_08B27E7C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B27ECC;
      }
      goto L_08B27E84;
    }
L_08B27E84:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B27EB4;
      }
      goto L_08B27E9C;
    }
L_08B27E9C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(ctx.fpr[20])) && aot_fpr_13 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B27EB4;
      }
      goto L_08B27EAC;
    }
L_08B27EAC:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08B27EC0;
      }
      goto L_08B27EB4;
    }
L_08B27EB4:
    aot_gpr_31 = (0x08B27EBCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27EBCu) goto L_08B27EBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27EBC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08B27EC0;
L_08B27EC0:
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[24];
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B27F0C;
      }
      goto L_08B27ECC;
    }
L_08B27ECC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B27EFC;
      }
      goto L_08B27EE4;
    }
L_08B27EE4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(ctx.fpr[20])) && aot_fpr_13 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B27EFC;
      }
      goto L_08B27EF4;
    }
L_08B27EF4:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08B27F08;
      }
      goto L_08B27EFC;
    }
L_08B27EFC:
    aot_gpr_31 = (0x08B27F04u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27F04u) goto L_08B27F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27F04:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08B27F08;
L_08B27F08:
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[24];
    goto L_08B27F0C;
L_08B27F0C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B27F20;
      }
      goto L_08B27F1C;
    }
L_08B27F1C:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[26];
    goto L_08B27F20;
L_08B27F20:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B27F34;
      }
      goto L_08B27F30;
    }
L_08B27F30:
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[26];
    goto L_08B27F34;
L_08B27F34:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B27F4Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27F4Cu) goto L_08B27F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27F4C:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B27F7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B27FA4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27FA4u) goto L_08B27FA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27FA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08B27FB0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27FB0u) goto L_08B27FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27FB0:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B27FBCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B27FBCu) goto L_08B27FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B27FBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B27FCC;
      }
      goto L_08B27FC4;
    }
L_08B27FC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08B27FD0;
      }
      goto L_08B27FCC;
    }
L_08B27FCC:
    aot_gpr_4 = (0u | 0u);
    goto L_08B27FD0;
L_08B27FD0:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (16457u << 16u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0201_entry, 201u, 2u, 0x08B28018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B27FD8;
    }
L_08B27FD8:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17204u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    ctx.pc = 0x08B28000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0200(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0200_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_200(Runtime &runtime) {
    runtime.register_generated_unit(200u, 0x08B24000u, 16384u, &recomp_unit_0200, &recomp_unit_0200_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08B24000u, &recomp_unit_0200, "recomp_unit_0200",
                                          kEntryMasks_recomp_unit_0200, 64u);
}
} // namespace psprecomp
