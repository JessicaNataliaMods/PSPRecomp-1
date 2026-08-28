#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0205[64] = {
    0x1000915410955555ull, 0x409112AA08504211ull, 0x8914544288B54008ull, 0xA52A8020004228AAull,
    0x4A25094285145400ull, 0x69413A4B4AA8AAA4ull, 0x413A4B4AA8A82749ull, 0x0904E92D28274969ull,
    0xAAA0108091284285ull, 0x8040144AAA004155ull, 0x08A8544852200080ull, 0x0920412850244494ull,
    0x1012A084A4AB042Dull, 0xAA55555500205402ull, 0xA910504002820014ull, 0x92160842C10850A8ull,
    0x224A01140B049160ull, 0x5155421289010812ull, 0x92A95454A0504255ull, 0x2555008150084048ull,
    0x42854C929124A112ull, 0x2102445080924905ull, 0x02A0220249250890ull, 0x0085401080950425ull,
    0x44A1428A00000820ull, 0x0952048250064144ull, 0x4048201050002040ull, 0x8015A48000120002ull,
    0xA0102000A8554002ull, 0x0282805050505050ull, 0x0100802AAA800804ull, 0x2811555485224001ull,
    0xB042C09204204889ull, 0x4021012254084A4Aull, 0x44A256A80080A845ull, 0x2445102492AAA820ull,
    0xA25002A012041290ull, 0x0402102249554204ull, 0x8404AA02A8274969ull, 0x100512AA80101500ull,
    0x0911251448002020ull, 0x8404A821292AC084ull, 0x5484826A81081500ull, 0x3499208C5690AA30ull,
    0x04809551110AA492ull, 0x55555554A5291209ull, 0x80026150088D5555ull, 0xAAAAAA9554555552ull,
    0x0205250010900202ull, 0xA552AAA2954AA500ull, 0x25001090020154AAull, 0x5654544A20020525ull,
    0x0480542AAA5480D1ull, 0x8200010180031080ull, 0x4802024010000061ull, 0x06902A4841102200ull,
    0x440A24011A088200ull, 0x0008869484040900ull, 0x0000320420242100ull, 0x0054220440008800ull,
    0x0021000282488100ull, 0x0204200000A10200ull, 0xA080040021082120ull, 0x80042088A218550Aull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0205[64] = {
    1u, 21u, 38u, 57u, 74u, 92u, 119u, 145u, 170u, 188u, 205u, 219u, 235u, 255u, 276u, 289u,
    307u, 324u, 342u, 365u, 380u, 401u, 417u, 432u, 446u, 458u, 474u, 483u, 494u, 507u, 521u, 533u,
    551u, 568u, 584u, 603u, 622u, 637u, 652u, 674u, 688u, 701u, 719u, 736u, 759u, 778u, 804u, 824u,
    854u, 865u, 890u, 905u, 925u, 945u, 954u, 963u, 977u, 990u, 1002u, 1011u, 1020u, 1029u, 1036u, 1046u,
};
void recomp_unit_0205_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,16,31,29,6 fprs=12,13,14,20 gpr_occ=3762 fpr_occ=885 gpr_total=4852 fpr_total=1016
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[16] = aot_gpr_16; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B38000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0205[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0205[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B38000;
    case 2u: goto L_08B38008;
    case 3u: goto L_08B38010;
    case 4u: goto L_08B38018;
    case 5u: goto L_08B38020;
    case 6u: goto L_08B38028;
    case 7u: goto L_08B38030;
    case 8u: goto L_08B38038;
    case 9u: goto L_08B38040;
    case 10u: goto L_08B38048;
    case 11u: goto L_08B38050;
    case 12u: goto L_08B3805C;
    case 13u: goto L_08B38070;
    case 14u: goto L_08B38088;
    case 15u: goto L_08B38090;
    case 16u: goto L_08B38098;
    case 17u: goto L_08B380A0;
    case 18u: goto L_08B380B0;
    case 19u: goto L_08B380BC;
    case 20u: goto L_08B380F0;
    case 21u: goto L_08B38100;
    case 22u: goto L_08B38110;
    case 23u: goto L_08B38124;
    case 24u: goto L_08B38138;
    case 25u: goto L_08B38150;
    case 26u: goto L_08B38158;
    case 27u: goto L_08B3816C;
    case 28u: goto L_08B38184;
    case 29u: goto L_08B3818C;
    case 30u: goto L_08B38194;
    case 31u: goto L_08B3819C;
    case 32u: goto L_08B381A4;
    case 33u: goto L_08B381B0;
    case 34u: goto L_08B381C0;
    case 35u: goto L_08B381D0;
    case 36u: goto L_08B381DC;
    case 37u: goto L_08B381F8;
    case 38u: goto L_08B3820C;
    case 39u: goto L_08B38238;
    case 40u: goto L_08B38240;
    case 41u: goto L_08B38248;
    case 42u: goto L_08B38250;
    case 43u: goto L_08B38254;
    case 44u: goto L_08B3825C;
    case 45u: goto L_08B3826C;
    case 46u: goto L_08B3827C;
    case 47u: goto L_08B38284;
    case 48u: goto L_08B38298;
    case 49u: goto L_08B382A8;
    case 50u: goto L_08B382B0;
    case 51u: goto L_08B382B8;
    case 52u: goto L_08B382C8;
    case 53u: goto L_08B382D0;
    case 54u: goto L_08B382E0;
    case 55u: goto L_08B382EC;
    case 56u: goto L_08B382FC;
    case 57u: goto L_08B38304;
    case 58u: goto L_08B3830C;
    case 59u: goto L_08B38314;
    case 60u: goto L_08B3831C;
    case 61u: goto L_08B3832C;
    case 62u: goto L_08B38334;
    case 63u: goto L_08B38344;
    case 64u: goto L_08B38358;
    case 65u: goto L_08B38394;
    case 66u: goto L_08B383BC;
    case 67u: goto L_08B383C4;
    case 68u: goto L_08B383CC;
    case 69u: goto L_08B383D4;
    case 70u: goto L_08B383E0;
    case 71u: goto L_08B383E8;
    case 72u: goto L_08B383F4;
    case 73u: goto L_08B383FC;
    case 74u: goto L_08B38428;
    case 75u: goto L_08B38430;
    case 76u: goto L_08B38438;
    case 77u: goto L_08B38448;
    case 78u: goto L_08B38450;
    case 79u: goto L_08B38460;
    case 80u: goto L_08B38468;
    case 81u: goto L_08B3847C;
    case 82u: goto L_08B38484;
    case 83u: goto L_08B38498;
    case 84u: goto L_08B384A0;
    case 85u: goto L_08B384AC;
    case 86u: goto L_08B384C0;
    case 87u: goto L_08B384C8;
    case 88u: goto L_08B384D4;
    case 89u: goto L_08B384E4;
    case 90u: goto L_08B384EC;
    case 91u: goto L_08B384F8;
    case 92u: goto L_08B38508;
    case 93u: goto L_08B38514;
    case 94u: goto L_08B3851C;
    case 95u: goto L_08B38524;
    case 96u: goto L_08B3852C;
    case 97u: goto L_08B38534;
    case 98u: goto L_08B3853C;
    case 99u: goto L_08B3854C;
    case 100u: goto L_08B38554;
    case 101u: goto L_08B3855C;
    case 102u: goto L_08B38564;
    case 103u: goto L_08B3856C;
    case 104u: goto L_08B38578;
    case 105u: goto L_08B38580;
    case 106u: goto L_08B38584;
    case 107u: goto L_08B3858C;
    case 108u: goto L_08B38598;
    case 109u: goto L_08B385A4;
    case 110u: goto L_08B385AC;
    case 111u: goto L_08B385B0;
    case 112u: goto L_08B385B4;
    case 113u: goto L_08B385C0;
    case 114u: goto L_08B385D8;
    case 115u: goto L_08B385E0;
    case 116u: goto L_08B385EC;
    case 117u: goto L_08B385F4;
    case 118u: goto L_08B385F8;
    case 119u: goto L_08B38600;
    case 120u: goto L_08B3860C;
    case 121u: goto L_08B38618;
    case 122u: goto L_08B38620;
    case 123u: goto L_08B38624;
    case 124u: goto L_08B38628;
    case 125u: goto L_08B38634;
    case 126u: goto L_08B3864C;
    case 127u: goto L_08B38654;
    case 128u: goto L_08B3865C;
    case 129u: goto L_08B3866C;
    case 130u: goto L_08B38674;
    case 131u: goto L_08B3867C;
    case 132u: goto L_08B38684;
    case 133u: goto L_08B3868C;
    case 134u: goto L_08B38698;
    case 135u: goto L_08B386A0;
    case 136u: goto L_08B386A4;
    case 137u: goto L_08B386AC;
    case 138u: goto L_08B386B8;
    case 139u: goto L_08B386C4;
    case 140u: goto L_08B386CC;
    case 141u: goto L_08B386D0;
    case 142u: goto L_08B386D4;
    case 143u: goto L_08B386E0;
    case 144u: goto L_08B386F8;
    case 145u: goto L_08B38700;
    case 146u: goto L_08B3870C;
    case 147u: goto L_08B38714;
    case 148u: goto L_08B38718;
    case 149u: goto L_08B38720;
    case 150u: goto L_08B3872C;
    case 151u: goto L_08B38738;
    case 152u: goto L_08B38740;
    case 153u: goto L_08B38744;
    case 154u: goto L_08B38748;
    case 155u: goto L_08B38754;
    case 156u: goto L_08B3876C;
    case 157u: goto L_08B38774;
    case 158u: goto L_08B38780;
    case 159u: goto L_08B38788;
    case 160u: goto L_08B3878C;
    case 161u: goto L_08B38794;
    case 162u: goto L_08B387A0;
    case 163u: goto L_08B387AC;
    case 164u: goto L_08B387B4;
    case 165u: goto L_08B387B8;
    case 166u: goto L_08B387BC;
    case 167u: goto L_08B387C8;
    case 168u: goto L_08B387E0;
    case 169u: goto L_08B387EC;
    case 170u: goto L_08B38800;
    case 171u: goto L_08B38808;
    case 172u: goto L_08B3881C;
    case 173u: goto L_08B38824;
    case 174u: goto L_08B38838;
    case 175u: goto L_08B3884C;
    case 176u: goto L_08B38854;
    case 177u: goto L_08B38860;
    case 178u: goto L_08B38870;
    case 179u: goto L_08B3887C;
    case 180u: goto L_08B3889C;
    case 181u: goto L_08B388B0;
    case 182u: goto L_08B388D4;
    case 183u: goto L_08B388DC;
    case 184u: goto L_08B388E4;
    case 185u: goto L_08B388EC;
    case 186u: goto L_08B388F4;
    case 187u: goto L_08B388FC;
    case 188u: goto L_08B38900;
    case 189u: goto L_08B38908;
    case 190u: goto L_08B38910;
    case 191u: goto L_08B38918;
    case 192u: goto L_08B38920;
    case 193u: goto L_08B38938;
    case 194u: goto L_08B38964;
    case 195u: goto L_08B3896C;
    case 196u: goto L_08B38974;
    case 197u: goto L_08B3897C;
    case 198u: goto L_08B38984;
    case 199u: goto L_08B3898C;
    case 200u: goto L_08B38998;
    case 201u: goto L_08B389A8;
    case 202u: goto L_08B389B0;
    case 203u: goto L_08B389D8;
    case 204u: goto L_08B389FC;
    case 205u: goto L_08B38A1C;
    case 206u: goto L_08B38A54;
    case 207u: goto L_08B38A64;
    case 208u: goto L_08B38A70;
    case 209u: goto L_08B38A78;
    case 210u: goto L_08B38A8C;
    case 211u: goto L_08B38A98;
    case 212u: goto L_08B38AA8;
    case 213u: goto L_08B38AB0;
    case 214u: goto L_08B38AB8;
    case 215u: goto L_08B38ACC;
    case 216u: goto L_08B38AD4;
    case 217u: goto L_08B38ADC;
    case 218u: goto L_08B38AEC;
    case 219u: goto L_08B38B08;
    case 220u: goto L_08B38B10;
    case 221u: goto L_08B38B1C;
    case 222u: goto L_08B38B28;
    case 223u: goto L_08B38B38;
    case 224u: goto L_08B38B48;
    case 225u: goto L_08B38B54;
    case 226u: goto L_08B38B70;
    case 227u: goto L_08B38B78;
    case 228u: goto L_08B38B8C;
    case 229u: goto L_08B38B94;
    case 230u: goto L_08B38BA0;
    case 231u: goto L_08B38BB8;
    case 232u: goto L_08B38BD4;
    case 233u: goto L_08B38BE0;
    case 234u: goto L_08B38BEC;
    case 235u: goto L_08B38C00;
    case 236u: goto L_08B38C08;
    case 237u: goto L_08B38C0C;
    case 238u: goto L_08B38C14;
    case 239u: goto L_08B38C28;
    case 240u: goto L_08B38C40;
    case 241u: goto L_08B38C44;
    case 242u: goto L_08B38C4C;
    case 243u: goto L_08B38C54;
    case 244u: goto L_08B38C5C;
    case 245u: goto L_08B38C68;
    case 246u: goto L_08B38C74;
    case 247u: goto L_08B38C7C;
    case 248u: goto L_08B38C88;
    case 249u: goto L_08B38C9C;
    case 250u: goto L_08B38CB4;
    case 251u: goto L_08B38CBC;
    case 252u: goto L_08B38CC4;
    case 253u: goto L_08B38CD0;
    case 254u: goto L_08B38CF0;
    case 255u: goto L_08B38D04;
    case 256u: goto L_08B38D28;
    case 257u: goto L_08B38D30;
    case 258u: goto L_08B38D38;
    case 259u: goto L_08B38D54;
    case 260u: goto L_08B38D80;
    case 261u: goto L_08B38D88;
    case 262u: goto L_08B38D90;
    case 263u: goto L_08B38D98;
    case 264u: goto L_08B38DA0;
    case 265u: goto L_08B38DA8;
    case 266u: goto L_08B38DB0;
    case 267u: goto L_08B38DB8;
    case 268u: goto L_08B38DC0;
    case 269u: goto L_08B38DC8;
    case 270u: goto L_08B38DD0;
    case 271u: goto L_08B38DD8;
    case 272u: goto L_08B38DE4;
    case 273u: goto L_08B38DEC;
    case 274u: goto L_08B38DF4;
    case 275u: goto L_08B38DFC;
    case 276u: goto L_08B38E08;
    case 277u: goto L_08B38E10;
    case 278u: goto L_08B38E44;
    case 279u: goto L_08B38E5C;
    case 280u: goto L_08B38E64;
    case 281u: goto L_08B38E98;
    case 282u: goto L_08B38EB0;
    case 283u: goto L_08B38EB8;
    case 284u: goto L_08B38ED0;
    case 285u: goto L_08B38EE0;
    case 286u: goto L_08B38EEC;
    case 287u: goto L_08B38EF4;
    case 288u: goto L_08B38EFC;
    case 289u: goto L_08B38F0C;
    case 290u: goto L_08B38F14;
    case 291u: goto L_08B38F1C;
    case 292u: goto L_08B38F30;
    case 293u: goto L_08B38F38;
    case 294u: goto L_08B38F4C;
    case 295u: goto L_08B38F60;
    case 296u: goto L_08B38F78;
    case 297u: goto L_08B38F7C;
    case 298u: goto L_08B38F84;
    case 299u: goto L_08B38F98;
    case 300u: goto L_08B38FAC;
    case 301u: goto L_08B38FC4;
    case 302u: goto L_08B38FC8;
    case 303u: goto L_08B38FD0;
    case 304u: goto L_08B38FE4;
    case 305u: goto L_08B38FF0;
    case 306u: goto L_08B38FFC;
    case 307u: goto L_08B39014;
    case 308u: goto L_08B39018;
    case 309u: goto L_08B39020;
    case 310u: goto L_08B39030;
    case 311u: goto L_08B3903C;
    case 312u: goto L_08B39048;
    case 313u: goto L_08B39060;
    case 314u: goto L_08B39064;
    case 315u: goto L_08B3906C;
    case 316u: goto L_08B39088;
    case 317u: goto L_08B39090;
    case 318u: goto L_08B390A0;
    case 319u: goto L_08B390C4;
    case 320u: goto L_08B390CC;
    case 321u: goto L_08B390D8;
    case 322u: goto L_08B390E4;
    case 323u: goto L_08B390F4;
    case 324u: goto L_08B39104;
    case 325u: goto L_08B39110;
    case 326u: goto L_08B3912C;
    case 327u: goto L_08B39140;
    case 328u: goto L_08B39160;
    case 329u: goto L_08B3916C;
    case 330u: goto L_08B3917C;
    case 331u: goto L_08B39184;
    case 332u: goto L_08B39190;
    case 333u: goto L_08B391A4;
    case 334u: goto L_08B391B8;
    case 335u: goto L_08B391C0;
    case 336u: goto L_08B391C8;
    case 337u: goto L_08B391D0;
    case 338u: goto L_08B391D8;
    case 339u: goto L_08B391E0;
    case 340u: goto L_08B391F0;
    case 341u: goto L_08B391F8;
    case 342u: goto L_08B39200;
    case 343u: goto L_08B39208;
    case 344u: goto L_08B39210;
    case 345u: goto L_08B39218;
    case 346u: goto L_08B39224;
    case 347u: goto L_08B39238;
    case 348u: goto L_08B39250;
    case 349u: goto L_08B39258;
    case 350u: goto L_08B39274;
    case 351u: goto L_08B3927C;
    case 352u: goto L_08B39288;
    case 353u: goto L_08B39290;
    case 354u: goto L_08B39298;
    case 355u: goto L_08B392A8;
    case 356u: goto L_08B392B0;
    case 357u: goto L_08B392B8;
    case 358u: goto L_08B392C0;
    case 359u: goto L_08B392CC;
    case 360u: goto L_08B392D4;
    case 361u: goto L_08B392DC;
    case 362u: goto L_08B392E4;
    case 363u: goto L_08B392F0;
    case 364u: goto L_08B392FC;
    case 365u: goto L_08B3930C;
    case 366u: goto L_08B39318;
    case 367u: goto L_08B39338;
    case 368u: goto L_08B3934C;
    case 369u: goto L_08B39370;
    case 370u: goto L_08B39378;
    case 371u: goto L_08B39380;
    case 372u: goto L_08B3939C;
    case 373u: goto L_08B393C0;
    case 374u: goto L_08B393C8;
    case 375u: goto L_08B393D0;
    case 376u: goto L_08B393D8;
    case 377u: goto L_08B393E0;
    case 378u: goto L_08B393E8;
    case 379u: goto L_08B393F4;
    case 380u: goto L_08B39404;
    case 381u: goto L_08B39410;
    case 382u: goto L_08B39420;
    case 383u: goto L_08B39434;
    case 384u: goto L_08B3943C;
    case 385u: goto L_08B39448;
    case 386u: goto L_08B39454;
    case 387u: goto L_08B39460;
    case 388u: goto L_08B39470;
    case 389u: goto L_08B3947C;
    case 390u: goto L_08B39484;
    case 391u: goto L_08B39490;
    case 392u: goto L_08B3949C;
    case 393u: goto L_08B394A8;
    case 394u: goto L_08B394AC;
    case 395u: goto L_08B394B8;
    case 396u: goto L_08B394C0;
    case 397u: goto L_08B394C8;
    case 398u: goto L_08B394DC;
    case 399u: goto L_08B394E4;
    case 400u: goto L_08B394F8;
    case 401u: goto L_08B39500;
    case 402u: goto L_08B39508;
    case 403u: goto L_08B39520;
    case 404u: goto L_08B3952C;
    case 405u: goto L_08B39538;
    case 406u: goto L_08B39544;
    case 407u: goto L_08B39550;
    case 408u: goto L_08B3955C;
    case 409u: goto L_08B3957C;
    case 410u: goto L_08B39590;
    case 411u: goto L_08B39598;
    case 412u: goto L_08B395A8;
    case 413u: goto L_08B395B8;
    case 414u: goto L_08B395C4;
    case 415u: goto L_08B395E0;
    case 416u: goto L_08B395F4;
    case 417u: goto L_08B39610;
    case 418u: goto L_08B3961C;
    case 419u: goto L_08B3962C;
    case 420u: goto L_08B39640;
    case 421u: goto L_08B39648;
    case 422u: goto L_08B39654;
    case 423u: goto L_08B39660;
    case 424u: goto L_08B3966C;
    case 425u: goto L_08B39678;
    case 426u: goto L_08B39684;
    case 427u: goto L_08B396A4;
    case 428u: goto L_08B396B4;
    case 429u: goto L_08B396D4;
    case 430u: goto L_08B396DC;
    case 431u: goto L_08B396E4;
    case 432u: goto L_08B39700;
    case 433u: goto L_08B39708;
    case 434u: goto L_08B39714;
    case 435u: goto L_08B39728;
    case 436u: goto L_08B39740;
    case 437u: goto L_08B39748;
    case 438u: goto L_08B39750;
    case 439u: goto L_08B3975C;
    case 440u: goto L_08B3977C;
    case 441u: goto L_08B39790;
    case 442u: goto L_08B397B8;
    case 443u: goto L_08B397C0;
    case 444u: goto L_08B397C8;
    case 445u: goto L_08B397DC;
    case 446u: goto L_08B39814;
    case 447u: goto L_08B3982C;
    case 448u: goto L_08B39884;
    case 449u: goto L_08B3988C;
    case 450u: goto L_08B3989C;
    case 451u: goto L_08B398A4;
    case 452u: goto L_08B398B8;
    case 453u: goto L_08B398C0;
    case 454u: goto L_08B398D4;
    case 455u: goto L_08B398DC;
    case 456u: goto L_08B398E8;
    case 457u: goto L_08B398F8;
    case 458u: goto L_08B39908;
    case 459u: goto L_08B39918;
    case 460u: goto L_08B39920;
    case 461u: goto L_08B39938;
    case 462u: goto L_08B39944;
    case 463u: goto L_08B39948;
    case 464u: goto L_08B39970;
    case 465u: goto L_08B39978;
    case 466u: goto L_08B39984;
    case 467u: goto L_08B3999C;
    case 468u: goto L_08B399A8;
    case 469u: goto L_08B399C4;
    case 470u: goto L_08B399D0;
    case 471u: goto L_08B399D8;
    case 472u: goto L_08B399E0;
    case 473u: goto L_08B399EC;
    case 474u: goto L_08B39A18;
    case 475u: goto L_08B39A34;
    case 476u: goto L_08B39A70;
    case 477u: goto L_08B39A78;
    case 478u: goto L_08B39A90;
    case 479u: goto L_08B39AB4;
    case 480u: goto L_08B39ACC;
    case 481u: goto L_08B39AD8;
    case 482u: goto L_08B39AF8;
    case 483u: goto L_08B39B04;
    case 484u: goto L_08B39B44;
    case 485u: goto L_08B39B50;
    case 486u: goto L_08B39B9C;
    case 487u: goto L_08B39BA8;
    case 488u: goto L_08B39BB4;
    case 489u: goto L_08B39BBC;
    case 490u: goto L_08B39BC0;
    case 491u: goto L_08B39BC8;
    case 492u: goto L_08B39BD0;
    case 493u: goto L_08B39BFC;
    case 494u: goto L_08B39C04;
    case 495u: goto L_08B39C38;
    case 496u: goto L_08B39C40;
    case 497u: goto L_08B39C48;
    case 498u: goto L_08B39C50;
    case 499u: goto L_08B39C58;
    case 500u: goto L_08B39C6C;
    case 501u: goto L_08B39C74;
    case 502u: goto L_08B39C7C;
    case 503u: goto L_08B39CB4;
    case 504u: goto L_08B39CD0;
    case 505u: goto L_08B39CF4;
    case 506u: goto L_08B39CFC;
    case 507u: goto L_08B39D10;
    case 508u: goto L_08B39D18;
    case 509u: goto L_08B39D30;
    case 510u: goto L_08B39D38;
    case 511u: goto L_08B39D50;
    case 512u: goto L_08B39D58;
    case 513u: goto L_08B39D70;
    case 514u: goto L_08B39D78;
    case 515u: goto L_08B39D90;
    case 516u: goto L_08B39D98;
    case 517u: goto L_08B39DBC;
    case 518u: goto L_08B39DC4;
    case 519u: goto L_08B39DDC;
    case 520u: goto L_08B39DE4;
    case 521u: goto L_08B39E08;
    case 522u: goto L_08B39E2C;
    case 523u: goto L_08B39E5C;
    case 524u: goto L_08B39E64;
    case 525u: goto L_08B39E6C;
    case 526u: goto L_08B39E74;
    case 527u: goto L_08B39E7C;
    case 528u: goto L_08B39E84;
    case 529u: goto L_08B39E8C;
    case 530u: goto L_08B39E94;
    case 531u: goto L_08B39EBC;
    case 532u: goto L_08B39EE0;
    case 533u: goto L_08B39F00;
    case 534u: goto L_08B39F38;
    case 535u: goto L_08B39F44;
    case 536u: goto L_08B39F54;
    case 537u: goto L_08B39F60;
    case 538u: goto L_08B39F68;
    case 539u: goto L_08B39F7C;
    case 540u: goto L_08B39F88;
    case 541u: goto L_08B39F90;
    case 542u: goto L_08B39F98;
    case 543u: goto L_08B39FA0;
    case 544u: goto L_08B39FA8;
    case 545u: goto L_08B39FB0;
    case 546u: goto L_08B39FB8;
    case 547u: goto L_08B39FC0;
    case 548u: goto L_08B39FD0;
    case 549u: goto L_08B39FEC;
    case 550u: goto L_08B39FF4;
    case 551u: goto L_08B3A000;
    case 552u: goto L_08B3A00C;
    case 553u: goto L_08B3A01C;
    case 554u: goto L_08B3A02C;
    case 555u: goto L_08B3A038;
    case 556u: goto L_08B3A054;
    case 557u: goto L_08B3A068;
    case 558u: goto L_08B3A084;
    case 559u: goto L_08B3A090;
    case 560u: goto L_08B3A09C;
    case 561u: goto L_08B3A0B8;
    case 562u: goto L_08B3A0BC;
    case 563u: goto L_08B3A0C4;
    case 564u: goto L_08B3A0D8;
    case 565u: goto L_08B3A0F0;
    case 566u: goto L_08B3A0F4;
    case 567u: goto L_08B3A0FC;
    case 568u: goto L_08B3A104;
    case 569u: goto L_08B3A10C;
    case 570u: goto L_08B3A118;
    case 571u: goto L_08B3A124;
    case 572u: goto L_08B3A12C;
    case 573u: goto L_08B3A138;
    case 574u: goto L_08B3A14C;
    case 575u: goto L_08B3A168;
    case 576u: goto L_08B3A170;
    case 577u: goto L_08B3A178;
    case 578u: goto L_08B3A184;
    case 579u: goto L_08B3A194;
    case 580u: goto L_08B3A1A0;
    case 581u: goto L_08B3A1C0;
    case 582u: goto L_08B3A1D4;
    case 583u: goto L_08B3A1F8;
    case 584u: goto L_08B3A200;
    case 585u: goto L_08B3A208;
    case 586u: goto L_08B3A218;
    case 587u: goto L_08B3A22C;
    case 588u: goto L_08B3A234;
    case 589u: goto L_08B3A23C;
    case 590u: goto L_08B3A25C;
    case 591u: goto L_08B3A28C;
    case 592u: goto L_08B3A294;
    case 593u: goto L_08B3A29C;
    case 594u: goto L_08B3A2A4;
    case 595u: goto L_08B3A2A8;
    case 596u: goto L_08B3A2B0;
    case 597u: goto L_08B3A2B8;
    case 598u: goto L_08B3A2C4;
    case 599u: goto L_08B3A2D4;
    case 600u: goto L_08B3A2DC;
    case 601u: goto L_08B3A2E8;
    case 602u: goto L_08B3A2F8;
    case 603u: goto L_08B3A314;
    case 604u: goto L_08B3A32C;
    case 605u: goto L_08B3A334;
    case 606u: goto L_08B3A33C;
    case 607u: goto L_08B3A344;
    case 608u: goto L_08B3A34C;
    case 609u: goto L_08B3A354;
    case 610u: goto L_08B3A35C;
    case 611u: goto L_08B3A364;
    case 612u: goto L_08B3A370;
    case 613u: goto L_08B3A37C;
    case 614u: goto L_08B3A388;
    case 615u: goto L_08B3A394;
    case 616u: goto L_08B3A3B0;
    case 617u: goto L_08B3A3C0;
    case 618u: goto L_08B3A3C8;
    case 619u: goto L_08B3A3D8;
    case 620u: goto L_08B3A3E8;
    case 621u: goto L_08B3A3F4;
    case 622u: goto L_08B3A410;
    case 623u: goto L_08B3A41C;
    case 624u: goto L_08B3A424;
    case 625u: goto L_08B3A430;
    case 626u: goto L_08B3A448;
    case 627u: goto L_08B3A464;
    case 628u: goto L_08B3A470;
    case 629u: goto L_08B3A494;
    case 630u: goto L_08B3A49C;
    case 631u: goto L_08B3A4A4;
    case 632u: goto L_08B3A4D0;
    case 633u: goto L_08B3A4D8;
    case 634u: goto L_08B3A4E4;
    case 635u: goto L_08B3A4F4;
    case 636u: goto L_08B3A4FC;
    case 637u: goto L_08B3A508;
    case 638u: goto L_08B3A524;
    case 639u: goto L_08B3A538;
    case 640u: goto L_08B3A540;
    case 641u: goto L_08B3A548;
    case 642u: goto L_08B3A550;
    case 643u: goto L_08B3A558;
    case 644u: goto L_08B3A560;
    case 645u: goto L_08B3A56C;
    case 646u: goto L_08B3A578;
    case 647u: goto L_08B3A584;
    case 648u: goto L_08B3A594;
    case 649u: goto L_08B3A5B0;
    case 650u: goto L_08B3A5C4;
    case 651u: goto L_08B3A5E8;
    case 652u: goto L_08B3A600;
    case 653u: goto L_08B3A60C;
    case 654u: goto L_08B3A614;
    case 655u: goto L_08B3A618;
    case 656u: goto L_08B3A620;
    case 657u: goto L_08B3A62C;
    case 658u: goto L_08B3A638;
    case 659u: goto L_08B3A640;
    case 660u: goto L_08B3A644;
    case 661u: goto L_08B3A648;
    case 662u: goto L_08B3A654;
    case 663u: goto L_08B3A66C;
    case 664u: goto L_08B3A674;
    case 665u: goto L_08B3A67C;
    case 666u: goto L_08B3A684;
    case 667u: goto L_08B3A6A4;
    case 668u: goto L_08B3A6AC;
    case 669u: goto L_08B3A6B4;
    case 670u: goto L_08B3A6BC;
    case 671u: goto L_08B3A6C8;
    case 672u: goto L_08B3A6E8;
    case 673u: goto L_08B3A6FC;
    case 674u: goto L_08B3A720;
    case 675u: goto L_08B3A728;
    case 676u: goto L_08B3A730;
    case 677u: goto L_08B3A750;
    case 678u: goto L_08B3A77C;
    case 679u: goto L_08B3A784;
    case 680u: goto L_08B3A78C;
    case 681u: goto L_08B3A794;
    case 682u: goto L_08B3A79C;
    case 683u: goto L_08B3A7A4;
    case 684u: goto L_08B3A7B0;
    case 685u: goto L_08B3A7C0;
    case 686u: goto L_08B3A7C8;
    case 687u: goto L_08B3A7F0;
    case 688u: goto L_08B3A814;
    case 689u: goto L_08B3A834;
    case 690u: goto L_08B3A86C;
    case 691u: goto L_08B3A878;
    case 692u: goto L_08B3A888;
    case 693u: goto L_08B3A890;
    case 694u: goto L_08B3A8A0;
    case 695u: goto L_08B3A8A8;
    case 696u: goto L_08B3A8B4;
    case 697u: goto L_08B3A8C0;
    case 698u: goto L_08B3A8D0;
    case 699u: goto L_08B3A8E0;
    case 700u: goto L_08B3A8EC;
    case 701u: goto L_08B3A908;
    case 702u: goto L_08B3A91C;
    case 703u: goto L_08B3A938;
    case 704u: goto L_08B3A93C;
    case 705u: goto L_08B3A944;
    case 706u: goto L_08B3A94C;
    case 707u: goto L_08B3A954;
    case 708u: goto L_08B3A960;
    case 709u: goto L_08B3A96C;
    case 710u: goto L_08B3A974;
    case 711u: goto L_08B3A980;
    case 712u: goto L_08B3A994;
    case 713u: goto L_08B3A9AC;
    case 714u: goto L_08B3A9B4;
    case 715u: goto L_08B3A9BC;
    case 716u: goto L_08B3A9C8;
    case 717u: goto L_08B3A9E8;
    case 718u: goto L_08B3A9FC;
    case 719u: goto L_08B3AA20;
    case 720u: goto L_08B3AA28;
    case 721u: goto L_08B3AA30;
    case 722u: goto L_08B3AA4C;
    case 723u: goto L_08B3AA60;
    case 724u: goto L_08B3AA7C;
    case 725u: goto L_08B3AA84;
    case 726u: goto L_08B3AA8C;
    case 727u: goto L_08B3AA94;
    case 728u: goto L_08B3AA98;
    case 729u: goto L_08B3AAA4;
    case 730u: goto L_08B3AABC;
    case 731u: goto L_08B3AAC8;
    case 732u: goto L_08B3AADC;
    case 733u: goto L_08B3AAE8;
    case 734u: goto L_08B3AAF0;
    case 735u: goto L_08B3AAF8;
    case 736u: goto L_08B3AB10;
    case 737u: goto L_08B3AB14;
    case 738u: goto L_08B3AB24;
    case 739u: goto L_08B3AB2C;
    case 740u: goto L_08B3AB34;
    case 741u: goto L_08B3AB3C;
    case 742u: goto L_08B3AB50;
    case 743u: goto L_08B3AB5C;
    case 744u: goto L_08B3AB64;
    case 745u: goto L_08B3AB68;
    case 746u: goto L_08B3AB70;
    case 747u: goto L_08B3AB78;
    case 748u: goto L_08B3AB88;
    case 749u: goto L_08B3AB8C;
    case 750u: goto L_08B3AB9C;
    case 751u: goto L_08B3ABB4;
    case 752u: goto L_08B3ABC0;
    case 753u: goto L_08B3ABCC;
    case 754u: goto L_08B3ABD0;
    case 755u: goto L_08B3ABDC;
    case 756u: goto L_08B3ABE8;
    case 757u: goto L_08B3ABF0;
    case 758u: goto L_08B3ABF4;
    case 759u: goto L_08B3AC04;
    case 760u: goto L_08B3AC10;
    case 761u: goto L_08B3AC1C;
    case 762u: goto L_08B3AC28;
    case 763u: goto L_08B3AC34;
    case 764u: goto L_08B3AC3C;
    case 765u: goto L_08B3AC44;
    case 766u: goto L_08B3AC4C;
    case 767u: goto L_08B3AC60;
    case 768u: goto L_08B3AC70;
    case 769u: goto L_08B3AC80;
    case 770u: goto L_08B3AC90;
    case 771u: goto L_08B3AC98;
    case 772u: goto L_08B3ACA0;
    case 773u: goto L_08B3ACA8;
    case 774u: goto L_08B3ACB0;
    case 775u: goto L_08B3ACBC;
    case 776u: goto L_08B3ACDC;
    case 777u: goto L_08B3ACE8;
    case 778u: goto L_08B3AD00;
    case 779u: goto L_08B3AD0C;
    case 780u: goto L_08B3AD24;
    case 781u: goto L_08B3AD30;
    case 782u: goto L_08B3AD40;
    case 783u: goto L_08B3AD4C;
    case 784u: goto L_08B3AD54;
    case 785u: goto L_08B3AD60;
    case 786u: goto L_08B3AD68;
    case 787u: goto L_08B3AD74;
    case 788u: goto L_08B3AD7C;
    case 789u: goto L_08B3AD88;
    case 790u: goto L_08B3AD90;
    case 791u: goto L_08B3AD98;
    case 792u: goto L_08B3ADA0;
    case 793u: goto L_08B3ADA8;
    case 794u: goto L_08B3ADB0;
    case 795u: goto L_08B3ADB8;
    case 796u: goto L_08B3ADC0;
    case 797u: goto L_08B3ADC8;
    case 798u: goto L_08B3ADD0;
    case 799u: goto L_08B3ADD8;
    case 800u: goto L_08B3ADE0;
    case 801u: goto L_08B3ADE8;
    case 802u: goto L_08B3ADF0;
    case 803u: goto L_08B3ADF8;
    case 804u: goto L_08B3AE00;
    case 805u: goto L_08B3AE08;
    case 806u: goto L_08B3AE10;
    case 807u: goto L_08B3AE18;
    case 808u: goto L_08B3AE20;
    case 809u: goto L_08B3AE28;
    case 810u: goto L_08B3AE30;
    case 811u: goto L_08B3AE38;
    case 812u: goto L_08B3AE40;
    case 813u: goto L_08B3AE48;
    case 814u: goto L_08B3AE4C;
    case 815u: goto L_08B3AE5C;
    case 816u: goto L_08B3AE6C;
    case 817u: goto L_08B3AE90;
    case 818u: goto L_08B3AE98;
    case 819u: goto L_08B3AEA0;
    case 820u: goto L_08B3AEB4;
    case 821u: goto L_08B3AEB8;
    case 822u: goto L_08B3AEC4;
    case 823u: goto L_08B3AEFC;
    case 824u: goto L_08B3AF04;
    case 825u: goto L_08B3AF10;
    case 826u: goto L_08B3AF18;
    case 827u: goto L_08B3AF20;
    case 828u: goto L_08B3AF28;
    case 829u: goto L_08B3AF30;
    case 830u: goto L_08B3AF38;
    case 831u: goto L_08B3AF40;
    case 832u: goto L_08B3AF48;
    case 833u: goto L_08B3AF50;
    case 834u: goto L_08B3AF58;
    case 835u: goto L_08B3AF68;
    case 836u: goto L_08B3AF70;
    case 837u: goto L_08B3AF78;
    case 838u: goto L_08B3AF80;
    case 839u: goto L_08B3AF88;
    case 840u: goto L_08B3AF90;
    case 841u: goto L_08B3AF9C;
    case 842u: goto L_08B3AFA4;
    case 843u: goto L_08B3AFAC;
    case 844u: goto L_08B3AFB4;
    case 845u: goto L_08B3AFBC;
    case 846u: goto L_08B3AFC4;
    case 847u: goto L_08B3AFCC;
    case 848u: goto L_08B3AFD4;
    case 849u: goto L_08B3AFDC;
    case 850u: goto L_08B3AFE4;
    case 851u: goto L_08B3AFEC;
    case 852u: goto L_08B3AFF4;
    case 853u: goto L_08B3AFFC;
    case 854u: goto L_08B3B004;
    case 855u: goto L_08B3B024;
    case 856u: goto L_08B3B050;
    case 857u: goto L_08B3B05C;
    case 858u: goto L_08B3B070;
    case 859u: goto L_08B3B0A0;
    case 860u: goto L_08B3B0A8;
    case 861u: goto L_08B3B0B4;
    case 862u: goto L_08B3B0C0;
    case 863u: goto L_08B3B0C8;
    case 864u: goto L_08B3B0E4;
    case 865u: goto L_08B3B120;
    case 866u: goto L_08B3B128;
    case 867u: goto L_08B3B134;
    case 868u: goto L_08B3B13C;
    case 869u: goto L_08B3B144;
    case 870u: goto L_08B3B14C;
    case 871u: goto L_08B3B158;
    case 872u: goto L_08B3B160;
    case 873u: goto L_08B3B168;
    case 874u: goto L_08B3B170;
    case 875u: goto L_08B3B17C;
    case 876u: goto L_08B3B184;
    case 877u: goto L_08B3B194;
    case 878u: goto L_08B3B19C;
    case 879u: goto L_08B3B1A4;
    case 880u: goto L_08B3B1AC;
    case 881u: goto L_08B3B1B4;
    case 882u: goto L_08B3B1BC;
    case 883u: goto L_08B3B1C4;
    case 884u: goto L_08B3B1D0;
    case 885u: goto L_08B3B1D8;
    case 886u: goto L_08B3B1E0;
    case 887u: goto L_08B3B1E8;
    case 888u: goto L_08B3B1F4;
    case 889u: goto L_08B3B1FC;
    case 890u: goto L_08B3B204;
    case 891u: goto L_08B3B20C;
    case 892u: goto L_08B3B214;
    case 893u: goto L_08B3B21C;
    case 894u: goto L_08B3B228;
    case 895u: goto L_08B3B230;
    case 896u: goto L_08B3B238;
    case 897u: goto L_08B3B240;
    case 898u: goto L_08B3B264;
    case 899u: goto L_08B3B290;
    case 900u: goto L_08B3B29C;
    case 901u: goto L_08B3B2B0;
    case 902u: goto L_08B3B2E0;
    case 903u: goto L_08B3B2E8;
    case 904u: goto L_08B3B2F4;
    case 905u: goto L_08B3B300;
    case 906u: goto L_08B3B308;
    case 907u: goto L_08B3B314;
    case 908u: goto L_08B3B320;
    case 909u: goto L_08B3B328;
    case 910u: goto L_08B3B344;
    case 911u: goto L_08B3B374;
    case 912u: goto L_08B3B384;
    case 913u: goto L_08B3B38C;
    case 914u: goto L_08B3B398;
    case 915u: goto L_08B3B3A8;
    case 916u: goto L_08B3B3B0;
    case 917u: goto L_08B3B3B8;
    case 918u: goto L_08B3B3C8;
    case 919u: goto L_08B3B3D0;
    case 920u: goto L_08B3B3D8;
    case 921u: goto L_08B3B3E4;
    case 922u: goto L_08B3B3E8;
    case 923u: goto L_08B3B3F0;
    case 924u: goto L_08B3B3F8;
    case 925u: goto L_08B3B400;
    case 926u: goto L_08B3B410;
    case 927u: goto L_08B3B418;
    case 928u: goto L_08B3B41C;
    case 929u: goto L_08B3B43C;
    case 930u: goto L_08B3B448;
    case 931u: goto L_08B3B450;
    case 932u: goto L_08B3B458;
    case 933u: goto L_08B3B464;
    case 934u: goto L_08B3B46C;
    case 935u: goto L_08B3B474;
    case 936u: goto L_08B3B47C;
    case 937u: goto L_08B3B484;
    case 938u: goto L_08B3B48C;
    case 939u: goto L_08B3B494;
    case 940u: goto L_08B3B4A8;
    case 941u: goto L_08B3B4B0;
    case 942u: goto L_08B3B4B8;
    case 943u: goto L_08B3B4DC;
    case 944u: goto L_08B3B4E8;
    case 945u: goto L_08B3B51C;
    case 946u: goto L_08B3B530;
    case 947u: goto L_08B3B540;
    case 948u: goto L_08B3B544;
    case 949u: goto L_08B3B57C;
    case 950u: goto L_08B3B580;
    case 951u: goto L_08B3B5A0;
    case 952u: goto L_08B3B5E4;
    case 953u: goto L_08B3B5FC;
    case 954u: goto L_08B3B600;
    case 955u: goto L_08B3B614;
    case 956u: goto L_08B3B618;
    case 957u: goto L_08B3B670;
    case 958u: goto L_08B3B698;
    case 959u: goto L_08B3B6A4;
    case 960u: goto L_08B3B6C4;
    case 961u: goto L_08B3B6EC;
    case 962u: goto L_08B3B6F8;
    case 963u: goto L_08B3B724;
    case 964u: goto L_08B3B734;
    case 965u: goto L_08B3B750;
    case 966u: goto L_08B3B760;
    case 967u: goto L_08B3B778;
    case 968u: goto L_08B3B78C;
    case 969u: goto L_08B3B798;
    case 970u: goto L_08B3B7A4;
    case 971u: goto L_08B3B7AC;
    case 972u: goto L_08B3B7B4;
    case 973u: goto L_08B3B7D0;
    case 974u: goto L_08B3B7DC;
    case 975u: goto L_08B3B7E4;
    case 976u: goto L_08B3B7E8;
    case 977u: goto L_08B3B824;
    case 978u: goto L_08B3B83C;
    case 979u: goto L_08B3B84C;
    case 980u: goto L_08B3B864;
    case 981u: goto L_08B3B86C;
    case 982u: goto L_08B3B870;
    case 983u: goto L_08B3B880;
    case 984u: goto L_08B3B8A8;
    case 985u: goto L_08B3B8B4;
    case 986u: goto L_08B3B8C4;
    case 987u: goto L_08B3B8CC;
    case 988u: goto L_08B3B8E8;
    case 989u: goto L_08B3B8F8;
    case 990u: goto L_08B3B920;
    case 991u: goto L_08B3B92C;
    case 992u: goto L_08B3B948;
    case 993u: goto L_08B3B968;
    case 994u: goto L_08B3B97C;
    case 995u: goto L_08B3B988;
    case 996u: goto L_08B3B990;
    case 997u: goto L_08B3B99C;
    case 998u: goto L_08B3B9A4;
    case 999u: goto L_08B3B9A8;
    case 1000u: goto L_08B3B9BC;
    case 1001u: goto L_08B3B9CC;
    case 1002u: goto L_08B3BA20;
    case 1003u: goto L_08B3BA34;
    case 1004u: goto L_08B3BA48;
    case 1005u: goto L_08B3BA54;
    case 1006u: goto L_08B3BA74;
    case 1007u: goto L_08B3BA88;
    case 1008u: goto L_08B3BAA4;
    case 1009u: goto L_08B3BAB0;
    case 1010u: goto L_08B3BAB4;
    case 1011u: goto L_08B3BB2C;
    case 1012u: goto L_08B3BB3C;
    case 1013u: goto L_08B3BB78;
    case 1014u: goto L_08B3BB88;
    case 1015u: goto L_08B3BBA4;
    case 1016u: goto L_08B3BBB4;
    case 1017u: goto L_08B3BBC8;
    case 1018u: goto L_08B3BBD0;
    case 1019u: goto L_08B3BBD8;
    case 1020u: goto L_08B3BC20;
    case 1021u: goto L_08B3BC3C;
    case 1022u: goto L_08B3BC4C;
    case 1023u: goto L_08B3BC58;
    case 1024u: goto L_08B3BC64;
    case 1025u: goto L_08B3BC7C;
    case 1026u: goto L_08B3BC84;
    case 1027u: goto L_08B3BCC0;
    case 1028u: goto L_08B3BCD4;
    case 1029u: goto L_08B3BD24;
    case 1030u: goto L_08B3BD40;
    case 1031u: goto L_08B3BD54;
    case 1032u: goto L_08B3BD5C;
    case 1033u: goto L_08B3BDB4;
    case 1034u: goto L_08B3BDC8;
    case 1035u: goto L_08B3BDE4;
    case 1036u: goto L_08B3BE14;
    case 1037u: goto L_08B3BE20;
    case 1038u: goto L_08B3BE34;
    case 1039u: goto L_08B3BE4C;
    case 1040u: goto L_08B3BE60;
    case 1041u: goto L_08B3BE74;
    case 1042u: goto L_08B3BEA8;
    case 1043u: goto L_08B3BEDC;
    case 1044u: goto L_08B3BEF4;
    case 1045u: goto L_08B3BEFC;
    case 1046u: goto L_08B3BF04;
    case 1047u: goto L_08B3BF0C;
    case 1048u: goto L_08B3BF20;
    case 1049u: goto L_08B3BF28;
    case 1050u: goto L_08B3BF30;
    case 1051u: goto L_08B3BF38;
    case 1052u: goto L_08B3BF4C;
    case 1053u: goto L_08B3BF50;
    case 1054u: goto L_08B3BF64;
    case 1055u: goto L_08B3BF74;
    case 1056u: goto L_08B3BF7C;
    case 1057u: goto L_08B3BF8C;
    case 1058u: goto L_08B3BF9C;
    case 1059u: goto L_08B3BFB4;
    case 1060u: goto L_08B3BFC8;
    case 1061u: goto L_08B3BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08B38000u;
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
L_08B38000:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 938u, 0x08B37FF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B38008;
    }
L_08B38008:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B38284;
      }
      goto L_08B38010;
    }
L_08B38010:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B3818C;
      }
      goto L_08B38018;
    }
L_08B38018:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B38854;
      }
      goto L_08B38020;
    }
L_08B38020:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08B388E4;
      }
      goto L_08B38028;
    }
L_08B38028:
    aot_gpr_31 = (0x08B38030u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 7u, 0x08B38030u, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38030u) goto L_08B38030;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38030:
    aot_gpr_31 = (0x08B38038u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 8u, 0x08B38038u, 0x08B331CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 661u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 661u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 661u, 0x08B331CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38038u) goto L_08B38038;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38038:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B38184;
      }
      goto L_08B38040;
    }
L_08B38040:
    aot_gpr_31 = (0x08B38048u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 10u, 0x08B38048u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38048u) goto L_08B38048;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38048:
    aot_gpr_31 = (0x08B38050u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 11u, 0x08B38050u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38050u) goto L_08B38050;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38050:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B38090;
      }
      goto L_08B3805C;
    }
L_08B3805C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4356));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08B38070u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0090.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 13u, 0x08B38070u, 0x0896D898u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0090_entry(rt, ctx, 399u, aot_mem);
#else
        recomp_unit_0090_entry(rt, ctx, 399u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38070u) goto L_08B38070;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38070:
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 66u);
    aot_gpr_31 = (0x08B38088u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 14u, 0x08B38088u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38088u) goto L_08B38088;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38088:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B38184;
      }
      goto L_08B38090;
    }
L_08B38090:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B38158;
      }
      goto L_08B38098;
    }
L_08B38098:
    aot_gpr_31 = (0x08B380A0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 17u, 0x08B380A0u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B380A0u) goto L_08B380A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B380A0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1653))))));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B38158;
      }
      goto L_08B380B0;
    }
L_08B380B0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17331)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B380F0;
      }
      goto L_08B380BC;
    }
L_08B380BC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 500 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B38124;
      }
      goto L_08B380F0;
    }
L_08B380F0:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08B38100u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38100u) goto L_08B38100;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38100:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_gpr_31 = (0x08B38110u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38110u) goto L_08B38110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38110:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B38184;
      }
      goto L_08B38124;
    }
L_08B38124:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4364));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08B38138u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0090.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 24u, 0x08B38138u, 0x0896D898u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0090_entry(rt, ctx, 399u, aot_mem);
#else
        recomp_unit_0090_entry(rt, ctx, 399u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38138u) goto L_08B38138;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38138:
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 63u);
    aot_gpr_31 = (0x08B38150u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 25u, 0x08B38150u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38150u) goto L_08B38150;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38150:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B38184;
      }
      goto L_08B38158;
    }
L_08B38158:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4372));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08B3816Cu);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0090.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 27u, 0x08B3816Cu, 0x0896D898u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0090_entry(rt, ctx, 399u, aot_mem);
#else
        recomp_unit_0090_entry(rt, ctx, 399u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3816Cu) goto L_08B3816C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3816C:
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 66u);
    aot_gpr_31 = (0x08B38184u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 28u, 0x08B38184u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38184u) goto L_08B38184;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38184:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 938u, 0x08B37FF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B3818C;
    }
L_08B3818C:
    aot_gpr_31 = (0x08B38194u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 30u, 0x08B38194u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38194u) goto L_08B38194;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38194:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B381B0;
      }
      goto L_08B3819C;
    }
L_08B3819C:
    aot_gpr_31 = (0x08B381A4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 32u, 0x08B381A4u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B381A4u) goto L_08B381A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B381A4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B381B0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 33u, 0x08B381B0u, 0x08B33BD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 783u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 783u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 783u, 0x08B33BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B381B0u) goto L_08B381B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B381B0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B381D0;
      }
      goto L_08B381C0;
    }
L_08B381C0:
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B381DC;
      }
      goto L_08B381D0;
    }
L_08B381D0:
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B381DC;
L_08B381DC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B381F8;
    }
    goto L_08B381F8;
L_08B381F8:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B38238;
      }
      goto L_08B3820C;
    }
L_08B3820C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2000));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B38238u);
    aot_gpr_6 = (0u | 74u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 39u, 0x08B38238u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38238u) goto L_08B38238;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38238:
    aot_gpr_31 = (0x08B38240u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 40u, 0x08B38240u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38240u) goto L_08B38240;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38240:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B38254;
      }
      goto L_08B38248;
    }
L_08B38248:
    aot_gpr_31 = (0x08B38250u);
    ctx.gpr[17] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 42u, 0x08B38250u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38250u) goto L_08B38250;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38250:
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(627), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08B38254;
L_08B38254:
    aot_gpr_31 = (0x08B3825Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 44u, 0x08B3825Cu, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3825Cu) goto L_08B3825C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3825C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(61)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B3827C;
      }
      goto L_08B3826C;
    }
L_08B3826C:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(4380));
    aot_gpr_4 = (0u | 363u);
    aot_gpr_31 = (0x08B3827Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 46u, 0x08B3827Cu, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3827Cu) goto L_08B3827C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3827C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 938u, 0x08B37FF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B38284;
    }
L_08B38284:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(156)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3884C;
      }
      goto L_08B38298;
    }
L_08B38298:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(61)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B382D0;
      }
      goto L_08B382A8;
    }
L_08B382A8:
    aot_gpr_31 = (0x08B382B0u);
    aot_gpr_4 = (0u | 363u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 50u, 0x08B382B0u, 0x08AD3698u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 607u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 607u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B382B0u) goto L_08B382B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B382B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B382D0;
      }
      goto L_08B382B8;
    }
L_08B382B8:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(4380));
    aot_gpr_4 = (0u | 363u);
    aot_gpr_31 = (0x08B382C8u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 52u, 0x08B382C8u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B382C8u) goto L_08B382C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B382C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3884C;
      }
      goto L_08B382D0;
    }
L_08B382D0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(61)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B38304;
      }
      goto L_08B382E0;
    }
L_08B382E0:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B38344;
      }
      goto L_08B382EC;
    }
L_08B382EC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 67u);
    aot_gpr_31 = (0x08B382FCu);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 56u, 0x08B382FCu, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B382FCu) goto L_08B382FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B382FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B38344;
      }
      goto L_08B38304;
    }
L_08B38304:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3831C;
      }
      goto L_08B3830C;
    }
L_08B3830C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B38334;
      }
      goto L_08B38314;
    }
L_08B38314:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B38344;
      }
      goto L_08B3831C;
    }
L_08B3831C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 68u);
    aot_gpr_31 = (0x08B3832Cu);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 61u, 0x08B3832Cu, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3832Cu) goto L_08B3832C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3832C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B38344;
      }
      goto L_08B38334;
    }
L_08B38334:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 69u);
    aot_gpr_31 = (0x08B38344u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 63u, 0x08B38344u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38344u) goto L_08B38344;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38344:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17331)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B383BC;
      }
      goto L_08B38358;
    }
L_08B38358:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(172)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-500));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_08B38394;
    }
    goto L_08B38394;
L_08B38394:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(172), aot_gpr_5);
    goto L_08B383BC;
L_08B383BC:
    aot_gpr_31 = (0x08B383C4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 67u, 0x08B383C4u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B383C4u) goto L_08B383C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B383C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B384F8;
      }
      goto L_08B383CC;
    }
L_08B383CC:
    aot_gpr_31 = (0x08B383D4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 69u, 0x08B383D4u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B383D4u) goto L_08B383D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B383D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B384F8;
      }
      goto L_08B383E0;
    }
L_08B383E0:
    aot_gpr_31 = (0x08B383E8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 71u, 0x08B383E8u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B383E8u) goto L_08B383E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B383E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B38438;
      }
      goto L_08B383F4;
    }
L_08B383F4:
    aot_gpr_31 = (0x08B383FCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 73u, 0x08B383FCu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B383FCu) goto L_08B383FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B383FC:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(1653));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(61)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-8));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 & 7u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_31 = (0x08B38428u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38428u) goto L_08B38428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38428:
    aot_gpr_31 = (0x08B38430u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 75u, 0x08B38430u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38430u) goto L_08B38430;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38430:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1656), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B38438;
      }
      goto L_08B38438;
    }
L_08B38438:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B384D4;
      }
      goto L_08B38448;
    }
L_08B38448:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_08B38460;
      }
      goto L_08B38450;
    }
L_08B38450:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
        goto L_08B38468;
    }
    goto L_08B38460;
L_08B38460:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08B38498;
      }
      goto L_08B38468;
    }
L_08B38468:
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 128u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (aot_gpr_5 << 5u);
      if (branch_taken) {
          goto L_08B38484;
      }
      goto L_08B3847C;
    }
L_08B3847C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08B38498;
      }
      goto L_08B38484;
    }
L_08B38484:
    ctx.gpr[8] = (0u + aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 << 6u);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    goto L_08B38498;
L_08B38498:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B384C8;
      }
      goto L_08B384A0;
    }
L_08B384A0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08B384C8;
      }
      goto L_08B384AC;
    }
L_08B384AC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (0u | 80u);
    ctx.gpr[7] = (ctx.gpr[7] & 496u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
      if (branch_taken) {
          goto L_08B384C8;
      }
      goto L_08B384C0;
    }
L_08B384C0:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(668), 0u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(1656), 0u);
    goto L_08B384C8;
L_08B384C8:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B38448;
      }
      goto L_08B384D4;
    }
L_08B384D4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(61)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B384EC;
      }
      goto L_08B384E4;
    }
L_08B384E4:
    aot_gpr_31 = (0x08B384ECu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0090.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 90u, 0x08B384ECu, 0x0896E500u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0090_entry(rt, ctx, 564u, aot_mem);
#else
        recomp_unit_0090_entry(rt, ctx, 564u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 564u, 0x0896E500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B384ECu) goto L_08B384EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B384EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9324)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(10));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9324), aot_gpr_4);
    goto L_08B384F8;
L_08B384F8:
    aot_gpr_16 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(61)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3851C;
      }
      goto L_08B38508;
    }
L_08B38508:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B387E0;
      }
      goto L_08B38514;
    }
L_08B38514:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B38534;
      }
      goto L_08B3851C;
    }
L_08B3851C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B38654;
      }
      goto L_08B38524;
    }
L_08B38524:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B38774;
      }
      goto L_08B3852C;
    }
L_08B3852C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B387E0;
      }
      goto L_08B38534;
    }
L_08B38534:
    aot_gpr_31 = (0x08B3853Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3853Cu) goto L_08B3853C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3853C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(150)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_08B3855C;
    }
    goto L_08B3854C;
L_08B3854C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08B3864C;
      }
      goto L_08B38554;
    }
L_08B38554:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3856C;
      }
      goto L_08B3855C;
    }
L_08B3855C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B385E0;
      }
      goto L_08B38564;
    }
L_08B38564:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3864C;
      }
      goto L_08B3856C;
    }
L_08B3856C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B38584;
    }
    goto L_08B38578;
L_08B38578:
    aot_gpr_31 = (0x08B38580u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38580u) goto L_08B38580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38580:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B38584;
L_08B38584:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08B385B4;
      }
      goto L_08B3858C;
    }
L_08B3858C:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x08B38598u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 108u, 0x08B38598u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38598u) goto L_08B38598;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38598:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B385B0;
      }
      goto L_08B385A4;
    }
L_08B385A4:
    aot_gpr_31 = (0x08B385ACu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B385ACu) goto L_08B385AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B385AC:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    goto L_08B385B0;
L_08B385B0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), aot_gpr_16);
    goto L_08B385B4;
L_08B385B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08B385C0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(4392));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 113u, 0x08B385C0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B385C0u) goto L_08B385C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B385C0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08B385D8u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 114u, 0x08B385D8u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B385D8u) goto L_08B385D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B385D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3864C;
      }
      goto L_08B385E0;
    }
L_08B385E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B385F8;
    }
    goto L_08B385EC;
L_08B385EC:
    aot_gpr_31 = (0x08B385F4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B385F4u) goto L_08B385F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B385F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B385F8;
L_08B385F8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08B38628;
      }
      goto L_08B38600;
    }
L_08B38600:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x08B3860Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 120u, 0x08B3860Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3860Cu) goto L_08B3860C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3860C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B38624;
      }
      goto L_08B38618;
    }
L_08B38618:
    aot_gpr_31 = (0x08B38620u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38620u) goto L_08B38620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38620:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    goto L_08B38624;
L_08B38624:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), aot_gpr_16);
    goto L_08B38628;
L_08B38628:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08B38634u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(4400));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 125u, 0x08B38634u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38634u) goto L_08B38634;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38634:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08B3864Cu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 126u, 0x08B3864Cu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3864Cu) goto L_08B3864C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3864C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B387E0;
      }
      goto L_08B38654;
    }
L_08B38654:
    aot_gpr_31 = (0x08B3865Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3865Cu) goto L_08B3865C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3865C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(150)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_08B3867C;
    }
    goto L_08B3866C;
L_08B3866C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08B3876C;
      }
      goto L_08B38674;
    }
L_08B38674:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3868C;
      }
      goto L_08B3867C;
    }
L_08B3867C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B38700;
      }
      goto L_08B38684;
    }
L_08B38684:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3876C;
      }
      goto L_08B3868C;
    }
L_08B3868C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B386A4;
    }
    goto L_08B38698;
L_08B38698:
    aot_gpr_31 = (0x08B386A0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B386A0u) goto L_08B386A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B386A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B386A4;
L_08B386A4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08B386D4;
      }
      goto L_08B386AC;
    }
L_08B386AC:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x08B386B8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 138u, 0x08B386B8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B386B8u) goto L_08B386B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B386B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B386D0;
      }
      goto L_08B386C4;
    }
L_08B386C4:
    aot_gpr_31 = (0x08B386CCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B386CCu) goto L_08B386CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B386CC:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    goto L_08B386D0;
L_08B386D0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), aot_gpr_16);
    goto L_08B386D4;
L_08B386D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08B386E0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(4408));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 143u, 0x08B386E0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B386E0u) goto L_08B386E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B386E0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08B386F8u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 144u, 0x08B386F8u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B386F8u) goto L_08B386F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B386F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3876C;
      }
      goto L_08B38700;
    }
L_08B38700:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B38718;
    }
    goto L_08B3870C;
L_08B3870C:
    aot_gpr_31 = (0x08B38714u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38714u) goto L_08B38714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38714:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B38718;
L_08B38718:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08B38748;
      }
      goto L_08B38720;
    }
L_08B38720:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x08B3872Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 150u, 0x08B3872Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3872Cu) goto L_08B3872C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3872C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B38744;
      }
      goto L_08B38738;
    }
L_08B38738:
    aot_gpr_31 = (0x08B38740u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38740u) goto L_08B38740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38740:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    goto L_08B38744;
L_08B38744:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), aot_gpr_16);
    goto L_08B38748;
L_08B38748:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08B38754u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(4416));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 155u, 0x08B38754u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38754u) goto L_08B38754;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38754:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08B3876Cu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 156u, 0x08B3876Cu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3876Cu) goto L_08B3876C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3876C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B387E0;
      }
      goto L_08B38774;
    }
L_08B38774:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B3878C;
    }
    goto L_08B38780;
L_08B38780:
    aot_gpr_31 = (0x08B38788u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38788u) goto L_08B38788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38788:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B3878C;
L_08B3878C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08B387BC;
      }
      goto L_08B38794;
    }
L_08B38794:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08B387A0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 162u, 0x08B387A0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B387A0u) goto L_08B387A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B387A0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08B387B8;
      }
      goto L_08B387AC;
    }
L_08B387AC:
    aot_gpr_31 = (0x08B387B4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B387B4u) goto L_08B387B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B387B4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08B387B8;
L_08B387B8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08B387BC;
L_08B387BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08B387C8u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(4424));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 167u, 0x08B387C8u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B387C8u) goto L_08B387C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B387C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08B387E0u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 168u, 0x08B387E0u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B387E0u) goto L_08B387E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B387E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17331)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B38808;
      }
      goto L_08B387EC;
    }
L_08B387EC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4432));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08B38800u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0090.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 170u, 0x08B38800u, 0x0896D898u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0090_entry(rt, ctx, 399u, aot_mem);
#else
        recomp_unit_0090_entry(rt, ctx, 399u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38800u) goto L_08B38800;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38800:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3881C;
      }
      goto L_08B38808;
    }
L_08B38808:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4440));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08B3881Cu);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0090.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 172u, 0x08B3881Cu, 0x0896D898u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0090_entry(rt, ctx, 399u, aot_mem);
#else
        recomp_unit_0090_entry(rt, ctx, 399u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3881Cu) goto L_08B3881C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3881C:
    aot_gpr_31 = (0x08B38824u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38824u) goto L_08B38824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38824:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_31 = (0x08B38838u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38838u) goto L_08B38838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38838:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B3884C;
L_08B3884C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 938u, 0x08B37FF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B38854;
    }
L_08B38854:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B38870;
      }
      goto L_08B38860;
    }
L_08B38860:
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B3887C;
      }
      goto L_08B38870;
    }
L_08B38870:
    aot_gpr_4 = (15631u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B3887C;
L_08B3887C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_08B3889C;
    }
    goto L_08B3889C;
L_08B3889C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B388D4;
      }
      goto L_08B388B0;
    }
L_08B388B0:
    aot_gpr_4 = (0u | 4u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B388D4u);
    aot_gpr_6 = (0u | 75u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 182u, 0x08B388D4u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B388D4u) goto L_08B388D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B388D4:
    aot_gpr_31 = (0x08B388DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 183u, 0x08B388DCu, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B388DCu) goto L_08B388DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B388DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 938u, 0x08B37FF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B388E4;
    }
L_08B388E4:
    aot_gpr_31 = (0x08B388ECu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 185u, 0x08B388ECu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B388ECu) goto L_08B388EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B388EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B38900;
      }
      goto L_08B388F4;
    }
L_08B388F4:
    aot_gpr_31 = (0x08B388FCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 187u, 0x08B388FCu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B388FCu) goto L_08B388FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B388FC:
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(627), static_cast<std::uint8_t>(0u));
    goto L_08B38900;
L_08B38900:
    aot_gpr_31 = (0x08B38908u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 189u, 0x08B38908u, 0x08B336A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 727u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 727u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 727u, 0x08B336A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38908u) goto L_08B38908;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38908:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B38918;
      }
      goto L_08B38910;
    }
L_08B38910:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B38918;
L_08B38918:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 938u, 0x08B37FF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B38920;
    }
L_08B38920:
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
L_08B38938:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3897C;
      }
      goto L_08B38964;
    }
L_08B38964:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B3896C;
    }
L_08B3896C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08B38C54;
      }
      goto L_08B38974;
    }
L_08B38974:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B389A8;
      }
      goto L_08B3897C;
    }
L_08B3897C:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B38B10;
      }
      goto L_08B38984;
    }
L_08B38984:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B3898C;
    }
L_08B3898C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B38CC4;
      }
      goto L_08B38998;
    }
L_08B38998:
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B38CD0;
      }
      goto L_08B389A8;
    }
L_08B389A8:
    aot_gpr_31 = (0x08B389B0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 202u, 0x08B389B0u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B389B0u) goto L_08B389B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B389B0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08B389D8u);
    ctx.fpr[22] = aot_fpr_14 - aot_fpr_12;
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 203u, 0x08B389D8u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B389D8u) goto L_08B389D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B389D8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[15];
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = ctx.fpr[16] - aot_fpr_13;
    aot_gpr_31 = (0x08B389FCu);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 204u, 0x08B389FCu, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B389FCu) goto L_08B389FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B389FC:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x08B38A1Cu);
    ctx.fpr[24] = ctx.fpr[17] - aot_fpr_13;
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 205u, 0x08B38A1Cu, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38A1Cu) goto L_08B38A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38A1C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    aot_gpr_4 = (17505u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[15] - aot_fpr_12;
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B38A8C;
      }
      goto L_08B38A54;
    }
L_08B38A54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 31u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38A64;
    }
L_08B38A64:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B38A70u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 208u, 0x08B38A70u, 0x08B33A00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 761u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 761u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 761u, 0x08B33A00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38A70u) goto L_08B38A70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38A70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38A78;
    }
L_08B38A78:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38A8C;
    }
L_08B38A8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38A98;
    }
L_08B38A98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08B38AA8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 212u, 0x08B38AA8u, 0x08B32E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 615u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 615u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38AA8u) goto L_08B38AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38AA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38AB0;
    }
L_08B38AB0:
    aot_gpr_31 = (0x08B38AB8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38AB8u) goto L_08B38AB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38AB8:
    aot_gpr_6 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08B38ACCu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 215u, 0x08B38ACCu, 0x08B33424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 703u, 0x08B33424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38ACCu) goto L_08B38ACC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38ACC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38AD4;
    }
L_08B38AD4:
    aot_gpr_31 = (0x08B38ADCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38ADCu) goto L_08B38ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38ADC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_gpr_31 = (0x08B38AECu);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38AECu) goto L_08B38AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38AEC:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u | 2u);
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    goto L_08B38B08;
L_08B38B08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B38D38;
      }
      goto L_08B38B10;
    }
L_08B38B10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B38B28;
      }
      goto L_08B38B1C;
    }
L_08B38B1C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_31 = (0x08B38B28u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 222u, 0x08B38B28u, 0x08B33BD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 783u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 783u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 783u, 0x08B33BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38B28u) goto L_08B38B28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38B28:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B38B48;
      }
      goto L_08B38B38;
    }
L_08B38B38:
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B38B54;
      }
      goto L_08B38B48;
    }
L_08B38B48:
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B38B54;
L_08B38B54:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_08B38B70;
    }
    goto L_08B38B70;
L_08B38B70:
    aot_gpr_31 = (0x08B38B78u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38B78u) goto L_08B38B78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38B78:
    aot_gpr_6 = (16256u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08B38B8Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 228u, 0x08B38B8Cu, 0x08B33424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 703u, 0x08B33424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38B8Cu) goto L_08B38B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38B8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B38BA0;
      }
      goto L_08B38B94;
    }
L_08B38B94:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B38C44;
      }
      goto L_08B38BA0;
    }
L_08B38BA0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B38C44;
      }
      goto L_08B38BB8;
    }
L_08B38BB8:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B38BD4u);
    aot_gpr_6 = (0u | 74u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 232u, 0x08B38BD4u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38BD4u) goto L_08B38BD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38BD4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(63)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B38C40;
      }
      goto L_08B38BE0;
    }
L_08B38BE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B38C08;
      }
      goto L_08B38BEC;
    }
L_08B38BEC:
    aot_gpr_4 = (0u | 5u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08B38C00u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 235u, 0x08B38C00u, 0x08AFEA38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 592u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 592u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 592u, 0x08AFEA38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38C00u) goto L_08B38C00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38C00:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(164), 0u);
      if (branch_taken) {
          goto L_08B38C0C;
      }
      goto L_08B38C08;
    }
L_08B38C08:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    goto L_08B38C0C;
L_08B38C0C:
    aot_gpr_31 = (0x08B38C14u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38C14u) goto L_08B38C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38C14:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_31 = (0x08B38C28u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38C28u) goto L_08B38C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38C28:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B38C44;
      }
      goto L_08B38C40;
    }
L_08B38C40:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    goto L_08B38C44;
L_08B38C44:
    aot_gpr_31 = (0x08B38C4Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 242u, 0x08B38C4Cu, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38C4Cu) goto L_08B38C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38C4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38C54;
    }
L_08B38C54:
    aot_gpr_31 = (0x08B38C5Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 244u, 0x08B38C5Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38C5Cu) goto L_08B38C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38C5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_08B38CBC;
      }
      goto L_08B38C68;
    }
L_08B38C68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B38CBC;
      }
      goto L_08B38C74;
    }
L_08B38C74:
    aot_gpr_31 = (0x08B38C7Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 247u, 0x08B38C7Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38C7Cu) goto L_08B38C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38C7C:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08B38C88u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 248u, 0x08B38C88u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38C88u) goto L_08B38C88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38C88:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B38C9Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 249u, 0x08B38C9Cu, 0x08B3312Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 650u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 650u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38C9Cu) goto L_08B38C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38C9C:
    aot_gpr_4 = (17024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B38CBC;
      }
      goto L_08B38CB4;
    }
L_08B38CB4:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B38CBC;
L_08B38CBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38CC4;
    }
L_08B38CC4:
    aot_gpr_4 = (15631u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B38CD0;
L_08B38CD0:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_08B38CF0;
    }
    goto L_08B38CF0;
L_08B38CF0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B38D28;
      }
      goto L_08B38D04;
    }
L_08B38D04:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B38D28u);
    aot_gpr_6 = (0u | 75u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 256u, 0x08B38D28u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38D28u) goto L_08B38D28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38D28:
    aot_gpr_31 = (0x08B38D30u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 257u, 0x08B38D30u, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38D30u) goto L_08B38D30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38D30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B38B08;
      }
      goto L_08B38D38;
    }
L_08B38D38:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B38D54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B38D98;
      }
      goto L_08B38D80;
    }
L_08B38D80:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38D88;
    }
L_08B38D88:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08B391C8;
      }
      goto L_08B38D90;
    }
L_08B38D90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B38DC0;
      }
      goto L_08B38D98;
    }
L_08B38D98:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B390CC;
      }
      goto L_08B38DA0;
    }
L_08B38DA0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38DA8;
    }
L_08B38DA8:
    aot_gpr_31 = (0x08B38DB0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 266u, 0x08B38DB0u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38DB0u) goto L_08B38DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38DB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B392B8;
      }
      goto L_08B38DB8;
    }
L_08B38DB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B392F0;
      }
      goto L_08B38DC0;
    }
L_08B38DC0:
    aot_gpr_31 = (0x08B38DC8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 269u, 0x08B38DC8u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38DC8u) goto L_08B38DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38DC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B38E08;
      }
      goto L_08B38DD0;
    }
L_08B38DD0:
    aot_gpr_31 = (0x08B38DD8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 271u, 0x08B38DD8u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38DD8u) goto L_08B38DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38DD8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    aot_gpr_31 = (0x08B38DE4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 272u, 0x08B38DE4u, 0x08B3490Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 126u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 126u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 126u, 0x08B3490Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38DE4u) goto L_08B38DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38DE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B38E08;
      }
      goto L_08B38DEC;
    }
L_08B38DEC:
    aot_gpr_31 = (0x08B38DF4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 274u, 0x08B38DF4u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38DF4u) goto L_08B38DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38DF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(164), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B38E08;
      }
      goto L_08B38DFC;
    }
L_08B38DFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_31 = (0x08B38E08u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(164));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38E08u) goto L_08B38E08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38E08:
    aot_gpr_31 = (0x08B38E10u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 277u, 0x08B38E10u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38E10u) goto L_08B38E10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38E10:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[16])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08B38E44;
    }
    goto L_08B38E44;
L_08B38E44:
    aot_gpr_4 = (16928u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B38ED0;
      }
      goto L_08B38E5C;
    }
L_08B38E5C:
    aot_gpr_31 = (0x08B38E64u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 280u, 0x08B38E64u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38E64u) goto L_08B38E64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38E64:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[16])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08B38E98;
    }
    goto L_08B38E98;
L_08B38E98:
    aot_gpr_4 = (16928u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B38ED0;
      }
      goto L_08B38EB0;
    }
L_08B38EB0:
    aot_gpr_31 = (0x08B38EB8u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 283u, 0x08B38EB8u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38EB8u) goto L_08B38EB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38EB8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B38EE0;
      }
      goto L_08B38ED0;
    }
L_08B38ED0:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(164), 0u);
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38EE0;
    }
L_08B38EE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38EEC;
    }
L_08B38EEC:
    aot_gpr_31 = (0x08B38EF4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 287u, 0x08B38EF4u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38EF4u) goto L_08B38EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38EF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38EFC;
    }
L_08B38EFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08B38F0Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 289u, 0x08B38F0Cu, 0x08B32E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 615u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 615u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38F0Cu) goto L_08B38F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38F0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38F14;
    }
L_08B38F14:
    aot_gpr_31 = (0x08B38F1Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38F1Cu) goto L_08B38F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B38F1C:
    aot_gpr_6 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08B38F30u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 292u, 0x08B38F30u, 0x08B33424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 703u, 0x08B33424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38F30u) goto L_08B38F30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38F30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B38F38;
    }
L_08B38F38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B38F84;
      }
      goto L_08B38F4C;
    }
L_08B38F4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B38F7C;
      }
      goto L_08B38F60;
    }
L_08B38F60:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1400)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B38F7C;
      }
      goto L_08B38F78;
    }
L_08B38F78:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B38F7C;
L_08B38F7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39064;
      }
      goto L_08B38F84;
    }
L_08B38F84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_5 = (0u | 8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B38FD0;
      }
      goto L_08B38F98;
    }
L_08B38F98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B38FC8;
      }
      goto L_08B38FAC;
    }
L_08B38FAC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1400)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B38FC8;
      }
      goto L_08B38FC4;
    }
L_08B38FC4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B38FC8;
L_08B38FC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39064;
      }
      goto L_08B38FD0;
    }
L_08B38FD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_5 = (0u | 9u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B39020;
      }
      goto L_08B38FE4;
    }
L_08B38FE4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_31 = (0x08B38FF0u);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(944));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 305u, 0x08B38FF0u, 0x08B0D970u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 387u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 387u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 387u, 0x08B0D970u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B38FF0u) goto L_08B38FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B38FF0:
    aot_gpr_4 = (ctx.gpr[2] < static_cast<std::uint32_t>(226) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39018;
      }
      goto L_08B38FFC;
    }
L_08B38FFC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1752)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B39018;
      }
      goto L_08B39014;
    }
L_08B39014:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B39018;
L_08B39018:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39064;
      }
      goto L_08B39020;
    }
L_08B39020:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B39064;
      }
      goto L_08B39030;
    }
L_08B39030:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_31 = (0x08B3903Cu);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(944));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 311u, 0x08B3903Cu, 0x08B0D970u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 387u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 387u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 387u, 0x08B0D970u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3903Cu) goto L_08B3903C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3903C:
    aot_gpr_4 = (ctx.gpr[2] < static_cast<std::uint32_t>(226) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39064;
      }
      goto L_08B39048;
    }
L_08B39048:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1752)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B39064;
      }
      goto L_08B39060;
    }
L_08B39060:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B39064;
L_08B39064:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B3906C;
    }
L_08B3906C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_5 = (0u | 5u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B39088;
    }
L_08B39088:
    aot_gpr_31 = (0x08B39090u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39090u) goto L_08B39090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B39090:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_gpr_31 = (0x08B390A0u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B390A0u) goto L_08B390A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B390A0:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u | 2u);
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_31 = (0x08B390C4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 319u, 0x08B390C4u, 0x08A1CE7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 141u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 141u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 141u, 0x08A1CE7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B390C4u) goto L_08B390C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B390C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39380;
      }
      goto L_08B390CC;
    }
L_08B390CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B390E4;
      }
      goto L_08B390D8;
    }
L_08B390D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_31 = (0x08B390E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 322u, 0x08B390E4u, 0x08B33BD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 783u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 783u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 783u, 0x08B33BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B390E4u) goto L_08B390E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B390E4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B39104;
      }
      goto L_08B390F4;
    }
L_08B390F4:
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B39110;
      }
      goto L_08B39104;
    }
L_08B39104:
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B39110;
L_08B39110:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_08B3912C;
    }
    goto L_08B3912C;
L_08B3912C:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B391B8;
      }
      goto L_08B39140;
    }
L_08B39140:
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B39160u);
    aot_gpr_6 = (0u | 74u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 328u, 0x08B39160u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39160u) goto L_08B39160;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39160:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B391B8;
      }
      goto L_08B3916C;
    }
L_08B3916C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B3917Cu);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 330u, 0x08B3917Cu, 0x08B349C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 140u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 140u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 140u, 0x08B349C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3917Cu) goto L_08B3917C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3917C:
    aot_gpr_31 = (0x08B39184u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 331u, 0x08B39184u, 0x08AFEA38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 592u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 592u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 592u, 0x08AFEA38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39184u) goto L_08B39184;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39184:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(164), 0u);
    aot_gpr_31 = (0x08B39190u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39190u) goto L_08B39190;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B39190:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_31 = (0x08B391A4u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B391A4u) goto L_08B391A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B391A4:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B391B8;
L_08B391B8:
    aot_gpr_31 = (0x08B391C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 335u, 0x08B391C0u, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B391C0u) goto L_08B391C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B391C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B391C8;
    }
L_08B391C8:
    aot_gpr_31 = (0x08B391D0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 337u, 0x08B391D0u, 0x088634F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 617u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 617u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B391D0u) goto L_08B391D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B391D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B392B0;
      }
      goto L_08B391D8;
    }
L_08B391D8:
    aot_gpr_31 = (0x08B391E0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B391E0u) goto L_08B391E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B391E0:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B391F0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 340u, 0x08B391F0u, 0x08B33424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 703u, 0x08B33424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B391F0u) goto L_08B391F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B391F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B39200;
      }
      goto L_08B391F8;
    }
L_08B391F8:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B39200;
L_08B39200:
    aot_gpr_31 = (0x08B39208u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 343u, 0x08B39208u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39208u) goto L_08B39208;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39208:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B392B0;
      }
      goto L_08B39210;
    }
L_08B39210:
    aot_gpr_31 = (0x08B39218u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 345u, 0x08B39218u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39218u) goto L_08B39218;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39218:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08B39224u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 346u, 0x08B39224u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39224u) goto L_08B39224;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39224:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B39238u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 347u, 0x08B39238u, 0x08B34A90u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 156u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 156u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 156u, 0x08B34A90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39238u) goto L_08B39238;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39238:
    aot_gpr_4 = (17024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B392B0;
      }
      goto L_08B39250;
    }
L_08B39250:
    aot_gpr_31 = (0x08B39258u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 349u, 0x08B39258u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39258u) goto L_08B39258;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39258:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B392B0;
      }
      goto L_08B39274;
    }
L_08B39274:
    aot_gpr_31 = (0x08B3927Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 351u, 0x08B3927Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3927Cu) goto L_08B3927C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3927C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    aot_gpr_31 = (0x08B39288u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 352u, 0x08B39288u, 0x08B3490Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 126u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 126u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 126u, 0x08B3490Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39288u) goto L_08B39288;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39288:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B392B0;
      }
      goto L_08B39290;
    }
L_08B39290:
    aot_gpr_31 = (0x08B39298u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 354u, 0x08B39298u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39298u) goto L_08B39298;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39298:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(612)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B392B0;
      }
      goto L_08B392A8;
    }
L_08B392A8:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B392B0;
L_08B392B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(164), 0u);
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B392B8;
    }
L_08B392B8:
    aot_gpr_31 = (0x08B392C0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 358u, 0x08B392C0u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B392C0u) goto L_08B392C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B392C0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    aot_gpr_31 = (0x08B392CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 359u, 0x08B392CCu, 0x08B3490Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 126u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 126u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 126u, 0x08B3490Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B392CCu) goto L_08B392CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B392CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B392F0;
      }
      goto L_08B392D4;
    }
L_08B392D4:
    aot_gpr_31 = (0x08B392DCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 361u, 0x08B392DCu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B392DCu) goto L_08B392DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B392DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(164), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B392F0;
      }
      goto L_08B392E4;
    }
L_08B392E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_31 = (0x08B392F0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(164));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B392F0u) goto L_08B392F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B392F0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3930C;
      }
      goto L_08B392FC;
    }
L_08B392FC:
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B39318;
      }
      goto L_08B3930C;
    }
L_08B3930C:
    aot_gpr_4 = (15631u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B39318;
L_08B39318:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_08B39338;
    }
    goto L_08B39338;
L_08B39338:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B39370;
      }
      goto L_08B3934C;
    }
L_08B3934C:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B39370u);
    aot_gpr_6 = (0u | 75u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 369u, 0x08B39370u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39370u) goto L_08B39370;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39370:
    aot_gpr_31 = (0x08B39378u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 370u, 0x08B39378u, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39378u) goto L_08B39378;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39378:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B390C4;
      }
      goto L_08B39380;
    }
L_08B39380:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3939C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B393D8;
      }
      goto L_08B393C0;
    }
L_08B393C0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B393C8;
    }
L_08B393C8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08B396E4;
      }
      goto L_08B393D0;
    }
L_08B393D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39404;
      }
      goto L_08B393D8;
    }
L_08B393D8:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B39598;
      }
      goto L_08B393E0;
    }
L_08B393E0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B393E8;
    }
L_08B393E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B39750;
      }
      goto L_08B393F4;
    }
L_08B393F4:
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B3975C;
      }
      goto L_08B39404;
    }
L_08B39404:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B39410;
    }
L_08B39410:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39484;
      }
      goto L_08B39420;
    }
L_08B39420:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B39434u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(104)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 383u, 0x08B39434u, 0x08B32E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 615u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 615u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39434u) goto L_08B39434;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39434:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B39484;
      }
      goto L_08B3943C;
    }
L_08B3943C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39460;
      }
      goto L_08B39448;
    }
L_08B39448:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39460;
      }
      goto L_08B39454;
    }
L_08B39454:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08B39460u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39460u) goto L_08B39460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B39460:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08B394AC;
      }
      goto L_08B39470;
    }
L_08B39470:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08B3947Cu);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3947Cu) goto L_08B3947C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3947C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B394AC;
      }
      goto L_08B39484;
    }
L_08B39484:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B394A8;
      }
      goto L_08B39490;
    }
L_08B39490:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B394A8;
      }
      goto L_08B3949C;
    }
L_08B3949C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08B394A8u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B394A8u) goto L_08B394A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B394A8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), 0u);
    goto L_08B394AC;
L_08B394AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B394B8;
    }
L_08B394B8:
    aot_gpr_31 = (0x08B394C0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 396u, 0x08B394C0u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B394C0u) goto L_08B394C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B394C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B394C8;
    }
L_08B394C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B394DC;
    }
L_08B394DC:
    aot_gpr_31 = (0x08B394E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B394E4u) goto L_08B394E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B394E4:
    aot_gpr_6 = (16576u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08B394F8u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 400u, 0x08B394F8u, 0x08B33424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 703u, 0x08B33424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B394F8u) goto L_08B394F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B394F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B39500;
    }
L_08B39500:
    aot_gpr_31 = (0x08B39508u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39508u) goto L_08B39508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B39508:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1252)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B39520;
    }
L_08B39520:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39544;
      }
      goto L_08B3952C;
    }
L_08B3952C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39544;
      }
      goto L_08B39538;
    }
L_08B39538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08B39544u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39544u) goto L_08B39544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B39544:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08B39550u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 407u, 0x08B39550u, 0x08891B8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39550u) goto L_08B39550;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39550:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3957C;
      }
      goto L_08B3955C;
    }
L_08B3955C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08B3957Cu);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3957Cu) goto L_08B3957C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3957C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), 0u);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B39590;
L_08B39590:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B397C8;
      }
      goto L_08B39598;
    }
L_08B39598:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B395B8;
      }
      goto L_08B395A8;
    }
L_08B395A8:
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B395C4;
      }
      goto L_08B395B8;
    }
L_08B395B8:
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B395C4;
L_08B395C4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_08B395E0;
    }
    goto L_08B395E0;
L_08B395E0:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B396D4;
      }
      goto L_08B395F4;
    }
L_08B395F4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(171)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B396B4;
      }
      goto L_08B39610;
    }
L_08B39610:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B396B4;
      }
      goto L_08B3961C;
    }
L_08B3961C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B396B4;
      }
      goto L_08B3962C;
    }
L_08B3962C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B39640u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(104)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 420u, 0x08B39640u, 0x08B32E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 615u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 615u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39640u) goto L_08B39640;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B396B4;
      }
      goto L_08B39648;
    }
L_08B39648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3966C;
      }
      goto L_08B39654;
    }
L_08B39654:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3966C;
      }
      goto L_08B39660;
    }
L_08B39660:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08B3966Cu);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3966Cu) goto L_08B3966C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3966C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08B39678u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 425u, 0x08B39678u, 0x08891B8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39678u) goto L_08B39678;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39678:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B396A4;
      }
      goto L_08B39684;
    }
L_08B39684:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08B396A4u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B396A4u) goto L_08B396A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B396A4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), 0u);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B396B4;
L_08B396B4:
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B396D4u);
    aot_gpr_6 = (0u | 74u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 429u, 0x08B396D4u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B396D4u) goto L_08B396D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B396D4:
    aot_gpr_31 = (0x08B396DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 430u, 0x08B396DCu, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B396DCu) goto L_08B396DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B396DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B396E4;
    }
L_08B396E4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(171)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B39748;
      }
      goto L_08B39700;
    }
L_08B39700:
    aot_gpr_31 = (0x08B39708u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39708u) goto L_08B39708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B39708:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08B39714u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39714u) goto L_08B39714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B39714:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B39728u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 435u, 0x08B39728u, 0x08B3312Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 650u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 650u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39728u) goto L_08B39728;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39728:
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B39748;
      }
      goto L_08B39740;
    }
L_08B39740:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B39748;
L_08B39748:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B39750;
    }
L_08B39750:
    aot_gpr_4 = (15631u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B3975C;
L_08B3975C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_08B3977C;
    }
    goto L_08B3977C;
L_08B3977C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B397B8;
      }
      goto L_08B39790;
    }
L_08B39790:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B397B8u);
    aot_gpr_6 = (0u | 75u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 442u, 0x08B397B8u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B397B8u) goto L_08B397B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B397B8:
    aot_gpr_31 = (0x08B397C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 443u, 0x08B397C0u, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B397C0u) goto L_08B397C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B397C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39590;
      }
      goto L_08B397C8;
    }
L_08B397C8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B397DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B39CFC;
      }
      goto L_08B39814;
    }
L_08B39814:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31008)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3982C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] & 7u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 3u));
    aot_gpr_4 = (aot_gpr_4 >> 29u);
    ctx.gpr[20] = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 3u));
    aot_gpr_4 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_5 = (aot_gpr_5 >> 29u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39970;
      }
      goto L_08B39884;
    }
L_08B39884:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
      if (branch_taken) {
          goto L_08B3989C;
      }
      goto L_08B3988C;
    }
L_08B3988C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B398A4;
    }
    goto L_08B3989C;
L_08B3989C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B398D4;
      }
      goto L_08B398A4;
    }
L_08B398A4:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[20] << 5u);
      if (branch_taken) {
          goto L_08B398C0;
      }
      goto L_08B398B8;
    }
L_08B398B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B398D4;
      }
      goto L_08B398C0;
    }
L_08B398C0:
    aot_gpr_5 = (0u + aot_gpr_4);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    goto L_08B398D4;
L_08B398D4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B39948;
      }
      goto L_08B398DC;
    }
L_08B398DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39908;
      }
      goto L_08B398E8;
    }
L_08B398E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B39908;
      }
      goto L_08B398F8;
    }
L_08B398F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B39948;
      }
      goto L_08B39908;
    }
L_08B39908:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B39918u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 459u, 0x08B39918u, 0x08B32E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 615u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 615u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39918u) goto L_08B39918;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39918:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B39948;
      }
      goto L_08B39920;
    }
L_08B39920:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (0u | 7u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(136), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(164), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B39944;
      }
      goto L_08B39938;
    }
L_08B39938:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_31 = (0x08B39944u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(164));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39944u) goto L_08B39944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B39944:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08B39948;
L_08B39948:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_5 = (aot_gpr_5 >> 29u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B39884;
      }
      goto L_08B39970;
    }
L_08B39970:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39CFC;
      }
      goto L_08B39978;
    }
L_08B39978:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B399D0;
      }
      goto L_08B39984;
    }
L_08B39984:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(136)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B399A8;
      }
      goto L_08B3999C;
    }
L_08B3999C:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08B399A8;
L_08B399A8:
    aot_gpr_4 = (17723u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B399D8;
      }
      goto L_08B399C4;
    }
L_08B399C4:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B399D8;
      }
      goto L_08B399D0;
    }
L_08B399D0:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B399D8;
L_08B399D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39CFC;
      }
      goto L_08B399E0;
    }
L_08B399E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (15267u << 16u);
      if (branch_taken) {
          goto L_08B39C40;
      }
      goto L_08B399EC;
    }
L_08B399EC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = ctx.fpr[15] - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B39A18;
    }
    goto L_08B39A18;
L_08B39A18:
    aot_gpr_4 = (16288u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55676u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B39A78;
      }
      goto L_08B39A34;
    }
L_08B39A34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(236)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(236), aot_gpr_5);
    aot_gpr_31 = (0x08B39A70u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 476u, 0x08B39A70u, 0x08A6669Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 537u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 537u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39A70u) goto L_08B39A70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39A70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39AB4;
      }
      goto L_08B39A78;
    }
L_08B39A78:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_4 = (16204u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B39A90u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 478u, 0x08B39A90u, 0x08B32D64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 612u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 612u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 612u, 0x08B32D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39A90u) goto L_08B39A90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39A90:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B39AB4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 479u, 0x08B39AB4u, 0x08A666C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 538u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 538u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39AB4u) goto L_08B39AB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39AB4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B39C38;
      }
      goto L_08B39ACC;
    }
L_08B39ACC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_31 = (0x08B39AD8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 481u, 0x08B39AD8u, 0x08B6CC28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 139u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 139u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39AD8u) goto L_08B39AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39AD8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17296), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_4 = (0u | 125u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(144)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B39B04;
      }
      goto L_08B39AF8;
    }
L_08B39AF8:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08B39B04;
L_08B39B04:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_6 = (18676u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(636)));
    aot_gpr_5 = (aot_gpr_6 | 9216u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_5 = (16840u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
        goto L_08B39B50;
    }
    goto L_08B39B44;
L_08B39B44:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    goto L_08B39B50;
L_08B39B50:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17332)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (aot_gpr_5 << 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (ctx.lo);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(172), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B39BC8;
    }
    goto L_08B39B9C;
L_08B39B9C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B39BA8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 487u, 0x08B39BA8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39BA8u) goto L_08B39BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39BA8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08B39BC0;
      }
      goto L_08B39BB4;
    }
L_08B39BB4:
    aot_gpr_31 = (0x08B39BBCu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39BBCu) goto L_08B39BBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B39BBC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08B39BC0;
L_08B39BC0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B39BC8;
L_08B39BC8:
    aot_gpr_31 = (0x08B39BD0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(4448));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 492u, 0x08B39BD0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39BD0u) goto L_08B39BD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39BD0:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 5000u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08B39BFCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0173.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 493u, 0x08B39BFCu, 0x08AB9C74u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0173_entry(rt, ctx, 351u, aot_mem);
#else
        recomp_unit_0173_entry(rt, ctx, 351u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 351u, 0x08AB9C74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39BFCu) goto L_08B39BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39BFC:
    aot_gpr_31 = (0x08B39C04u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 494u, 0x08B39C04u, 0x08AFEA38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 592u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 592u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 592u, 0x08AFEA38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39C04u) goto L_08B39C04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39C04:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(164), 0u);
    aot_gpr_4 = (0u | 6u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(3000));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B39C38u);
    aot_gpr_6 = (0u | 74u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 495u, 0x08B39C38u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39C38u) goto L_08B39C38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39C38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39C48;
      }
      goto L_08B39C40;
    }
L_08B39C40:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B39C48;
L_08B39C48:
    aot_gpr_31 = (0x08B39C50u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 498u, 0x08B39C50u, 0x08B34680u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 75u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 75u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 75u, 0x08B34680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39C50u) goto L_08B39C50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39C50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39CFC;
      }
      goto L_08B39C58;
    }
L_08B39C58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(156)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39C74;
      }
      goto L_08B39C6C;
    }
L_08B39C6C:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B39C74;
L_08B39C74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39CFC;
      }
      goto L_08B39C7C;
    }
L_08B39C7C:
    aot_gpr_4 = (15267u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B39CB4;
    }
    goto L_08B39CB4;
L_08B39CB4:
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B39CF4;
      }
      goto L_08B39CD0;
    }
L_08B39CD0:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B39CF4u);
    aot_gpr_6 = (0u | 75u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 505u, 0x08B39CF4u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39CF4u) goto L_08B39CF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39CF4:
    aot_gpr_31 = (0x08B39CFCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 506u, 0x08B39CFCu, 0x08B34680u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 75u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 75u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 75u, 0x08B34680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39CFCu) goto L_08B39CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39CFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_5 = (0u | 23u);
    aot_gpr_4 = (aot_gpr_4 & 31u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39D10;
    }
L_08B39D10:
    aot_gpr_31 = (0x08B39D18u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 508u, 0x08B39D18u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39D18u) goto L_08B39D18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39D18:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39D30;
    }
L_08B39D30:
    aot_gpr_31 = (0x08B39D38u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 510u, 0x08B39D38u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39D38u) goto L_08B39D38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39D38:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39D50;
    }
L_08B39D50:
    aot_gpr_31 = (0x08B39D58u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 512u, 0x08B39D58u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39D58u) goto L_08B39D58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39D58:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39D70;
    }
L_08B39D70:
    aot_gpr_31 = (0x08B39D78u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 514u, 0x08B39D78u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39D78u) goto L_08B39D78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39D78:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39D90;
    }
L_08B39D90:
    aot_gpr_31 = (0x08B39D98u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 516u, 0x08B39D98u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39D98u) goto L_08B39D98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39D98:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39DBC;
    }
L_08B39DBC:
    aot_gpr_31 = (0x08B39DC4u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 518u, 0x08B39DC4u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39DC4u) goto L_08B39DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39DC4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B39E08;
      }
      goto L_08B39DDC;
    }
L_08B39DDC:
    aot_gpr_31 = (0x08B39DE4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39DE4u) goto L_08B39DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B39DE4:
    ctx.gpr[10] = (17302u << 16u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[10]);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 42u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08B39E08u);
    ctx.gpr[9] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0057.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 521u, 0x08B39E08u, 0x088EB674u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0057_entry(rt, ctx, 692u, aot_mem);
#else
        recomp_unit_0057_entry(rt, ctx, 692u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39E08u) goto L_08B39E08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39E08:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B39E2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39E5C;
    }
L_08B39E5C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B3A104;
      }
      goto L_08B39E64;
    }
L_08B39E64:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B39FF4;
      }
      goto L_08B39E6C;
    }
L_08B39E6C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B3A178;
      }
      goto L_08B39E74;
    }
L_08B39E74:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39E7C;
    }
L_08B39E7C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08B3A208;
      }
      goto L_08B39E84;
    }
L_08B39E84:
    aot_gpr_31 = (0x08B39E8Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 529u, 0x08B39E8Cu, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39E8Cu) goto L_08B39E8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39E8C:
    aot_gpr_31 = (0x08B39E94u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 530u, 0x08B39E94u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39E94u) goto L_08B39E94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39E94:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08B39EBCu);
    ctx.fpr[22] = aot_fpr_14 - aot_fpr_12;
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 531u, 0x08B39EBCu, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39EBCu) goto L_08B39EBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39EBC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[15];
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = ctx.fpr[16] - aot_fpr_13;
    aot_gpr_31 = (0x08B39EE0u);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 532u, 0x08B39EE0u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39EE0u) goto L_08B39EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39EE0:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x08B39F00u);
    ctx.fpr[24] = ctx.fpr[17] - aot_fpr_13;
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 533u, 0x08B39F00u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39F00u) goto L_08B39F00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39F00:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    aot_gpr_4 = (17505u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[15] - aot_fpr_12;
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B39F44;
      }
      goto L_08B39F38;
    }
L_08B39F38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B39F7C;
      }
      goto L_08B39F44;
    }
L_08B39F44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 31u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39F54;
    }
L_08B39F54:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B39F60u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 537u, 0x08B39F60u, 0x08B33A00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 761u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 761u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 761u, 0x08B33A00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39F60u) goto L_08B39F60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39F60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39F68;
    }
L_08B39F68:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39F7C;
    }
L_08B39F7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39F88;
    }
L_08B39F88:
    aot_gpr_31 = (0x08B39F90u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 541u, 0x08B39F90u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39F90u) goto L_08B39F90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39F90:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39F98;
    }
L_08B39F98:
    aot_gpr_31 = (0x08B39FA0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 543u, 0x08B39FA0u, 0x08B331CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 661u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 661u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 661u, 0x08B331CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39FA0u) goto L_08B39FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39FA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39FA8;
    }
L_08B39FA8:
    aot_gpr_31 = (0x08B39FB0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 545u, 0x08B39FB0u, 0x08B34050u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 4u, 0x08B34050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39FB0u) goto L_08B39FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B39FB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B39FB8;
    }
L_08B39FB8:
    aot_gpr_31 = (0x08B39FC0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39FC0u) goto L_08B39FC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B39FC0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_gpr_31 = (0x08B39FD0u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B39FD0u) goto L_08B39FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B39FD0:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u | 2u);
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    goto L_08B39FEC;
L_08B39FEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3A23C;
      }
      goto L_08B39FF4;
    }
L_08B39FF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3A00C;
      }
      goto L_08B3A000;
    }
L_08B3A000:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_31 = (0x08B3A00Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 552u, 0x08B3A00Cu, 0x08B33BD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 783u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 783u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 783u, 0x08B33BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A00Cu) goto L_08B3A00C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A00C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3A02C;
      }
      goto L_08B3A01C;
    }
L_08B3A01C:
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B3A038;
      }
      goto L_08B3A02C;
    }
L_08B3A02C:
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B3A038;
L_08B3A038:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_08B3A054;
    }
    goto L_08B3A054;
L_08B3A054:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B3A0F4;
      }
      goto L_08B3A068;
    }
L_08B3A068:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B3A084u);
    aot_gpr_6 = (0u | 74u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 558u, 0x08B3A084u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A084u) goto L_08B3A084;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A084:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(63)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B3A0F0;
      }
      goto L_08B3A090;
    }
L_08B3A090:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3A0B8;
      }
      goto L_08B3A09C;
    }
L_08B3A09C:
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(164), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(156), aot_gpr_4);
      if (branch_taken) {
          goto L_08B3A0BC;
      }
      goto L_08B3A0B8;
    }
L_08B3A0B8:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    goto L_08B3A0BC;
L_08B3A0BC:
    aot_gpr_31 = (0x08B3A0C4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A0C4u) goto L_08B3A0C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3A0C4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_31 = (0x08B3A0D8u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A0D8u) goto L_08B3A0D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3A0D8:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2318));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B3A0F4;
      }
      goto L_08B3A0F0;
    }
L_08B3A0F0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    goto L_08B3A0F4;
L_08B3A0F4:
    aot_gpr_31 = (0x08B3A0FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 567u, 0x08B3A0FCu, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A0FCu) goto L_08B3A0FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A0FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B3A104;
    }
L_08B3A104:
    aot_gpr_31 = (0x08B3A10Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 569u, 0x08B3A10Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A10Cu) goto L_08B3A10C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A10C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_08B3A170;
      }
      goto L_08B3A118;
    }
L_08B3A118:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3A170;
      }
      goto L_08B3A124;
    }
L_08B3A124:
    aot_gpr_31 = (0x08B3A12Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 572u, 0x08B3A12Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A12Cu) goto L_08B3A12C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A12C:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08B3A138u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 573u, 0x08B3A138u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A138u) goto L_08B3A138;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A138:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B3A14Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 574u, 0x08B3A14Cu, 0x08B3312Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 650u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 650u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A14Cu) goto L_08B3A14C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A14C:
    aot_gpr_4 = (17296u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B3A170;
      }
      goto L_08B3A168;
    }
L_08B3A168:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B3A170;
L_08B3A170:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B3A178;
    }
L_08B3A178:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3A194;
      }
      goto L_08B3A184;
    }
L_08B3A184:
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B3A1A0;
      }
      goto L_08B3A194;
    }
L_08B3A194:
    aot_gpr_4 = (15631u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B3A1A0;
L_08B3A1A0:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_08B3A1C0;
    }
    goto L_08B3A1C0;
L_08B3A1C0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B3A1F8;
      }
      goto L_08B3A1D4;
    }
L_08B3A1D4:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B3A1F8u);
    aot_gpr_6 = (0u | 75u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 583u, 0x08B3A1F8u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A1F8u) goto L_08B3A1F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A1F8:
    aot_gpr_31 = (0x08B3A200u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 584u, 0x08B3A200u, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A200u) goto L_08B3A200;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A200:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B3A208;
    }
L_08B3A208:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(61)));
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B3A234;
      }
      goto L_08B3A218;
    }
L_08B3A218:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(156)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3A234;
      }
      goto L_08B3A22C;
    }
L_08B3A22C:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B3A234;
L_08B3A234:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B39FEC;
      }
      goto L_08B3A23C;
    }
L_08B3A23C:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3A25C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3A2A8;
      }
      goto L_08B3A28C;
    }
L_08B3A28C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A294;
    }
L_08B3A294:
    if (static_cast<std::int32_t>(aot_gpr_4) <= 0) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08B3A4A4;
    }
    goto L_08B3A29C;
L_08B3A29C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3A2D4;
      }
      goto L_08B3A2A4;
    }
L_08B3A2A4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    goto L_08B3A2A8;
L_08B3A2A8:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3A3C8;
      }
      goto L_08B3A2B0;
    }
L_08B3A2B0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A2B8;
    }
L_08B3A2B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3A6BC;
      }
      goto L_08B3A2C4;
    }
L_08B3A2C4:
    aot_gpr_4 = (15568u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 58720u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B3A6C8;
      }
      goto L_08B3A2D4;
    }
L_08B3A2D4:
    aot_gpr_31 = (0x08B3A2DCu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 600u, 0x08B3A2DCu, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A2DCu) goto L_08B3A2DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A2DC:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B3A2E8u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 601u, 0x08B3A2E8u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A2E8u) goto L_08B3A2E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A2E8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B3A2F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 602u, 0x08B3A2F8u, 0x08B3312Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 650u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 650u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A2F8u) goto L_08B3A2F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A2F8:
    aot_gpr_4 = (17249u << 16u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16675u << 16u);
      if (branch_taken) {
          goto L_08B3A33C;
      }
      goto L_08B3A314;
    }
L_08B3A314:
    aot_gpr_4 = (aot_gpr_4 | 55051u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B3A34C;
      }
      goto L_08B3A32C;
    }
L_08B3A32C:
    aot_gpr_31 = (0x08B3A334u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 605u, 0x08B3A334u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A334u) goto L_08B3A334;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A334:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B3A34C;
      }
      goto L_08B3A33C;
    }
L_08B3A33C:
    aot_gpr_31 = (0x08B3A344u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 607u, 0x08B3A344u, 0x08B34050u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 4u, 0x08B34050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A344u) goto L_08B3A344;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A344:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B3A388;
      }
      goto L_08B3A34C;
    }
L_08B3A34C:
    aot_gpr_31 = (0x08B3A354u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 609u, 0x08B3A354u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A354u) goto L_08B3A354;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A354:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B3A394;
      }
      goto L_08B3A35C;
    }
L_08B3A35C:
    aot_gpr_31 = (0x08B3A364u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 611u, 0x08B3A364u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A364u) goto L_08B3A364;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A364:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B3A370u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 612u, 0x08B3A370u, 0x08B34200u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 24u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 24u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 24u, 0x08B34200u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A370u) goto L_08B3A370;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A370:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B3A37Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 613u, 0x08B3A37Cu, 0x08B349A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 138u, 0x08B349A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A37Cu) goto L_08B3A37C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A37C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B3A394;
      }
      goto L_08B3A388;
    }
L_08B3A388:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A394;
    }
L_08B3A394:
    aot_gpr_4 = (17817u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A3B0;
    }
L_08B3A3B0:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08B3A3C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 617u, 0x08B3A3C0u, 0x08B3430Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 39u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 39u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 39u, 0x08B3430Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A3C0u) goto L_08B3A3C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A3C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3A730;
      }
      goto L_08B3A3C8;
    }
L_08B3A3C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3A3E8;
      }
      goto L_08B3A3D8;
    }
L_08B3A3D8:
    aot_gpr_4 = (15627u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 17302u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B3A3F4;
      }
      goto L_08B3A3E8;
    }
L_08B3A3E8:
    aot_gpr_4 = (15755u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 17302u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B3A3F4;
L_08B3A3F4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_08B3A410;
    }
    goto L_08B3A410;
L_08B3A410:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B3A41Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 623u, 0x08B3A41Cu, 0x08B336A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 727u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 727u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 727u, 0x08B336A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A41Cu) goto L_08B3A41C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A41C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B3A430;
      }
      goto L_08B3A424;
    }
L_08B3A424:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B3A494;
      }
      goto L_08B3A430;
    }
L_08B3A430:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B3A494;
      }
      goto L_08B3A448;
    }
L_08B3A448:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B3A464u);
    aot_gpr_6 = (0u | 74u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 627u, 0x08B3A464u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A464u) goto L_08B3A464;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A464:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(61)));
    aot_gpr_31 = (0x08B3A470u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0090.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 628u, 0x08B3A470u, 0x0896E7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0090_entry(rt, ctx, 597u, aot_mem);
#else
        recomp_unit_0090_entry(rt, ctx, 597u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 597u, 0x0896E7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A470u) goto L_08B3A470;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A470:
    aot_gpr_4 = (ctx.gpr[2] << 6u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14768));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B3A494u);
    aot_gpr_6 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 629u, 0x08B3A494u, 0x08B34D54u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 189u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 189u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 189u, 0x08B34D54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A494u) goto L_08B3A494;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A494:
    aot_gpr_31 = (0x08B3A49Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 630u, 0x08B3A49Cu, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A49Cu) goto L_08B3A49C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A49C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A4A4;
    }
L_08B3A4A4:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3A4FC;
      }
      goto L_08B3A4D0;
    }
L_08B3A4D0:
    aot_gpr_31 = (0x08B3A4D8u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 633u, 0x08B3A4D8u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A4D8u) goto L_08B3A4D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A4D8:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_31 = (0x08B3A4E4u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 634u, 0x08B3A4E4u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A4E4u) goto L_08B3A4E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A4E4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B3A4F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 635u, 0x08B3A4F4u, 0x08B3312Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 650u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 650u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A4F4u) goto L_08B3A4F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A4F4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B3A508;
      }
      goto L_08B3A4FC;
    }
L_08B3A4FC:
    aot_gpr_4 = (32639u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 65535u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B3A508;
L_08B3A508:
    aot_gpr_4 = (16634u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 57671u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17096u << 16u);
      if (branch_taken) {
          goto L_08B3A548;
      }
      goto L_08B3A524;
    }
L_08B3A524:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B3A6B4;
      }
      goto L_08B3A538;
    }
L_08B3A538:
    aot_gpr_31 = (0x08B3A540u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 640u, 0x08B3A540u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A540u) goto L_08B3A540;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A540:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B3A6B4;
      }
      goto L_08B3A548;
    }
L_08B3A548:
    aot_gpr_31 = (0x08B3A550u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 642u, 0x08B3A550u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A550u) goto L_08B3A550;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B3A67C;
      }
      goto L_08B3A558;
    }
L_08B3A558:
    aot_gpr_31 = (0x08B3A560u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(61)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0090.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 644u, 0x08B3A560u, 0x0896E710u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0090_entry(rt, ctx, 591u, aot_mem);
#else
        recomp_unit_0090_entry(rt, ctx, 591u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 591u, 0x0896E710u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A560u) goto L_08B3A560;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A560:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B3A56Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 645u, 0x08B3A56Cu, 0x08B349A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 138u, 0x08B349A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A56Cu) goto L_08B3A56C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A56C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B3A67C;
      }
      goto L_08B3A578;
    }
L_08B3A578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3A6B4;
      }
      goto L_08B3A584;
    }
L_08B3A584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08B3A594u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 648u, 0x08B3A594u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A594u) goto L_08B3A594;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A594:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08B3A5B0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 649u, 0x08B3A5B0u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A5B0u) goto L_08B3A5B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A5B0:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
      if (branch_taken) {
          goto L_08B3A674;
      }
      goto L_08B3A5C4;
    }
L_08B3A5C4:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16840u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B3A674;
      }
      goto L_08B3A5E8;
    }
L_08B3A5E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17292)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(18001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B3A674;
      }
      goto L_08B3A600;
    }
L_08B3A600:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B3A618;
    }
    goto L_08B3A60C;
L_08B3A60C:
    aot_gpr_31 = (0x08B3A614u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A614u) goto L_08B3A614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3A614:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B3A618;
L_08B3A618:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08B3A648;
      }
      goto L_08B3A620;
    }
L_08B3A620:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08B3A62Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 657u, 0x08B3A62Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A62Cu) goto L_08B3A62C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A62C:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08B3A644;
      }
      goto L_08B3A638;
    }
L_08B3A638:
    aot_gpr_31 = (0x08B3A640u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A640u) goto L_08B3A640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3A640:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08B3A644;
L_08B3A644:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08B3A648;
L_08B3A648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08B3A654u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(4456));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 662u, 0x08B3A654u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A654u) goto L_08B3A654;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A654:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08B3A66Cu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 663u, 0x08B3A66Cu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A66Cu) goto L_08B3A66C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A66C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17292), aot_gpr_4);
    goto L_08B3A674;
L_08B3A674:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3A6B4;
      }
      goto L_08B3A67C;
    }
L_08B3A67C:
    aot_gpr_31 = (0x08B3A684u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(61)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0090.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 666u, 0x08B3A684u, 0x0896E7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0090_entry(rt, ctx, 597u, aot_mem);
#else
        recomp_unit_0090_entry(rt, ctx, 597u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 597u, 0x0896E7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A684u) goto L_08B3A684;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A684:
    aot_gpr_4 = (ctx.gpr[2] << 6u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14768));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_31 = (0x08B3A6A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 667u, 0x08B3A6A4u, 0x08B34FC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 220u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 220u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 220u, 0x08B34FC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A6A4u) goto L_08B3A6A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A6A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B3A6B4;
      }
      goto L_08B3A6AC;
    }
L_08B3A6AC:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B3A6B4;
L_08B3A6B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A6BC;
    }
L_08B3A6BC:
    aot_gpr_4 = (15731u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 46662u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B3A6C8;
L_08B3A6C8:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_08B3A6E8;
    }
    goto L_08B3A6E8;
L_08B3A6E8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B3A720;
      }
      goto L_08B3A6FC;
    }
L_08B3A6FC:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B3A720u);
    aot_gpr_6 = (0u | 75u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 674u, 0x08B3A720u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A720u) goto L_08B3A720;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A720:
    aot_gpr_31 = (0x08B3A728u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 675u, 0x08B3A728u, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A728u) goto L_08B3A728;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A728:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3A3C0;
      }
      goto L_08B3A730;
    }
L_08B3A730:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3A750:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(62)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3A794;
      }
      goto L_08B3A77C;
    }
L_08B3A77C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A784;
    }
L_08B3A784:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08B3A94C;
      }
      goto L_08B3A78C;
    }
L_08B3A78C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3A7C0;
      }
      goto L_08B3A794;
    }
L_08B3A794:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3A8A8;
      }
      goto L_08B3A79C;
    }
L_08B3A79C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A7A4;
    }
L_08B3A7A4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3A9BC;
      }
      goto L_08B3A7B0;
    }
L_08B3A7B0:
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B3A9C8;
      }
      goto L_08B3A7C0;
    }
L_08B3A7C0:
    aot_gpr_31 = (0x08B3A7C8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 686u, 0x08B3A7C8u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A7C8u) goto L_08B3A7C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A7C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08B3A7F0u);
    ctx.fpr[22] = aot_fpr_14 - aot_fpr_12;
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 687u, 0x08B3A7F0u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A7F0u) goto L_08B3A7F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A7F0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[15];
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = ctx.fpr[16] - aot_fpr_13;
    aot_gpr_31 = (0x08B3A814u);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 688u, 0x08B3A814u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A814u) goto L_08B3A814;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A814:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x08B3A834u);
    ctx.fpr[24] = ctx.fpr[17] - aot_fpr_13;
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 689u, 0x08B3A834u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A834u) goto L_08B3A834;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A834:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    aot_gpr_4 = (17505u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[15] - aot_fpr_12;
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A86C;
    }
L_08B3A86C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A878;
    }
L_08B3A878:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08B3A888u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 692u, 0x08B3A888u, 0x08B33424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 703u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 703u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 703u, 0x08B33424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A888u) goto L_08B3A888;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A888:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A890;
    }
L_08B3A890:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B3A8A0;
L_08B3A8A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3AA30;
      }
      goto L_08B3A8A8;
    }
L_08B3A8A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3A8C0;
      }
      goto L_08B3A8B4;
    }
L_08B3A8B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_31 = (0x08B3A8C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 697u, 0x08B3A8C0u, 0x08B33BD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 783u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 783u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 783u, 0x08B33BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A8C0u) goto L_08B3A8C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A8C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(77)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B3A8E0;
      }
      goto L_08B3A8D0;
    }
L_08B3A8D0:
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B3A8EC;
      }
      goto L_08B3A8E0;
    }
L_08B3A8E0:
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B3A8EC;
L_08B3A8EC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_08B3A908;
    }
    goto L_08B3A908;
L_08B3A908:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B3A93C;
      }
      goto L_08B3A91C;
    }
L_08B3A91C:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B3A938u);
    aot_gpr_6 = (0u | 74u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 703u, 0x08B3A938u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A938u) goto L_08B3A938;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A938:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    goto L_08B3A93C;
L_08B3A93C:
    aot_gpr_31 = (0x08B3A944u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 705u, 0x08B3A944u, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A944u) goto L_08B3A944;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A944:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A94C;
    }
L_08B3A94C:
    aot_gpr_31 = (0x08B3A954u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 707u, 0x08B3A954u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A954u) goto L_08B3A954;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A954:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_08B3A9B4;
      }
      goto L_08B3A960;
    }
L_08B3A960:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3A9B4;
      }
      goto L_08B3A96C;
    }
L_08B3A96C:
    aot_gpr_31 = (0x08B3A974u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 710u, 0x08B3A974u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A974u) goto L_08B3A974;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A974:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08B3A980u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 711u, 0x08B3A980u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A980u) goto L_08B3A980;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A980:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B3A994u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0203.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 712u, 0x08B3A994u, 0x08B3312Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0203_entry(rt, ctx, 650u, aot_mem);
#else
        recomp_unit_0203_entry(rt, ctx, 650u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3A994u) goto L_08B3A994;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3A994:
    aot_gpr_4 = (17024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B3A9B4;
      }
      goto L_08B3A9AC;
    }
L_08B3A9AC:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B3A9B4;
L_08B3A9B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3A9BC;
    }
L_08B3A9BC:
    aot_gpr_4 = (15631u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B3A9C8;
L_08B3A9C8:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_08B3A9E8;
    }
    goto L_08B3A9E8;
L_08B3A9E8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B3AA20;
      }
      goto L_08B3A9FC;
    }
L_08B3A9FC:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08B3AA20u);
    aot_gpr_6 = (0u | 75u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 719u, 0x08B3AA20u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3AA20u) goto L_08B3AA20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3AA20:
    aot_gpr_31 = (0x08B3AA28u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0204.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 720u, 0x08B3AA28u, 0x08B34444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0204_entry(rt, ctx, 60u, aot_mem);
#else
        recomp_unit_0204_entry(rt, ctx, 60u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3AA28u) goto L_08B3AA28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3AA28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3A8A0;
      }
      goto L_08B3AA30;
    }
L_08B3AA30:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3AA4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4476)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08B3AA8C;
      }
      goto L_08B3AA60;
    }
L_08B3AA60:
    aot_gpr_4 = (2233u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08B3AA7Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-30976));
    ctx.pc = 0x08B7341Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AA7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4476), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B3AA94;
      }
      goto L_08B3AA84;
    }
L_08B3AA84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4476)));
      if (branch_taken) {
          goto L_08B3AA98;
      }
      goto L_08B3AA8C;
    }
L_08B3AA8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3AA98;
      }
      goto L_08B3AA94;
    }
L_08B3AA94:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B3AA98;
L_08B3AA98:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3AAA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4476)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B3AABCu);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = 0x08B734BCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AABC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3AAC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4476)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B3AADCu);
    aot_gpr_5 = (0u | 1u);
    ctx.pc = 0x08B734A4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AADC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3AAE8:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4488)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3AAF0:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4489)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3AAF8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (9u << 16u);
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3AB78;
      }
      goto L_08B3AB10;
    }
L_08B3AB10:
    aot_gpr_4 = (0u | 0u);
    goto L_08B3AB14;
L_08B3AB14:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 3u);
    aot_gpr_31 = (0x08B3AB24u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08B73204u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AB24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B3AB3C;
      }
      goto L_08B3AB2C;
    }
L_08B3AB2C:
    aot_gpr_31 = (0x08B3AB34u);
    aot_gpr_4 = (0u | 50u);
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AB34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3AB14;
      }
      goto L_08B3AB3C;
    }
L_08B3AB3C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4488), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19661)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B3AB8C;
      }
      goto L_08B3AB50;
    }
L_08B3AB50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B3AB68;
      }
      goto L_08B3AB5C;
    }
L_08B3AB5C:
    aot_gpr_31 = (0x08B3AB64u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3AB64u) goto L_08B3AB64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AB64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08B3AB68;
L_08B3AB68:
    aot_gpr_31 = (0x08B3AB70u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 746u, 0x08B3AB70u, 0x08A55324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 299u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 299u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 299u, 0x08A55324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3AB70u) goto L_08B3AB70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3AB70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3AB8C;
      }
      goto L_08B3AB78;
    }
L_08B3AB78:
    aot_gpr_4 = (6u << 16u);
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3AB8C;
      }
      goto L_08B3AB88;
    }
L_08B3AB88:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4488), static_cast<std::uint8_t>(0u));
    goto L_08B3AB8C;
L_08B3AB8C:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3AB9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 & 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B3AC04;
      }
      goto L_08B3ABB4;
    }
L_08B3ABB4:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3AC04;
      }
      goto L_08B3ABC0;
    }
L_08B3ABC0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4488)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B3ABD0;
      }
      goto L_08B3ABCC;
    }
L_08B3ABCC:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4489), static_cast<std::uint8_t>(0u));
    goto L_08B3ABD0;
L_08B3ABD0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3AC04;
      }
      goto L_08B3ABDC;
    }
L_08B3ABDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08B3ABF4;
    }
    goto L_08B3ABE8;
L_08B3ABE8:
    aot_gpr_31 = (0x08B3ABF0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3ABF0u) goto L_08B3ABF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ABF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08B3ABF4;
L_08B3ABF4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(68));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08B3AC04;
L_08B3AC04:
    aot_gpr_4 = (aot_gpr_16 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3AC1C;
      }
      goto L_08B3AC10;
    }
L_08B3AC10:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4489), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B3AC4C;
      }
      goto L_08B3AC1C;
    }
L_08B3AC1C:
    aot_gpr_4 = (aot_gpr_16 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B3AC4C;
      }
      goto L_08B3AC28;
    }
L_08B3AC28:
    aot_gpr_4 = (aot_gpr_16 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3AC4C;
      }
      goto L_08B3AC34;
    }
L_08B3AC34:
    aot_gpr_31 = (0x08B3AC3Cu);
    ctx.pc = 0x08B73104u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AC3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B3AC4C;
      }
      goto L_08B3AC44;
    }
L_08B3AC44:
    aot_gpr_31 = (0x08B3AC4Cu);
    ctx.pc = 0x08B730FCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AC4C:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3AC60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B3AC70u);
    ctx.pc = 0x08B735F4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AC70:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3AC80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B3AC90u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7312Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AC90:
    aot_gpr_31 = (0x08B3AC98u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B73084u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AC98:
    aot_gpr_31 = (0x08B3ACA0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ACA0:
    aot_gpr_31 = (0x08B3ACA8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ACA8:
    aot_gpr_31 = (0x08B3ACB0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4472)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ACB0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3ACBC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (2228u << 16u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4492));
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B3ACDCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21768));
    ctx.pc = 0x08B73444u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ACDC:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08B3AE48;
      }
      goto L_08B3ACE8;
    }
L_08B3ACE8:
    aot_gpr_5 = (2228u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4468), aot_gpr_16);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4508));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08B3AD00u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21604));
    ctx.pc = 0x08B73444u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AD00:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08B3AE38;
      }
      goto L_08B3AD0C;
    }
L_08B3AD0C:
    aot_gpr_5 = (2228u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4464), aot_gpr_16);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4520));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08B3AD24u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21408));
    ctx.pc = 0x08B73444u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AD24:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08B3AE20;
      }
      goto L_08B3AD30;
    }
L_08B3AD30:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4472), aot_gpr_16);
    aot_gpr_31 = (0x08B3AD40u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B7307Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AD40:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08B3AE00;
      }
      goto L_08B3AD4C;
    }
L_08B3AD4C:
    aot_gpr_31 = (0x08B3AD54u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B73124u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AD54:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08B3ADD8;
      }
      goto L_08B3AD60;
    }
L_08B3AD60:
    aot_gpr_31 = (0x08B3AD68u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4472)));
    ctx.pc = 0x08B735FCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AD68:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08B3ADA8;
      }
      goto L_08B3AD74;
    }
L_08B3AD74:
    aot_gpr_31 = (0x08B3AD7Cu);
    goto L_08B3AA4C;
L_08B3AD7C:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08B3AD98;
      }
      goto L_08B3AD88;
    }
L_08B3AD88:
    aot_gpr_31 = (0x08B3AD90u);
    aot_gpr_4 = (0u | 10000u);
    ctx.pc = 0x08B734DCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AD90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3AD88;
      }
      goto L_08B3AD98;
    }
L_08B3AD98:
    aot_gpr_31 = (0x08B3ADA0u);
    goto L_08B3AC80;
L_08B3ADA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B3AE4C;
      }
      goto L_08B3ADA8;
    }
L_08B3ADA8:
    aot_gpr_31 = (0x08B3ADB0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7312Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ADB0:
    aot_gpr_31 = (0x08B3ADB8u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B73084u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ADB8:
    aot_gpr_31 = (0x08B3ADC0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ADC0:
    aot_gpr_31 = (0x08B3ADC8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ADC8:
    aot_gpr_31 = (0x08B3ADD0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4472)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ADD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B3AE4C;
      }
      goto L_08B3ADD8;
    }
L_08B3ADD8:
    aot_gpr_31 = (0x08B3ADE0u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B73084u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ADE0:
    aot_gpr_31 = (0x08B3ADE8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ADE8:
    aot_gpr_31 = (0x08B3ADF0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ADF0:
    aot_gpr_31 = (0x08B3ADF8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4472)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3ADF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B3AE4C;
      }
      goto L_08B3AE00;
    }
L_08B3AE00:
    aot_gpr_31 = (0x08B3AE08u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AE08:
    aot_gpr_31 = (0x08B3AE10u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AE10:
    aot_gpr_31 = (0x08B3AE18u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4472)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AE18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B3AE4C;
      }
      goto L_08B3AE20;
    }
L_08B3AE20:
    aot_gpr_31 = (0x08B3AE28u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4464)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AE28:
    aot_gpr_31 = (0x08B3AE30u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AE30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B3AE4C;
      }
      goto L_08B3AE38;
    }
L_08B3AE38:
    aot_gpr_31 = (0x08B3AE40u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4468)));
    ctx.pc = 0x08B7345Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AE40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B3AE4C;
      }
      goto L_08B3AE48;
    }
L_08B3AE48:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    goto L_08B3AE4C;
L_08B3AE4C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3AE5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B3AE6Cu);
    ctx.pc = 0x08B7347Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AE6C:
    aot_gpr_5 = (2228u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4484), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(4536));
    aot_gpr_6 = (0u | 111u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08B3AE90u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21316));
    ctx.pc = 0x08B734B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AE90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
      if (branch_taken) {
          goto L_08B3AEA0;
      }
      goto L_08B3AE98;
    }
L_08B3AE98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3AEB8;
      }
      goto L_08B3AEA0;
    }
L_08B3AEA0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(4480), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B3AEB4u);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = 0x08B73464u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AEB4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B3AEB8;
L_08B3AEB8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3AEC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (32801u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    goto L_08B3AEFC;
L_08B3AEFC:
    aot_gpr_31 = (0x08B3AF04u);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AF04:
    aot_gpr_4 = (ctx.gpr[2] & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B3AF40;
      }
      goto L_08B3AF10;
    }
L_08B3AF10:
    aot_gpr_31 = (0x08B3AF18u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 826u, 0x08B3AF18u, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3AF18u) goto L_08B3AF18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3AF18:
    aot_gpr_31 = (0x08B3AF20u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AF20:
    aot_gpr_31 = (0x08B3AF28u);
    aot_gpr_4 = (0u | 32u);
    ctx.pc = 0x08B7311Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AF28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
      if (branch_taken) {
          goto L_08B3AF38;
      }
      goto L_08B3AF30;
    }
L_08B3AF30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3B004;
      }
      goto L_08B3AF38;
    }
L_08B3AF38:
    aot_gpr_31 = (0x08B3AF40u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AF40:
    aot_gpr_31 = (0x08B3AF48u);
    goto L_08B3AAA4;
L_08B3AF48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
      if (branch_taken) {
          goto L_08B3AF58;
      }
      goto L_08B3AF50;
    }
L_08B3AF50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3AF30;
      }
      goto L_08B3AF58;
    }
L_08B3AF58:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3AF68u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.pc = 0x08B73654u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AF68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
      if (branch_taken) {
          goto L_08B3AF78;
      }
      goto L_08B3AF70;
    }
L_08B3AF70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3AF30;
      }
      goto L_08B3AF78;
    }
L_08B3AF78:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
      if (branch_taken) {
          goto L_08B3AF9C;
      }
      goto L_08B3AF80;
    }
L_08B3AF80:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
      if (branch_taken) {
          goto L_08B3AF9C;
      }
      goto L_08B3AF88;
    }
L_08B3AF88:
    aot_gpr_31 = (0x08B3AF90u);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AF90:
    aot_gpr_4 = (ctx.gpr[2] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3AFCC;
      }
      goto L_08B3AF9C;
    }
L_08B3AF9C:
    aot_gpr_31 = (0x08B3AFA4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 842u, 0x08B3AFA4u, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3AFA4u) goto L_08B3AFA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3AFA4:
    aot_gpr_31 = (0x08B3AFACu);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AFAC:
    aot_gpr_31 = (0x08B3AFB4u);
    aot_gpr_4 = (0u | 2u);
    ctx.pc = 0x08B7311Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AFB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
      if (branch_taken) {
          goto L_08B3AFC4;
      }
      goto L_08B3AFBC;
    }
L_08B3AFBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3AF30;
      }
      goto L_08B3AFC4;
    }
L_08B3AFC4:
    aot_gpr_31 = (0x08B3AFCCu);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AFCC:
    aot_gpr_31 = (0x08B3AFD4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 848u, 0x08B3AFD4u, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3AFD4u) goto L_08B3AFD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3AFD4:
    aot_gpr_31 = (0x08B3AFDCu);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AFDC:
    aot_gpr_31 = (0x08B3AFE4u);
    aot_gpr_4 = (0u | 32u);
    ctx.pc = 0x08B7311Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AFE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
      if (branch_taken) {
          goto L_08B3AFF4;
      }
      goto L_08B3AFEC;
    }
L_08B3AFEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3AF30;
      }
      goto L_08B3AFF4;
    }
L_08B3AFF4:
    aot_gpr_31 = (0x08B3AFFCu);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3AFFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3AEFC;
      }
      goto L_08B3B004;
    }
L_08B3B004:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3B024:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B3B050u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08B3AAA4;
L_08B3B050:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08B3B0B4;
      }
      goto L_08B3B05C;
    }
L_08B3B05C:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B3B070u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B7362Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B070:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4564)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4560)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[17] ^ ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_16 < aot_gpr_6 ? 1u : 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3B0C0;
      }
      goto L_08B3B0A0;
    }
L_08B3B0A0:
    aot_gpr_31 = (0x08B3B0A8u);
    goto L_08B3AAC8;
L_08B3B0A8:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B3B0C8;
      }
      goto L_08B3B0B4;
    }
L_08B3B0B4:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3B0C8;
      }
      goto L_08B3B0C0;
    }
L_08B3B0C0:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    goto L_08B3B0C8;
L_08B3B0C8:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3B0E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (32801u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    goto L_08B3B120;
L_08B3B120:
    aot_gpr_31 = (0x08B3B128u);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B128:
    aot_gpr_4 = (ctx.gpr[2] & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B3B168;
      }
      goto L_08B3B134;
    }
L_08B3B134:
    aot_gpr_31 = (0x08B3B13Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 868u, 0x08B3B13Cu, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B13Cu) goto L_08B3B13C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B13C:
    aot_gpr_31 = (0x08B3B144u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B144:
    aot_gpr_31 = (0x08B3B14Cu);
    aot_gpr_4 = (0u | 32u);
    ctx.pc = 0x08B7311Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B14C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
      if (branch_taken) {
          goto L_08B3B160;
      }
      goto L_08B3B158;
    }
L_08B3B158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08B3B240;
      }
      goto L_08B3B160;
    }
L_08B3B160:
    aot_gpr_31 = (0x08B3B168u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B168:
    aot_gpr_31 = (0x08B3B170u);
    goto L_08B3AAA4;
L_08B3B170:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
      if (branch_taken) {
          goto L_08B3B184;
      }
      goto L_08B3B17C;
    }
L_08B3B17C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3B158;
      }
      goto L_08B3B184;
    }
L_08B3B184:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3B194u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.pc = 0x08B73624u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B194:
    aot_gpr_31 = (0x08B3B19Cu);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08B3AAC8;
L_08B3B19C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
      if (branch_taken) {
          goto L_08B3B1AC;
      }
      goto L_08B3B1A4;
    }
L_08B3B1A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3B158;
      }
      goto L_08B3B1AC;
    }
L_08B3B1AC:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
      if (branch_taken) {
          goto L_08B3B1D0;
      }
      goto L_08B3B1B4;
    }
L_08B3B1B4:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[19];
      if (branch_taken) {
          goto L_08B3B1D0;
      }
      goto L_08B3B1BC;
    }
L_08B3B1BC:
    aot_gpr_31 = (0x08B3B1C4u);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B1C4:
    aot_gpr_4 = (ctx.gpr[2] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3B204;
      }
      goto L_08B3B1D0;
    }
L_08B3B1D0:
    aot_gpr_31 = (0x08B3B1D8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 885u, 0x08B3B1D8u, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B1D8u) goto L_08B3B1D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B1D8:
    aot_gpr_31 = (0x08B3B1E0u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B1E0:
    aot_gpr_31 = (0x08B3B1E8u);
    aot_gpr_4 = (0u | 2u);
    ctx.pc = 0x08B7311Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B1E8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
      if (branch_taken) {
          goto L_08B3B1FC;
      }
      goto L_08B3B1F4;
    }
L_08B3B1F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3B158;
      }
      goto L_08B3B1FC;
    }
L_08B3B1FC:
    aot_gpr_31 = (0x08B3B204u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B204:
    aot_gpr_31 = (0x08B3B20Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 891u, 0x08B3B20Cu, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B20Cu) goto L_08B3B20C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B20C:
    aot_gpr_31 = (0x08B3B214u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B214:
    aot_gpr_31 = (0x08B3B21Cu);
    aot_gpr_4 = (0u | 32u);
    ctx.pc = 0x08B7311Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B21C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
      if (branch_taken) {
          goto L_08B3B230;
      }
      goto L_08B3B228;
    }
L_08B3B228:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3B158;
      }
      goto L_08B3B230;
    }
L_08B3B230:
    aot_gpr_31 = (0x08B3B238u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B238:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3B120;
      }
      goto L_08B3B240;
    }
L_08B3B240:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3B264:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B3B290u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08B3AAA4;
L_08B3B290:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08B3B314;
      }
      goto L_08B3B29C;
    }
L_08B3B29C:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B3B2B0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B7369Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B2B0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4564)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4560)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (ctx.gpr[17] ^ aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_16 < aot_gpr_4 ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[7]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B3B300;
      }
      goto L_08B3B2E0;
    }
L_08B3B2E0:
    aot_gpr_31 = (0x08B3B2E8u);
    goto L_08B3AAC8;
L_08B3B2E8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08B3B320;
      }
      goto L_08B3B2F4;
    }
L_08B3B2F4:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3B328;
      }
      goto L_08B3B300;
    }
L_08B3B300:
    aot_gpr_31 = (0x08B3B308u);
    goto L_08B3AAC8;
L_08B3B308:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B3B328;
      }
      goto L_08B3B314;
    }
L_08B3B314:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3B328;
      }
      goto L_08B3B320;
    }
L_08B3B320:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    goto L_08B3B328;
L_08B3B328:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3B344:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2234u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(13968));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3B410;
      }
      goto L_08B3B374;
    }
L_08B3B374:
    ctx.gpr[18] = (aot_gpr_16 | 0u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[20] == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
        goto L_08B3B3E8;
    }
    goto L_08B3B384;
L_08B3B384:
    aot_gpr_31 = (0x08B3B38Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B38Cu) goto L_08B3B38C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B38C:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3B3A8;
      }
      goto L_08B3B398;
    }
L_08B3B398:
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(-32));
    ctx.gpr[20] = (aot_gpr_5 << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
      if (branch_taken) {
          goto L_08B3B3A8;
      }
      goto L_08B3B3A8;
    }
L_08B3B3A8:
    aot_gpr_31 = (0x08B3B3B0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 340u, 0x08B552D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B3B0u) goto L_08B3B3B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B3B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3B3C8;
      }
      goto L_08B3B3B8;
    }
L_08B3B3B8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
      if (branch_taken) {
          goto L_08B3B3C8;
      }
      goto L_08B3B3C8;
    }
L_08B3B3C8:
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3B3D8;
      }
      goto L_08B3B3D0;
    }
L_08B3B3D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3B3F8;
      }
      goto L_08B3B3D8;
    }
L_08B3B3D8:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B3B384;
      }
      goto L_08B3B3E4;
    }
L_08B3B3E4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    goto L_08B3B3E8;
L_08B3B3E8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3B3F8;
      }
      goto L_08B3B3F0;
    }
L_08B3B3F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B3B3F8;
      }
      goto L_08B3B3F8;
    }
L_08B3B3F8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3B418;
      }
      goto L_08B3B400;
    }
L_08B3B400:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08B3B374;
      }
      goto L_08B3B410;
    }
L_08B3B410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B3B41C;
      }
      goto L_08B3B418;
    }
L_08B3B418:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B3B41C;
L_08B3B41C:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3B43C:
    ctx.gpr[7] = (0u | 10u);
    aot_gpr_6 = (0u | 13u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    goto L_08B3B448;
L_08B3B448:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
      if (branch_taken) {
          goto L_08B3B458;
      }
      goto L_08B3B450;
    }
L_08B3B450:
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_08B3B464;
      }
      goto L_08B3B458;
    }
L_08B3B458:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3B448;
      }
      goto L_08B3B464;
    }
L_08B3B464:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08B3B474;
      }
      goto L_08B3B46C;
    }
L_08B3B46C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3B47C;
      }
      goto L_08B3B474;
    }
L_08B3B474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3B4B0;
      }
      goto L_08B3B47C;
    }
L_08B3B47C:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
      if (branch_taken) {
          goto L_08B3B4A8;
      }
      goto L_08B3B484;
    }
L_08B3B484:
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_6;
      if (branch_taken) {
          goto L_08B3B4A8;
      }
      goto L_08B3B48C;
    }
L_08B3B48C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08B3B4A8;
      }
      goto L_08B3B494;
    }
L_08B3B494:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B3B47C;
      }
      goto L_08B3B4A8;
    }
L_08B3B4A8:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    goto L_08B3B4B0;
L_08B3B4B0:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3B4B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_31 = (0x08B3B4DCu);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 943u, 0x08B3B4DCu, 0x0895B9F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 525u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 525u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 525u, 0x0895B9F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B4DCu) goto L_08B3B4DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B4DC:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x08B3B4E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 944u, 0x08B3B4E8u, 0x0895B9F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 525u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 525u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 525u, 0x0895B9F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B4E8u) goto L_08B3B4E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B4E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
        goto L_08B3B544;
    }
    goto L_08B3B51C;
L_08B3B51C:
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08B3B530u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 946u, 0x08B3B530u, 0x088618A8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 233u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 233u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 233u, 0x088618A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B530u) goto L_08B3B530;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B530:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B3B51C;
      }
      goto L_08B3B540;
    }
L_08B3B540:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_08B3B544;
L_08B3B544:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B3B580;
      }
      goto L_08B3B57C;
    }
L_08B3B57C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08B3B580;
L_08B3B580:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3B5A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (2246u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(27328));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-30400));
    aot_gpr_16 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (2228u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-19272));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x08B3B5E4u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0117.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 952u, 0x08B3B5E4u, 0x089D86FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0117_entry(rt, ctx, 82u, aot_mem);
#else
        recomp_unit_0117_entry(rt, ctx, 82u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B5E4u) goto L_08B3B5E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B5E4:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B3B600;
      }
      goto L_08B3B5FC;
    }
L_08B3B5FC:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B3B600;
L_08B3B600:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B3B618;
      }
      goto L_08B3B614;
    }
L_08B3B614:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08B3B618;
L_08B3B618:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
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
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
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
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3B670:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08B3B698u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 958u, 0x08B3B698u, 0x0889EB08u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B698u) goto L_08B3B698;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B698:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B3B6A4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B6A4u) goto L_08B3B6A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B6A4:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(500), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(496), ctx.gpr[2]);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3B6C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 380 ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B3B78C;
      }
      goto L_08B3B6EC;
    }
L_08B3B6EC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 390 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3B78C;
      }
      goto L_08B3B6F8;
    }
L_08B3B6F8:
    aot_gpr_6 = (aot_gpr_16 << 6u);
    ctx.gpr[7] = (aot_gpr_16 << 4u);
    ctx.gpr[18] = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (2246u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(27328));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-30400));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_6);
      if (branch_taken) {
          goto L_08B3B734;
      }
      goto L_08B3B724;
    }
L_08B3B724:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_16 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B3B734;
L_08B3B734:
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B3B760;
      }
      goto L_08B3B750;
    }
L_08B3B750:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_16 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B3B760;
L_08B3B760:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08B3B778u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B778u) goto L_08B3B778;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B778:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B3B78Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08B3B5A0;
L_08B3B78C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08B3B798u);
    aot_gpr_4 = (0u | 544u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0009.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 969u, 0x08B3B798u, 0x0882B994u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0009_entry(rt, ctx, 392u, aot_mem);
#else
        recomp_unit_0009_entry(rt, ctx, 392u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B798u) goto L_08B3B798;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B798:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_5 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B3B7B4;
      }
      goto L_08B3B7A4;
    }
L_08B3B7A4:
    aot_gpr_31 = (0x08B3B7ACu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 971u, 0x08B3B7ACu, 0x08A196ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 144u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 144u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 144u, 0x08A196ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B7ACu) goto L_08B3B7AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B7AC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08B3B7B4;
L_08B3B7B4:
    aot_gpr_16 = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B3B7D0u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B7D0u) goto L_08B3B7D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B7D0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_08B3B7E8;
    }
    goto L_08B3B7DC;
L_08B3B7DC:
    aot_gpr_31 = (0x08B3B7E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 975u, 0x08B3B7E4u, 0x08A197FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 156u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 156u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 156u, 0x08A197FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B7E4u) goto L_08B3B7E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B7E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_08B3B7E8;
L_08B3B7E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(7740), aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), aot_gpr_4);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3B824:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(158)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3B86C;
      }
      goto L_08B3B83C;
    }
L_08B3B83C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x08B3B84Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 979u, 0x08B3B84Cu, 0x08A1C768u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 73u, 0x08A1C768u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B84Cu) goto L_08B3B84C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B84C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[0]) || std::isnan(aot_fpr_12)) && ctx.fpr[0] == aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_16 = (0u | 1u);
        goto L_08B3B864;
    }
    goto L_08B3B864;
L_08B3B864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 & 255u);
      if (branch_taken) {
          goto L_08B3B870;
      }
      goto L_08B3B86C;
    }
L_08B3B86C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B3B870;
L_08B3B870:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3B880:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
        goto L_08B3B8B4;
    }
    goto L_08B3B8A8;
L_08B3B8A8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B3B8C4;
      }
      goto L_08B3B8B4;
    }
L_08B3B8B4:
    ctx.gpr[2] = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (aot_gpr_4 + ctx.gpr[2]);
    goto L_08B3B8C4;
L_08B3B8C4:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3B8CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B3B8E8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(36));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 988u, 0x08B3B8E8u, 0x088E2728u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 222u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 222u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 222u, 0x088E2728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B8E8u) goto L_08B3B8E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B8E8:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08B3B8F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 989u, 0x08B3B8F8u, 0x08890474u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B8F8u) goto L_08B3B8F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B8F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
        goto L_08B3B92C;
    }
    goto L_08B3B920;
L_08B3B920:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08B3B92C;
L_08B3B92C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_16);
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
L_08B3B948:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(158)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B3B9BC;
      }
      goto L_08B3B968;
    }
L_08B3B968:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_16 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(96));
    aot_gpr_31 = (0x08B3B97Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 994u, 0x08B3B97Cu, 0x08A1CE68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 140u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 140u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 140u, 0x08A1CE68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B97Cu) goto L_08B3B97C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B97C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B3B988u);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 995u, 0x08B3B988u, 0x08A1D5F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 268u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 268u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 268u, 0x08A1D5F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B988u) goto L_08B3B988;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B988:
    aot_gpr_31 = (0x08B3B990u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 996u, 0x08B3B990u, 0x08A1D29Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 218u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 218u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 218u, 0x08A1D29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B990u) goto L_08B3B990;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B990:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08B3B9A8;
    }
    goto L_08B3B99C;
L_08B3B99C:
    aot_gpr_31 = (0x08B3B9A4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B9A4u) goto L_08B3B9A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3B9A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08B3B9A8;
L_08B3B9A8:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08B3B9BCu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 1000u, 0x08B3B9BCu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3B9BCu) goto L_08B3B9BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3B9BC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3B9CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (16256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[21] = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B3BBC8;
      }
      goto L_08B3BA20;
    }
L_08B3BA20:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (0u | 2u);
    aot_gpr_16 = (ctx.gpr[21] << 2u);
    goto L_08B3BA34;
L_08B3BA34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(7740)));
    aot_gpr_31 = (0x08B3BA48u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0018.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 1004u, 0x08B3BA48u, 0x0884D5D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0018_entry(rt, ctx, 271u, aot_mem);
#else
        recomp_unit_0018_entry(rt, ctx, 271u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BA48u) goto L_08B3BA48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3BA48:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B3BB3C;
      }
      goto L_08B3BA54;
    }
L_08B3BA54:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(7740)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(496)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
        goto L_08B3BA88;
    }
    goto L_08B3BA74;
L_08B3BA74:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
      if (branch_taken) {
          goto L_08B3BB2C;
      }
      goto L_08B3BA88;
    }
L_08B3BA88:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 2u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
        goto L_08B3BAB0;
    }
    goto L_08B3BAA4;
L_08B3BAA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08B3BAB4;
      }
      goto L_08B3BAB0;
    }
L_08B3BAB0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10));
    goto L_08B3BAB4;
L_08B3BAB4:
    ctx.gpr[18] = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[18]));
    ctx.gpr[18] = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), ctx.gpr[18]));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[18]);
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_gpr_5);
    ctx.execute_vfpu_vh2f_ct<1u, 0u, 2u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(7740)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(48), aot_run_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(7740)));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08B3BB2C;
L_08B3BB2C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
      if (branch_taken) {
          goto L_08B3BB78;
      }
      goto L_08B3BB3C;
    }
L_08B3BB3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(7740)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(7740)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08B3BB78;
L_08B3BB78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_31 = (0x08B3BB88u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(7740)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 1014u, 0x08B3BB88u, 0x08891A2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 224u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 224u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BB88u) goto L_08B3BB88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3BB88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(7740)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[30];
      if (branch_taken) {
          goto L_08B3BBB4;
      }
      goto L_08B3BBA4;
    }
L_08B3BBA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_31 = (0x08B3BBB4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(7740)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 1016u, 0x08B3BBB4u, 0x08AD06ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 73u, 0x08AD06ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BBB4u) goto L_08B3BBB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3BBB4:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B3BA34;
      }
      goto L_08B3BBC8;
    }
L_08B3BBC8:
    aot_gpr_31 = (0x08B3BBD0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 1018u, 0x08B3BBD0u, 0x08A11214u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 128u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 128u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BBD0u) goto L_08B3BBD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3BBD0:
    aot_gpr_31 = (0x08B3BBD8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 1019u, 0x08B3BBD8u, 0x08A11214u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 128u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 128u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BBD8u) goto L_08B3BBD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3BBD8:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3BC20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(158)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B3BC7C;
      }
      goto L_08B3BC3C;
    }
L_08B3BC3C:
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x08B3BC4Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 1022u, 0x08B3BC4Cu, 0x08A1C544u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 41u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 41u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 41u, 0x08A1C544u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BC4Cu) goto L_08B3BC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3BC4C:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B3BC64;
      }
      goto L_08B3BC58;
    }
L_08B3BC58:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08B3BC64;
L_08B3BC64:
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B3BC7Cu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 1025u, 0x08B3BC7Cu, 0x08A1C504u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 39u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 39u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 39u, 0x08A1C504u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BC7Cu) goto L_08B3BC7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3BC7C:
    aot_gpr_31 = (0x08B3BC84u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BC84u) goto L_08B3BC84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3BC84:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (8u << 16u);
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_31 = (0x08B3BCC0u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 1027u, 0x08B3BCC0u, 0x08964108u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BCC0u) goto L_08B3BCC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3BCC0:
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
L_08B3BCD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-224));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_4);
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (65528u << 16u);
      if (branch_taken) {
          goto L_08B3BE74;
      }
      goto L_08B3BD24;
    }
L_08B3BD24:
    aot_gpr_4 = (16320u << 16u);
    ctx.gpr[23] = (0u | 1u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (8u << 16u);
    goto L_08B3BD40;
L_08B3BD40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_31 = (0x08B3BD54u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4488));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0186.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 1031u, 0x08B3BD54u, 0x08AEC930u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0186_entry(rt, ctx, 146u, aot_mem);
#else
        recomp_unit_0186_entry(rt, ctx, 146u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 146u, 0x08AEC930u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BD54u) goto L_08B3BD54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3BD54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B3BE60;
      }
      goto L_08B3BD5C;
    }
L_08B3BD5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(160)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4476)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4480)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4484)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(ctx.fpr[15])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08B3BDB4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0037.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 1033u, 0x08B3BDB4u, 0x08899BB4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0037_entry(rt, ctx, 327u, aot_mem);
#else
        recomp_unit_0037_entry(rt, ctx, 327u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 327u, 0x08899BB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BDB4u) goto L_08B3BDB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3BDB4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_gpr_29 | 0u);
      if (branch_taken) {
          goto L_08B3BE60;
      }
      goto L_08B3BDC8;
    }
L_08B3BDC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[20]);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B3BE4C;
      }
      goto L_08B3BDE4;
    }
L_08B3BDE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6676), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6676)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(6676));
      if (branch_taken) {
          goto L_08B3BE34;
      }
      goto L_08B3BE14;
    }
L_08B3BE14:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08B3BE20u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BE20u) goto L_08B3BE20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B3BE20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6676)));
    goto L_08B3BE34;
L_08B3BE34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_08B3BE4C;
L_08B3BE4C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B3BDC8;
      }
      goto L_08B3BE60;
    }
L_08B3BE60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08B3BD40;
      }
      goto L_08B3BE74;
    }
L_08B3BE74:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B3BEA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3BF30;
      }
      goto L_08B3BEDC;
    }
L_08B3BEDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(160)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3252)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 380 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 390 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B3BF0C;
      }
      goto L_08B3BEF4;
    }
L_08B3BEF4:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B3BF0C;
      }
      goto L_08B3BEFC;
    }
L_08B3BEFC:
    aot_gpr_31 = (0x08B3BF04u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 1046u, 0x08B3BF04u, 0x08AD3698u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 607u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 607u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BF04u) goto L_08B3BF04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3BF04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B3BF28;
      }
      goto L_08B3BF0C;
    }
L_08B3BF0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B3BEDC;
      }
      goto L_08B3BF20;
    }
L_08B3BF20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B3BF30;
      }
      goto L_08B3BF28;
    }
L_08B3BF28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0206_entry, 206u, 2u, 0x08B3C010u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B3BF30;
    }
L_08B3BF30:
    aot_gpr_31 = (0x08B3BF38u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0205->0206.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0205_entry, 1051u, 0x08B3BF38u, 0x08B3C030u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0206_entry(rt, ctx, 3u, aot_mem);
#else
        recomp_unit_0206_entry(rt, ctx, 3u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0206_entry, 206u, 3u, 0x08B3C030u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B3BF38u) goto L_08B3BF38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B3BF38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B3BFB4;
      }
      goto L_08B3BF4C;
    }
L_08B3BF4C:
    ctx.gpr[19] = (0u | 0u);
    goto L_08B3BF50;
L_08B3BF50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B3BF7C;
      }
      goto L_08B3BF64;
    }
L_08B3BF64:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3252)));
    aot_gpr_31 = (0x08B3BF74u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B3B6C4;
L_08B3BF74:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(160)));
    goto L_08B3BF7C;
L_08B3BF7C:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1650))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B3BF9C;
      }
      goto L_08B3BF8C;
    }
L_08B3BF8C:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1650));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B3BF9Cu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    goto L_08B3B8CC;
L_08B3BF9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B3BF50;
      }
      goto L_08B3BFB4;
    }
L_08B3BFB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0206_entry, 206u, 2u, 0x08B3C010u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B3BFC8;
    }
L_08B3BFC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8200)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8196)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8204)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(7740)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(7740)));
    aot_gpr_31 = (0x08B3BFFCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B3B670;
L_08B3BFFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(116)));
    ctx.pc = 0x08B3C000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0205(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0205_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_205(Runtime &runtime) {
    runtime.register_generated_unit(205u, 0x08B38000u, 16384u, &recomp_unit_0205, &recomp_unit_0205_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08B38000u, &recomp_unit_0205, "recomp_unit_0205",
                                          kEntryMasks_recomp_unit_0205, 64u);
}
} // namespace psprecomp
