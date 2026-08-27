#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0023[64] = {
    0x0002002000080081ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x2000011100400020ull,
    0x55255010012002D1ull, 0xAA954920552AA490ull, 0x01AA802100491504ull, 0x48A548A858912002ull,
    0x2950021004080111ull, 0x149000008A880640ull, 0x84A4848A21222104ull, 0x0015B44A8D109168ull,
    0x000000008A0A0804ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x5128024A80000000ull,
    0x54A8281458150229ull, 0x0220A524A4844111ull, 0x4204290404000000ull, 0xA8201155000A0821ull,
    0x01020484000002A9ull, 0x0024090005000000ull, 0x0008A4808803C000ull, 0xA229000022022290ull,
    0x5042401402842A12ull, 0x4D00080040045A12ull, 0x8A28502100000A01ull, 0x434285209486010Aull,
    0x00000A0001005854ull, 0x0420086800049048ull, 0x2040101290C80080ull, 0x0916152068400810ull,
    0x2225020040408088ull, 0x04520C085C84AA10ull, 0x55493280A4003200ull, 0x008080204A0400B0ull,
    0x8430001304020002ull, 0x010A168408000900ull, 0x6A00000000092002ull, 0x0500C300161800B0ull,
    0x4501401048106021ull, 0x52AAAAA824108158ull, 0x92A825491AAAA94Aull, 0xAAAAAAA5554916A0ull,
    0x091000B5555045AAull, 0x0001201811000000ull, 0x0008040200200280ull, 0xA4D0203500000000ull,
    0x4880882015130892ull, 0xA100091009211682ull, 0x0004008429452A12ull, 0x2008189495095110ull,
    0x00410004A0809112ull, 0xA292A55205080000ull, 0xA292AA1452525290ull, 0xA145115100200334ull,
    0x0094201A14525252ull, 0xA85A008D082288A5ull, 0x1102AA2292A28024ull, 0x4684090A49522440ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0023[64] = {
    1u, 6u, 6u, 6u, 12u, 29u, 53u, 68u, 87u, 99u, 111u, 128u, 149u, 156u, 156u, 156u,
    156u, 156u, 156u, 156u, 166u, 186u, 203u, 211u, 226u, 236u, 242u, 253u, 266u, 281u, 294u, 306u,
    324u, 333u, 344u, 355u, 370u, 381u, 399u, 416u, 426u, 436u, 447u, 455u, 469u, 482u, 504u, 530u,
    558u, 579u, 585u, 591u, 602u, 618u, 633u, 647u, 664u, 675u, 691u, 714u, 731u, 749u, 769u, 787u,
};
void recomp_unit_0023_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,6,29,31,17 fprs=12,13,14,17 gpr_occ=3882 fpr_occ=393 gpr_total=5502 fpr_total=777
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_17 = ctx.gpr[17];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_17 = ctx.fpr[17];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[29] = aot_gpr_29; ctx.gpr[31] = aot_gpr_31; ctx.gpr[17] = aot_gpr_17; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[17] = aot_fpr_17; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_17 = ctx.gpr[17]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_17 = ctx.fpr[17]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08860000u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0023[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0023[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08860000;
    case 2u: goto L_0886001C;
    case 3u: goto L_0886004C;
    case 4u: goto L_08860094;
    case 5u: goto L_088600C4;
    case 6u: goto L_08860314;
    case 7u: goto L_08860358;
    case 8u: goto L_08860380;
    case 9u: goto L_08860390;
    case 10u: goto L_088603A0;
    case 11u: goto L_088603F4;
    case 12u: goto L_08860400;
    case 13u: goto L_08860410;
    case 14u: goto L_08860418;
    case 15u: goto L_0886041C;
    case 16u: goto L_08860424;
    case 17u: goto L_08860454;
    case 18u: goto L_08860460;
    case 19u: goto L_08860490;
    case 20u: goto L_088604B0;
    case 21u: goto L_088604B8;
    case 22u: goto L_088604C0;
    case 23u: goto L_088604C8;
    case 24u: goto L_088604D4;
    case 25u: goto L_088604E0;
    case 26u: goto L_088604E8;
    case 27u: goto L_088604F0;
    case 28u: goto L_088604F8;
    case 29u: goto L_08860510;
    case 30u: goto L_0886051C;
    case 31u: goto L_08860528;
    case 32u: goto L_08860534;
    case 33u: goto L_0886053C;
    case 34u: goto L_08860544;
    case 35u: goto L_0886054C;
    case 36u: goto L_08860554;
    case 37u: goto L_08860560;
    case 38u: goto L_08860568;
    case 39u: goto L_08860570;
    case 40u: goto L_08860578;
    case 41u: goto L_08860594;
    case 42u: goto L_088605A0;
    case 43u: goto L_088605AC;
    case 44u: goto L_088605B8;
    case 45u: goto L_088605C0;
    case 46u: goto L_088605C8;
    case 47u: goto L_088605D0;
    case 48u: goto L_088605DC;
    case 49u: goto L_088605E4;
    case 50u: goto L_088605EC;
    case 51u: goto L_088605F4;
    case 52u: goto L_088605FC;
    case 53u: goto L_08860608;
    case 54u: goto L_08860620;
    case 55u: goto L_08860628;
    case 56u: goto L_08860630;
    case 57u: goto L_08860640;
    case 58u: goto L_0886064C;
    case 59u: goto L_08860658;
    case 60u: goto L_08860680;
    case 61u: goto L_08860694;
    case 62u: goto L_088606BC;
    case 63u: goto L_088606C4;
    case 64u: goto L_088606CC;
    case 65u: goto L_088606D4;
    case 66u: goto L_088606DC;
    case 67u: goto L_088606E0;
    case 68u: goto L_08860704;
    case 69u: goto L_08860734;
    case 70u: goto L_08860740;
    case 71u: goto L_08860750;
    case 72u: goto L_0886075C;
    case 73u: goto L_0886076C;
    case 74u: goto L_08860770;
    case 75u: goto L_08860778;
    case 76u: goto L_0886078C;
    case 77u: goto L_08860794;
    case 78u: goto L_0886079C;
    case 79u: goto L_088607AC;
    case 80u: goto L_088607B8;
    case 81u: goto L_088607C0;
    case 82u: goto L_088607C8;
    case 83u: goto L_088607D4;
    case 84u: goto L_088607DC;
    case 85u: goto L_088607EC;
    case 86u: goto L_088607F8;
    case 87u: goto L_08860800;
    case 88u: goto L_08860810;
    case 89u: goto L_08860820;
    case 90u: goto L_0886084C;
    case 91u: goto L_08860868;
    case 92u: goto L_08860890;
    case 93u: goto L_088608A4;
    case 94u: goto L_088608D0;
    case 95u: goto L_088608D8;
    case 96u: goto L_088608E0;
    case 97u: goto L_088608EC;
    case 98u: goto L_088608F4;
    case 99u: goto L_08860918;
    case 100u: goto L_08860924;
    case 101u: goto L_08860928;
    case 102u: goto L_0886094C;
    case 103u: goto L_0886095C;
    case 104u: goto L_08860964;
    case 105u: goto L_0886096C;
    case 106u: goto L_0886097C;
    case 107u: goto L_088609D0;
    case 108u: goto L_088609DC;
    case 109u: goto L_088609E8;
    case 110u: goto L_088609F0;
    case 111u: goto L_08860A08;
    case 112u: goto L_08860A20;
    case 113u: goto L_08860A34;
    case 114u: goto L_08860A44;
    case 115u: goto L_08860A54;
    case 116u: goto L_08860A60;
    case 117u: goto L_08860A74;
    case 118u: goto L_08860A84;
    case 119u: goto L_08860A8C;
    case 120u: goto L_08860A9C;
    case 121u: goto L_08860AA8;
    case 122u: goto L_08860ABC;
    case 123u: goto L_08860AC8;
    case 124u: goto L_08860AD4;
    case 125u: goto L_08860ADC;
    case 126u: goto L_08860AE8;
    case 127u: goto L_08860AFC;
    case 128u: goto L_08860B0C;
    case 129u: goto L_08860B14;
    case 130u: goto L_08860B18;
    case 131u: goto L_08860B20;
    case 132u: goto L_08860B30;
    case 133u: goto L_08860B3C;
    case 134u: goto L_08860B50;
    case 135u: goto L_08860B60;
    case 136u: goto L_08860B68;
    case 137u: goto L_08860B6C;
    case 138u: goto L_08860B7C;
    case 139u: goto L_08860B84;
    case 140u: goto L_08860B8C;
    case 141u: goto L_08860B98;
    case 142u: goto L_08860BA8;
    case 143u: goto L_08860BB0;
    case 144u: goto L_08860BB4;
    case 145u: goto L_08860BBC;
    case 146u: goto L_08860BC0;
    case 147u: goto L_08860BC8;
    case 148u: goto L_08860BD0;
    case 149u: goto L_08860C08;
    case 150u: goto L_08860C2C;
    case 151u: goto L_08860C44;
    case 152u: goto L_08860C4C;
    case 153u: goto L_08860C64;
    case 154u: goto L_08860C6C;
    case 155u: goto L_08860C7C;
    case 156u: goto L_0886137C;
    case 157u: goto L_08861384;
    case 158u: goto L_0886138C;
    case 159u: goto L_08861398;
    case 160u: goto L_088613A4;
    case 161u: goto L_088613CC;
    case 162u: goto L_088613D4;
    case 163u: goto L_088613E0;
    case 164u: goto L_088613F0;
    case 165u: goto L_088613F8;
    case 166u: goto L_08861400;
    case 167u: goto L_0886140C;
    case 168u: goto L_08861414;
    case 169u: goto L_08861424;
    case 170u: goto L_08861440;
    case 171u: goto L_08861448;
    case 172u: goto L_08861450;
    case 173u: goto L_0886146C;
    case 174u: goto L_08861470;
    case 175u: goto L_08861478;
    case 176u: goto L_08861488;
    case 177u: goto L_08861490;
    case 178u: goto L_088614AC;
    case 179u: goto L_088614B4;
    case 180u: goto L_088614CC;
    case 181u: goto L_088614D4;
    case 182u: goto L_088614DC;
    case 183u: goto L_088614E8;
    case 184u: goto L_088614F0;
    case 185u: goto L_088614F8;
    case 186u: goto L_08861500;
    case 187u: goto L_08861510;
    case 188u: goto L_08861520;
    case 189u: goto L_08861538;
    case 190u: goto L_08861548;
    case 191u: goto L_0886155C;
    case 192u: goto L_08861568;
    case 193u: goto L_08861574;
    case 194u: goto L_0886157C;
    case 195u: goto L_08861588;
    case 196u: goto L_08861594;
    case 197u: goto L_088615A0;
    case 198u: goto L_088615A8;
    case 199u: goto L_088615B4;
    case 200u: goto L_088615BC;
    case 201u: goto L_088615D4;
    case 202u: goto L_088615E4;
    case 203u: goto L_08861668;
    case 204u: goto L_08861688;
    case 205u: goto L_088616A0;
    case 206u: goto L_088616AC;
    case 207u: goto L_088616B4;
    case 208u: goto L_088616C8;
    case 209u: goto L_088616E4;
    case 210u: goto L_088616F8;
    case 211u: goto L_08861700;
    case 212u: goto L_08861714;
    case 213u: goto L_0886172C;
    case 214u: goto L_08861744;
    case 215u: goto L_0886174C;
    case 216u: goto L_08861780;
    case 217u: goto L_08861788;
    case 218u: goto L_08861790;
    case 219u: goto L_08861798;
    case 220u: goto L_088617A0;
    case 221u: goto L_088617B0;
    case 222u: goto L_088617D4;
    case 223u: goto L_088617EC;
    case 224u: goto L_088617F4;
    case 225u: goto L_088617FC;
    case 226u: goto L_08861800;
    case 227u: goto L_0886180C;
    case 228u: goto L_08861814;
    case 229u: goto L_0886181C;
    case 230u: goto L_08861824;
    case 231u: goto L_08861888;
    case 232u: goto L_0886189C;
    case 233u: goto L_088618A8;
    case 234u: goto L_088618C4;
    case 235u: goto L_088618E0;
    case 236u: goto L_08861960;
    case 237u: goto L_08861968;
    case 238u: goto L_088619A0;
    case 239u: goto L_088619AC;
    case 240u: goto L_088619C8;
    case 241u: goto L_088619D4;
    case 242u: goto L_08861A38;
    case 243u: goto L_08861A3C;
    case 244u: goto L_08861A40;
    case 245u: goto L_08861A44;
    case 246u: goto L_08861A6C;
    case 247u: goto L_08861A7C;
    case 248u: goto L_08861A9C;
    case 249u: goto L_08861AA8;
    case 250u: goto L_08861AB4;
    case 251u: goto L_08861ABC;
    case 252u: goto L_08861ACC;
    case 253u: goto L_08861B10;
    case 254u: goto L_08861B1C;
    case 255u: goto L_08861B24;
    case 256u: goto L_08861B34;
    case 257u: goto L_08861B44;
    case 258u: goto L_08861B64;
    case 259u: goto L_08861B74;
    case 260u: goto L_08861BC0;
    case 261u: goto L_08861BCC;
    case 262u: goto L_08861BD4;
    case 263u: goto L_08861BE4;
    case 264u: goto L_08861BF4;
    case 265u: goto L_08861BFC;
    case 266u: goto L_08861C04;
    case 267u: goto L_08861C10;
    case 268u: goto L_08861C24;
    case 269u: goto L_08861C2C;
    case 270u: goto L_08861C34;
    case 271u: goto L_08861C48;
    case 272u: goto L_08861C5C;
    case 273u: goto L_08861C64;
    case 274u: goto L_08861C88;
    case 275u: goto L_08861C90;
    case 276u: goto L_08861CB8;
    case 277u: goto L_08861CC4;
    case 278u: goto L_08861CD8;
    case 279u: goto L_08861CF0;
    case 280u: goto L_08861CF8;
    case 281u: goto L_08861D04;
    case 282u: goto L_08861D10;
    case 283u: goto L_08861D24;
    case 284u: goto L_08861D2C;
    case 285u: goto L_08861D30;
    case 286u: goto L_08861D38;
    case 287u: goto L_08861D48;
    case 288u: goto L_08861D78;
    case 289u: goto L_08861DAC;
    case 290u: goto L_08861DE0;
    case 291u: goto L_08861DE8;
    case 292u: goto L_08861DEC;
    case 293u: goto L_08861DF8;
    case 294u: goto L_08861E00;
    case 295u: goto L_08861E24;
    case 296u: goto L_08861E2C;
    case 297u: goto L_08861E80;
    case 298u: goto L_08861E94;
    case 299u: goto L_08861EB0;
    case 300u: goto L_08861EB8;
    case 301u: goto L_08861ECC;
    case 302u: goto L_08861ED4;
    case 303u: goto L_08861EE4;
    case 304u: goto L_08861EEC;
    case 305u: goto L_08861EFC;
    case 306u: goto L_08861F04;
    case 307u: goto L_08861F0C;
    case 308u: goto L_08861F20;
    case 309u: goto L_08861F44;
    case 310u: goto L_08861F48;
    case 311u: goto L_08861F5C;
    case 312u: goto L_08861F68;
    case 313u: goto L_08861F70;
    case 314u: goto L_08861F7C;
    case 315u: goto L_08861F94;
    case 316u: goto L_08861FA0;
    case 317u: goto L_08861FA8;
    case 318u: goto L_08861FBC;
    case 319u: goto L_08861FC4;
    case 320u: goto L_08861FD8;
    case 321u: goto L_08861FE0;
    case 322u: goto L_08861FE4;
    case 323u: goto L_08861FF8;
    case 324u: goto L_08862008;
    case 325u: goto L_08862010;
    case 326u: goto L_08862018;
    case 327u: goto L_0886202C;
    case 328u: goto L_08862030;
    case 329u: goto L_08862038;
    case 330u: goto L_08862060;
    case 331u: goto L_088620A4;
    case 332u: goto L_088620AC;
    case 333u: goto L_0886210C;
    case 334u: goto L_08862118;
    case 335u: goto L_08862130;
    case 336u: goto L_0886213C;
    case 337u: goto L_08862148;
    case 338u: goto L_0886218C;
    case 339u: goto L_08862194;
    case 340u: goto L_08862198;
    case 341u: goto L_088621AC;
    case 342u: goto L_088621D4;
    case 343u: goto L_088621E8;
    case 344u: goto L_0886221C;
    case 345u: goto L_0886224C;
    case 346u: goto L_08862258;
    case 347u: goto L_0886225C;
    case 348u: goto L_08862270;
    case 349u: goto L_0886227C;
    case 350u: goto L_08862284;
    case 351u: goto L_08862290;
    case 352u: goto L_088622B0;
    case 353u: goto L_088622D8;
    case 354u: goto L_088622F4;
    case 355u: goto L_08862310;
    case 356u: goto L_0886232C;
    case 357u: goto L_08862358;
    case 358u: goto L_0886236C;
    case 359u: goto L_08862374;
    case 360u: goto L_08862378;
    case 361u: goto L_08862394;
    case 362u: goto L_088623A0;
    case 363u: goto L_088623A8;
    case 364u: goto L_088623B0;
    case 365u: goto L_088623C4;
    case 366u: goto L_088623C8;
    case 367u: goto L_088623D0;
    case 368u: goto L_088623E0;
    case 369u: goto L_088623EC;
    case 370u: goto L_0886240C;
    case 371u: goto L_0886241C;
    case 372u: goto L_0886243C;
    case 373u: goto L_08862458;
    case 374u: goto L_08862478;
    case 375u: goto L_088624A4;
    case 376u: goto L_088624C0;
    case 377u: goto L_088624C8;
    case 378u: goto L_088624D4;
    case 379u: goto L_088624E4;
    case 380u: goto L_088624F4;
    case 381u: goto L_08862510;
    case 382u: goto L_08862524;
    case 383u: goto L_0886252C;
    case 384u: goto L_08862534;
    case 385u: goto L_0886253C;
    case 386u: goto L_08862548;
    case 387u: goto L_0886255C;
    case 388u: goto L_08862568;
    case 389u: goto L_0886256C;
    case 390u: goto L_08862570;
    case 391u: goto L_08862578;
    case 392u: goto L_0886258C;
    case 393u: goto L_088625A8;
    case 394u: goto L_088625AC;
    case 395u: goto L_088625C4;
    case 396u: goto L_088625D0;
    case 397u: goto L_088625D8;
    case 398u: goto L_088625E8;
    case 399u: goto L_08862624;
    case 400u: goto L_08862630;
    case 401u: goto L_08862634;
    case 402u: goto L_08862668;
    case 403u: goto L_08862674;
    case 404u: goto L_0886267C;
    case 405u: goto L_0886269C;
    case 406u: goto L_088626A4;
    case 407u: goto L_088626B0;
    case 408u: goto L_088626B4;
    case 409u: goto L_088626C0;
    case 410u: goto L_088626CC;
    case 411u: goto L_088626D8;
    case 412u: goto L_088626E0;
    case 413u: goto L_088626E8;
    case 414u: goto L_088626F0;
    case 415u: goto L_088626F8;
    case 416u: goto L_08862710;
    case 417u: goto L_08862714;
    case 418u: goto L_0886271C;
    case 419u: goto L_08862748;
    case 420u: goto L_08862764;
    case 421u: goto L_0886276C;
    case 422u: goto L_08862778;
    case 423u: goto L_08862794;
    case 424u: goto L_088627BC;
    case 425u: goto L_088627DC;
    case 426u: goto L_08862804;
    case 427u: goto L_08862844;
    case 428u: goto L_08862868;
    case 429u: goto L_08862880;
    case 430u: goto L_08862884;
    case 431u: goto L_08862890;
    case 432u: goto L_088628D0;
    case 433u: goto L_088628D4;
    case 434u: goto L_088628E8;
    case 435u: goto L_088628FC;
    case 436u: goto L_08862920;
    case 437u: goto L_0886292C;
    case 438u: goto L_0886296C;
    case 439u: goto L_08862988;
    case 440u: goto L_0886299C;
    case 441u: goto L_088629A4;
    case 442u: goto L_088629A8;
    case 443u: goto L_088629B0;
    case 444u: goto L_088629C4;
    case 445u: goto L_088629CC;
    case 446u: goto L_088629E0;
    case 447u: goto L_08862A04;
    case 448u: goto L_08862A34;
    case 449u: goto L_08862A40;
    case 450u: goto L_08862A4C;
    case 451u: goto L_08862AE4;
    case 452u: goto L_08862AEC;
    case 453u: goto L_08862AF4;
    case 454u: goto L_08862AF8;
    case 455u: goto L_08862B10;
    case 456u: goto L_08862B14;
    case 457u: goto L_08862B1C;
    case 458u: goto L_08862B4C;
    case 459u: goto L_08862B50;
    case 460u: goto L_08862B64;
    case 461u: goto L_08862B68;
    case 462u: goto L_08862B70;
    case 463u: goto L_08862BA0;
    case 464u: goto L_08862BA4;
    case 465u: goto L_08862BB8;
    case 466u: goto L_08862BBC;
    case 467u: goto L_08862BE0;
    case 468u: goto L_08862BE8;
    case 469u: goto L_08862C00;
    case 470u: goto L_08862C14;
    case 471u: goto L_08862C34;
    case 472u: goto L_08862C38;
    case 473u: goto L_08862C50;
    case 474u: goto L_08862C6C;
    case 475u: goto L_08862C78;
    case 476u: goto L_08862C90;
    case 477u: goto L_08862CB8;
    case 478u: goto L_08862CC0;
    case 479u: goto L_08862CE0;
    case 480u: goto L_08862CE8;
    case 481u: goto L_08862CF8;
    case 482u: goto L_08862D0C;
    case 483u: goto L_08862D10;
    case 484u: goto L_08862D18;
    case 485u: goto L_08862D20;
    case 486u: goto L_08862D3C;
    case 487u: goto L_08862D50;
    case 488u: goto L_08862D68;
    case 489u: goto L_08862D74;
    case 490u: goto L_08862D8C;
    case 491u: goto L_08862D94;
    case 492u: goto L_08862D9C;
    case 493u: goto L_08862DA4;
    case 494u: goto L_08862DAC;
    case 495u: goto L_08862DB4;
    case 496u: goto L_08862DBC;
    case 497u: goto L_08862DC4;
    case 498u: goto L_08862DCC;
    case 499u: goto L_08862DD4;
    case 500u: goto L_08862DDC;
    case 501u: goto L_08862DE4;
    case 502u: goto L_08862DF0;
    case 503u: goto L_08862DF8;
    case 504u: goto L_08862E04;
    case 505u: goto L_08862E0C;
    case 506u: goto L_08862E18;
    case 507u: goto L_08862E20;
    case 508u: goto L_08862E2C;
    case 509u: goto L_08862E34;
    case 510u: goto L_08862E3C;
    case 511u: goto L_08862E44;
    case 512u: goto L_08862E4C;
    case 513u: goto L_08862E54;
    case 514u: goto L_08862E5C;
    case 515u: goto L_08862E64;
    case 516u: goto L_08862E6C;
    case 517u: goto L_08862E70;
    case 518u: goto L_08862E80;
    case 519u: goto L_08862E8C;
    case 520u: goto L_08862E98;
    case 521u: goto L_08862EA0;
    case 522u: goto L_08862EA8;
    case 523u: goto L_08862EB4;
    case 524u: goto L_08862ECC;
    case 525u: goto L_08862ED4;
    case 526u: goto L_08862EDC;
    case 527u: goto L_08862EE4;
    case 528u: goto L_08862EF0;
    case 529u: goto L_08862EFC;
    case 530u: goto L_08862F14;
    case 531u: goto L_08862F1C;
    case 532u: goto L_08862F24;
    case 533u: goto L_08862F28;
    case 534u: goto L_08862F30;
    case 535u: goto L_08862F40;
    case 536u: goto L_08862F4C;
    case 537u: goto L_08862F58;
    case 538u: goto L_08862F60;
    case 539u: goto L_08862F68;
    case 540u: goto L_08862F70;
    case 541u: goto L_08862F78;
    case 542u: goto L_08862F80;
    case 543u: goto L_08862F88;
    case 544u: goto L_08862F94;
    case 545u: goto L_08862F9C;
    case 546u: goto L_08862FA4;
    case 547u: goto L_08862FAC;
    case 548u: goto L_08862FB4;
    case 549u: goto L_08862FBC;
    case 550u: goto L_08862FC4;
    case 551u: goto L_08862FCC;
    case 552u: goto L_08862FD4;
    case 553u: goto L_08862FDC;
    case 554u: goto L_08862FE4;
    case 555u: goto L_08862FEC;
    case 556u: goto L_08862FF4;
    case 557u: goto L_08862FFC;
    case 558u: goto L_08863004;
    case 559u: goto L_0886300C;
    case 560u: goto L_08863014;
    case 561u: goto L_0886301C;
    case 562u: goto L_08863020;
    case 563u: goto L_08863028;
    case 564u: goto L_08863038;
    case 565u: goto L_08863050;
    case 566u: goto L_08863058;
    case 567u: goto L_08863060;
    case 568u: goto L_08863068;
    case 569u: goto L_08863070;
    case 570u: goto L_08863078;
    case 571u: goto L_08863080;
    case 572u: goto L_08863088;
    case 573u: goto L_08863090;
    case 574u: goto L_08863094;
    case 575u: goto L_0886309C;
    case 576u: goto L_088630D0;
    case 577u: goto L_088630E0;
    case 578u: goto L_088630EC;
    case 579u: goto L_08863160;
    case 580u: goto L_08863170;
    case 581u: goto L_0886318C;
    case 582u: goto L_08863190;
    case 583u: goto L_088631B4;
    case 584u: goto L_088631C0;
    case 585u: goto L_0886321C;
    case 586u: goto L_08863224;
    case 587u: goto L_08863254;
    case 588u: goto L_08863284;
    case 589u: goto L_088632A8;
    case 590u: goto L_088632CC;
    case 591u: goto L_08863380;
    case 592u: goto L_08863388;
    case 593u: goto L_08863390;
    case 594u: goto L_08863394;
    case 595u: goto L_088633B4;
    case 596u: goto L_088633D0;
    case 597u: goto L_088633D8;
    case 598u: goto L_088633DC;
    case 599u: goto L_088633E8;
    case 600u: goto L_088633F4;
    case 601u: goto L_088633FC;
    case 602u: goto L_08863404;
    case 603u: goto L_08863410;
    case 604u: goto L_0886341C;
    case 605u: goto L_0886342C;
    case 606u: goto L_08863440;
    case 607u: goto L_08863444;
    case 608u: goto L_08863450;
    case 609u: goto L_08863460;
    case 610u: goto L_08863468;
    case 611u: goto L_08863470;
    case 612u: goto L_08863494;
    case 613u: goto L_088634AC;
    case 614u: goto L_088634BC;
    case 615u: goto L_088634DC;
    case 616u: goto L_088634EC;
    case 617u: goto L_088634F8;
    case 618u: goto L_08863504;
    case 619u: goto L_0886351C;
    case 620u: goto L_08863524;
    case 621u: goto L_08863528;
    case 622u: goto L_08863530;
    case 623u: goto L_08863540;
    case 624u: goto L_08863554;
    case 625u: goto L_08863560;
    case 626u: goto L_0886356C;
    case 627u: goto L_08863590;
    case 628u: goto L_088635A0;
    case 629u: goto L_088635AC;
    case 630u: goto L_088635E0;
    case 631u: goto L_088635F4;
    case 632u: goto L_088635FC;
    case 633u: goto L_08863604;
    case 634u: goto L_08863610;
    case 635u: goto L_08863624;
    case 636u: goto L_0886362C;
    case 637u: goto L_08863634;
    case 638u: goto L_08863640;
    case 639u: goto L_08863648;
    case 640u: goto L_08863658;
    case 641u: goto L_08863660;
    case 642u: goto L_0886366C;
    case 643u: goto L_08863674;
    case 644u: goto L_08863688;
    case 645u: goto L_0886369C;
    case 646u: goto L_088636C8;
    case 647u: goto L_08863710;
    case 648u: goto L_08863720;
    case 649u: goto L_08863730;
    case 650u: goto L_08863738;
    case 651u: goto L_08863740;
    case 652u: goto L_0886374C;
    case 653u: goto L_08863760;
    case 654u: goto L_08863768;
    case 655u: goto L_08863770;
    case 656u: goto L_0886377C;
    case 657u: goto L_08863788;
    case 658u: goto L_08863790;
    case 659u: goto L_0886379C;
    case 660u: goto L_088637AC;
    case 661u: goto L_088637B0;
    case 662u: goto L_088637CC;
    case 663u: goto L_088637F4;
    case 664u: goto L_08863804;
    case 665u: goto L_08863810;
    case 666u: goto L_08863820;
    case 667u: goto L_08863830;
    case 668u: goto L_0886383C;
    case 669u: goto L_0886385C;
    case 670u: goto L_08863874;
    case 671u: goto L_0886387C;
    case 672u: goto L_08863888;
    case 673u: goto L_088638C0;
    case 674u: goto L_088638D8;
    case 675u: goto L_0886394C;
    case 676u: goto L_08863960;
    case 677u: goto L_08863968;
    case 678u: goto L_08863984;
    case 679u: goto L_08863990;
    case 680u: goto L_08863998;
    case 681u: goto L_088639A0;
    case 682u: goto L_088639A8;
    case 683u: goto L_088639B4;
    case 684u: goto L_088639BC;
    case 685u: goto L_088639C4;
    case 686u: goto L_088639D0;
    case 687u: goto L_088639DC;
    case 688u: goto L_088639E4;
    case 689u: goto L_088639F4;
    case 690u: goto L_088639FC;
    case 691u: goto L_08863A10;
    case 692u: goto L_08863A1C;
    case 693u: goto L_08863A24;
    case 694u: goto L_08863A30;
    case 695u: goto L_08863A38;
    case 696u: goto L_08863A44;
    case 697u: goto L_08863A50;
    case 698u: goto L_08863A58;
    case 699u: goto L_08863A64;
    case 700u: goto L_08863A70;
    case 701u: goto L_08863A78;
    case 702u: goto L_08863A88;
    case 703u: goto L_08863A90;
    case 704u: goto L_08863AA4;
    case 705u: goto L_08863AAC;
    case 706u: goto L_08863AB4;
    case 707u: goto L_08863ABC;
    case 708u: goto L_08863AC4;
    case 709u: goto L_08863AD0;
    case 710u: goto L_08863ADC;
    case 711u: goto L_08863AE4;
    case 712u: goto L_08863AF4;
    case 713u: goto L_08863AFC;
    case 714u: goto L_08863B08;
    case 715u: goto L_08863B10;
    case 716u: goto L_08863B14;
    case 717u: goto L_08863B20;
    case 718u: goto L_08863B24;
    case 719u: goto L_08863B54;
    case 720u: goto L_08863B80;
    case 721u: goto L_08863B90;
    case 722u: goto L_08863B98;
    case 723u: goto L_08863BA0;
    case 724u: goto L_08863BB0;
    case 725u: goto L_08863BC0;
    case 726u: goto L_08863BC8;
    case 727u: goto L_08863BD8;
    case 728u: goto L_08863BE0;
    case 729u: goto L_08863BF4;
    case 730u: goto L_08863BFC;
    case 731u: goto L_08863C04;
    case 732u: goto L_08863C10;
    case 733u: goto L_08863C18;
    case 734u: goto L_08863C24;
    case 735u: goto L_08863C30;
    case 736u: goto L_08863C38;
    case 737u: goto L_08863C44;
    case 738u: goto L_08863C50;
    case 739u: goto L_08863C58;
    case 740u: goto L_08863C68;
    case 741u: goto L_08863C70;
    case 742u: goto L_08863C84;
    case 743u: goto L_08863C8C;
    case 744u: goto L_08863C90;
    case 745u: goto L_08863CB4;
    case 746u: goto L_08863CC8;
    case 747u: goto L_08863CD0;
    case 748u: goto L_08863CDC;
    case 749u: goto L_08863D00;
    case 750u: goto L_08863D08;
    case 751u: goto L_08863D14;
    case 752u: goto L_08863D1C;
    case 753u: goto L_08863D2C;
    case 754u: goto L_08863D3C;
    case 755u: goto L_08863D44;
    case 756u: goto L_08863D54;
    case 757u: goto L_08863D6C;
    case 758u: goto L_08863D80;
    case 759u: goto L_08863D88;
    case 760u: goto L_08863D8C;
    case 761u: goto L_08863D9C;
    case 762u: goto L_08863DC4;
    case 763u: goto L_08863DCC;
    case 764u: goto L_08863DD0;
    case 765u: goto L_08863DD8;
    case 766u: goto L_08863DEC;
    case 767u: goto L_08863DF4;
    case 768u: goto L_08863DFC;
    case 769u: goto L_08863E08;
    case 770u: goto L_08863E14;
    case 771u: goto L_08863E3C;
    case 772u: goto L_08863E44;
    case 773u: goto L_08863E54;
    case 774u: goto L_08863E5C;
    case 775u: goto L_08863E64;
    case 776u: goto L_08863E70;
    case 777u: goto L_08863E7C;
    case 778u: goto L_08863E84;
    case 779u: goto L_08863E94;
    case 780u: goto L_08863EA4;
    case 781u: goto L_08863EAC;
    case 782u: goto L_08863EB4;
    case 783u: goto L_08863EBC;
    case 784u: goto L_08863EC4;
    case 785u: goto L_08863EE0;
    case 786u: goto L_08863EF0;
    case 787u: goto L_08863F18;
    case 788u: goto L_08863F28;
    case 789u: goto L_08863F34;
    case 790u: goto L_08863F44;
    case 791u: goto L_08863F50;
    case 792u: goto L_08863F58;
    case 793u: goto L_08863F60;
    case 794u: goto L_08863F6C;
    case 795u: goto L_08863F78;
    case 796u: goto L_08863F84;
    case 797u: goto L_08863F8C;
    case 798u: goto L_08863FA0;
    case 799u: goto L_08863FAC;
    case 800u: goto L_08863FC8;
    case 801u: goto L_08863FDC;
    case 802u: goto L_08863FE4;
    case 803u: goto L_08863FE8;
    case 804u: goto L_08863FF8;
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
L_08860000:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886001C:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<8u>(aot_gpr_5);
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
    ctx.execute_vfpu_vmscl_ct<32u, 36u, 8u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886004C:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.set_vfpu_scalar_bits_ct<8u>(aot_gpr_5);
    ctx.set_vfpu_scalar_bits_ct<40u>(aot_gpr_6);
    ctx.set_vfpu_scalar_bits_ct<72u>(ctx.gpr[7]);
    ctx.execute_vfpu_vscl_ct<32u, 32u, 8u, 3u>();
    ctx.execute_vfpu_vscl_ct<33u, 33u, 40u, 3u>();
    ctx.execute_vfpu_vscl_ct<34u, 34u, 72u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08860094:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.set_vfpu_scalar_bits_ct<8u>(aot_gpr_5);
    ctx.set_vfpu_scalar_bits_ct<40u>(aot_gpr_6);
    ctx.set_vfpu_scalar_bits_ct<72u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<3u, 3u, 8u, 3u, 0u>();
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088600C4:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_17 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = aot_fpr_17; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = aot_fpr_17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]) ^ 0x80000000u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[5]) ^ 0x80000000u);
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    { const float fs = aot_fpr_17; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_17 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_17 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_fpr_17 = aot_fpr_17 - ctx.fpr[19];
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[2]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[5] + ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[18] + ctx.fpr[15];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[8];
    { const float fs = aot_fpr_17; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[7] + ctx.fpr[5];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = ctx.fpr[3] + aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[18];
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.fpr[9] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[7] + ctx.fpr[10];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[3] + ctx.fpr[19];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[21] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[11] + ctx.fpr[21];
    { const float fs = aot_fpr_17; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[10];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[9] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[9];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[3] + ctx.fpr[18];
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[21] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[9] = ctx.fpr[10] + ctx.fpr[21];
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[23] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.fpr[9] = ctx.fpr[9] + ctx.fpr[23];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[25] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[25] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[27] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[27] = fs * ft; }
    ctx.fpr[10] = ctx.fpr[25] + ctx.fpr[27];
    { const float fs = aot_fpr_17; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[21] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[10] = ctx.fpr[10] + ctx.fpr[21];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    ctx.fpr[8] = ctx.fpr[11] + ctx.fpr[8];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[8] + ctx.fpr[3];
    ctx.fpr[23] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[21] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = ctx.fpr[0] + aot_fpr_13;
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[6];
    { const float fs = aot_fpr_17; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_17 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_17 = fs * ft; }
    aot_fpr_17 = ctx.fpr[1] + aot_fpr_17;
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[2] + ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[16] + aot_fpr_12;
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[15]), std::bit_cast<std::uint32_t>(ctx.fpr[5]), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[19]), std::bit_cast<std::uint32_t>(ctx.fpr[7]), std::bit_cast<std::uint32_t>(ctx.fpr[18])};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[9]), std::bit_cast<std::uint32_t>(ctx.fpr[10]), std::bit_cast<std::uint32_t>(ctx.fpr[3])};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_17), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_run_words); }
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08860314:
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<2u, 4u, 1u, 3u>();
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vdot_ct<8u, 0u, 0u, 3u>();
    ctx.execute_vfpu_vdot_ct<40u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vdot_ct<72u, 2u, 2u, 3u>();
    ctx.execute_vfpu_unary_ct<9u, 8u, 3u, 17u>();
    ctx.execute_vfpu_vscl_ct<0u, 0u, 9u, 3u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 41u, 3u>();
    ctx.execute_vfpu_vscl_ct<2u, 2u, 73u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08860358:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(64)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = aot_gpr_6 == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
      if (branch_taken) {
          goto L_08860390;
      }
      goto L_08860380;
    }
L_08860380:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08860390;
L_08860390:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088603A0:
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
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 3u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 3u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<107u, 1u>(vfpu_value); }
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix_ct<8u, 4u>(vfpu_s);
      ctx.read_vfpu_matrix_ct<36u, 4u>(vfpu_t);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix_ct<32u, 4u>(vfpu_d);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088603F4:
    aot_gpr_5 = (0u | 239u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(1970), static_cast<std::uint16_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08860400:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1970)));
    aot_gpr_5 = (0u | 102u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08860418;
      }
      goto L_08860410;
    }
L_08860410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0886041C;
      }
      goto L_08860418;
    }
L_08860418:
    ctx.gpr[2] = (0u | 0u);
    goto L_0886041C;
L_0886041C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08860424:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_5 & 65535u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (static_cast<std::int32_t>(ctx.gpr[19]) < 102 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088604C0;
      }
      goto L_08860454;
    }
L_08860454:
    aot_gpr_17 = (static_cast<std::int32_t>(ctx.gpr[19]) < 160 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_088604C0;
      }
      goto L_08860460;
    }
L_08860460:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (16448u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088604B8;
      }
      goto L_08860490;
    }
L_08860490:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2168)));
    aot_gpr_4 = (16339u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088604C8;
      }
      goto L_088604B0;
    }
L_088604B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088604F8;
      }
      goto L_088604B8;
    }
L_088604B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_088604C0;
    }
L_088604C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_088604C8;
    }
L_088604C8:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 106 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 158u);
      if (branch_taken) {
          goto L_088604E8;
      }
      goto L_088604D4;
    }
L_088604D4:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 103 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088604F0;
      }
      goto L_088604E0;
    }
L_088604E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08860630;
      }
      goto L_088604E8;
    }
L_088604E8:
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
      if (branch_taken) {
          goto L_088604E0;
      }
      goto L_088604F0;
    }
L_088604F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_088604F8;
    }
L_088604F8:
    aot_gpr_4 = (16288u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08860578;
      }
      goto L_08860510;
    }
L_08860510:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 137 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 142 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886054C;
      }
      goto L_0886051C;
    }
L_0886051C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 106 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 136 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886053C;
      }
      goto L_08860528;
    }
L_08860528:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 102 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08860544;
      }
      goto L_08860534;
    }
L_08860534:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08860630;
      }
      goto L_0886053C;
    }
L_0886053C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08860534;
      }
      goto L_08860544;
    }
L_08860544:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_0886054C;
    }
L_0886054C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 158u);
      if (branch_taken) {
          goto L_08860568;
      }
      goto L_08860554;
    }
L_08860554:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 141 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08860544;
      }
      goto L_08860560;
    }
L_08860560:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08860534;
      }
      goto L_08860568;
    }
L_08860568:
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_08860544;
      }
      goto L_08860570;
    }
L_08860570:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08860534;
      }
      goto L_08860578;
    }
L_08860578:
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08860630;
      }
      goto L_08860594;
    }
L_08860594:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 136 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 158 ? 1u : 0u);
      if (branch_taken) {
          goto L_088605F4;
      }
      goto L_088605A0;
    }
L_088605A0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 107 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 119 ? 1u : 0u);
      if (branch_taken) {
          goto L_088605C8;
      }
      goto L_088605AC;
    }
L_088605AC:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 102 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 106 ? 1u : 0u);
      if (branch_taken) {
          goto L_088605DC;
      }
      goto L_088605B8;
    }
L_088605B8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088605DC;
      }
      goto L_088605C0;
    }
L_088605C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08860630;
      }
      goto L_088605C8;
    }
L_088605C8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 120 ? 1u : 0u);
      if (branch_taken) {
          goto L_088605E4;
      }
      goto L_088605D0;
    }
L_088605D0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 108 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088605C0;
      }
      goto L_088605DC;
    }
L_088605DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_088605E4;
    }
L_088605E4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088605DC;
      }
      goto L_088605EC;
    }
L_088605EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088605C0;
      }
      goto L_088605F4;
    }
L_088605F4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 159 ? 1u : 0u);
      if (branch_taken) {
          goto L_08860620;
      }
      goto L_088605FC;
    }
L_088605FC:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 146 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(-136));
      if (branch_taken) {
          goto L_088605DC;
      }
      goto L_08860608;
    }
L_08860608:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26552)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08860620:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088605DC;
      }
      goto L_08860628;
    }
L_08860628:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088605C0;
      }
      goto L_08860630;
    }
L_08860630:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1970)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_08860640;
    }
L_08860640:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1968)));
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_088606BC;
      }
      goto L_0886064C;
    }
L_0886064C:
    aot_gpr_4 = (0u | 102u);
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[19] << 3u);
      if (branch_taken) {
          goto L_088606BC;
      }
      goto L_08860658;
    }
L_08860658:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-22352));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1960)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-2440)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-2436)));
    aot_gpr_31 = (0x08860680u);
    ctx.gpr[21] = (aot_gpr_6 + aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860680u) goto L_08860680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860680:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08860694u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860694u) goto L_08860694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860694:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088606CC;
      }
      goto L_088606BC;
    }
L_088606BC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088606D4;
      }
      goto L_088606C4;
    }
L_088606C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_088606CC;
    }
L_088606CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_088606D4;
    }
L_088606D4:
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_088606C4;
      }
      goto L_088606DC;
    }
L_088606DC:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1970), static_cast<std::uint16_t>(ctx.gpr[19]));
    goto L_088606E0;
L_088606E0:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_08860704:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const std::uint32_t aot_run_words[6]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x08860734u);
    aot_gpr_6 = (0u | 309u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860734u) goto L_08860734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860734:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08860770;
      }
      goto L_08860740;
    }
L_08860740:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08860750u);
    aot_gpr_6 = (0u | 313u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860750u) goto L_08860750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860750:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08860770;
      }
      goto L_0886075C;
    }
L_0886075C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0886076Cu);
    aot_gpr_6 = (0u | 311u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886076Cu) goto L_0886076C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886076C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08860770;
L_08860770:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08860794;
      }
      goto L_08860778;
    }
L_08860778:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (64u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0886079C;
      }
      goto L_0886078C;
    }
L_0886078C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088607AC;
      }
      goto L_08860794;
    }
L_08860794:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08860928;
      }
      goto L_0886079C;
    }
L_0886079C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1926))))));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088607C0;
      }
      goto L_088607AC;
    }
L_088607AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1038)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088607C8;
      }
      goto L_088607B8;
    }
L_088607B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088607DC;
      }
      goto L_088607C0;
    }
L_088607C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08860928;
      }
      goto L_088607C8;
    }
L_088607C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088607DC;
      }
      goto L_088607D4;
    }
L_088607D4:
    aot_gpr_4 = (0u | 107u);
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1970), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_088607DC;
L_088607DC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1970)));
    aot_gpr_5 = (0u | 239u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08860928;
      }
      goto L_088607EC;
    }
L_088607EC:
    aot_gpr_5 = (0u | 102u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
      if (branch_taken) {
          goto L_08860800;
      }
      goto L_088607F8;
    }
L_088607F8:
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1964), aot_gpr_5);
    goto L_08860800;
L_08860800:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1964)));
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08860928;
      }
      goto L_08860810;
    }
L_08860810:
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-102));
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(58) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_17 = (0u | 239u);
      if (branch_taken) {
          goto L_08860924;
      }
      goto L_08860820;
    }
L_08860820:
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[18] = (2233u << 16u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-22352));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(-2428)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08860924;
      }
      goto L_0886084C;
    }
L_0886084C:
    ctx.gpr[7] = (16256u << 16u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08860868u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860868u) goto L_08860868;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860868:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1970)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1960), ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-2448)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-2444)));
    aot_gpr_31 = (0x08860890u);
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860890u) goto L_08860890;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860890:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 31u));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088608A4u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088608A4u) goto L_088608A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088608A4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1964), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1970)));
    aot_gpr_5 = (0u | 127u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088608EC;
      }
      goto L_088608D0;
    }
L_088608D0:
    aot_gpr_31 = (0x088608D8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088608D8u) goto L_088608D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088608D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1970)));
      if (branch_taken) {
          goto L_088608EC;
      }
      goto L_088608E0;
    }
L_088608E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1964)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2000));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1964), aot_gpr_5);
    goto L_088608EC;
L_088608EC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08860918;
      }
      goto L_088608F4;
    }
L_088608F4:
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-2432)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-2428), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1970)));
    goto L_08860918;
L_08860918:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1968), static_cast<std::uint16_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1970), static_cast<std::uint16_t>(aot_gpr_17));
      if (branch_taken) {
          goto L_08860928;
      }
      goto L_08860924;
    }
L_08860924:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1970), static_cast<std::uint16_t>(aot_gpr_17));
    goto L_08860928;
L_08860928:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_0886094C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0886095Cu);
    aot_gpr_4 = (0u | 1u);
    ctx.pc = 0x08B7322Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886095C:
    aot_gpr_31 = (0x08860964u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B7323Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860964:
    aot_gpr_31 = (0x0886096Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 469u, 0x08AEDEB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886096Cu) goto L_0886096C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886096C:
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886097C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_17);
    aot_gpr_17 = (ctx.gpr[7] + ctx.gpr[9]);
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_17) >> 2u));
    ctx.gpr[7] = (aot_gpr_17 < ctx.gpr[8] ? 1u : 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
      if (branch_taken) {
          goto L_088609DC;
      }
      goto L_088609D0;
    }
L_088609D0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_gpr_17 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_088609E8;
      }
      goto L_088609DC;
    }
L_088609DC:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_17 = (aot_gpr_17 + ctx.gpr[7]);
    goto L_088609E8;
L_088609E8:
    { const bool branch_taken = aot_gpr_17 == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08860A44;
      }
      goto L_088609F0;
    }
L_088609F0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_17 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x08860A08u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860A08u) goto L_08860A08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860A08:
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
          goto L_08860A44;
      }
      goto L_08860A20;
    }
L_08860A20:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x08860A34u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860A34u) goto L_08860A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860A34:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_08860A44;
L_08860A44:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08860A8C;
      }
      goto L_08860A54;
    }
L_08860A54:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08860A84;
    }
    goto L_08860A60;
L_08860A60:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08860A84;
    }
    goto L_08860A74;
L_08860A74:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_08860A84;
L_08860A84:
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08860A54;
      }
      goto L_08860A8C;
    }
L_08860A8C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
      if (branch_taken) {
          goto L_08860AD4;
      }
      goto L_08860A9C;
    }
L_08860A9C:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08860AC8;
      }
      goto L_08860AA8;
    }
L_08860AA8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08860AC8;
      }
      goto L_08860ABC;
    }
L_08860ABC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_08860AC8;
L_08860AC8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08860B18;
      }
      goto L_08860AD4;
    }
L_08860AD4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08860B14;
      }
      goto L_08860ADC;
    }
L_08860ADC:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08860B0C;
    }
    goto L_08860AE8;
L_08860AE8:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08860B0C;
    }
    goto L_08860AFC;
L_08860AFC:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08860B0C;
L_08860B0C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08860ADC;
      }
      goto L_08860B14;
    }
L_08860B14:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08860B18;
L_08860B18:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08860B6C;
      }
      goto L_08860B20;
    }
L_08860B20:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08860B6C;
      }
      goto L_08860B30;
    }
L_08860B30:
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08860B60;
    }
    goto L_08860B3C;
L_08860B3C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08860B60;
    }
    goto L_08860B50;
L_08860B50:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_08860B60;
L_08860B60:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08860B30;
      }
      goto L_08860B68;
    }
L_08860B68:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08860B6C;
L_08860B6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08860BC0;
      }
      goto L_08860B7C;
    }
L_08860B7C:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08860BB4;
    }
    goto L_08860B84;
L_08860B84:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08860BB4;
    }
    goto L_08860B8C;
L_08860B8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08860BB4;
    }
    goto L_08860B98;
L_08860B98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08860BB0;
      }
      goto L_08860BA8;
    }
L_08860BA8:
    aot_gpr_31 = (0x08860BB0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860BB0u) goto L_08860BB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860BB0:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08860BB4;
L_08860BB4:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
      if (branch_taken) {
          goto L_08860B7C;
      }
      goto L_08860BBC;
    }
L_08860BBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08860BC0;
L_08860BC0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08860BD0;
      }
      goto L_08860BC8;
    }
L_08860BC8:
    aot_gpr_31 = (0x08860BD0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860BD0u) goto L_08860BD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860BD0:
    aot_gpr_4 = (aot_gpr_17 << 2u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08860C08:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_17, ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(29232));
      if (branch_taken) {
          goto L_08860C4C;
      }
      goto L_08860C2C;
    }
L_08860C2C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (0u | 512u);
    ctx.gpr[7] = (0u | 320u);
    aot_gpr_31 = (0x08860C44u);
    ctx.gpr[8] = (0u | 512u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 664u, 0x08A069DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860C44u) goto L_08860C44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860C44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08860C64;
      }
      goto L_08860C4C;
    }
L_08860C4C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (0u | 480u);
    ctx.gpr[7] = (0u | 272u);
    aot_gpr_31 = (0x08860C64u);
    ctx.gpr[8] = (0u | 512u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 664u, 0x08A069DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860C64u) goto L_08860C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860C64:
    aot_gpr_31 = (0x08860C6Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 704u, 0x08A06D3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860C6Cu) goto L_08860C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860C6C:
    aot_gpr_17 = (2236u << 16u);
    ctx.gpr[18] = (aot_gpr_17 + static_cast<std::uint32_t>(29552));
    aot_gpr_31 = (0x08860C7Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 4u, 0x088E02C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08860C7Cu) goto L_08860C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08860C7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (7168u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (21248u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(7));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (21504u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (22016u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (22528u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(255));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (22528u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (22272u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (57088u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(50));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (57344u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (57600u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (8448u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (56319u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2054));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (8704u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (56832u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(7));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (8960u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (9216u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (50943u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 60160u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (18303u << 16u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 62720u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 >> 8u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_6 = (17408u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (18176u << 16u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_6 | aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (54784u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(10));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (55041u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-11));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (39680u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (7424u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (20480u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (9472u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (7936u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-29188), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (23552u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (23808u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(255));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (16672u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (23296u << 16u);
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (24320u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_5 = (25344u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (25600u << 16u);
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_5 = (25856u << 16u);
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (24576u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_gpr_5 = (26112u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_gpr_5 = (26368u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_gpr_5 = (26624u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (24832u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_gpr_5 = (26880u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_gpr_5 = (27136u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_gpr_5 = (27392u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (25088u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_gpr_5 = (27648u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_gpr_5 = (27904u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_gpr_5 = (28160u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (6144u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (6400u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (6656u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (6912u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (5888u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (24064u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (7680u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (51456u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(256));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (49152u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (49408u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(256));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (50944u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (51440u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (50688u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(263));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    ctx.gpr[8] = (0u | 65280u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x0886137Cu);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886137Cu) goto L_0886137C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886137C:
    aot_gpr_31 = (0x08861384u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 723u, 0x08A06FE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08861384u) goto L_08861384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08861384:
    aot_gpr_31 = (0x0886138Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886138Cu) goto L_0886138C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886138C:
    aot_gpr_17 = (0u | 0u);
    aot_gpr_31 = (0x08861398u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08861398u) goto L_08861398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08861398:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_088613CC;
      }
      goto L_088613A4;
    }
L_088613A4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27964));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27932));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2226u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4740));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    goto L_088613CC;
L_088613CC:
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_17);
      if (branch_taken) {
          goto L_088613E0;
      }
      goto L_088613D4;
    }
L_088613D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_088613E0;
L_088613E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08861424;
      }
      goto L_088613F0;
    }
L_088613F0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08861414;
      }
      goto L_088613F8;
    }
L_088613F8:
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_17);
      if (branch_taken) {
          goto L_0886140C;
      }
      goto L_08861400;
    }
L_08861400:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_0886140C;
L_0886140C:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    goto L_08861414;
L_08861414:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(308), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(301)));
      if (branch_taken) {
          goto L_08861448;
      }
      goto L_08861424;
    }
L_08861424:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08861440u);
    ctx.gpr[9] = (0u | 1u);
    goto L_0886097C;
L_08861440:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(301)));
    goto L_08861448;
L_08861448:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08861470;
      }
      goto L_08861450;
    }
L_08861450:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x0886146Cu);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886146Cu) goto L_0886146C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886146C:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_08861470;
L_08861470:
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08861490;
      }
      goto L_08861478;
    }
L_08861478:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08861490;
      }
      goto L_08861488;
    }
L_08861488:
    aot_gpr_31 = (0x08861490u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08861490u) goto L_08861490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08861490:
    ctx.gpr[2] = (0u | 1u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088614AC:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088614B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088614DC;
      }
      goto L_088614CC;
    }
L_088614CC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_088614F0;
      }
      goto L_088614D4;
    }
L_088614D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08861500;
      }
      goto L_088614DC;
    }
L_088614DC:
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088614D4;
      }
      goto L_088614E8;
    }
L_088614E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29188)));
      if (branch_taken) {
          goto L_08861500;
      }
      goto L_088614F0;
    }
L_088614F0:
    aot_gpr_31 = (0x088614F8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 251u, 0x08B21418u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088614F8u) goto L_088614F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088614F8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (0u | 1u);
    goto L_08861500;
L_08861500:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861510:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_08861520;
    }
L_08861520:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26512)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861538:
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_08861548;
    }
L_08861548:
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_0886155C;
    }
L_0886155C:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_08861568;
    }
L_08861568:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_08861574;
    }
L_08861574:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_0886157C;
    }
L_0886157C:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_08861588;
    }
L_08861588:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_08861594;
    }
L_08861594:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_088615A0;
    }
L_088615A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_088615A8;
    }
L_088615A8:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_088615B4;
    }
L_088615B4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088615BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29184)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x088615D4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08861510;
L_088615D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29180)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088615E4u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    goto L_08861510;
L_088615E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (57088u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (2236u << 16u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[9] = (256u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[8]);
    ctx.gpr[9] = (57344u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (ctx.gpr[7] & ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (57600u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861668:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088617FC;
      }
      goto L_08861688;
    }
L_08861688:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26472)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088616A0:
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_31 = (0x088616ACu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 283u, 0x08B217D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088616ACu) goto L_088616AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088616AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08861800;
      }
      goto L_088616B4;
    }
L_088616B4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (2236u << 16u);
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
      if (branch_taken) {
          goto L_088616E4;
      }
      goto L_088616C8;
    }
L_088616C8:
    aot_gpr_6 = (8960u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
      if (branch_taken) {
          goto L_088616F8;
      }
      goto L_088616E4;
    }
L_088616E4:
    aot_gpr_6 = (8960u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    goto L_088616F8;
L_088616F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08861800;
      }
      goto L_08861700;
    }
L_08861700:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (2236u << 16u);
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[2];
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
      if (branch_taken) {
          goto L_0886172C;
      }
      goto L_08861714;
    }
L_08861714:
    aot_gpr_6 = (20480u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
      if (branch_taken) {
          goto L_08861744;
      }
      goto L_0886172C;
    }
L_0886172C:
    aot_gpr_6 = (20480u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    goto L_08861744;
L_08861744:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08861800;
      }
      goto L_0886174C;
    }
L_0886174C:
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (59136u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
      if (branch_taken) {
          goto L_08861800;
      }
      goto L_08861780;
    }
L_08861780:
    aot_gpr_31 = (0x08861788u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29184), aot_gpr_4);
    goto L_088615BC;
L_08861788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08861800;
      }
      goto L_08861790;
    }
L_08861790:
    aot_gpr_31 = (0x08861798u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29180), aot_gpr_4);
    goto L_088615BC;
L_08861798:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08861788;
      }
      goto L_088617A0;
    }
L_088617A0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (2236u << 16u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
      if (branch_taken) {
          goto L_088617D4;
      }
      goto L_088617B0;
    }
L_088617B0:
    aot_gpr_6 = (7936u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-29188), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_088617EC;
      }
      goto L_088617D4;
    }
L_088617D4:
    aot_gpr_6 = (7936u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-29188), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    goto L_088617EC;
L_088617EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08861788;
      }
      goto L_088617F4;
    }
L_088617F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7924), aot_gpr_4);
      if (branch_taken) {
          goto L_08861788;
      }
      goto L_088617FC;
    }
L_088617FC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08861800;
L_08861800:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886180C:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861814:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886181C:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861824:
    ctx.gpr[8] = (aot_gpr_5 & 1023u);
    ctx.gpr[8] = (ctx.gpr[8] << 10u);
    ctx.gpr[9] = (54272u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[9] = (aot_gpr_4 & 1023u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[9] = (2236u << 16u);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_5 & 1023u);
    aot_gpr_5 = (aot_gpr_5 << 10u);
    ctx.gpr[7] = (54528u << 16u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 & 1023u);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(29552), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861888:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0886189Cu);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886189Cu) goto L_0886189C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886189C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088618A8:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.gpr[9] = (aot_gpr_6 & 3u);
    { const bool branch_taken = ctx.gpr[9] == aot_gpr_6;
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[9]);
      if (branch_taken) {
          goto L_08861968;
      }
      goto L_088618C4;
    }
L_088618C4:
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    ctx.set_vfpu_scalar_bits_ct<4u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<68u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    goto L_088618E0;
L_088618E0:
    ctx.set_vfpu_scalar_bits_ct<5u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    ctx.set_vfpu_scalar_bits_ct<37u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    ctx.set_vfpu_scalar_bits_ct<69u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 2u>(vfpu_value); }
    ctx.set_vfpu_scalar_bits_ct<6u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    ctx.set_vfpu_scalar_bits_ct<38u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    ctx.set_vfpu_scalar_bits_ct<70u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    ctx.set_vfpu_scalar_bits_ct<7u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    ctx.set_vfpu_scalar_bits_ct<39u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(40)));
    ctx.set_vfpu_scalar_bits_ct<71u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(44)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 2u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<104u, 32u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<9u, 33u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<41u, 34u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<73u, 32u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<105u, 33u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<10u, 34u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<42u, 32u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<74u, 33u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<106u, 34u, 7u, 4u>();
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.set_vfpu_scalar_bits_ct<4u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<68u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(-48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(-32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(-16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
      if (branch_taken) {
          goto L_088618E0;
      }
      goto L_08861960;
    }
L_08861960:
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_088619A0;
      }
      goto L_08861968;
    }
L_08861968:
    ctx.set_vfpu_scalar_bits_ct<4u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<68u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-12), ctx.vfpu_scalar_bits_ct<8u>());
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-8), ctx.vfpu_scalar_bits_ct<40u>());
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-4), ctx.vfpu_scalar_bits_ct<72u>());
      if (branch_taken) {
          goto L_08861968;
      }
      goto L_088619A0;
    }
L_088619A0:
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088619AC:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.gpr[9] = (aot_gpr_6 & 3u);
    { const bool branch_taken = ctx.gpr[9] == aot_gpr_6;
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[9]);
      if (branch_taken) {
          goto L_08861A3C;
      }
      goto L_088619C8;
    }
L_088619C8:
    aot_gpr_6 = (aot_gpr_6 << 4u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    goto L_088619D4;
L_088619D4:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 2u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 2u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<9u, 32u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<41u, 33u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<73u, 34u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<10u, 32u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<42u, 33u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<74u, 34u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<11u, 32u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<43u, 33u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<75u, 34u, 7u, 4u>();
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(-64);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(-48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(-32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<11u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(-16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
      if (branch_taken) {
          goto L_088619D4;
      }
      goto L_08861A38;
    }
L_08861A38:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
      if (branch_taken) {
          goto L_08861A6C;
      }
      goto L_08861A40;
    }
L_08861A3C:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    goto L_08861A40;
L_08861A40:
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_value); }
    goto L_08861A44;
L_08861A44:
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_value); }
    { const bool branch_taken = ctx.gpr[9] != 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(-16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
      if (branch_taken) {
          goto L_08861A44;
      }
      goto L_08861A6C;
    }
L_08861A6C:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861A7C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[8] = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 205 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08861B44;
      }
      goto L_08861A9C;
    }
L_08861A9C:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 109 ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
        goto L_08861ACC;
    }
    goto L_08861AA8;
L_08861AA8:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 13 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08861ABC;
      }
      goto L_08861AB4;
    }
L_08861AB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(93));
      if (branch_taken) {
          goto L_08861B34;
      }
      goto L_08861ABC;
    }
L_08861ABC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(508)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-13));
      if (branch_taken) {
          goto L_08861B34;
      }
      goto L_08861ACC;
    }
L_08861ACC:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(508)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_5 = (ctx.gpr[7] << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08861B1C;
      }
      goto L_08861B10;
    }
L_08861B10:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08861B24;
      }
      goto L_08861B1C;
    }
L_08861B1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(5996));
      if (branch_taken) {
          goto L_08861BF4;
      }
      goto L_08861B24;
    }
L_08861B24:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(508)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-109));
    goto L_08861B34;
L_08861B34:
    aot_gpr_5 = (aot_gpr_6 << 2u);
    ctx.gpr[2] = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_08861BF4;
      }
      goto L_08861B44;
    }
L_08861B44:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < 230 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08861B74;
      }
      goto L_08861B64;
    }
L_08861B64:
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-205));
    aot_gpr_4 = (aot_gpr_4 << 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_4);
      if (branch_taken) {
          goto L_08861BE4;
      }
      goto L_08861B74;
    }
L_08861B74:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[10] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[9] + ctx.gpr[8]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(508)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (ctx.gpr[10] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_4 = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08861BCC;
      }
      goto L_08861BC0;
    }
L_08861BC0:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08861BD4;
      }
      goto L_08861BCC;
    }
L_08861BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(5996));
      if (branch_taken) {
          goto L_08861BF4;
      }
      goto L_08861BD4;
    }
L_08861BD4:
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-230));
    aot_gpr_4 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[7]);
    goto L_08861BE4;
L_08861BE4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_4 = (ctx.gpr[7] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + aot_gpr_4);
      if (branch_taken) {
          goto L_08861BF4;
      }
      goto L_08861BF4;
    }
L_08861BF4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861BFC:
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 0u);
    goto L_08861C04;
L_08861C04:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08861C2C;
      }
      goto L_08861C10;
    }
L_08861C10:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 50 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08861C04;
      }
      goto L_08861C24;
    }
L_08861C24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08861C2C;
      }
      goto L_08861C2C;
    }
L_08861C2C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861C34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08861C48u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    goto L_08861C5C;
L_08861C48:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861C5C:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    goto L_08861C64;
L_08861C64:
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 50 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08861C64;
      }
      goto L_08861C88;
    }
L_08861C88:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861C90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08861CB8u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    goto L_08861BFC;
L_08861CB8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08861CD8;
      }
      goto L_08861CC4;
    }
L_08861CC4:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(400)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08861CD8;
L_08861CD8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861CF0:
    ctx.gpr[7] = (aot_gpr_6 & 255u);
    aot_gpr_6 = (0u | 0u);
    goto L_08861CF8;
L_08861CF8:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
      if (branch_taken) {
          goto L_08861D10;
      }
      goto L_08861D04;
    }
L_08861D04:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_5;
      if (branch_taken) {
          goto L_08861D2C;
      }
      goto L_08861D10;
    }
L_08861D10:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08861CF8;
      }
      goto L_08861D24;
    }
L_08861D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08861D30;
      }
      goto L_08861D2C;
    }
L_08861D2C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08861D30;
L_08861D30:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861D38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08861D48u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08861D48u) goto L_08861D48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08861D48:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (49016u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 20972u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08861DE8;
      }
      goto L_08861D78;
    }
L_08861D78:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (15395u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08861DE8;
      }
      goto L_08861DAC;
    }
L_08861DAC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
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
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08861DE8;
      }
      goto L_08861DE0;
    }
L_08861DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08861DEC;
      }
      goto L_08861DE8;
    }
L_08861DE8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08861DEC;
L_08861DEC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861DF8:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08861E00;
L_08861E00:
    ctx.gpr[7] = (aot_gpr_6 << 3u);
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08861E00;
      }
      goto L_08861E24;
    }
L_08861E24:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861E2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[16] = ctx.fpr[15] / aot_fpr_14;
    aot_gpr_6 = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08861E94;
      }
      goto L_08861E80;
    }
L_08861E80:
    aot_fpr_12 = ctx.fpr[15] / aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08861EB0;
      }
      goto L_08861E94;
    }
L_08861E94:
    aot_fpr_14 = ctx.fpr[15] / aot_fpr_14;
    ctx.gpr[21] = (32768u << 16u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[21] = (aot_gpr_4 + ctx.gpr[21]);
    goto L_08861EB0;
L_08861EB0:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08861EB8;
L_08861EB8:
    ctx.gpr[19] = (ctx.gpr[20] << 3u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[19] = (aot_gpr_17 + ctx.gpr[19]);
    aot_gpr_31 = (0x08861ECCu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08861ECCu) goto L_08861ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08861ECC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08861F04;
      }
      goto L_08861ED4;
    }
L_08861ED4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08861EE4u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    goto L_08861D38;
L_08861EE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08861EFC;
      }
      goto L_08861EEC;
    }
L_08861EEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08861F0C;
      }
      goto L_08861EFC;
    }
L_08861EFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08861F0C;
      }
      goto L_08861F04;
    }
L_08861F04:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    goto L_08861F0C;
L_08861F0C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08861EB8;
      }
      goto L_08861F20;
    }
L_08861F20:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_08861F44:
    ctx.gpr[8] = (0u | 0u);
    goto L_08861F48;
L_08861F48:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08861F48;
      }
      goto L_08861F5C;
    }
L_08861F5C:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    goto L_08861F68;
L_08861F68:
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08861F94;
      }
      goto L_08861F70;
    }
L_08861F70:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
      if (branch_taken) {
          goto L_08861F94;
      }
      goto L_08861F7C;
    }
L_08861F7C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_gpr_6 = (ctx.gpr[8] << 3u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 6 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
      if (branch_taken) {
          goto L_08861F68;
      }
      goto L_08861F94;
    }
L_08861F94:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861FA0:
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08861FA8;
L_08861FA8:
    ctx.gpr[7] = (ctx.gpr[8] << 3u);
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != aot_gpr_5;
      if (branch_taken) {
          goto L_08861FC4;
      }
      goto L_08861FBC;
    }
L_08861FBC:
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    goto L_08861FC4;
L_08861FC4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08861FA8;
      }
      goto L_08861FD8;
    }
L_08861FD8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08861FE0:
    ctx.gpr[7] = (0u | 0u);
    goto L_08861FE4;
L_08861FE4:
    aot_gpr_6 = (ctx.gpr[7] << 3u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_5;
      if (branch_taken) {
          goto L_08862018;
      }
      goto L_08861FF8;
    }
L_08861FF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08862010;
      }
      goto L_08862008;
    }
L_08862008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08862030;
      }
      goto L_08862010;
    }
L_08862010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08862030;
      }
      goto L_08862018;
    }
L_08862018:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08861FE4;
      }
      goto L_0886202C;
    }
L_0886202C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08862030;
L_08862030:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08862038:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (50588u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08862060;
L_08862060:
    ctx.gpr[7] = (aot_gpr_6 << 4u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, std::bit_cast<std::uint32_t>(aot_fpr_12), 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[7] + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08862060;
      }
      goto L_088620A4;
    }
L_088620A4:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088620AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (50588u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), ctx.gpr[16], aot_gpr_17};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words); }
    { const std::uint32_t aot_run_words[5]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_run_words); }
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_17 = (0u | 0u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_31);
    goto L_0886210C;
L_0886210C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088621D4;
      }
      goto L_08862118;
    }
L_08862118:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088621D4;
      }
      goto L_08862130;
    }
L_08862130:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_31 = (0x0886213Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886213Cu) goto L_0886213C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886213C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088621AC;
      }
      goto L_08862148;
    }
L_08862148:
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
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08862194;
      }
      goto L_0886218C;
    }
L_0886218C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_08862198;
      }
      goto L_08862194;
    }
L_08862194:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08862198;
L_08862198:
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
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088621D4;
      }
      goto L_088621AC;
    }
L_088621AC:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t aot_run_words[3]{ctx.gpr[22], std::bit_cast<std::uint32_t>(ctx.fpr[22]), 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[18] + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_088621D4;
L_088621D4:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_17 < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0886210C;
      }
      goto L_088621E8;
    }
L_088621E8:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      aot_gpr_17 = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      ctx.gpr[23] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886221C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), ctx.gpr[16], aot_gpr_17, ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x0886224Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886224Cu) goto L_0886224C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886224C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088622D8;
      }
      goto L_08862258;
    }
L_08862258:
    ctx.gpr[7] = (0u | 0u);
    goto L_0886225C;
L_0886225C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0886225C;
      }
      goto L_08862270;
    }
L_08862270:
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_0886227C;
L_0886227C:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088622B0;
      }
      goto L_08862284;
    }
L_08862284:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) < 0;
      if (branch_taken) {
          goto L_088622B0;
      }
      goto L_08862290;
    }
L_08862290:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    aot_gpr_5 = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
      if (branch_taken) {
          goto L_0886227C;
      }
      goto L_088622B0;
    }
L_088622B0:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_17);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, std::bit_cast<std::uint32_t>(ctx.fpr[20]), ctx.gpr[16]};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_088622D8;
L_088622D8:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088622F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (50588u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    ctx.gpr[8] = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08862310;
L_08862310:
    ctx.gpr[7] = (ctx.gpr[8] << 4u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != aot_gpr_5;
      if (branch_taken) {
          goto L_08862358;
      }
      goto L_0886232C;
    }
L_0886232C:
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_13)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, std::bit_cast<std::uint32_t>(aot_fpr_12), 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[7] + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08862358;
L_08862358:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08862310;
      }
      goto L_0886236C;
    }
L_0886236C:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08862374:
    ctx.gpr[7] = (0u | 0u);
    goto L_08862378;
L_08862378:
    aot_gpr_6 = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_5;
      if (branch_taken) {
          goto L_088623B0;
      }
      goto L_08862394;
    }
L_08862394:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088623A8;
      }
      goto L_088623A0;
    }
L_088623A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088623C8;
      }
      goto L_088623A8;
    }
L_088623A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088623C8;
      }
      goto L_088623B0;
    }
L_088623B0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08862378;
      }
      goto L_088623C4;
    }
L_088623C4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088623C8;
L_088623C8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088623D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088623E0u);
    goto L_08861A7C;
L_088623E0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088623EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(527));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0886240Cu);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-29124));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886240Cu) goto L_0886240C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886240C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr_4 = (0u | 0u);
    goto L_0886241C;
L_0886241C:
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(20), 0u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0886241C;
      }
      goto L_0886243C;
    }
L_0886243C:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(516), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(522), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(523), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 0u);
    goto L_08862458;
L_08862458:
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(84), 0u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 106 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08862458;
      }
      goto L_08862478;
    }
L_08862478:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), 0u);
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(526), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088624A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7952), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(522)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088624C8;
      }
      goto L_088624C0;
    }
L_088624C0:
    aot_gpr_31 = (0x088624C8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08862C50;
L_088624C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08862510;
      }
      goto L_088624D4;
    }
L_088624D4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8025)));
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08862510;
      }
      goto L_088624E4;
    }
L_088624E4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08862510;
      }
      goto L_088624F4;
    }
L_088624F4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(516), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_gpr_4);
    goto L_08862510;
L_08862510:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(512)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0886253C;
      }
      goto L_08862524;
    }
L_08862524:
    aot_gpr_31 = (0x0886252Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_088625E8;
L_0886252C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08862524;
      }
      goto L_08862534;
    }
L_08862534:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088625D8;
      }
      goto L_0886253C;
    }
L_0886253C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(523)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088625D8;
      }
      goto L_08862548;
    }
L_08862548:
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6640));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0886256C;
      }
      goto L_0886255C;
    }
L_0886255C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08862570;
      }
      goto L_08862568;
    }
L_08862568:
    aot_gpr_5 = (0u | 1u);
    goto L_0886256C;
L_0886256C:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08862570;
L_08862570:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088625D8;
      }
      goto L_08862578;
    }
L_08862578:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), 0u);
    aot_gpr_4 = (2240u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27808));
    ctx.gpr[16] = (2240u << 16u);
    goto L_0886258C;
L_0886258C:
    aot_gpr_6 = (aot_gpr_5 << 6u);
    ctx.gpr[7] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088625AC;
      }
      goto L_088625A8;
    }
L_088625A8:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), 0u);
    goto L_088625AC;
L_088625AC:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0886258C;
      }
      goto L_088625C4;
    }
L_088625C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26272)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088625D8;
      }
      goto L_088625D0;
    }
L_088625D0:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(-26272));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), 0u);
    goto L_088625D8;
L_088625D8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088625E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr_5 = ((aot_gpr_5 & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (aot_gpr_5 & 32768u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08862630;
      }
      goto L_08862624;
    }
L_08862624:
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08862634;
      }
      goto L_08862630;
    }
L_08862630:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(0u));
    goto L_08862634;
L_08862634:
    aot_gpr_5 = (aot_gpr_5 & 32767u);
    ctx.gpr[7] = (2232u << 16u);
    aot_gpr_6 = (aot_gpr_5 << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(18144));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_6);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08862674;
      }
      goto L_08862668;
    }
L_08862668:
    ctx.gpr[9] = (ctx.gpr[8] | aot_gpr_6);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_088626B0;
      }
      goto L_08862674;
    }
L_08862674:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0886269C;
      }
      goto L_0886267C;
    }
L_0886267C:
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0886269C;
      }
      goto L_0886269C;
    }
L_0886269C:
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088626A4u);
    ctx.pc = jump_target;
    ([&]() { AOT_REGCACHE_SYNC_OUT(); rt.invoke_native_fast_path(0x088B1780u, ctx); AOT_REGCACHE_SYNC_IN(); }());
    if (ctx.pc == 0x088626A4u) goto L_088626A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088626A4:
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
      if (branch_taken) {
          goto L_088626B4;
      }
      goto L_088626B0;
    }
L_088626B0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088626B4;
L_088626B4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088626C0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088626D8;
      }
      goto L_088626CC;
    }
L_088626CC:
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088626E0;
      }
      goto L_088626D8;
    }
L_088626D8:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088626E0;
L_088626E0:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088626F0;
      }
      goto L_088626E8;
    }
L_088626E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_088626F0;
L_088626F0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088626F8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08862714;
      }
      goto L_08862710;
    }
L_08862710:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08862714;
L_08862714:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886271C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08862868;
      }
      goto L_08862748;
    }
L_08862748:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26368)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08862764:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_0886276C;
    }
L_0886276C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_08862778;
    }
L_08862778:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_08862794;
    }
L_08862794:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr_4 = ((aot_gpr_4 & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_088627BC;
    }
L_088627BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_088627DC;
    }
L_088627DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = ((aot_gpr_4 & ~0x0000FF00u) | ((ctx.gpr[8] & 0x000000FFu) << 8u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 << 16u);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_08862804;
    }
L_08862804:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_gpr_6 << 8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    aot_gpr_5 = ((aot_gpr_5 & ~0x0000FF00u) | ((ctx.gpr[8] & 0x000000FFu) << 8u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | aot_gpr_4);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_08862844;
    }
L_08862844:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_08862868;
    }
L_08862868:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_31 = (0x08862880u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_088623D0;
L_08862880:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08862884;
L_08862884:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08862890:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_6 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    aot_gpr_17 = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (2236u << 16u);
      if (branch_taken) {
          goto L_088628FC;
      }
      goto L_088628D0;
    }
L_088628D0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    goto L_088628D4;
L_088628D4:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088628E8u);
    aot_gpr_6 = (0u | 0u);
    goto L_088623D0;
L_088628E8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088628D4;
      }
      goto L_088628FC;
    }
L_088628FC:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_08862920:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_5 - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886292C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_6 & 255u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(29704));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_31 = (0x0886296Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886296Cu) goto L_0886296C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886296C:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 13 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088629A4;
      }
      goto L_08862988;
    }
L_08862988:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0886299Cu);
    aot_gpr_6 = (0u | 0u);
    goto L_088623D0;
L_0886299C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088629A8;
      }
      goto L_088629A4;
    }
L_088629A4:
    ctx.gpr[19] = (aot_gpr_17 + ctx.gpr[19]);
    goto L_088629A8;
L_088629A8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088629CC;
      }
      goto L_088629B0;
    }
L_088629B0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 7u);
    aot_gpr_31 = (0x088629C4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088629C4u) goto L_088629C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088629C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088629E0;
      }
      goto L_088629CC;
    }
L_088629CC:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 5u);
    aot_gpr_31 = (0x088629E0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088629E0u) goto L_088629E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088629E0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_08862A04:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_17);
    aot_gpr_17 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 9u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x08862A34u);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08862A34u) goto L_08862A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08862A34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08862A40u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08862A40u) goto L_08862A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08862A40:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08862AEC;
      }
      goto L_08862A4C;
    }
L_08862A4C:
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
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_17 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_17 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[16] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[1] = std::bit_cast<float>(aot_run_words[2]);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[3]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[4]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[5]);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[6]);
      ctx.fpr[2] = std::bit_cast<float>(aot_run_words[7]);
    }
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[19] = aot_fpr_12 - aot_fpr_17;
    ctx.fpr[18] = aot_fpr_13 - ctx.fpr[16];
    aot_fpr_14 = aot_fpr_14 - aot_fpr_17;
    aot_fpr_13 = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[3];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[19] = ctx.fpr[19] / ctx.fpr[0];
    ctx.fpr[18] = ctx.fpr[18] / ctx.fpr[0];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = aot_fpr_12 + ctx.fpr[15];
    ctx.fpr[15] = std::sqrt(ctx.fpr[15]);
    aot_fpr_14 = aot_fpr_14 / ctx.fpr[15];
    aot_fpr_13 = aot_fpr_13 / ctx.fpr[15];
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_17 = (0u | 1u);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = ctx.fpr[1] - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[3] < ctx.fpr[1])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08862AF4;
      }
      goto L_08862AE4;
    }
L_08862AE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08862AF8;
      }
      goto L_08862AEC;
    }
L_08862AEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08862C38;
      }
      goto L_08862AF4;
    }
L_08862AF4:
    aot_gpr_17 = (0u | 0u);
    goto L_08862AF8;
L_08862AF8:
    ctx.fpr[2] = ctx.fpr[2] + aot_fpr_12;
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[1] <= ctx.fpr[2])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08862B14;
      }
      goto L_08862B10;
    }
L_08862B10:
    aot_gpr_17 = (0u | 0u);
    goto L_08862B14;
L_08862B14:
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08862B68;
      }
      goto L_08862B1C;
    }
L_08862B1C:
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = ctx.fpr[2] - aot_fpr_17;
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[16];
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[18];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] < ctx.fpr[3])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08862B50;
      }
      goto L_08862B4C;
    }
L_08862B4C:
    aot_gpr_17 = (0u | 0u);
    goto L_08862B50;
L_08862B50:
    ctx.fpr[18] = ctx.fpr[0] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] <= ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08862B68;
      }
      goto L_08862B64;
    }
L_08862B64:
    aot_gpr_17 = (0u | 0u);
    goto L_08862B68;
L_08862B68:
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08862BBC;
      }
      goto L_08862B70;
    }
L_08862B70:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_17 = ctx.fpr[18] - aot_fpr_17;
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[16];
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    { const float fs = aot_fpr_17; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_17 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_17 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_17 = aot_fpr_17 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_17 < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08862BA4;
      }
      goto L_08862BA0;
    }
L_08862BA0:
    aot_gpr_17 = (0u | 0u);
    goto L_08862BA4;
L_08862BA4:
    aot_fpr_12 = ctx.fpr[15] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_17 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08862BBC;
      }
      goto L_08862BB8;
    }
L_08862BB8:
    aot_gpr_17 = (0u | 0u);
    goto L_08862BBC;
L_08862BBC:
    aot_gpr_4 = (0u < aot_gpr_17 ? 1u : 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_17 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_17 = (0u < aot_gpr_17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08862BE8;
      }
      goto L_08862BE0;
    }
L_08862BE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_17));
      if (branch_taken) {
          goto L_08862C38;
      }
      goto L_08862BE8;
    }
L_08862BE8:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08862C14;
      }
      goto L_08862C00;
    }
L_08862C00:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_17 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08862C38;
      }
      goto L_08862C14;
    }
L_08862C14:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_17 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08862C38;
      }
      goto L_08862C34;
    }
L_08862C34:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08862C38;
L_08862C38:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08862C50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(525)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], aot_gpr_17, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08862D3C;
      }
      goto L_08862C6C;
    }
L_08862C6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7968)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08862D3C;
      }
      goto L_08862C78;
    }
L_08862C78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_08862D3C;
      }
      goto L_08862C90;
    }
L_08862C90:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_17 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(-6992));
    aot_gpr_31 = (0x08862CB8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_17);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 178u, 0x08960DB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08862CB8u) goto L_08862CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08862CB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08862CE8;
      }
      goto L_08862CC0;
    }
L_08862CC0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_31 = (0x08862CE0u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_17);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 182u, 0x08960DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08862CE0u) goto L_08862CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08862CE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08862D3C;
      }
      goto L_08862CE8;
    }
L_08862CE8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(516)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08862D10;
      }
      goto L_08862CF8;
    }
L_08862CF8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08862CF8;
      }
      goto L_08862D0C;
    }
L_08862D0C:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(516), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08862D10;
L_08862D10:
    aot_gpr_31 = (0x08862D18u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0886309C;
L_08862D18:
    aot_gpr_31 = (0x08862D20u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 238u, 0x08AB9394u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08862D20u) goto L_08862D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08862D20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7968)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(526), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), 0u);
    goto L_08862D3C;
L_08862D3C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08862D50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 & 65535u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08862D68u);
    ctx.gpr[16] = (aot_gpr_6 & 65535u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08862D68u) goto L_08862D68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08862D68:
    aot_gpr_5 = (ctx.gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08862E6C;
      }
      goto L_08862D74;
    }
L_08862D74:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26328)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08862D8C:
    aot_gpr_31 = (0x08862D94u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08862D94u) goto L_08862D94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08862D94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862D9C;
    }
L_08862D9C:
    aot_gpr_31 = (0x08862DA4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08862DA4u) goto L_08862DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08862DA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DAC;
    }
L_08862DAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DB4;
    }
L_08862DB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DBC;
    }
L_08862DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(10))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DC4;
    }
L_08862DC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DCC;
    }
L_08862DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(14))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DD4;
    }
L_08862DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DDC;
    }
L_08862DDC:
    aot_gpr_31 = (0x08862DE4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 972u, 0x0898BC4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08862DE4u) goto L_08862DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08862DE4:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DF0;
    }
L_08862DF0:
    aot_gpr_31 = (0x08862DF8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 976u, 0x0898BC6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08862DF8u) goto L_08862DF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08862DF8:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E04;
    }
L_08862E04:
    aot_gpr_31 = (0x08862E0Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 980u, 0x0898BC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08862E0Cu) goto L_08862E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08862E0C:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E18;
    }
L_08862E18:
    aot_gpr_31 = (0x08862E20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 984u, 0x0898BCACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08862E20u) goto L_08862E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08862E20:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E2C;
    }
L_08862E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(34))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E34;
    }
L_08862E34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E3C;
    }
L_08862E3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(38))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E44;
    }
L_08862E44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(40))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E4C;
    }
L_08862E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E54;
    }
L_08862E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E5C;
    }
L_08862E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(46))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E64;
    }
L_08862E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(48))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E6C;
    }
L_08862E6C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08862E70;
L_08862E70:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08862E80:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08862EA0;
      }
      goto L_08862E8C;
    }
L_08862E8C:
    aot_gpr_4 = (0u | 49u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
      if (branch_taken) {
          goto L_08862EA8;
      }
      goto L_08862E98;
    }
L_08862E98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08862EE4;
      }
      goto L_08862EA0;
    }
L_08862EA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08862F28;
      }
      goto L_08862EA8;
    }
L_08862EA8:
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(49) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08862EDC;
      }
      goto L_08862EB4;
    }
L_08862EB4:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26248)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08862ECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08862F28;
      }
      goto L_08862ED4;
    }
L_08862ED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08862F28;
      }
      goto L_08862EDC;
    }
L_08862EDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08862F24;
      }
      goto L_08862EE4;
    }
L_08862EE4:
    aot_gpr_4 = (0u | 50u);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
      if (branch_taken) {
          goto L_08862F24;
      }
      goto L_08862EF0;
    }
L_08862EF0:
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(49) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08862F24;
      }
      goto L_08862EFC;
    }
L_08862EFC:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26048)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08862F14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08862F28;
      }
      goto L_08862F1C;
    }
L_08862F1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08862F28;
      }
      goto L_08862F24;
    }
L_08862F24:
    ctx.gpr[2] = (0u | 0u);
    goto L_08862F28;
L_08862F28:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08862F30:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 117 ? 1u : 0u);
      if (branch_taken) {
          goto L_08862F80;
      }
      goto L_08862F40;
    }
L_08862F40:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
        goto L_08862F70;
    }
    goto L_08862F4C;
L_08862F4C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08862F58;
    }
L_08862F58:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08862F68;
      }
      goto L_08862F60;
    }
L_08862F60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08863020;
      }
      goto L_08862F68;
    }
L_08862F68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863020;
      }
      goto L_08862F70;
    }
L_08862F70:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08862FC4;
      }
      goto L_08862F78;
    }
L_08862F78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08862FDC;
      }
      goto L_08862F80;
    }
L_08862F80:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 119 ? 1u : 0u);
      if (branch_taken) {
          goto L_08862F9C;
      }
      goto L_08862F88;
    }
L_08862F88:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08862F94;
    }
L_08862F94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08862FF4;
      }
      goto L_08862F9C;
    }
L_08862F9C:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 120 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886300C;
      }
      goto L_08862FA4;
    }
L_08862FA4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08862FAC;
    }
L_08862FAC:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08862FBC;
      }
      goto L_08862FB4;
    }
L_08862FB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08862FBC;
    }
L_08862FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863020;
      }
      goto L_08862FC4;
    }
L_08862FC4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08862FD4;
      }
      goto L_08862FCC;
    }
L_08862FCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08862FD4;
    }
L_08862FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863020;
      }
      goto L_08862FDC;
    }
L_08862FDC:
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08862FEC;
      }
      goto L_08862FE4;
    }
L_08862FE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08862FEC;
    }
L_08862FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863020;
      }
      goto L_08862FF4;
    }
L_08862FF4:
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08863004;
      }
      goto L_08862FFC;
    }
L_08862FFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08863004;
    }
L_08863004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863020;
      }
      goto L_0886300C;
    }
L_0886300C:
    { const bool branch_taken = ctx.gpr[10] != 0u;
      if (branch_taken) {
          goto L_0886301C;
      }
      goto L_08863014;
    }
L_08863014:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_0886301C;
    }
L_0886301C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08863020;
L_08863020:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08863028:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08863058;
      }
      goto L_08863038;
    }
L_08863038:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25848)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08863050:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08863060;
      }
      goto L_08863058;
    }
L_08863058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08863094;
      }
      goto L_08863060;
    }
L_08863060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863094;
      }
      goto L_08863068;
    }
L_08863068:
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08863078;
      }
      goto L_08863070;
    }
L_08863070:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08863058;
      }
      goto L_08863078;
    }
L_08863078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863094;
      }
      goto L_08863080;
    }
L_08863080:
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08863090;
      }
      goto L_08863088;
    }
L_08863088:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08863058;
      }
      goto L_08863090;
    }
L_08863090:
    ctx.gpr[2] = (0u | 1u);
    goto L_08863094;
L_08863094:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886309C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(516)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(516), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (128u << 16u);
    aot_gpr_5 = (ctx.gpr[8] & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
      if (branch_taken) {
          goto L_088631B4;
      }
      goto L_088630D0;
    }
L_088630D0:
    aot_gpr_5 = (64u << 16u);
    aot_gpr_5 = (ctx.gpr[8] & aot_gpr_5);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(508)));
      if (branch_taken) {
          goto L_088630EC;
      }
      goto L_088630E0;
    }
L_088630E0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_088630EC;
L_088630EC:
    aot_gpr_5 = (64u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (ctx.gpr[8] & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[9] = (ctx.gpr[8] >> 24u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    ctx.gpr[11] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[11]);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_6);
    ctx.gpr[11] = (ctx.gpr[10] << 2u);
    aot_gpr_6 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[11]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(84));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
      if (branch_taken) {
          goto L_08863190;
      }
      goto L_08863160;
    }
L_08863160:
    ctx.gpr[10] = (2236u << 16u);
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(29704));
    ctx.gpr[10] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[11] | 0u);
    goto L_08863170;
L_08863170:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08863170;
      }
      goto L_0886318C;
    }
L_0886318C:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(508)));
    goto L_08863190;
L_08863190:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (ctx.gpr[10] - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(508), aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[8] << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x088631B4u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    goto L_08862890;
L_088631B4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088631C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-224));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), ctx.gpr[19]);
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[19] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_gpr_17);
    aot_gpr_17 = (ctx.gpr[8] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(84));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), aot_gpr_31);
    aot_gpr_31 = (0x0886321Cu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886321Cu) goto L_0886321C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886321C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08863390;
      }
      goto L_08863224;
    }
L_08863224:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_5 = (15395u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_5 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08863390;
      }
      goto L_08863254;
    }
L_08863254:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_5 = (16253u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_5 | 28836u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08863390;
      }
      goto L_08863284;
    }
L_08863284:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08863390;
      }
      goto L_088632A8;
    }
L_088632A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08863390;
      }
      goto L_088632CC;
    }
L_088632CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[19], 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08863380u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863380u) goto L_08863380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863380:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08863390;
      }
      goto L_08863388;
    }
L_08863388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08863394;
      }
      goto L_08863390;
    }
L_08863390:
    ctx.gpr[2] = (0u | 0u);
    goto L_08863394;
L_08863394:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088633B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29152)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
      if (branch_taken) {
          goto L_088633DC;
      }
      goto L_088633D0;
    }
L_088633D0:
    aot_gpr_31 = (0x088633D8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 365u, 0x08871414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088633D8u) goto L_088633D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088633D8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29152), ctx.gpr[16]);
    goto L_088633DC;
L_088633DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0886341C;
      }
      goto L_088633E8;
    }
L_088633E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5992)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08863404;
      }
      goto L_088633F4;
    }
L_088633F4:
    aot_gpr_31 = (0x088633FCu);
    ctx.pc = 0x08B73454u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088633FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08863410;
      }
      goto L_08863404;
    }
L_08863404:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08863410u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863410u) goto L_08863410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863410:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7972), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7968), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148), 0u);
    goto L_0886341C;
L_0886341C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886342C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7964)));
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08863460;
      }
      goto L_08863440;
    }
L_08863440:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29144)));
    goto L_08863444;
L_08863444:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_4;
      if (branch_taken) {
          goto L_08863468;
      }
      goto L_08863450;
    }
L_08863450:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08863444;
      }
      goto L_08863460;
    }
L_08863460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08863468;
      }
      goto L_08863468;
    }
L_08863468:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08863470:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7960)));
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7960));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08863494u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_088626C0;
L_08863494:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29136)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29136), aot_gpr_6);
    aot_gpr_31 = (0x088634ACu);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_088623EC;
L_088634AC:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7956));
    aot_gpr_31 = (0x088634BCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_088626F8;
L_088634BC:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088634DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088634ECu);
    aot_gpr_4 = (0u | 0u);
    goto L_08863470;
L_088634EC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088634F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7968)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08863524;
      }
      goto L_08863504;
    }
L_08863504:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_08863524;
      }
      goto L_0886351C;
    }
L_0886351C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863528;
      }
      goto L_08863524;
    }
L_08863524:
    ctx.gpr[2] = (0u | 0u);
    goto L_08863528;
L_08863528:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08863530:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08863540u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863540u) goto L_08863540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863540:
    aot_gpr_6 = (2240u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27896));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(1396));
    goto L_08863554;
L_08863554:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08863590;
      }
      goto L_08863560;
    }
L_08863560:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
      if (branch_taken) {
          goto L_08863590;
      }
      goto L_0886356C;
    }
L_0886356C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[7] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    goto L_08863590;
L_08863590:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08863554;
      }
      goto L_088635A0;
    }
L_088635A0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088635AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (2240u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-27896));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_31 = (0x088635E0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088635E0u) goto L_088635E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088635E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0886369C;
      }
      goto L_088635F4;
    }
L_088635F4:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_088635FC;
L_088635FC:
    aot_gpr_31 = (0x08863604u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863604u) goto L_08863604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863604:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x08863610u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863610u) goto L_08863610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863610:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08863624u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863624u) goto L_08863624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863624:
    aot_gpr_31 = (0x0886362Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886362Cu) goto L_0886362C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886362C:
    aot_gpr_31 = (0x08863634u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863634u) goto L_08863634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863634:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
      if (branch_taken) {
          goto L_08863660;
      }
      goto L_08863640;
    }
L_08863640:
    aot_gpr_31 = (0x08863648u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863648u) goto L_08863648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08863658u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863658u) goto L_08863658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863658:
    aot_gpr_31 = (0x08863660u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863660u) goto L_08863660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863660:
    aot_gpr_4 = (aot_gpr_17 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08863674;
      }
      goto L_0886366C;
    }
L_0886366C:
    aot_gpr_31 = (0x08863674u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863674u) goto L_08863674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863674:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08863688u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863688u) goto L_08863688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863688:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088635FC;
      }
      goto L_0886369C;
    }
L_0886369C:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(80), 0u);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088636C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08863738;
      }
      goto L_08863710;
    }
L_08863710:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08863738;
      }
      goto L_08863720;
    }
L_08863720:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[19] < aot_gpr_17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08863740;
      }
      goto L_08863730;
    }
L_08863730:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088637AC;
      }
      goto L_08863738;
    }
L_08863738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088637B0;
      }
      goto L_08863740;
    }
L_08863740:
    aot_gpr_4 = (ctx.gpr[19] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08863768;
      }
      goto L_0886374C;
    }
L_0886374C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_31 = (0x08863760u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863760u) goto L_08863760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863760:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0886379C;
      }
      goto L_08863768;
    }
L_08863768:
    aot_gpr_31 = (0x08863770u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_0886342C;
L_08863770:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08863790;
      }
      goto L_0886377C;
    }
L_0886377C:
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08863788u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863788u) goto L_08863788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863788:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0886379C;
      }
      goto L_08863790;
    }
L_08863790:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0886379Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886379Cu) goto L_0886379C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886379C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[19] < aot_gpr_17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08863740;
      }
      goto L_088637AC;
    }
L_088637AC:
    ctx.gpr[2] = (0u | 1u);
    goto L_088637B0;
L_088637B0:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_088637CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    aot_gpr_4 = (16128u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_17 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08863804;
      }
      goto L_088637F4;
    }
L_088637F4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_14;
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08863810;
      }
      goto L_08863804;
    }
L_08863804:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_08863810;
L_08863810:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08863830;
      }
      goto L_08863820;
    }
L_08863820:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = ctx.fpr[22] + ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_14; const float ft = aot_fpr_17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_17 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_17 = fs * ft; }
      if (branch_taken) {
          goto L_0886383C;
      }
      goto L_08863830;
    }
L_08863830:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_13 = ctx.fpr[22] + aot_fpr_13;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_17 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_17 = fs * ft; }
    goto L_0886383C;
L_0886383C:
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_14)) && aot_fpr_13 == aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_17));
      if (branch_taken) {
          goto L_08863874;
      }
      goto L_0886385C;
    }
L_0886385C:
    aot_gpr_4 = (50042u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08863888;
      }
      goto L_08863874;
    }
L_08863874:
    aot_gpr_31 = (0x0886387Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_17));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886387Cu) goto L_0886387C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886387C:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = ctx.fpr[0] + aot_fpr_13;
    goto L_08863888;
L_08863888:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_12 = ctx.fpr[20] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_6 = (0u | 0u);
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[22];
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088638C0u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 291u, 0x08A9A650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088638C0u) goto L_088638C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088638C0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088638D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-336));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), aot_gpr_17);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_17 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[7] = (0u | 64u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    { const std::uint32_t aot_run_words[8]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(300), aot_run_words); }
    aot_gpr_31 = (0x0886394Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886394Cu) goto L_0886394C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886394C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[21] = (0u | 2u);
      if (branch_taken) {
          goto L_08863B20;
      }
      goto L_08863960;
    }
L_08863960:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[19] = (aot_gpr_29 | 0u);
    goto L_08863968;
L_08863968:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 >> 1u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
        goto L_08863998;
    }
    goto L_08863984;
L_08863984:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08863B10;
      }
      goto L_08863990;
    }
L_08863990:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088639A8;
      }
      goto L_08863998;
    }
L_08863998:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08863AB4;
      }
      goto L_088639A0;
    }
L_088639A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08863B10;
      }
      goto L_088639A8;
    }
L_088639A8:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_088639FC;
      }
      goto L_088639B4;
    }
L_088639B4:
    aot_gpr_31 = (0x088639BCu);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088639BCu) goto L_088639BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088639BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088639FC;
      }
      goto L_088639C4;
    }
L_088639C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_088639FC;
      }
      goto L_088639D0;
    }
L_088639D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_088639FC;
      }
      goto L_088639DC;
    }
L_088639DC:
    aot_gpr_31 = (0x088639E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088639E4u) goto L_088639E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088639E4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088639F4u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 72u, 0x08818918u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088639F4u) goto L_088639F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088639F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08863A1C;
      }
      goto L_088639FC;
    }
L_088639FC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(565)));
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[23] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08863A24;
      }
      goto L_08863A10;
    }
L_08863A10:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08863B14;
      }
      goto L_08863A1C;
    }
L_08863A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08863B24;
      }
      goto L_08863A24;
    }
L_08863A24:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08863A30u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863A30u) goto L_08863A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863A30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08863A90;
      }
      goto L_08863A38;
    }
L_08863A38:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08863A44u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863A44u) goto L_08863A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863A44:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08863A50u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863A50u) goto L_08863A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863A50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08863A90;
      }
      goto L_08863A58;
    }
L_08863A58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_08863A90;
      }
      goto L_08863A64;
    }
L_08863A64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_08863A90;
      }
      goto L_08863A70;
    }
L_08863A70:
    aot_gpr_31 = (0x08863A78u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863A78u) goto L_08863A78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863A78:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08863A88u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 72u, 0x08818918u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863A88u) goto L_08863A88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863A88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08863AAC;
      }
      goto L_08863A90;
    }
L_08863A90:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(565)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[23] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08863A24;
      }
      goto L_08863AA4;
    }
L_08863AA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08863A10;
      }
      goto L_08863AAC;
    }
L_08863AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08863B24;
      }
      goto L_08863AB4;
    }
L_08863AB4:
    aot_gpr_31 = (0x08863ABCu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863ABCu) goto L_08863ABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863ABC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08863AFC;
      }
      goto L_08863AC4;
    }
L_08863AC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_08863AFC;
      }
      goto L_08863AD0;
    }
L_08863AD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_08863AFC;
      }
      goto L_08863ADC;
    }
L_08863ADC:
    aot_gpr_31 = (0x08863AE4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863AE4u) goto L_08863AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863AE4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08863AF4u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 72u, 0x08818918u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863AF4u) goto L_08863AF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863AF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08863B08;
      }
      goto L_08863AFC;
    }
L_08863AFC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08863B14;
      }
      goto L_08863B08;
    }
L_08863B08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08863B24;
      }
      goto L_08863B10;
    }
L_08863B10:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08863B14;
L_08863B14:
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08863968;
      }
      goto L_08863B20;
    }
L_08863B20:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    goto L_08863B24;
L_08863B24:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(292), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08863B54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[6]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x08863B80u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863B80u) goto L_08863B80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863B80:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_08863BE0;
      }
      goto L_08863B90;
    }
L_08863B90:
    aot_gpr_31 = (0x08863B98u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863B98u) goto L_08863B98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863B98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08863BE0;
      }
      goto L_08863BA0;
    }
L_08863BA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08863BE0;
      }
      goto L_08863BB0;
    }
L_08863BB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08863BE0;
      }
      goto L_08863BC0;
    }
L_08863BC0:
    aot_gpr_31 = (0x08863BC8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863BC8u) goto L_08863BC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863BC8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08863BD8u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 72u, 0x08818918u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863BD8u) goto L_08863BD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863BD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08863BFC;
      }
      goto L_08863BE0;
    }
L_08863BE0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(565)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[19] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (0u | 2u);
      if (branch_taken) {
          goto L_08863C84;
      }
      goto L_08863BF4;
    }
L_08863BF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 6u);
      if (branch_taken) {
          goto L_08863C04;
      }
      goto L_08863BFC;
    }
L_08863BFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08863C90;
      }
      goto L_08863C04;
    }
L_08863C04:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08863C10u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863C10u) goto L_08863C10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863C10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08863C70;
      }
      goto L_08863C18;
    }
L_08863C18:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08863C24u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863C24u) goto L_08863C24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863C24:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08863C30u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863C30u) goto L_08863C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863C30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08863C70;
      }
      goto L_08863C38;
    }
L_08863C38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_08863C70;
      }
      goto L_08863C44;
    }
L_08863C44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_08863C70;
      }
      goto L_08863C50;
    }
L_08863C50:
    aot_gpr_31 = (0x08863C58u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863C58u) goto L_08863C58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863C58:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08863C68u);
    aot_gpr_6 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 72u, 0x08818918u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863C68u) goto L_08863C68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863C68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08863C8C;
      }
      goto L_08863C70;
    }
L_08863C70:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(565)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[19] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08863C04;
      }
      goto L_08863C84;
    }
L_08863C84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863C90;
      }
      goto L_08863C8C;
    }
L_08863C8C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08863C90;
L_08863C90:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_08863CB4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08863CC8u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863CC8u) goto L_08863CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863CC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08863D08;
      }
      goto L_08863CD0;
    }
L_08863CD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (15395u << 16u);
      if (branch_taken) {
          goto L_08863D08;
      }
      goto L_08863CDC;
    }
L_08863CDC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_5 = (aot_gpr_5 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(264)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D00;
    }
L_08863D00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863D8C;
      }
      goto L_08863D08;
    }
L_08863D08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08863D1C;
      }
      goto L_08863D14;
    }
L_08863D14:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D1C;
    }
L_08863D1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D2C;
    }
L_08863D2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 8192u);
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D3C;
    }
L_08863D3C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D44;
    }
L_08863D44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D54;
    }
L_08863D54:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(792)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D6C;
    }
L_08863D6C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(796)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D80;
    }
L_08863D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863D8C;
      }
      goto L_08863D88;
    }
L_08863D88:
    ctx.gpr[2] = (0u | 0u);
    goto L_08863D8C;
L_08863D8C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08863D9C:
    aot_gpr_5 = (15395u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_5 = (aot_gpr_5 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(264)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08863DCC;
      }
      goto L_08863DC4;
    }
L_08863DC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863DD0;
      }
      goto L_08863DCC;
    }
L_08863DCC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08863DD0;
L_08863DD0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08863DD8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08863EE0;
      }
      goto L_08863DEC;
    }
L_08863DEC:
    aot_gpr_31 = (0x08863DF4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863DF4u) goto L_08863DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863DF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08863E7C;
      }
      goto L_08863DFC;
    }
L_08863DFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08863E70;
      }
      goto L_08863E08;
    }
L_08863E08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[16];
      if (branch_taken) {
          goto L_08863E70;
      }
      goto L_08863E14;
    }
L_08863E14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 | 64u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 5u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08863E44;
      }
      goto L_08863E3C;
    }
L_08863E3C:
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(680), aot_gpr_5);
    goto L_08863E44;
L_08863E44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08863E70;
      }
      goto L_08863E54;
    }
L_08863E54:
    aot_gpr_31 = (0x08863E5Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 456u, 0x08B01BA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863E5Cu) goto L_08863E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863E5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08863E70;
      }
      goto L_08863E64;
    }
L_08863E64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08863E70u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863E70u) goto L_08863E70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863E70:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08863E7Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 222u, 0x08910CCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863E7Cu) goto L_08863E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863E7C:
    aot_gpr_31 = (0x08863E84u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 537u, 0x0889358Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863E84u) goto L_08863E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863E84:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08863EA4;
      }
      goto L_08863E94;
    }
L_08863E94:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08863EAC;
      }
      goto L_08863EA4;
    }
L_08863EA4:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08863EAC;
L_08863EAC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08863EBC;
      }
      goto L_08863EB4;
    }
L_08863EB4:
    aot_gpr_31 = (0x08863EBCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 475u, 0x08A660DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863EBCu) goto L_08863EBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863EBC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08863EE0;
      }
      goto L_08863EC4;
    }
L_08863EC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08863EE0u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863EE0u) goto L_08863EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863EE0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08863EF0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_5 & 255u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], aot_gpr_17, ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 23u, 0x0886415Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08863F18;
    }
L_08863F18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 23u, 0x0886415Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08863F28;
    }
L_08863F28:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08863F34u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863F34u) goto L_08863F34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863F34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 20u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08863F50;
      }
      goto L_08863F44;
    }
L_08863F44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30000));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1756), aot_gpr_4);
    goto L_08863F50;
L_08863F50:
    aot_gpr_31 = (0x08863F58u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863F58u) goto L_08863F58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863F58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 5u, 0x08864040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08863F60;
    }
L_08863F60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 5u, 0x08864040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08863F6C;
    }
L_08863F6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_5;
      if (branch_taken) {
          goto L_08863FA0;
      }
      goto L_08863F78;
    }
L_08863F78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 5u, 0x08864040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08863F84;
    }
L_08863F84:
    aot_gpr_31 = (0x08863F8Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863F8Cu) goto L_08863F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863F8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 5u, 0x08864040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08863FA0;
    }
L_08863FA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 5u, 0x08864040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08863FAC;
    }
L_08863FAC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
        goto L_08863FE8;
    }
    goto L_08863FC8;
L_08863FC8:
    aot_gpr_4 = (48793u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08863FDCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08863FDCu) goto L_08863FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08863FDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08863FF8;
      }
      goto L_08863FE4;
    }
L_08863FE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    goto L_08863FE8;
L_08863FE8:
    aot_gpr_6 = (64u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 3u, 0x08864020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08863FF8;
    }
L_08863FF8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08864000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0023(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0023_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_23(Runtime &runtime) {
    runtime.register_generated_unit(23u, 0x08860000u, 16384u, &recomp_unit_0023, &recomp_unit_0023_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08860000u, &recomp_unit_0023, "recomp_unit_0023",
                                          kEntryMasks_recomp_unit_0023, 64u);
}
} // namespace psprecomp
