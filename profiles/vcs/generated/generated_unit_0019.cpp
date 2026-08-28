#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0019[64] = {
    0xA923549152465525ull, 0x4160A9010615AA48ull, 0x28282C1480914141ull, 0x1414141416082012ull,
    0x0820121414141414ull, 0x1414141414141416ull, 0x1414160A90121414ull, 0x0A0A0A0B04100914ull,
    0x10090A0A0A0A0A0Aull, 0x0A0A0A0A0A0A0B04ull, 0x0A0B0410090A0A0Aull, 0x0A0A0A0A0A0A0A0Aull,
    0x0A0A0A0A0B041009ull, 0x0410090A0A0A0A0Aull, 0x0A0A0A0A0A0A0A0Bull, 0x0A0A0B0410090A0Aull,
    0x090A0A0A0A0A0A0Aull, 0x0A0A0A0A0A0B0410ull, 0x0B0410090A0A0A0Aull, 0x0A0A0A0A0A0A0A0Aull,
    0x0A0A0A0B0410090Aull, 0x10090A0A0A0A0A0Aull, 0x0A0A0A0A0A0A0B04ull, 0x0A0A0A0A0B041009ull,
    0x0410090A0A0A0A0Aull, 0x0A0A0A0A0A0A0A0Bull, 0x0A0A0B0410090A0Aull, 0x090A0A0A0A0A0A0Aull,
    0x0A0A0A0A0A0B0410ull, 0x0B0410090A0A0A0Aull, 0x0A0A0A0A0A0A0A0Aull, 0x0A0A0A0B0410090Aull,
    0x10090A0A0A0A0A0Aull, 0x0A0A0A0A0A0A0B04ull, 0x0A0B0410090A0A0Aull, 0x0A0A0A0A0A0A0A0Aull,
    0x0A0A0A0A0B041009ull, 0x0410090A0A0A0A0Aull, 0x0A0A0A0A0A0A0A0Bull, 0x0A0A0B0410090A0Aull,
    0x090A0A0A0A0A0A0Aull, 0x08048A0A0A0B0548ull, 0x0505050505050582ull, 0x0505820804850505ull,
    0x8505050505050505ull, 0x024505050582A404ull, 0x828282828282C104ull, 0x82828282C1040242ull,
    0x8282C10402428282ull, 0xC104024282828282ull, 0x0242828282828282ull, 0x828282828282C104ull,
    0x82828282C1040242ull, 0x0402428282828282ull, 0x82828282828282C1ull, 0x8282C15202428282ull,
    0x41414160A9012282ull, 0x48A0A0A0B0548091ull, 0x5050505050582080ull, 0x5820804850505050ull,
    0x5050505050505050ull, 0x24505050582A4048ull, 0x90122828282C1520ull, 0x504809141414160Aull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0019[64] = {
    1u, 27u, 47u, 64u, 79u, 93u, 110u, 127u, 142u, 157u, 173u, 188u, 204u, 219u, 233u, 250u,
    265u, 281u, 296u, 311u, 327u, 342u, 357u, 373u, 388u, 402u, 419u, 434u, 450u, 465u, 480u, 496u,
    511u, 526u, 542u, 557u, 573u, 588u, 602u, 619u, 634u, 650u, 666u, 682u, 697u, 714u, 730u, 746u,
    761u, 776u, 791u, 806u, 822u, 837u, 851u, 868u, 885u, 902u, 920u, 935u, 950u, 966u, 983u, 1000u,
};
void recomp_unit_0019_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=5,4,6,7,31,8 fprs=0,12 gpr_occ=6734 fpr_occ=4 gpr_total=9305 fpr_total=4
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_8 = ctx.gpr[8];
    float aot_fpr_0 = ctx.fpr[0];
    float aot_fpr_12 = ctx.fpr[12];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[5] = aot_gpr_5; ctx.gpr[4] = aot_gpr_4; ctx.gpr[6] = aot_gpr_6; ctx.gpr[7] = aot_gpr_7; ctx.gpr[31] = aot_gpr_31; ctx.gpr[8] = aot_gpr_8; ctx.fpr[0] = aot_fpr_0; ctx.fpr[12] = aot_fpr_12; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_5 = ctx.gpr[5]; aot_gpr_4 = ctx.gpr[4]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_7 = ctx.gpr[7]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_8 = ctx.gpr[8]; aot_fpr_0 = ctx.fpr[0]; aot_fpr_12 = ctx.fpr[12]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08850000u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0019[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0019[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08850000;
    case 2u: goto L_08850008;
    case 3u: goto L_08850014;
    case 4u: goto L_08850020;
    case 5u: goto L_08850028;
    case 6u: goto L_08850030;
    case 7u: goto L_08850038;
    case 8u: goto L_08850044;
    case 9u: goto L_08850048;
    case 10u: goto L_08850058;
    case 11u: goto L_08850064;
    case 12u: goto L_08850070;
    case 13u: goto L_08850078;
    case 14u: goto L_08850080;
    case 15u: goto L_08850090;
    case 16u: goto L_0885009C;
    case 17u: goto L_088500A8;
    case 18u: goto L_088500B0;
    case 19u: goto L_088500B8;
    case 20u: goto L_088500C0;
    case 21u: goto L_088500C4;
    case 22u: goto L_088500D4;
    case 23u: goto L_088500E0;
    case 24u: goto L_088500EC;
    case 25u: goto L_088500F4;
    case 26u: goto L_088500FC;
    case 27u: goto L_0885010C;
    case 28u: goto L_08850118;
    case 29u: goto L_08850124;
    case 30u: goto L_0885012C;
    case 31u: goto L_08850134;
    case 32u: goto L_0885013C;
    case 33u: goto L_08850140;
    case 34u: goto L_08850148;
    case 35u: goto L_08850150;
    case 36u: goto L_08850164;
    case 37u: goto L_08850168;
    case 38u: goto L_08850180;
    case 39u: goto L_088501A0;
    case 40u: goto L_088501AC;
    case 41u: goto L_088501B4;
    case 42u: goto L_088501BC;
    case 43u: goto L_088501D4;
    case 44u: goto L_088501D8;
    case 45u: goto L_088501E0;
    case 46u: goto L_088501F8;
    case 47u: goto L_08850200;
    case 48u: goto L_08850218;
    case 49u: goto L_08850220;
    case 50u: goto L_08850238;
    case 51u: goto L_08850240;
    case 52u: goto L_08850250;
    case 53u: goto L_0885025C;
    case 54u: goto L_0885027C;
    case 55u: goto L_08850288;
    case 56u: goto L_08850290;
    case 57u: goto L_088502A8;
    case 58u: goto L_088502AC;
    case 59u: goto L_088502B4;
    case 60u: goto L_088502CC;
    case 61u: goto L_088502D4;
    case 62u: goto L_088502EC;
    case 63u: goto L_088502F4;
    case 64u: goto L_08850304;
    case 65u: goto L_08850310;
    case 66u: goto L_08850334;
    case 67u: goto L_0885034C;
    case 68u: goto L_08850364;
    case 69u: goto L_08850368;
    case 70u: goto L_08850370;
    case 71u: goto L_08850388;
    case 72u: goto L_08850390;
    case 73u: goto L_088503A8;
    case 74u: goto L_088503B0;
    case 75u: goto L_088503C8;
    case 76u: goto L_088503D0;
    case 77u: goto L_088503E8;
    case 78u: goto L_088503F0;
    case 79u: goto L_08850408;
    case 80u: goto L_08850410;
    case 81u: goto L_08850428;
    case 82u: goto L_08850430;
    case 83u: goto L_08850448;
    case 84u: goto L_08850450;
    case 85u: goto L_08850468;
    case 86u: goto L_08850470;
    case 87u: goto L_08850488;
    case 88u: goto L_08850490;
    case 89u: goto L_088504A4;
    case 90u: goto L_088504B0;
    case 91u: goto L_088504D4;
    case 92u: goto L_088504EC;
    case 93u: goto L_08850504;
    case 94u: goto L_08850508;
    case 95u: goto L_08850510;
    case 96u: goto L_08850528;
    case 97u: goto L_08850530;
    case 98u: goto L_08850548;
    case 99u: goto L_08850550;
    case 100u: goto L_08850568;
    case 101u: goto L_08850570;
    case 102u: goto L_08850588;
    case 103u: goto L_08850590;
    case 104u: goto L_088505A8;
    case 105u: goto L_088505B0;
    case 106u: goto L_088505C8;
    case 107u: goto L_088505D0;
    case 108u: goto L_088505E8;
    case 109u: goto L_088505F0;
    case 110u: goto L_08850608;
    case 111u: goto L_08850610;
    case 112u: goto L_08850628;
    case 113u: goto L_08850630;
    case 114u: goto L_08850644;
    case 115u: goto L_08850650;
    case 116u: goto L_08850670;
    case 117u: goto L_0885067C;
    case 118u: goto L_08850684;
    case 119u: goto L_0885068C;
    case 120u: goto L_088506A4;
    case 121u: goto L_088506A8;
    case 122u: goto L_088506B0;
    case 123u: goto L_088506C8;
    case 124u: goto L_088506D0;
    case 125u: goto L_088506E8;
    case 126u: goto L_088506F0;
    case 127u: goto L_08850708;
    case 128u: goto L_08850710;
    case 129u: goto L_08850720;
    case 130u: goto L_0885072C;
    case 131u: goto L_08850750;
    case 132u: goto L_08850768;
    case 133u: goto L_08850780;
    case 134u: goto L_08850784;
    case 135u: goto L_0885078C;
    case 136u: goto L_088507A4;
    case 137u: goto L_088507AC;
    case 138u: goto L_088507C4;
    case 139u: goto L_088507CC;
    case 140u: goto L_088507E4;
    case 141u: goto L_088507EC;
    case 142u: goto L_08850804;
    case 143u: goto L_0885080C;
    case 144u: goto L_08850824;
    case 145u: goto L_0885082C;
    case 146u: goto L_08850844;
    case 147u: goto L_0885084C;
    case 148u: goto L_08850864;
    case 149u: goto L_0885086C;
    case 150u: goto L_08850884;
    case 151u: goto L_0885088C;
    case 152u: goto L_088508A4;
    case 153u: goto L_088508AC;
    case 154u: goto L_088508C0;
    case 155u: goto L_088508CC;
    case 156u: goto L_088508F0;
    case 157u: goto L_08850908;
    case 158u: goto L_08850920;
    case 159u: goto L_08850924;
    case 160u: goto L_0885092C;
    case 161u: goto L_08850944;
    case 162u: goto L_0885094C;
    case 163u: goto L_08850964;
    case 164u: goto L_0885096C;
    case 165u: goto L_08850984;
    case 166u: goto L_0885098C;
    case 167u: goto L_088509A4;
    case 168u: goto L_088509AC;
    case 169u: goto L_088509C4;
    case 170u: goto L_088509CC;
    case 171u: goto L_088509E4;
    case 172u: goto L_088509EC;
    case 173u: goto L_08850A04;
    case 174u: goto L_08850A0C;
    case 175u: goto L_08850A24;
    case 176u: goto L_08850A2C;
    case 177u: goto L_08850A44;
    case 178u: goto L_08850A4C;
    case 179u: goto L_08850A60;
    case 180u: goto L_08850A6C;
    case 181u: goto L_08850A90;
    case 182u: goto L_08850AA8;
    case 183u: goto L_08850AC0;
    case 184u: goto L_08850AC4;
    case 185u: goto L_08850ACC;
    case 186u: goto L_08850AE4;
    case 187u: goto L_08850AEC;
    case 188u: goto L_08850B04;
    case 189u: goto L_08850B0C;
    case 190u: goto L_08850B24;
    case 191u: goto L_08850B2C;
    case 192u: goto L_08850B44;
    case 193u: goto L_08850B4C;
    case 194u: goto L_08850B64;
    case 195u: goto L_08850B6C;
    case 196u: goto L_08850B84;
    case 197u: goto L_08850B8C;
    case 198u: goto L_08850BA4;
    case 199u: goto L_08850BAC;
    case 200u: goto L_08850BC4;
    case 201u: goto L_08850BCC;
    case 202u: goto L_08850BE4;
    case 203u: goto L_08850BEC;
    case 204u: goto L_08850C00;
    case 205u: goto L_08850C0C;
    case 206u: goto L_08850C30;
    case 207u: goto L_08850C48;
    case 208u: goto L_08850C60;
    case 209u: goto L_08850C64;
    case 210u: goto L_08850C6C;
    case 211u: goto L_08850C84;
    case 212u: goto L_08850C8C;
    case 213u: goto L_08850CA4;
    case 214u: goto L_08850CAC;
    case 215u: goto L_08850CC4;
    case 216u: goto L_08850CCC;
    case 217u: goto L_08850CE4;
    case 218u: goto L_08850CEC;
    case 219u: goto L_08850D04;
    case 220u: goto L_08850D0C;
    case 221u: goto L_08850D24;
    case 222u: goto L_08850D2C;
    case 223u: goto L_08850D44;
    case 224u: goto L_08850D4C;
    case 225u: goto L_08850D64;
    case 226u: goto L_08850D6C;
    case 227u: goto L_08850D84;
    case 228u: goto L_08850D8C;
    case 229u: goto L_08850DA0;
    case 230u: goto L_08850DAC;
    case 231u: goto L_08850DD0;
    case 232u: goto L_08850DE8;
    case 233u: goto L_08850E00;
    case 234u: goto L_08850E04;
    case 235u: goto L_08850E0C;
    case 236u: goto L_08850E24;
    case 237u: goto L_08850E2C;
    case 238u: goto L_08850E44;
    case 239u: goto L_08850E4C;
    case 240u: goto L_08850E64;
    case 241u: goto L_08850E6C;
    case 242u: goto L_08850E84;
    case 243u: goto L_08850E8C;
    case 244u: goto L_08850EA4;
    case 245u: goto L_08850EAC;
    case 246u: goto L_08850EC4;
    case 247u: goto L_08850ECC;
    case 248u: goto L_08850EE4;
    case 249u: goto L_08850EEC;
    case 250u: goto L_08850F04;
    case 251u: goto L_08850F0C;
    case 252u: goto L_08850F24;
    case 253u: goto L_08850F2C;
    case 254u: goto L_08850F40;
    case 255u: goto L_08850F4C;
    case 256u: goto L_08850F70;
    case 257u: goto L_08850F88;
    case 258u: goto L_08850FA0;
    case 259u: goto L_08850FA4;
    case 260u: goto L_08850FAC;
    case 261u: goto L_08850FC4;
    case 262u: goto L_08850FCC;
    case 263u: goto L_08850FE4;
    case 264u: goto L_08850FEC;
    case 265u: goto L_08851004;
    case 266u: goto L_0885100C;
    case 267u: goto L_08851024;
    case 268u: goto L_0885102C;
    case 269u: goto L_08851044;
    case 270u: goto L_0885104C;
    case 271u: goto L_08851064;
    case 272u: goto L_0885106C;
    case 273u: goto L_08851084;
    case 274u: goto L_0885108C;
    case 275u: goto L_088510A4;
    case 276u: goto L_088510AC;
    case 277u: goto L_088510C4;
    case 278u: goto L_088510CC;
    case 279u: goto L_088510E0;
    case 280u: goto L_088510EC;
    case 281u: goto L_08851110;
    case 282u: goto L_08851128;
    case 283u: goto L_08851140;
    case 284u: goto L_08851144;
    case 285u: goto L_0885114C;
    case 286u: goto L_08851164;
    case 287u: goto L_0885116C;
    case 288u: goto L_08851184;
    case 289u: goto L_0885118C;
    case 290u: goto L_088511A4;
    case 291u: goto L_088511AC;
    case 292u: goto L_088511C4;
    case 293u: goto L_088511CC;
    case 294u: goto L_088511E4;
    case 295u: goto L_088511EC;
    case 296u: goto L_08851204;
    case 297u: goto L_0885120C;
    case 298u: goto L_08851224;
    case 299u: goto L_0885122C;
    case 300u: goto L_08851244;
    case 301u: goto L_0885124C;
    case 302u: goto L_08851264;
    case 303u: goto L_0885126C;
    case 304u: goto L_08851280;
    case 305u: goto L_0885128C;
    case 306u: goto L_088512B0;
    case 307u: goto L_088512C8;
    case 308u: goto L_088512E0;
    case 309u: goto L_088512E4;
    case 310u: goto L_088512EC;
    case 311u: goto L_08851304;
    case 312u: goto L_0885130C;
    case 313u: goto L_08851324;
    case 314u: goto L_0885132C;
    case 315u: goto L_08851344;
    case 316u: goto L_0885134C;
    case 317u: goto L_08851364;
    case 318u: goto L_0885136C;
    case 319u: goto L_08851384;
    case 320u: goto L_0885138C;
    case 321u: goto L_088513A4;
    case 322u: goto L_088513AC;
    case 323u: goto L_088513C4;
    case 324u: goto L_088513CC;
    case 325u: goto L_088513E4;
    case 326u: goto L_088513EC;
    case 327u: goto L_08851404;
    case 328u: goto L_0885140C;
    case 329u: goto L_08851420;
    case 330u: goto L_0885142C;
    case 331u: goto L_08851450;
    case 332u: goto L_08851468;
    case 333u: goto L_08851480;
    case 334u: goto L_08851484;
    case 335u: goto L_0885148C;
    case 336u: goto L_088514A4;
    case 337u: goto L_088514AC;
    case 338u: goto L_088514C4;
    case 339u: goto L_088514CC;
    case 340u: goto L_088514E4;
    case 341u: goto L_088514EC;
    case 342u: goto L_08851504;
    case 343u: goto L_0885150C;
    case 344u: goto L_08851524;
    case 345u: goto L_0885152C;
    case 346u: goto L_08851544;
    case 347u: goto L_0885154C;
    case 348u: goto L_08851564;
    case 349u: goto L_0885156C;
    case 350u: goto L_08851584;
    case 351u: goto L_0885158C;
    case 352u: goto L_088515A4;
    case 353u: goto L_088515AC;
    case 354u: goto L_088515C0;
    case 355u: goto L_088515CC;
    case 356u: goto L_088515F0;
    case 357u: goto L_08851608;
    case 358u: goto L_08851620;
    case 359u: goto L_08851624;
    case 360u: goto L_0885162C;
    case 361u: goto L_08851644;
    case 362u: goto L_0885164C;
    case 363u: goto L_08851664;
    case 364u: goto L_0885166C;
    case 365u: goto L_08851684;
    case 366u: goto L_0885168C;
    case 367u: goto L_088516A4;
    case 368u: goto L_088516AC;
    case 369u: goto L_088516C4;
    case 370u: goto L_088516CC;
    case 371u: goto L_088516E4;
    case 372u: goto L_088516EC;
    case 373u: goto L_08851700;
    case 374u: goto L_0885170C;
    case 375u: goto L_08851730;
    case 376u: goto L_08851748;
    case 377u: goto L_08851760;
    case 378u: goto L_08851764;
    case 379u: goto L_0885176C;
    case 380u: goto L_08851784;
    case 381u: goto L_0885178C;
    case 382u: goto L_088517A4;
    case 383u: goto L_088517AC;
    case 384u: goto L_088517C4;
    case 385u: goto L_088517CC;
    case 386u: goto L_088517E4;
    case 387u: goto L_088517EC;
    case 388u: goto L_08851804;
    case 389u: goto L_0885180C;
    case 390u: goto L_08851824;
    case 391u: goto L_0885182C;
    case 392u: goto L_08851844;
    case 393u: goto L_0885184C;
    case 394u: goto L_08851864;
    case 395u: goto L_0885186C;
    case 396u: goto L_08851884;
    case 397u: goto L_0885188C;
    case 398u: goto L_088518A0;
    case 399u: goto L_088518AC;
    case 400u: goto L_088518D0;
    case 401u: goto L_088518E8;
    case 402u: goto L_08851900;
    case 403u: goto L_08851904;
    case 404u: goto L_0885190C;
    case 405u: goto L_08851924;
    case 406u: goto L_0885192C;
    case 407u: goto L_08851944;
    case 408u: goto L_0885194C;
    case 409u: goto L_08851964;
    case 410u: goto L_0885196C;
    case 411u: goto L_08851984;
    case 412u: goto L_0885198C;
    case 413u: goto L_088519A4;
    case 414u: goto L_088519AC;
    case 415u: goto L_088519C4;
    case 416u: goto L_088519CC;
    case 417u: goto L_088519E4;
    case 418u: goto L_088519EC;
    case 419u: goto L_08851A04;
    case 420u: goto L_08851A0C;
    case 421u: goto L_08851A24;
    case 422u: goto L_08851A2C;
    case 423u: goto L_08851A40;
    case 424u: goto L_08851A4C;
    case 425u: goto L_08851A70;
    case 426u: goto L_08851A88;
    case 427u: goto L_08851AA0;
    case 428u: goto L_08851AA4;
    case 429u: goto L_08851AAC;
    case 430u: goto L_08851AC4;
    case 431u: goto L_08851ACC;
    case 432u: goto L_08851AE4;
    case 433u: goto L_08851AEC;
    case 434u: goto L_08851B04;
    case 435u: goto L_08851B0C;
    case 436u: goto L_08851B24;
    case 437u: goto L_08851B2C;
    case 438u: goto L_08851B44;
    case 439u: goto L_08851B4C;
    case 440u: goto L_08851B64;
    case 441u: goto L_08851B6C;
    case 442u: goto L_08851B84;
    case 443u: goto L_08851B8C;
    case 444u: goto L_08851BA4;
    case 445u: goto L_08851BAC;
    case 446u: goto L_08851BC4;
    case 447u: goto L_08851BCC;
    case 448u: goto L_08851BE0;
    case 449u: goto L_08851BEC;
    case 450u: goto L_08851C10;
    case 451u: goto L_08851C28;
    case 452u: goto L_08851C40;
    case 453u: goto L_08851C44;
    case 454u: goto L_08851C4C;
    case 455u: goto L_08851C64;
    case 456u: goto L_08851C6C;
    case 457u: goto L_08851C84;
    case 458u: goto L_08851C8C;
    case 459u: goto L_08851CA4;
    case 460u: goto L_08851CAC;
    case 461u: goto L_08851CC4;
    case 462u: goto L_08851CCC;
    case 463u: goto L_08851CE4;
    case 464u: goto L_08851CEC;
    case 465u: goto L_08851D04;
    case 466u: goto L_08851D0C;
    case 467u: goto L_08851D24;
    case 468u: goto L_08851D2C;
    case 469u: goto L_08851D44;
    case 470u: goto L_08851D4C;
    case 471u: goto L_08851D64;
    case 472u: goto L_08851D6C;
    case 473u: goto L_08851D80;
    case 474u: goto L_08851D8C;
    case 475u: goto L_08851DB0;
    case 476u: goto L_08851DC8;
    case 477u: goto L_08851DE0;
    case 478u: goto L_08851DE4;
    case 479u: goto L_08851DEC;
    case 480u: goto L_08851E04;
    case 481u: goto L_08851E0C;
    case 482u: goto L_08851E24;
    case 483u: goto L_08851E2C;
    case 484u: goto L_08851E44;
    case 485u: goto L_08851E4C;
    case 486u: goto L_08851E64;
    case 487u: goto L_08851E6C;
    case 488u: goto L_08851E84;
    case 489u: goto L_08851E8C;
    case 490u: goto L_08851EA4;
    case 491u: goto L_08851EAC;
    case 492u: goto L_08851EC4;
    case 493u: goto L_08851ECC;
    case 494u: goto L_08851EE4;
    case 495u: goto L_08851EEC;
    case 496u: goto L_08851F04;
    case 497u: goto L_08851F0C;
    case 498u: goto L_08851F20;
    case 499u: goto L_08851F2C;
    case 500u: goto L_08851F50;
    case 501u: goto L_08851F68;
    case 502u: goto L_08851F80;
    case 503u: goto L_08851F84;
    case 504u: goto L_08851F8C;
    case 505u: goto L_08851FA4;
    case 506u: goto L_08851FAC;
    case 507u: goto L_08851FC4;
    case 508u: goto L_08851FCC;
    case 509u: goto L_08851FE4;
    case 510u: goto L_08851FEC;
    case 511u: goto L_08852004;
    case 512u: goto L_0885200C;
    case 513u: goto L_08852024;
    case 514u: goto L_0885202C;
    case 515u: goto L_08852044;
    case 516u: goto L_0885204C;
    case 517u: goto L_08852064;
    case 518u: goto L_0885206C;
    case 519u: goto L_08852084;
    case 520u: goto L_0885208C;
    case 521u: goto L_088520A4;
    case 522u: goto L_088520AC;
    case 523u: goto L_088520C0;
    case 524u: goto L_088520CC;
    case 525u: goto L_088520F0;
    case 526u: goto L_08852108;
    case 527u: goto L_08852120;
    case 528u: goto L_08852124;
    case 529u: goto L_0885212C;
    case 530u: goto L_08852144;
    case 531u: goto L_0885214C;
    case 532u: goto L_08852164;
    case 533u: goto L_0885216C;
    case 534u: goto L_08852184;
    case 535u: goto L_0885218C;
    case 536u: goto L_088521A4;
    case 537u: goto L_088521AC;
    case 538u: goto L_088521C4;
    case 539u: goto L_088521CC;
    case 540u: goto L_088521E4;
    case 541u: goto L_088521EC;
    case 542u: goto L_08852204;
    case 543u: goto L_0885220C;
    case 544u: goto L_08852224;
    case 545u: goto L_0885222C;
    case 546u: goto L_08852244;
    case 547u: goto L_0885224C;
    case 548u: goto L_08852260;
    case 549u: goto L_0885226C;
    case 550u: goto L_08852290;
    case 551u: goto L_088522A8;
    case 552u: goto L_088522C0;
    case 553u: goto L_088522C4;
    case 554u: goto L_088522CC;
    case 555u: goto L_088522E4;
    case 556u: goto L_088522EC;
    case 557u: goto L_08852304;
    case 558u: goto L_0885230C;
    case 559u: goto L_08852324;
    case 560u: goto L_0885232C;
    case 561u: goto L_08852344;
    case 562u: goto L_0885234C;
    case 563u: goto L_08852364;
    case 564u: goto L_0885236C;
    case 565u: goto L_08852384;
    case 566u: goto L_0885238C;
    case 567u: goto L_088523A4;
    case 568u: goto L_088523AC;
    case 569u: goto L_088523C4;
    case 570u: goto L_088523CC;
    case 571u: goto L_088523E4;
    case 572u: goto L_088523EC;
    case 573u: goto L_08852400;
    case 574u: goto L_0885240C;
    case 575u: goto L_08852430;
    case 576u: goto L_08852448;
    case 577u: goto L_08852460;
    case 578u: goto L_08852464;
    case 579u: goto L_0885246C;
    case 580u: goto L_08852484;
    case 581u: goto L_0885248C;
    case 582u: goto L_088524A4;
    case 583u: goto L_088524AC;
    case 584u: goto L_088524C4;
    case 585u: goto L_088524CC;
    case 586u: goto L_088524E4;
    case 587u: goto L_088524EC;
    case 588u: goto L_08852504;
    case 589u: goto L_0885250C;
    case 590u: goto L_08852524;
    case 591u: goto L_0885252C;
    case 592u: goto L_08852544;
    case 593u: goto L_0885254C;
    case 594u: goto L_08852564;
    case 595u: goto L_0885256C;
    case 596u: goto L_08852584;
    case 597u: goto L_0885258C;
    case 598u: goto L_088525A0;
    case 599u: goto L_088525AC;
    case 600u: goto L_088525D0;
    case 601u: goto L_088525E8;
    case 602u: goto L_08852600;
    case 603u: goto L_08852604;
    case 604u: goto L_0885260C;
    case 605u: goto L_08852624;
    case 606u: goto L_0885262C;
    case 607u: goto L_08852644;
    case 608u: goto L_0885264C;
    case 609u: goto L_08852664;
    case 610u: goto L_0885266C;
    case 611u: goto L_08852684;
    case 612u: goto L_0885268C;
    case 613u: goto L_088526A4;
    case 614u: goto L_088526AC;
    case 615u: goto L_088526C4;
    case 616u: goto L_088526CC;
    case 617u: goto L_088526E4;
    case 618u: goto L_088526EC;
    case 619u: goto L_08852704;
    case 620u: goto L_0885270C;
    case 621u: goto L_08852724;
    case 622u: goto L_0885272C;
    case 623u: goto L_08852740;
    case 624u: goto L_0885274C;
    case 625u: goto L_08852770;
    case 626u: goto L_08852788;
    case 627u: goto L_088527A0;
    case 628u: goto L_088527A4;
    case 629u: goto L_088527AC;
    case 630u: goto L_088527C4;
    case 631u: goto L_088527CC;
    case 632u: goto L_088527E4;
    case 633u: goto L_088527EC;
    case 634u: goto L_08852804;
    case 635u: goto L_0885280C;
    case 636u: goto L_08852824;
    case 637u: goto L_0885282C;
    case 638u: goto L_08852844;
    case 639u: goto L_0885284C;
    case 640u: goto L_08852864;
    case 641u: goto L_0885286C;
    case 642u: goto L_08852884;
    case 643u: goto L_0885288C;
    case 644u: goto L_088528A4;
    case 645u: goto L_088528AC;
    case 646u: goto L_088528C4;
    case 647u: goto L_088528CC;
    case 648u: goto L_088528E0;
    case 649u: goto L_088528EC;
    case 650u: goto L_0885290C;
    case 651u: goto L_08852918;
    case 652u: goto L_08852920;
    case 653u: goto L_08852928;
    case 654u: goto L_08852940;
    case 655u: goto L_08852944;
    case 656u: goto L_0885294C;
    case 657u: goto L_08852964;
    case 658u: goto L_0885296C;
    case 659u: goto L_08852984;
    case 660u: goto L_0885298C;
    case 661u: goto L_088529A4;
    case 662u: goto L_088529AC;
    case 663u: goto L_088529BC;
    case 664u: goto L_088529C8;
    case 665u: goto L_088529EC;
    case 666u: goto L_08852A04;
    case 667u: goto L_08852A1C;
    case 668u: goto L_08852A20;
    case 669u: goto L_08852A28;
    case 670u: goto L_08852A40;
    case 671u: goto L_08852A48;
    case 672u: goto L_08852A60;
    case 673u: goto L_08852A68;
    case 674u: goto L_08852A80;
    case 675u: goto L_08852A88;
    case 676u: goto L_08852AA0;
    case 677u: goto L_08852AA8;
    case 678u: goto L_08852AC0;
    case 679u: goto L_08852AC8;
    case 680u: goto L_08852AE0;
    case 681u: goto L_08852AE8;
    case 682u: goto L_08852B00;
    case 683u: goto L_08852B08;
    case 684u: goto L_08852B20;
    case 685u: goto L_08852B28;
    case 686u: goto L_08852B40;
    case 687u: goto L_08852B48;
    case 688u: goto L_08852B5C;
    case 689u: goto L_08852B68;
    case 690u: goto L_08852B8C;
    case 691u: goto L_08852BA4;
    case 692u: goto L_08852BBC;
    case 693u: goto L_08852BC0;
    case 694u: goto L_08852BC8;
    case 695u: goto L_08852BE0;
    case 696u: goto L_08852BE8;
    case 697u: goto L_08852C00;
    case 698u: goto L_08852C08;
    case 699u: goto L_08852C20;
    case 700u: goto L_08852C28;
    case 701u: goto L_08852C40;
    case 702u: goto L_08852C48;
    case 703u: goto L_08852C60;
    case 704u: goto L_08852C68;
    case 705u: goto L_08852C80;
    case 706u: goto L_08852C88;
    case 707u: goto L_08852CA0;
    case 708u: goto L_08852CA8;
    case 709u: goto L_08852CC0;
    case 710u: goto L_08852CC8;
    case 711u: goto L_08852CE0;
    case 712u: goto L_08852CE8;
    case 713u: goto L_08852CFC;
    case 714u: goto L_08852D08;
    case 715u: goto L_08852D28;
    case 716u: goto L_08852D34;
    case 717u: goto L_08852D3C;
    case 718u: goto L_08852D44;
    case 719u: goto L_08852D5C;
    case 720u: goto L_08852D60;
    case 721u: goto L_08852D68;
    case 722u: goto L_08852D80;
    case 723u: goto L_08852D88;
    case 724u: goto L_08852DA0;
    case 725u: goto L_08852DA8;
    case 726u: goto L_08852DC0;
    case 727u: goto L_08852DC8;
    case 728u: goto L_08852DD8;
    case 729u: goto L_08852DE4;
    case 730u: goto L_08852E08;
    case 731u: goto L_08852E20;
    case 732u: goto L_08852E38;
    case 733u: goto L_08852E3C;
    case 734u: goto L_08852E44;
    case 735u: goto L_08852E5C;
    case 736u: goto L_08852E64;
    case 737u: goto L_08852E7C;
    case 738u: goto L_08852E84;
    case 739u: goto L_08852E9C;
    case 740u: goto L_08852EA4;
    case 741u: goto L_08852EBC;
    case 742u: goto L_08852EC4;
    case 743u: goto L_08852EDC;
    case 744u: goto L_08852EE4;
    case 745u: goto L_08852EFC;
    case 746u: goto L_08852F04;
    case 747u: goto L_08852F18;
    case 748u: goto L_08852F24;
    case 749u: goto L_08852F48;
    case 750u: goto L_08852F60;
    case 751u: goto L_08852F78;
    case 752u: goto L_08852F7C;
    case 753u: goto L_08852F84;
    case 754u: goto L_08852F9C;
    case 755u: goto L_08852FA4;
    case 756u: goto L_08852FBC;
    case 757u: goto L_08852FC4;
    case 758u: goto L_08852FDC;
    case 759u: goto L_08852FE4;
    case 760u: goto L_08852FFC;
    case 761u: goto L_08853004;
    case 762u: goto L_0885301C;
    case 763u: goto L_08853024;
    case 764u: goto L_0885303C;
    case 765u: goto L_08853044;
    case 766u: goto L_08853058;
    case 767u: goto L_08853064;
    case 768u: goto L_08853088;
    case 769u: goto L_088530A0;
    case 770u: goto L_088530B8;
    case 771u: goto L_088530BC;
    case 772u: goto L_088530C4;
    case 773u: goto L_088530DC;
    case 774u: goto L_088530E4;
    case 775u: goto L_088530FC;
    case 776u: goto L_08853104;
    case 777u: goto L_0885311C;
    case 778u: goto L_08853124;
    case 779u: goto L_0885313C;
    case 780u: goto L_08853144;
    case 781u: goto L_0885315C;
    case 782u: goto L_08853164;
    case 783u: goto L_0885317C;
    case 784u: goto L_08853184;
    case 785u: goto L_08853198;
    case 786u: goto L_088531A4;
    case 787u: goto L_088531C8;
    case 788u: goto L_088531E0;
    case 789u: goto L_088531F8;
    case 790u: goto L_088531FC;
    case 791u: goto L_08853204;
    case 792u: goto L_0885321C;
    case 793u: goto L_08853224;
    case 794u: goto L_0885323C;
    case 795u: goto L_08853244;
    case 796u: goto L_0885325C;
    case 797u: goto L_08853264;
    case 798u: goto L_0885327C;
    case 799u: goto L_08853284;
    case 800u: goto L_0885329C;
    case 801u: goto L_088532A4;
    case 802u: goto L_088532BC;
    case 803u: goto L_088532C4;
    case 804u: goto L_088532D8;
    case 805u: goto L_088532E4;
    case 806u: goto L_08853308;
    case 807u: goto L_08853320;
    case 808u: goto L_08853338;
    case 809u: goto L_0885333C;
    case 810u: goto L_08853344;
    case 811u: goto L_0885335C;
    case 812u: goto L_08853364;
    case 813u: goto L_0885337C;
    case 814u: goto L_08853384;
    case 815u: goto L_0885339C;
    case 816u: goto L_088533A4;
    case 817u: goto L_088533BC;
    case 818u: goto L_088533C4;
    case 819u: goto L_088533DC;
    case 820u: goto L_088533E4;
    case 821u: goto L_088533FC;
    case 822u: goto L_08853404;
    case 823u: goto L_08853418;
    case 824u: goto L_08853424;
    case 825u: goto L_08853448;
    case 826u: goto L_08853460;
    case 827u: goto L_08853478;
    case 828u: goto L_0885347C;
    case 829u: goto L_08853484;
    case 830u: goto L_0885349C;
    case 831u: goto L_088534A4;
    case 832u: goto L_088534BC;
    case 833u: goto L_088534C4;
    case 834u: goto L_088534DC;
    case 835u: goto L_088534E4;
    case 836u: goto L_088534FC;
    case 837u: goto L_08853504;
    case 838u: goto L_0885351C;
    case 839u: goto L_08853524;
    case 840u: goto L_0885353C;
    case 841u: goto L_08853544;
    case 842u: goto L_0885355C;
    case 843u: goto L_08853564;
    case 844u: goto L_0885357C;
    case 845u: goto L_08853584;
    case 846u: goto L_0885359C;
    case 847u: goto L_088535A4;
    case 848u: goto L_088535B8;
    case 849u: goto L_088535C4;
    case 850u: goto L_088535E8;
    case 851u: goto L_08853600;
    case 852u: goto L_08853618;
    case 853u: goto L_0885361C;
    case 854u: goto L_08853624;
    case 855u: goto L_0885363C;
    case 856u: goto L_08853644;
    case 857u: goto L_0885365C;
    case 858u: goto L_08853664;
    case 859u: goto L_0885367C;
    case 860u: goto L_08853684;
    case 861u: goto L_0885369C;
    case 862u: goto L_088536A4;
    case 863u: goto L_088536BC;
    case 864u: goto L_088536C4;
    case 865u: goto L_088536DC;
    case 866u: goto L_088536E4;
    case 867u: goto L_088536FC;
    case 868u: goto L_08853704;
    case 869u: goto L_0885371C;
    case 870u: goto L_08853724;
    case 871u: goto L_0885373C;
    case 872u: goto L_08853744;
    case 873u: goto L_08853758;
    case 874u: goto L_08853764;
    case 875u: goto L_08853784;
    case 876u: goto L_08853790;
    case 877u: goto L_08853798;
    case 878u: goto L_088537A0;
    case 879u: goto L_088537B8;
    case 880u: goto L_088537BC;
    case 881u: goto L_088537C4;
    case 882u: goto L_088537DC;
    case 883u: goto L_088537E4;
    case 884u: goto L_088537FC;
    case 885u: goto L_08853804;
    case 886u: goto L_0885381C;
    case 887u: goto L_08853824;
    case 888u: goto L_08853834;
    case 889u: goto L_08853840;
    case 890u: goto L_08853860;
    case 891u: goto L_0885386C;
    case 892u: goto L_08853874;
    case 893u: goto L_0885387C;
    case 894u: goto L_08853894;
    case 895u: goto L_08853898;
    case 896u: goto L_088538A0;
    case 897u: goto L_088538B8;
    case 898u: goto L_088538C0;
    case 899u: goto L_088538D8;
    case 900u: goto L_088538E0;
    case 901u: goto L_088538F8;
    case 902u: goto L_08853900;
    case 903u: goto L_08853910;
    case 904u: goto L_0885391C;
    case 905u: goto L_0885393C;
    case 906u: goto L_08853948;
    case 907u: goto L_08853950;
    case 908u: goto L_08853958;
    case 909u: goto L_08853970;
    case 910u: goto L_08853974;
    case 911u: goto L_0885397C;
    case 912u: goto L_08853994;
    case 913u: goto L_0885399C;
    case 914u: goto L_088539B4;
    case 915u: goto L_088539BC;
    case 916u: goto L_088539D4;
    case 917u: goto L_088539DC;
    case 918u: goto L_088539EC;
    case 919u: goto L_088539F8;
    case 920u: goto L_08853A1C;
    case 921u: goto L_08853A34;
    case 922u: goto L_08853A4C;
    case 923u: goto L_08853A50;
    case 924u: goto L_08853A58;
    case 925u: goto L_08853A70;
    case 926u: goto L_08853A78;
    case 927u: goto L_08853A90;
    case 928u: goto L_08853A98;
    case 929u: goto L_08853AB0;
    case 930u: goto L_08853AB8;
    case 931u: goto L_08853AD0;
    case 932u: goto L_08853AD8;
    case 933u: goto L_08853AF0;
    case 934u: goto L_08853AF8;
    case 935u: goto L_08853B10;
    case 936u: goto L_08853B18;
    case 937u: goto L_08853B30;
    case 938u: goto L_08853B38;
    case 939u: goto L_08853B50;
    case 940u: goto L_08853B58;
    case 941u: goto L_08853B70;
    case 942u: goto L_08853B78;
    case 943u: goto L_08853B8C;
    case 944u: goto L_08853B98;
    case 945u: goto L_08853BBC;
    case 946u: goto L_08853BD4;
    case 947u: goto L_08853BEC;
    case 948u: goto L_08853BF0;
    case 949u: goto L_08853BF8;
    case 950u: goto L_08853C10;
    case 951u: goto L_08853C18;
    case 952u: goto L_08853C30;
    case 953u: goto L_08853C38;
    case 954u: goto L_08853C50;
    case 955u: goto L_08853C58;
    case 956u: goto L_08853C70;
    case 957u: goto L_08853C78;
    case 958u: goto L_08853C90;
    case 959u: goto L_08853C98;
    case 960u: goto L_08853CB0;
    case 961u: goto L_08853CB8;
    case 962u: goto L_08853CD0;
    case 963u: goto L_08853CD8;
    case 964u: goto L_08853CF0;
    case 965u: goto L_08853CF8;
    case 966u: goto L_08853D0C;
    case 967u: goto L_08853D18;
    case 968u: goto L_08853D38;
    case 969u: goto L_08853D44;
    case 970u: goto L_08853D4C;
    case 971u: goto L_08853D54;
    case 972u: goto L_08853D6C;
    case 973u: goto L_08853D70;
    case 974u: goto L_08853D78;
    case 975u: goto L_08853D90;
    case 976u: goto L_08853D98;
    case 977u: goto L_08853DB0;
    case 978u: goto L_08853DB8;
    case 979u: goto L_08853DD0;
    case 980u: goto L_08853DD8;
    case 981u: goto L_08853DE8;
    case 982u: goto L_08853DF4;
    case 983u: goto L_08853E14;
    case 984u: goto L_08853E20;
    case 985u: goto L_08853E28;
    case 986u: goto L_08853E30;
    case 987u: goto L_08853E48;
    case 988u: goto L_08853E4C;
    case 989u: goto L_08853E54;
    case 990u: goto L_08853E6C;
    case 991u: goto L_08853E74;
    case 992u: goto L_08853E8C;
    case 993u: goto L_08853E94;
    case 994u: goto L_08853EAC;
    case 995u: goto L_08853EB4;
    case 996u: goto L_08853EC4;
    case 997u: goto L_08853ED0;
    case 998u: goto L_08853EF0;
    case 999u: goto L_08853EFC;
    case 1000u: goto L_08853F04;
    case 1001u: goto L_08853F0C;
    case 1002u: goto L_08853F24;
    case 1003u: goto L_08853F28;
    case 1004u: goto L_08853F30;
    case 1005u: goto L_08853F48;
    case 1006u: goto L_08853F50;
    case 1007u: goto L_08853F68;
    case 1008u: goto L_08853F70;
    case 1009u: goto L_08853F88;
    case 1010u: goto L_08853F90;
    case 1011u: goto L_08853FA0;
    case 1012u: goto L_08853FAC;
    case 1013u: goto L_08853FCC;
    case 1014u: goto L_08853FD8;
    case 1015u: goto L_08853FF0;
    case 1016u: goto L_08853FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08850000u;
        if (local_delta_v813 >= 16380u || (local_delta_v813 & 3u) != 0u) {
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
L_08850000:
    aot_gpr_31 = (0x08850008u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0019->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0019_entry, 2u, 0x08850008u, 0x08AF7A8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 867u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 867u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850008u) goto L_08850008;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08850008:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x08850014u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0019->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0019_entry, 3u, 0x08850014u, 0x08984D14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 237u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 237u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850014u) goto L_08850014;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08850014:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08850028;
      }
      goto L_08850020;
    }
L_08850020:
    aot_gpr_31 = (0x08850028u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850028u) goto L_08850028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850028:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08850048;
      }
      goto L_08850030;
    }
L_08850030:
    aot_gpr_31 = (0x08850038u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 935u, 0x08B577CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850038u) goto L_08850038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850038:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08850044u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[10], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850044u) goto L_08850044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850044:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08850048;
L_08850048:
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    aot_gpr_5 = (0u | 164u);
    aot_gpr_31 = (0x08850058u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0019->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0019_entry, 10u, 0x08850058u, 0x08AF7A8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 867u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 867u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850058u) goto L_08850058;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08850058:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08850064u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0019->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0019_entry, 11u, 0x08850064u, 0x089844FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 89u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 89u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850064u) goto L_08850064;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08850064:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08850078;
      }
      goto L_08850070;
    }
L_08850070:
    aot_gpr_31 = (0x08850078u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850078u) goto L_08850078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850078:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088500C4;
      }
      goto L_08850080;
    }
L_08850080:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (0u | 171u);
    aot_gpr_31 = (0x08850090u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0019->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0019_entry, 15u, 0x08850090u, 0x08AF7A8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 867u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 867u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850090u) goto L_08850090;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08850090:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr_31 = (0x0885009Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0019->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0019_entry, 16u, 0x0885009Cu, 0x08984D14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 237u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 237u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885009Cu) goto L_0885009C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0885009C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088500B0;
      }
      goto L_088500A8;
    }
L_088500A8:
    aot_gpr_31 = (0x088500B0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088500B0u) goto L_088500B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088500B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088500C4;
      }
      goto L_088500B8;
    }
L_088500B8:
    aot_gpr_31 = (0x088500C0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088500C0u) goto L_088500C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088500C0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    goto L_088500C4;
L_088500C4:
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    aot_gpr_5 = (0u | 165u);
    aot_gpr_31 = (0x088500D4u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0019->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0019_entry, 22u, 0x088500D4u, 0x08AF7A8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 867u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 867u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088500D4u) goto L_088500D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088500D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088500E0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0019->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0019_entry, 23u, 0x088500E0u, 0x089844FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 89u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 89u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088500E0u) goto L_088500E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088500E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088500F4;
      }
      goto L_088500EC;
    }
L_088500EC:
    aot_gpr_31 = (0x088500F4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088500F4u) goto L_088500F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088500F4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08850140;
      }
      goto L_088500FC;
    }
L_088500FC:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    aot_gpr_5 = (0u | 171u);
    aot_gpr_31 = (0x0885010Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0019->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0019_entry, 27u, 0x0885010Cu, 0x08AF7A8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 867u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 867u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885010Cu) goto L_0885010C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0885010C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr_31 = (0x08850118u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0019->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0019_entry, 28u, 0x08850118u, 0x08984D14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 237u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 237u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850118u) goto L_08850118;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08850118:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885012C;
      }
      goto L_08850124;
    }
L_08850124:
    aot_gpr_31 = (0x0885012Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885012Cu) goto L_0885012C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885012C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08850140;
      }
      goto L_08850134;
    }
L_08850134:
    aot_gpr_31 = (0x0885013Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885013Cu) goto L_0885013C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885013C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    goto L_08850140;
L_08850140:
    aot_gpr_31 = (0x08850148u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0019->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0019_entry, 34u, 0x08850148u, 0x08AC62A0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 585u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 585u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 585u, 0x08AC62A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850148u) goto L_08850148;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08850148:
    aot_gpr_31 = (0x08850150u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0019->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0019_entry, 35u, 0x08850150u, 0x08B0C580u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 75u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 75u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850150u) goto L_08850150;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08850150:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08850164u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(236), static_cast<std::uint8_t>(aot_gpr_5));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0019->0018.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0019_entry, 36u, 0x08850164u, 0x0884F2CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0018_entry(rt, ctx, 599u, aot_mem);
#else
        recomp_unit_0018_entry(rt, ctx, 599u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 599u, 0x0884F2CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850164u) goto L_08850164;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08850164:
    ctx.gpr[2] = (0u | 1u);
    goto L_08850168;
L_08850168:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(88), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08850180:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850220;
      }
      goto L_088501A0;
    }
L_088501A0:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08850200;
      }
      goto L_088501AC;
    }
L_088501AC:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088501E0;
      }
      goto L_088501B4;
    }
L_088501B4:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08850240;
      }
      goto L_088501BC;
    }
L_088501BC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 356u);
    aot_gpr_31 = (0x088501D4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088501D4u) goto L_088501D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088501D4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088501D8;
L_088501D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08850250;
      }
      goto L_088501E0;
    }
L_088501E0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 353u);
    aot_gpr_31 = (0x088501F8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088501F8u) goto L_088501F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088501F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088501D8;
      }
      goto L_08850200;
    }
L_08850200:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 350u);
    aot_gpr_31 = (0x08850218u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850218u) goto L_08850218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088501D8;
      }
      goto L_08850220;
    }
L_08850220:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 359u);
    aot_gpr_31 = (0x08850238u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850238u) goto L_08850238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088501D8;
      }
      goto L_08850240;
    }
L_08850240:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08850250u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850250u) goto L_08850250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850250:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0885025C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 143u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088502D4;
      }
      goto L_0885027C;
    }
L_0885027C:
    aot_gpr_7 = (0u | 137u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088502B4;
      }
      goto L_08850288;
    }
L_08850288:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_088502F4;
      }
      goto L_08850290;
    }
L_08850290:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 367u);
    aot_gpr_31 = (0x088502A8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088502A8u) goto L_088502A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088502A8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088502AC;
L_088502AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08850304;
      }
      goto L_088502B4;
    }
L_088502B4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 364u);
    aot_gpr_31 = (0x088502CCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088502CCu) goto L_088502CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088502CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088502AC;
      }
      goto L_088502D4;
    }
L_088502D4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 362u);
    aot_gpr_31 = (0x088502ECu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088502ECu) goto L_088502EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088502EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088502AC;
      }
      goto L_088502F4;
    }
L_088502F4:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08850304u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850304u) goto L_08850304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850304:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08850310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850490;
      }
      goto L_08850334;
    }
L_08850334:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19128)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0885034C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 388u);
    aot_gpr_31 = (0x08850364u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850364u) goto L_08850364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850364:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850368;
L_08850368:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088504A4;
      }
      goto L_08850370;
    }
L_08850370:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 390u);
    aot_gpr_31 = (0x08850388u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850388u) goto L_08850388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_08850390;
    }
L_08850390:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 382u);
    aot_gpr_31 = (0x088503A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088503A8u) goto L_088503A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088503A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_088503B0;
    }
L_088503B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 378u);
    aot_gpr_31 = (0x088503C8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088503C8u) goto L_088503C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088503C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_088503D0;
    }
L_088503D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 376u);
    aot_gpr_31 = (0x088503E8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088503E8u) goto L_088503E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088503E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_088503F0;
    }
L_088503F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 380u);
    aot_gpr_31 = (0x08850408u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850408u) goto L_08850408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_08850410;
    }
L_08850410:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 393u);
    aot_gpr_31 = (0x08850428u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850428u) goto L_08850428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850428:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_08850430;
    }
L_08850430:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 369u);
    aot_gpr_31 = (0x08850448u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850448u) goto L_08850448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_08850450;
    }
L_08850450:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 372u);
    aot_gpr_31 = (0x08850468u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850468u) goto L_08850468;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850468:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_08850470;
    }
L_08850470:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 385u);
    aot_gpr_31 = (0x08850488u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850488u) goto L_08850488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_08850490;
    }
L_08850490:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088504A4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088504A4u) goto L_088504A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088504A4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088504B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850630;
      }
      goto L_088504D4;
    }
L_088504D4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19296)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088504EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 413u);
    aot_gpr_31 = (0x08850504u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850504u) goto L_08850504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850504:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850508;
L_08850508:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08850644;
      }
      goto L_08850510;
    }
L_08850510:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 415u);
    aot_gpr_31 = (0x08850528u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850528u) goto L_08850528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_08850530;
    }
L_08850530:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 407u);
    aot_gpr_31 = (0x08850548u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850548u) goto L_08850548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_08850550;
    }
L_08850550:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 403u);
    aot_gpr_31 = (0x08850568u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850568u) goto L_08850568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_08850570;
    }
L_08850570:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 401u);
    aot_gpr_31 = (0x08850588u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850588u) goto L_08850588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_08850590;
    }
L_08850590:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 405u);
    aot_gpr_31 = (0x088505A8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088505A8u) goto L_088505A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088505A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_088505B0;
    }
L_088505B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 420u);
    aot_gpr_31 = (0x088505C8u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088505C8u) goto L_088505C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088505C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_088505D0;
    }
L_088505D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 394u);
    aot_gpr_31 = (0x088505E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088505E8u) goto L_088505E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088505E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_088505F0;
    }
L_088505F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 397u);
    aot_gpr_31 = (0x08850608u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850608u) goto L_08850608;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_08850610;
    }
L_08850610:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 410u);
    aot_gpr_31 = (0x08850628u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850628u) goto L_08850628;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_08850630;
    }
L_08850630:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08850644u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850644u) goto L_08850644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850644:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08850650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088506F0;
      }
      goto L_08850670;
    }
L_08850670:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_088506D0;
      }
      goto L_0885067C;
    }
L_0885067C:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088506B0;
      }
      goto L_08850684;
    }
L_08850684:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08850710;
      }
      goto L_0885068C;
    }
L_0885068C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 458u);
    aot_gpr_31 = (0x088506A4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088506A4u) goto L_088506A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088506A4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088506A8;
L_088506A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08850720;
      }
      goto L_088506B0;
    }
L_088506B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 455u);
    aot_gpr_31 = (0x088506C8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088506C8u) goto L_088506C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088506C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088506A8;
      }
      goto L_088506D0;
    }
L_088506D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 453u);
    aot_gpr_31 = (0x088506E8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088506E8u) goto L_088506E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088506E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088506A8;
      }
      goto L_088506F0;
    }
L_088506F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 460u);
    aot_gpr_31 = (0x08850708u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850708u) goto L_08850708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088506A8;
      }
      goto L_08850710;
    }
L_08850710:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08850720u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850720u) goto L_08850720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850720:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0885072C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088508AC;
      }
      goto L_08850750;
    }
L_08850750:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19464)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08850768:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 481u);
    aot_gpr_31 = (0x08850780u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850780u) goto L_08850780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850780:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850784;
L_08850784:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088508C0;
      }
      goto L_0885078C;
    }
L_0885078C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 483u);
    aot_gpr_31 = (0x088507A4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088507A4u) goto L_088507A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088507A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_088507AC;
    }
L_088507AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 475u);
    aot_gpr_31 = (0x088507C4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088507C4u) goto L_088507C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088507C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_088507CC;
    }
L_088507CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 471u);
    aot_gpr_31 = (0x088507E4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088507E4u) goto L_088507E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088507E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_088507EC;
    }
L_088507EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 469u);
    aot_gpr_31 = (0x08850804u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850804u) goto L_08850804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_0885080C;
    }
L_0885080C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 473u);
    aot_gpr_31 = (0x08850824u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850824u) goto L_08850824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_0885082C;
    }
L_0885082C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 486u);
    aot_gpr_31 = (0x08850844u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850844u) goto L_08850844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_0885084C;
    }
L_0885084C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 462u);
    aot_gpr_31 = (0x08850864u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850864u) goto L_08850864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_0885086C;
    }
L_0885086C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 465u);
    aot_gpr_31 = (0x08850884u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850884u) goto L_08850884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_0885088C;
    }
L_0885088C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 478u);
    aot_gpr_31 = (0x088508A4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088508A4u) goto L_088508A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088508A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_088508AC;
    }
L_088508AC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088508C0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088508C0u) goto L_088508C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088508C0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088508CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850A4C;
      }
      goto L_088508F0;
    }
L_088508F0:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19632)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08850908:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 505u);
    aot_gpr_31 = (0x08850920u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850920u) goto L_08850920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850920:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850924;
L_08850924:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08850A60;
      }
      goto L_0885092C;
    }
L_0885092C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 507u);
    aot_gpr_31 = (0x08850944u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850944u) goto L_08850944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_0885094C;
    }
L_0885094C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 500u);
    aot_gpr_31 = (0x08850964u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850964u) goto L_08850964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_0885096C;
    }
L_0885096C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 496u);
    aot_gpr_31 = (0x08850984u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850984u) goto L_08850984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_0885098C;
    }
L_0885098C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 494u);
    aot_gpr_31 = (0x088509A4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088509A4u) goto L_088509A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088509A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_088509AC;
    }
L_088509AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 498u);
    aot_gpr_31 = (0x088509C4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088509C4u) goto L_088509C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088509C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_088509CC;
    }
L_088509CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 510u);
    aot_gpr_31 = (0x088509E4u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088509E4u) goto L_088509E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088509E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_088509EC;
    }
L_088509EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 487u);
    aot_gpr_31 = (0x08850A04u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850A04u) goto L_08850A04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_08850A0C;
    }
L_08850A0C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 490u);
    aot_gpr_31 = (0x08850A24u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850A24u) goto L_08850A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850A24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_08850A2C;
    }
L_08850A2C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 503u);
    aot_gpr_31 = (0x08850A44u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850A44u) goto L_08850A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850A44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_08850A4C;
    }
L_08850A4C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08850A60u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850A60u) goto L_08850A60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850A60:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08850A6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850BEC;
      }
      goto L_08850A90;
    }
L_08850A90:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19800)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08850AA8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 530u);
    aot_gpr_31 = (0x08850AC0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850AC0u) goto L_08850AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850AC0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850AC4;
L_08850AC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08850C00;
      }
      goto L_08850ACC;
    }
L_08850ACC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 532u);
    aot_gpr_31 = (0x08850AE4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850AE4u) goto L_08850AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850AEC;
    }
L_08850AEC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 524u);
    aot_gpr_31 = (0x08850B04u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850B04u) goto L_08850B04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850B04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850B0C;
    }
L_08850B0C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 520u);
    aot_gpr_31 = (0x08850B24u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850B24u) goto L_08850B24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850B24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850B2C;
    }
L_08850B2C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 518u);
    aot_gpr_31 = (0x08850B44u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850B44u) goto L_08850B44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850B44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850B4C;
    }
L_08850B4C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 522u);
    aot_gpr_31 = (0x08850B64u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850B64u) goto L_08850B64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850B6C;
    }
L_08850B6C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 535u);
    aot_gpr_31 = (0x08850B84u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850B84u) goto L_08850B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850B8C;
    }
L_08850B8C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 511u);
    aot_gpr_31 = (0x08850BA4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850BA4u) goto L_08850BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850BA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850BAC;
    }
L_08850BAC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 514u);
    aot_gpr_31 = (0x08850BC4u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850BC4u) goto L_08850BC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850BCC;
    }
L_08850BCC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 527u);
    aot_gpr_31 = (0x08850BE4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850BE4u) goto L_08850BE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850BE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850BEC;
    }
L_08850BEC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08850C00u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850C00u) goto L_08850C00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850C00:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08850C0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850D8C;
      }
      goto L_08850C30;
    }
L_08850C30:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19968)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08850C48:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 554u);
    aot_gpr_31 = (0x08850C60u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850C60u) goto L_08850C60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850C60:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850C64;
L_08850C64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08850DA0;
      }
      goto L_08850C6C;
    }
L_08850C6C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 556u);
    aot_gpr_31 = (0x08850C84u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850C84u) goto L_08850C84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850C84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850C8C;
    }
L_08850C8C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 549u);
    aot_gpr_31 = (0x08850CA4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850CA4u) goto L_08850CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850CAC;
    }
L_08850CAC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 545u);
    aot_gpr_31 = (0x08850CC4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850CC4u) goto L_08850CC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850CCC;
    }
L_08850CCC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 543u);
    aot_gpr_31 = (0x08850CE4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850CE4u) goto L_08850CE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850CE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850CEC;
    }
L_08850CEC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 547u);
    aot_gpr_31 = (0x08850D04u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850D04u) goto L_08850D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850D04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850D0C;
    }
L_08850D0C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 559u);
    aot_gpr_31 = (0x08850D24u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850D24u) goto L_08850D24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850D2C;
    }
L_08850D2C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 536u);
    aot_gpr_31 = (0x08850D44u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850D44u) goto L_08850D44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850D44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850D4C;
    }
L_08850D4C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 539u);
    aot_gpr_31 = (0x08850D64u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850D64u) goto L_08850D64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850D6C;
    }
L_08850D6C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 552u);
    aot_gpr_31 = (0x08850D84u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850D84u) goto L_08850D84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850D84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850D8C;
    }
L_08850D8C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08850DA0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850DA0u) goto L_08850DA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850DA0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08850DAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850F2C;
      }
      goto L_08850DD0;
    }
L_08850DD0:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20136)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08850DE8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 579u);
    aot_gpr_31 = (0x08850E00u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850E00u) goto L_08850E00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850E00:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850E04;
L_08850E04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08850F40;
      }
      goto L_08850E0C;
    }
L_08850E0C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 581u);
    aot_gpr_31 = (0x08850E24u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850E24u) goto L_08850E24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850E24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850E2C;
    }
L_08850E2C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 573u);
    aot_gpr_31 = (0x08850E44u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850E44u) goto L_08850E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850E44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850E4C;
    }
L_08850E4C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 569u);
    aot_gpr_31 = (0x08850E64u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850E64u) goto L_08850E64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850E6C;
    }
L_08850E6C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 567u);
    aot_gpr_31 = (0x08850E84u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850E84u) goto L_08850E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850E84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850E8C;
    }
L_08850E8C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 571u);
    aot_gpr_31 = (0x08850EA4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850EA4u) goto L_08850EA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850EA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850EAC;
    }
L_08850EAC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 584u);
    aot_gpr_31 = (0x08850EC4u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850EC4u) goto L_08850EC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850EC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850ECC;
    }
L_08850ECC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 560u);
    aot_gpr_31 = (0x08850EE4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850EE4u) goto L_08850EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850EEC;
    }
L_08850EEC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 563u);
    aot_gpr_31 = (0x08850F04u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850F04u) goto L_08850F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850F0C;
    }
L_08850F0C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 576u);
    aot_gpr_31 = (0x08850F24u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850F24u) goto L_08850F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850F24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850F2C;
    }
L_08850F2C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08850F40u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850F40u) goto L_08850F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850F40:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08850F4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088510CC;
      }
      goto L_08850F70;
    }
L_08850F70:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20304)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08850F88:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 603u);
    aot_gpr_31 = (0x08850FA0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850FA0u) goto L_08850FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850FA0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850FA4;
L_08850FA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088510E0;
      }
      goto L_08850FAC;
    }
L_08850FAC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 605u);
    aot_gpr_31 = (0x08850FC4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850FC4u) goto L_08850FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_08850FCC;
    }
L_08850FCC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 598u);
    aot_gpr_31 = (0x08850FE4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08850FE4u) goto L_08850FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08850FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_08850FEC;
    }
L_08850FEC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 594u);
    aot_gpr_31 = (0x08851004u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851004u) goto L_08851004;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_0885100C;
    }
L_0885100C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 592u);
    aot_gpr_31 = (0x08851024u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851024u) goto L_08851024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_0885102C;
    }
L_0885102C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 596u);
    aot_gpr_31 = (0x08851044u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851044u) goto L_08851044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_0885104C;
    }
L_0885104C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 608u);
    aot_gpr_31 = (0x08851064u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851064u) goto L_08851064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_0885106C;
    }
L_0885106C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 585u);
    aot_gpr_31 = (0x08851084u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851084u) goto L_08851084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_0885108C;
    }
L_0885108C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 588u);
    aot_gpr_31 = (0x088510A4u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088510A4u) goto L_088510A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088510A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_088510AC;
    }
L_088510AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 601u);
    aot_gpr_31 = (0x088510C4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088510C4u) goto L_088510C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088510C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_088510CC;
    }
L_088510CC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088510E0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088510E0u) goto L_088510E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088510E0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088510EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885126C;
      }
      goto L_08851110;
    }
L_08851110:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20472)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08851128:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 628u);
    aot_gpr_31 = (0x08851140u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851140u) goto L_08851140;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851140:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851144;
L_08851144:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08851280;
      }
      goto L_0885114C;
    }
L_0885114C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 630u);
    aot_gpr_31 = (0x08851164u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851164u) goto L_08851164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_0885116C;
    }
L_0885116C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 622u);
    aot_gpr_31 = (0x08851184u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851184u) goto L_08851184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_0885118C;
    }
L_0885118C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 618u);
    aot_gpr_31 = (0x088511A4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088511A4u) goto L_088511A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088511A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_088511AC;
    }
L_088511AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 616u);
    aot_gpr_31 = (0x088511C4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088511C4u) goto L_088511C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088511C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_088511CC;
    }
L_088511CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 620u);
    aot_gpr_31 = (0x088511E4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088511E4u) goto L_088511E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088511E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_088511EC;
    }
L_088511EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 633u);
    aot_gpr_31 = (0x08851204u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851204u) goto L_08851204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_0885120C;
    }
L_0885120C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 609u);
    aot_gpr_31 = (0x08851224u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851224u) goto L_08851224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_0885122C;
    }
L_0885122C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 612u);
    aot_gpr_31 = (0x08851244u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851244u) goto L_08851244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_0885124C;
    }
L_0885124C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 625u);
    aot_gpr_31 = (0x08851264u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851264u) goto L_08851264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851264:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_0885126C;
    }
L_0885126C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08851280u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851280u) goto L_08851280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851280:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0885128C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885140C;
      }
      goto L_088512B0;
    }
L_088512B0:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20640)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088512C8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 652u);
    aot_gpr_31 = (0x088512E0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088512E0u) goto L_088512E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088512E0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088512E4;
L_088512E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08851420;
      }
      goto L_088512EC;
    }
L_088512EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 654u);
    aot_gpr_31 = (0x08851304u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851304u) goto L_08851304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_0885130C;
    }
L_0885130C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 647u);
    aot_gpr_31 = (0x08851324u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851324u) goto L_08851324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_0885132C;
    }
L_0885132C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 643u);
    aot_gpr_31 = (0x08851344u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851344u) goto L_08851344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_0885134C;
    }
L_0885134C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 641u);
    aot_gpr_31 = (0x08851364u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851364u) goto L_08851364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_0885136C;
    }
L_0885136C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 645u);
    aot_gpr_31 = (0x08851384u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851384u) goto L_08851384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_0885138C;
    }
L_0885138C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 657u);
    aot_gpr_31 = (0x088513A4u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088513A4u) goto L_088513A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088513A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_088513AC;
    }
L_088513AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 634u);
    aot_gpr_31 = (0x088513C4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088513C4u) goto L_088513C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088513C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_088513CC;
    }
L_088513CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 637u);
    aot_gpr_31 = (0x088513E4u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088513E4u) goto L_088513E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088513E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_088513EC;
    }
L_088513EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 650u);
    aot_gpr_31 = (0x08851404u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851404u) goto L_08851404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_0885140C;
    }
L_0885140C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08851420u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851420u) goto L_08851420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851420:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0885142C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088515AC;
      }
      goto L_08851450;
    }
L_08851450:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20808)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08851468:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 679u);
    aot_gpr_31 = (0x08851480u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851480u) goto L_08851480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851480:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851484;
L_08851484:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088515C0;
      }
      goto L_0885148C;
    }
L_0885148C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 681u);
    aot_gpr_31 = (0x088514A4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088514A4u) goto L_088514A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088514A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_088514AC;
    }
L_088514AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 673u);
    aot_gpr_31 = (0x088514C4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088514C4u) goto L_088514C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088514C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_088514CC;
    }
L_088514CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 669u);
    aot_gpr_31 = (0x088514E4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088514E4u) goto L_088514E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088514E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_088514EC;
    }
L_088514EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 666u);
    aot_gpr_31 = (0x08851504u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851504u) goto L_08851504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_0885150C;
    }
L_0885150C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 671u);
    aot_gpr_31 = (0x08851524u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851524u) goto L_08851524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_0885152C;
    }
L_0885152C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 684u);
    aot_gpr_31 = (0x08851544u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851544u) goto L_08851544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_0885154C;
    }
L_0885154C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 658u);
    aot_gpr_31 = (0x08851564u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851564u) goto L_08851564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_0885156C;
    }
L_0885156C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 662u);
    aot_gpr_31 = (0x08851584u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851584u) goto L_08851584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_0885158C;
    }
L_0885158C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 676u);
    aot_gpr_31 = (0x088515A4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088515A4u) goto L_088515A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088515A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_088515AC;
    }
L_088515AC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088515C0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088515C0u) goto L_088515C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088515C0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088515CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-109));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088516EC;
      }
      goto L_088515F0;
    }
L_088515F0:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20992)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08851608:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 755u);
    aot_gpr_31 = (0x08851620u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851620u) goto L_08851620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851620:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851624;
L_08851624:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08851700;
      }
      goto L_0885162C;
    }
L_0885162C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 773u);
    aot_gpr_31 = (0x08851644u);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851644u) goto L_08851644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851624;
      }
      goto L_0885164C;
    }
L_0885164C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 768u);
    aot_gpr_31 = (0x08851664u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851664u) goto L_08851664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851624;
      }
      goto L_0885166C;
    }
L_0885166C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 766u);
    aot_gpr_31 = (0x08851684u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851684u) goto L_08851684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851624;
      }
      goto L_0885168C;
    }
L_0885168C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 760u);
    aot_gpr_31 = (0x088516A4u);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088516A4u) goto L_088516A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088516A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851624;
      }
      goto L_088516AC;
    }
L_088516AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 757u);
    aot_gpr_31 = (0x088516C4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088516C4u) goto L_088516C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088516C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851624;
      }
      goto L_088516CC;
    }
L_088516CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 770u);
    aot_gpr_31 = (0x088516E4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088516E4u) goto L_088516E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088516E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851624;
      }
      goto L_088516EC;
    }
L_088516EC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08851700u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851700u) goto L_08851700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851700:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0885170C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885188C;
      }
      goto L_08851730;
    }
L_08851730:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(21192)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08851748:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 798u);
    aot_gpr_31 = (0x08851760u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851760u) goto L_08851760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851760:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851764;
L_08851764:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088518A0;
      }
      goto L_0885176C;
    }
L_0885176C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 800u);
    aot_gpr_31 = (0x08851784u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851784u) goto L_08851784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_0885178C;
    }
L_0885178C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 792u);
    aot_gpr_31 = (0x088517A4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088517A4u) goto L_088517A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088517A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_088517AC;
    }
L_088517AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 788u);
    aot_gpr_31 = (0x088517C4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088517C4u) goto L_088517C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088517C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_088517CC;
    }
L_088517CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 786u);
    aot_gpr_31 = (0x088517E4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088517E4u) goto L_088517E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088517E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_088517EC;
    }
L_088517EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 790u);
    aot_gpr_31 = (0x08851804u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851804u) goto L_08851804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_0885180C;
    }
L_0885180C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 803u);
    aot_gpr_31 = (0x08851824u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851824u) goto L_08851824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_0885182C;
    }
L_0885182C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 779u);
    aot_gpr_31 = (0x08851844u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851844u) goto L_08851844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_0885184C;
    }
L_0885184C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 782u);
    aot_gpr_31 = (0x08851864u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851864u) goto L_08851864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_0885186C;
    }
L_0885186C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 795u);
    aot_gpr_31 = (0x08851884u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851884u) goto L_08851884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_0885188C;
    }
L_0885188C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088518A0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088518A0u) goto L_088518A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088518A0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088518AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08851A2C;
      }
      goto L_088518D0;
    }
L_088518D0:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(21360)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088518E8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 823u);
    aot_gpr_31 = (0x08851900u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851900u) goto L_08851900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851900:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851904;
L_08851904:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08851A40;
      }
      goto L_0885190C;
    }
L_0885190C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 825u);
    aot_gpr_31 = (0x08851924u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851924u) goto L_08851924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_0885192C;
    }
L_0885192C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 817u);
    aot_gpr_31 = (0x08851944u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851944u) goto L_08851944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_0885194C;
    }
L_0885194C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 813u);
    aot_gpr_31 = (0x08851964u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851964u) goto L_08851964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_0885196C;
    }
L_0885196C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 811u);
    aot_gpr_31 = (0x08851984u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851984u) goto L_08851984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_0885198C;
    }
L_0885198C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 815u);
    aot_gpr_31 = (0x088519A4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088519A4u) goto L_088519A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088519A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_088519AC;
    }
L_088519AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 828u);
    aot_gpr_31 = (0x088519C4u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088519C4u) goto L_088519C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088519C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_088519CC;
    }
L_088519CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 804u);
    aot_gpr_31 = (0x088519E4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088519E4u) goto L_088519E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088519E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_088519EC;
    }
L_088519EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 807u);
    aot_gpr_31 = (0x08851A04u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851A04u) goto L_08851A04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_08851A0C;
    }
L_08851A0C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 820u);
    aot_gpr_31 = (0x08851A24u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851A24u) goto L_08851A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851A24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_08851A2C;
    }
L_08851A2C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08851A40u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851A40u) goto L_08851A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851A40:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08851A4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08851BCC;
      }
      goto L_08851A70;
    }
L_08851A70:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(21528)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08851A88:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 848u);
    aot_gpr_31 = (0x08851AA0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851AA0u) goto L_08851AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851AA0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851AA4;
L_08851AA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08851BE0;
      }
      goto L_08851AAC;
    }
L_08851AAC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 850u);
    aot_gpr_31 = (0x08851AC4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851AC4u) goto L_08851AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851ACC;
    }
L_08851ACC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 842u);
    aot_gpr_31 = (0x08851AE4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851AE4u) goto L_08851AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851AEC;
    }
L_08851AEC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 838u);
    aot_gpr_31 = (0x08851B04u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851B04u) goto L_08851B04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851B04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851B0C;
    }
L_08851B0C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 836u);
    aot_gpr_31 = (0x08851B24u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851B24u) goto L_08851B24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851B24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851B2C;
    }
L_08851B2C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 840u);
    aot_gpr_31 = (0x08851B44u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851B44u) goto L_08851B44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851B44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851B4C;
    }
L_08851B4C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 853u);
    aot_gpr_31 = (0x08851B64u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851B64u) goto L_08851B64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851B6C;
    }
L_08851B6C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 829u);
    aot_gpr_31 = (0x08851B84u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851B84u) goto L_08851B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851B8C;
    }
L_08851B8C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 832u);
    aot_gpr_31 = (0x08851BA4u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851BA4u) goto L_08851BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851BA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851BAC;
    }
L_08851BAC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 845u);
    aot_gpr_31 = (0x08851BC4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851BC4u) goto L_08851BC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851BCC;
    }
L_08851BCC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08851BE0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851BE0u) goto L_08851BE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851BE0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08851BEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08851D6C;
      }
      goto L_08851C10;
    }
L_08851C10:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(21696)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08851C28:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 873u);
    aot_gpr_31 = (0x08851C40u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851C40u) goto L_08851C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851C40:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851C44;
L_08851C44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08851D80;
      }
      goto L_08851C4C;
    }
L_08851C4C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 875u);
    aot_gpr_31 = (0x08851C64u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851C64u) goto L_08851C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851C6C;
    }
L_08851C6C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 867u);
    aot_gpr_31 = (0x08851C84u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851C84u) goto L_08851C84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851C84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851C8C;
    }
L_08851C8C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 863u);
    aot_gpr_31 = (0x08851CA4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851CA4u) goto L_08851CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851CAC;
    }
L_08851CAC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 861u);
    aot_gpr_31 = (0x08851CC4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851CC4u) goto L_08851CC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851CCC;
    }
L_08851CCC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 865u);
    aot_gpr_31 = (0x08851CE4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851CE4u) goto L_08851CE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851CE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851CEC;
    }
L_08851CEC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 878u);
    aot_gpr_31 = (0x08851D04u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851D04u) goto L_08851D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851D04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851D0C;
    }
L_08851D0C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 854u);
    aot_gpr_31 = (0x08851D24u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851D24u) goto L_08851D24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851D2C;
    }
L_08851D2C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 857u);
    aot_gpr_31 = (0x08851D44u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851D44u) goto L_08851D44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851D44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851D4C;
    }
L_08851D4C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 870u);
    aot_gpr_31 = (0x08851D64u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851D64u) goto L_08851D64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851D6C;
    }
L_08851D6C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08851D80u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851D80u) goto L_08851D80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851D80:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08851D8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08851F0C;
      }
      goto L_08851DB0;
    }
L_08851DB0:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(21864)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08851DC8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 897u);
    aot_gpr_31 = (0x08851DE0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851DE0u) goto L_08851DE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851DE0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851DE4;
L_08851DE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08851F20;
      }
      goto L_08851DEC;
    }
L_08851DEC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 899u);
    aot_gpr_31 = (0x08851E04u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851E04u) goto L_08851E04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851E0C;
    }
L_08851E0C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 891u);
    aot_gpr_31 = (0x08851E24u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851E24u) goto L_08851E24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851E24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851E2C;
    }
L_08851E2C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 887u);
    aot_gpr_31 = (0x08851E44u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851E44u) goto L_08851E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851E44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851E4C;
    }
L_08851E4C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 885u);
    aot_gpr_31 = (0x08851E64u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851E64u) goto L_08851E64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851E6C;
    }
L_08851E6C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 889u);
    aot_gpr_31 = (0x08851E84u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851E84u) goto L_08851E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851E84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851E8C;
    }
L_08851E8C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 902u);
    aot_gpr_31 = (0x08851EA4u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851EA4u) goto L_08851EA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851EA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851EAC;
    }
L_08851EAC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 879u);
    aot_gpr_31 = (0x08851EC4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851EC4u) goto L_08851EC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851EC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851ECC;
    }
L_08851ECC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 881u);
    aot_gpr_31 = (0x08851EE4u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851EE4u) goto L_08851EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851EEC;
    }
L_08851EEC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 894u);
    aot_gpr_31 = (0x08851F04u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851F04u) goto L_08851F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851F0C;
    }
L_08851F0C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08851F20u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851F20u) goto L_08851F20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851F20:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08851F2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088520AC;
      }
      goto L_08851F50;
    }
L_08851F50:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(22032)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08851F68:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 922u);
    aot_gpr_31 = (0x08851F80u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851F80u) goto L_08851F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851F80:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851F84;
L_08851F84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088520C0;
      }
      goto L_08851F8C;
    }
L_08851F8C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 924u);
    aot_gpr_31 = (0x08851FA4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851FA4u) goto L_08851FA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_08851FAC;
    }
L_08851FAC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 916u);
    aot_gpr_31 = (0x08851FC4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851FC4u) goto L_08851FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_08851FCC;
    }
L_08851FCC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 912u);
    aot_gpr_31 = (0x08851FE4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08851FE4u) goto L_08851FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08851FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_08851FEC;
    }
L_08851FEC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 910u);
    aot_gpr_31 = (0x08852004u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852004u) goto L_08852004;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_0885200C;
    }
L_0885200C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 914u);
    aot_gpr_31 = (0x08852024u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852024u) goto L_08852024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_0885202C;
    }
L_0885202C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 927u);
    aot_gpr_31 = (0x08852044u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852044u) goto L_08852044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_0885204C;
    }
L_0885204C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 903u);
    aot_gpr_31 = (0x08852064u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852064u) goto L_08852064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_0885206C;
    }
L_0885206C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 906u);
    aot_gpr_31 = (0x08852084u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852084u) goto L_08852084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_0885208C;
    }
L_0885208C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 919u);
    aot_gpr_31 = (0x088520A4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088520A4u) goto L_088520A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088520A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_088520AC;
    }
L_088520AC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088520C0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088520C0u) goto L_088520C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088520C0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088520CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885224C;
      }
      goto L_088520F0;
    }
L_088520F0:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(22200)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08852108:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 947u);
    aot_gpr_31 = (0x08852120u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852120u) goto L_08852120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852120:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852124;
L_08852124:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08852260;
      }
      goto L_0885212C;
    }
L_0885212C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 949u);
    aot_gpr_31 = (0x08852144u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852144u) goto L_08852144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_0885214C;
    }
L_0885214C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 941u);
    aot_gpr_31 = (0x08852164u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852164u) goto L_08852164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_0885216C;
    }
L_0885216C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 937u);
    aot_gpr_31 = (0x08852184u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852184u) goto L_08852184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_0885218C;
    }
L_0885218C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 935u);
    aot_gpr_31 = (0x088521A4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088521A4u) goto L_088521A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088521A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_088521AC;
    }
L_088521AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 939u);
    aot_gpr_31 = (0x088521C4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088521C4u) goto L_088521C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088521C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_088521CC;
    }
L_088521CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 952u);
    aot_gpr_31 = (0x088521E4u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088521E4u) goto L_088521E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088521E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_088521EC;
    }
L_088521EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 928u);
    aot_gpr_31 = (0x08852204u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852204u) goto L_08852204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_0885220C;
    }
L_0885220C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 931u);
    aot_gpr_31 = (0x08852224u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852224u) goto L_08852224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_0885222C;
    }
L_0885222C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 944u);
    aot_gpr_31 = (0x08852244u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852244u) goto L_08852244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_0885224C;
    }
L_0885224C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08852260u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852260u) goto L_08852260;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852260:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0885226C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088523EC;
      }
      goto L_08852290;
    }
L_08852290:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(22368)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088522A8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 972u);
    aot_gpr_31 = (0x088522C0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088522C0u) goto L_088522C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088522C0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088522C4;
L_088522C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08852400;
      }
      goto L_088522CC;
    }
L_088522CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 974u);
    aot_gpr_31 = (0x088522E4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088522E4u) goto L_088522E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088522E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_088522EC;
    }
L_088522EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 966u);
    aot_gpr_31 = (0x08852304u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852304u) goto L_08852304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_0885230C;
    }
L_0885230C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 962u);
    aot_gpr_31 = (0x08852324u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852324u) goto L_08852324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_0885232C;
    }
L_0885232C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 960u);
    aot_gpr_31 = (0x08852344u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852344u) goto L_08852344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_0885234C;
    }
L_0885234C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 964u);
    aot_gpr_31 = (0x08852364u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852364u) goto L_08852364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_0885236C;
    }
L_0885236C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 977u);
    aot_gpr_31 = (0x08852384u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852384u) goto L_08852384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_0885238C;
    }
L_0885238C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 953u);
    aot_gpr_31 = (0x088523A4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088523A4u) goto L_088523A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088523A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_088523AC;
    }
L_088523AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 956u);
    aot_gpr_31 = (0x088523C4u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088523C4u) goto L_088523C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088523C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_088523CC;
    }
L_088523CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 969u);
    aot_gpr_31 = (0x088523E4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088523E4u) goto L_088523E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088523E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_088523EC;
    }
L_088523EC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08852400u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852400u) goto L_08852400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852400:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0885240C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885258C;
      }
      goto L_08852430;
    }
L_08852430:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(22536)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08852448:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 997u);
    aot_gpr_31 = (0x08852460u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852460u) goto L_08852460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852460:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852464;
L_08852464:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088525A0;
      }
      goto L_0885246C;
    }
L_0885246C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 999u);
    aot_gpr_31 = (0x08852484u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852484u) goto L_08852484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_0885248C;
    }
L_0885248C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 991u);
    aot_gpr_31 = (0x088524A4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088524A4u) goto L_088524A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088524A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_088524AC;
    }
L_088524AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 987u);
    aot_gpr_31 = (0x088524C4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088524C4u) goto L_088524C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088524C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_088524CC;
    }
L_088524CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 985u);
    aot_gpr_31 = (0x088524E4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088524E4u) goto L_088524E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088524E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_088524EC;
    }
L_088524EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 989u);
    aot_gpr_31 = (0x08852504u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852504u) goto L_08852504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_0885250C;
    }
L_0885250C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1002u);
    aot_gpr_31 = (0x08852524u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852524u) goto L_08852524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_0885252C;
    }
L_0885252C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 978u);
    aot_gpr_31 = (0x08852544u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852544u) goto L_08852544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_0885254C;
    }
L_0885254C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 981u);
    aot_gpr_31 = (0x08852564u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852564u) goto L_08852564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_0885256C;
    }
L_0885256C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 994u);
    aot_gpr_31 = (0x08852584u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852584u) goto L_08852584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_0885258C;
    }
L_0885258C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088525A0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088525A0u) goto L_088525A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088525A0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088525AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885272C;
      }
      goto L_088525D0;
    }
L_088525D0:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(22704)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088525E8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1022u);
    aot_gpr_31 = (0x08852600u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852600u) goto L_08852600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852600:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852604;
L_08852604:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08852740;
      }
      goto L_0885260C;
    }
L_0885260C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1024u);
    aot_gpr_31 = (0x08852624u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852624u) goto L_08852624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_0885262C;
    }
L_0885262C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1016u);
    aot_gpr_31 = (0x08852644u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852644u) goto L_08852644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_0885264C;
    }
L_0885264C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1012u);
    aot_gpr_31 = (0x08852664u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852664u) goto L_08852664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_0885266C;
    }
L_0885266C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1010u);
    aot_gpr_31 = (0x08852684u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852684u) goto L_08852684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_0885268C;
    }
L_0885268C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1014u);
    aot_gpr_31 = (0x088526A4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088526A4u) goto L_088526A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088526A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_088526AC;
    }
L_088526AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1027u);
    aot_gpr_31 = (0x088526C4u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088526C4u) goto L_088526C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088526C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_088526CC;
    }
L_088526CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1003u);
    aot_gpr_31 = (0x088526E4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088526E4u) goto L_088526E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088526E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_088526EC;
    }
L_088526EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1006u);
    aot_gpr_31 = (0x08852704u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852704u) goto L_08852704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852704:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_0885270C;
    }
L_0885270C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1019u);
    aot_gpr_31 = (0x08852724u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852724u) goto L_08852724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_0885272C;
    }
L_0885272C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08852740u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852740u) goto L_08852740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852740:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0885274C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088528CC;
      }
      goto L_08852770;
    }
L_08852770:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(22872)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08852788:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1047u);
    aot_gpr_31 = (0x088527A0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088527A0u) goto L_088527A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088527A0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088527A4;
L_088527A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088528E0;
      }
      goto L_088527AC;
    }
L_088527AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1049u);
    aot_gpr_31 = (0x088527C4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088527C4u) goto L_088527C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088527C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_088527CC;
    }
L_088527CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1041u);
    aot_gpr_31 = (0x088527E4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088527E4u) goto L_088527E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088527E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_088527EC;
    }
L_088527EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1037u);
    aot_gpr_31 = (0x08852804u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852804u) goto L_08852804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_0885280C;
    }
L_0885280C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1035u);
    aot_gpr_31 = (0x08852824u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852824u) goto L_08852824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_0885282C;
    }
L_0885282C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1039u);
    aot_gpr_31 = (0x08852844u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852844u) goto L_08852844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_0885284C;
    }
L_0885284C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1052u);
    aot_gpr_31 = (0x08852864u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852864u) goto L_08852864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_0885286C;
    }
L_0885286C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1028u);
    aot_gpr_31 = (0x08852884u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852884u) goto L_08852884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_0885288C;
    }
L_0885288C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1031u);
    aot_gpr_31 = (0x088528A4u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088528A4u) goto L_088528A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088528A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_088528AC;
    }
L_088528AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1044u);
    aot_gpr_31 = (0x088528C4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088528C4u) goto L_088528C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088528C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_088528CC;
    }
L_088528CC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088528E0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088528E0u) goto L_088528E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088528E0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088528EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885298C;
      }
      goto L_0885290C;
    }
L_0885290C:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_0885296C;
      }
      goto L_08852918;
    }
L_08852918:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_0885294C;
      }
      goto L_08852920;
    }
L_08852920:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_088529AC;
      }
      goto L_08852928;
    }
L_08852928:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1059u);
    aot_gpr_31 = (0x08852940u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852940u) goto L_08852940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852940:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852944;
L_08852944:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088529BC;
      }
      goto L_0885294C;
    }
L_0885294C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1056u);
    aot_gpr_31 = (0x08852964u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852964u) goto L_08852964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852944;
      }
      goto L_0885296C;
    }
L_0885296C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1053u);
    aot_gpr_31 = (0x08852984u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852984u) goto L_08852984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852944;
      }
      goto L_0885298C;
    }
L_0885298C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1062u);
    aot_gpr_31 = (0x088529A4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088529A4u) goto L_088529A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088529A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852944;
      }
      goto L_088529AC;
    }
L_088529AC:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088529BCu);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088529BCu) goto L_088529BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088529BC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088529C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08852B48;
      }
      goto L_088529EC;
    }
L_088529EC:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23040)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08852A04:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1108u);
    aot_gpr_31 = (0x08852A1Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852A1Cu) goto L_08852A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852A1C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852A20;
L_08852A20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08852B5C;
      }
      goto L_08852A28;
    }
L_08852A28:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1110u);
    aot_gpr_31 = (0x08852A40u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852A40u) goto L_08852A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852A48;
    }
L_08852A48:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1101u);
    aot_gpr_31 = (0x08852A60u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852A60u) goto L_08852A60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852A68;
    }
L_08852A68:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1097u);
    aot_gpr_31 = (0x08852A80u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852A80u) goto L_08852A80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852A80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852A88;
    }
L_08852A88:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1095u);
    aot_gpr_31 = (0x08852AA0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852AA0u) goto L_08852AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852AA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852AA8;
    }
L_08852AA8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1099u);
    aot_gpr_31 = (0x08852AC0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852AC0u) goto L_08852AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852AC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852AC8;
    }
L_08852AC8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1113u);
    aot_gpr_31 = (0x08852AE0u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852AE0u) goto L_08852AE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852AE8;
    }
L_08852AE8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1088u);
    aot_gpr_31 = (0x08852B00u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852B00u) goto L_08852B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852B00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852B08;
    }
L_08852B08:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1091u);
    aot_gpr_31 = (0x08852B20u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852B20u) goto L_08852B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852B20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852B28;
    }
L_08852B28:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1105u);
    aot_gpr_31 = (0x08852B40u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852B40u) goto L_08852B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852B40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852B48;
    }
L_08852B48:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08852B5Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852B5Cu) goto L_08852B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852B5C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08852B68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08852CE8;
      }
      goto L_08852B8C;
    }
L_08852B8C:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23208)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08852BA4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1133u);
    aot_gpr_31 = (0x08852BBCu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852BBCu) goto L_08852BBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852BBC:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852BC0;
L_08852BC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08852CFC;
      }
      goto L_08852BC8;
    }
L_08852BC8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1135u);
    aot_gpr_31 = (0x08852BE0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852BE0u) goto L_08852BE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852BE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852BE8;
    }
L_08852BE8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1127u);
    aot_gpr_31 = (0x08852C00u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852C00u) goto L_08852C00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852C00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852C08;
    }
L_08852C08:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1123u);
    aot_gpr_31 = (0x08852C20u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852C20u) goto L_08852C20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852C20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852C28;
    }
L_08852C28:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1121u);
    aot_gpr_31 = (0x08852C40u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852C40u) goto L_08852C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852C40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852C48;
    }
L_08852C48:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1125u);
    aot_gpr_31 = (0x08852C60u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852C60u) goto L_08852C60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852C68;
    }
L_08852C68:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1138u);
    aot_gpr_31 = (0x08852C80u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852C80u) goto L_08852C80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852C80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852C88;
    }
L_08852C88:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1114u);
    aot_gpr_31 = (0x08852CA0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852CA0u) goto L_08852CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852CA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852CA8;
    }
L_08852CA8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1117u);
    aot_gpr_31 = (0x08852CC0u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852CC0u) goto L_08852CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852CC8;
    }
L_08852CC8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1130u);
    aot_gpr_31 = (0x08852CE0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852CE0u) goto L_08852CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852CE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852CE8;
    }
L_08852CE8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08852CFCu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852CFCu) goto L_08852CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852CFC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08852D08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08852DA8;
      }
      goto L_08852D28;
    }
L_08852D28:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08852D88;
      }
      goto L_08852D34;
    }
L_08852D34:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08852D68;
      }
      goto L_08852D3C;
    }
L_08852D3C:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08852DC8;
      }
      goto L_08852D44;
    }
L_08852D44:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1145u);
    aot_gpr_31 = (0x08852D5Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852D5Cu) goto L_08852D5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852D5C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852D60;
L_08852D60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08852DD8;
      }
      goto L_08852D68;
    }
L_08852D68:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1142u);
    aot_gpr_31 = (0x08852D80u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852D80u) goto L_08852D80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852D60;
      }
      goto L_08852D88;
    }
L_08852D88:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1139u);
    aot_gpr_31 = (0x08852DA0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852DA0u) goto L_08852DA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852D60;
      }
      goto L_08852DA8;
    }
L_08852DA8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1148u);
    aot_gpr_31 = (0x08852DC0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852DC0u) goto L_08852DC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852DC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852D60;
      }
      goto L_08852DC8;
    }
L_08852DC8:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08852DD8u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852DD8u) goto L_08852DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852DD8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08852DE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-109));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08852F04;
      }
      goto L_08852E08;
    }
L_08852E08:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23376)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08852E20:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1163u);
    aot_gpr_31 = (0x08852E38u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852E38u) goto L_08852E38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852E38:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852E3C;
L_08852E3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08852F18;
      }
      goto L_08852E44;
    }
L_08852E44:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1182u);
    aot_gpr_31 = (0x08852E5Cu);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852E5Cu) goto L_08852E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852E3C;
      }
      goto L_08852E64;
    }
L_08852E64:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1168u);
    aot_gpr_31 = (0x08852E7Cu);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852E7Cu) goto L_08852E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852E3C;
      }
      goto L_08852E84;
    }
L_08852E84:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1176u);
    aot_gpr_31 = (0x08852E9Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852E9Cu) goto L_08852E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852E9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852E3C;
      }
      goto L_08852EA4;
    }
L_08852EA4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1174u);
    aot_gpr_31 = (0x08852EBCu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852EBCu) goto L_08852EBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852E3C;
      }
      goto L_08852EC4;
    }
L_08852EC4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1165u);
    aot_gpr_31 = (0x08852EDCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852EDCu) goto L_08852EDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852EDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852E3C;
      }
      goto L_08852EE4;
    }
L_08852EE4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1179u);
    aot_gpr_31 = (0x08852EFCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852EFCu) goto L_08852EFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852EFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852E3C;
      }
      goto L_08852F04;
    }
L_08852F04:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08852F18u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852F18u) goto L_08852F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852F18:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08852F24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-109));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853044;
      }
      goto L_08852F48;
    }
L_08852F48:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23576)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08852F60:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1214u);
    aot_gpr_31 = (0x08852F78u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852F78u) goto L_08852F78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852F78:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852F7C;
L_08852F7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08853058;
      }
      goto L_08852F84;
    }
L_08852F84:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1232u);
    aot_gpr_31 = (0x08852F9Cu);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852F9Cu) goto L_08852F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852F7C;
      }
      goto L_08852FA4;
    }
L_08852FA4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1219u);
    aot_gpr_31 = (0x08852FBCu);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852FBCu) goto L_08852FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852F7C;
      }
      goto L_08852FC4;
    }
L_08852FC4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1227u);
    aot_gpr_31 = (0x08852FDCu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852FDCu) goto L_08852FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852F7C;
      }
      goto L_08852FE4;
    }
L_08852FE4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1225u);
    aot_gpr_31 = (0x08852FFCu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08852FFCu) goto L_08852FFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08852FFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852F7C;
      }
      goto L_08853004;
    }
L_08853004:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1216u);
    aot_gpr_31 = (0x0885301Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885301Cu) goto L_0885301C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885301C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852F7C;
      }
      goto L_08853024;
    }
L_08853024:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1229u);
    aot_gpr_31 = (0x0885303Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885303Cu) goto L_0885303C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885303C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852F7C;
      }
      goto L_08853044;
    }
L_08853044:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08853058u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853058u) goto L_08853058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853058:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-109));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853184;
      }
      goto L_08853088;
    }
L_08853088:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23776)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088530A0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1238u);
    aot_gpr_31 = (0x088530B8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088530B8u) goto L_088530B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088530B8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088530BC;
L_088530BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08853198;
      }
      goto L_088530C4;
    }
L_088530C4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1257u);
    aot_gpr_31 = (0x088530DCu);
    aot_gpr_8 = (0u | 7u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088530DCu) goto L_088530DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088530DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088530BC;
      }
      goto L_088530E4;
    }
L_088530E4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1243u);
    aot_gpr_31 = (0x088530FCu);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088530FCu) goto L_088530FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088530FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088530BC;
      }
      goto L_08853104;
    }
L_08853104:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1251u);
    aot_gpr_31 = (0x0885311Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885311Cu) goto L_0885311C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885311C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088530BC;
      }
      goto L_08853124;
    }
L_08853124:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1249u);
    aot_gpr_31 = (0x0885313Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885313Cu) goto L_0885313C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885313C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088530BC;
      }
      goto L_08853144;
    }
L_08853144:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1240u);
    aot_gpr_31 = (0x0885315Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885315Cu) goto L_0885315C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885315C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088530BC;
      }
      goto L_08853164;
    }
L_08853164:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1254u);
    aot_gpr_31 = (0x0885317Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885317Cu) goto L_0885317C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885317C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088530BC;
      }
      goto L_08853184;
    }
L_08853184:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08853198u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853198u) goto L_08853198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853198:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088531A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-109));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088532C4;
      }
      goto L_088531C8;
    }
L_088531C8:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23976)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088531E0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1264u);
    aot_gpr_31 = (0x088531F8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088531F8u) goto L_088531F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088531F8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088531FC;
L_088531FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088532D8;
      }
      goto L_08853204;
    }
L_08853204:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1283u);
    aot_gpr_31 = (0x0885321Cu);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885321Cu) goto L_0885321C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885321C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088531FC;
      }
      goto L_08853224;
    }
L_08853224:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1269u);
    aot_gpr_31 = (0x0885323Cu);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885323Cu) goto L_0885323C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885323C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088531FC;
      }
      goto L_08853244;
    }
L_08853244:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1277u);
    aot_gpr_31 = (0x0885325Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885325Cu) goto L_0885325C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885325C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088531FC;
      }
      goto L_08853264;
    }
L_08853264:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1275u);
    aot_gpr_31 = (0x0885327Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885327Cu) goto L_0885327C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885327C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088531FC;
      }
      goto L_08853284;
    }
L_08853284:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1266u);
    aot_gpr_31 = (0x0885329Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885329Cu) goto L_0885329C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885329C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088531FC;
      }
      goto L_088532A4;
    }
L_088532A4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1280u);
    aot_gpr_31 = (0x088532BCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088532BCu) goto L_088532BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088532BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088531FC;
      }
      goto L_088532C4;
    }
L_088532C4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088532D8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088532D8u) goto L_088532D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088532D8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088532E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-109));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853404;
      }
      goto L_08853308;
    }
L_08853308:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24176)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853320:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1289u);
    aot_gpr_31 = (0x08853338u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853338u) goto L_08853338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853338:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885333C;
L_0885333C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08853418;
      }
      goto L_08853344;
    }
L_08853344:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1308u);
    aot_gpr_31 = (0x0885335Cu);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885335Cu) goto L_0885335C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885335C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885333C;
      }
      goto L_08853364;
    }
L_08853364:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1294u);
    aot_gpr_31 = (0x0885337Cu);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885337Cu) goto L_0885337C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885337C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885333C;
      }
      goto L_08853384;
    }
L_08853384:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1302u);
    aot_gpr_31 = (0x0885339Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885339Cu) goto L_0885339C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885339C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885333C;
      }
      goto L_088533A4;
    }
L_088533A4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1300u);
    aot_gpr_31 = (0x088533BCu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088533BCu) goto L_088533BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088533BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885333C;
      }
      goto L_088533C4;
    }
L_088533C4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1291u);
    aot_gpr_31 = (0x088533DCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088533DCu) goto L_088533DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088533DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885333C;
      }
      goto L_088533E4;
    }
L_088533E4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1305u);
    aot_gpr_31 = (0x088533FCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088533FCu) goto L_088533FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088533FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885333C;
      }
      goto L_08853404;
    }
L_08853404:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08853418u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853418u) goto L_08853418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853418:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088535A4;
      }
      goto L_08853448;
    }
L_08853448:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24376)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853460:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1358u);
    aot_gpr_31 = (0x08853478u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853478u) goto L_08853478;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853478:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885347C;
L_0885347C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088535B8;
      }
      goto L_08853484;
    }
L_08853484:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1360u);
    aot_gpr_31 = (0x0885349Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885349Cu) goto L_0885349C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885349C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_088534A4;
    }
L_088534A4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1353u);
    aot_gpr_31 = (0x088534BCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088534BCu) goto L_088534BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088534BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_088534C4;
    }
L_088534C4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1349u);
    aot_gpr_31 = (0x088534DCu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088534DCu) goto L_088534DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088534DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_088534E4;
    }
L_088534E4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1346u);
    aot_gpr_31 = (0x088534FCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088534FCu) goto L_088534FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088534FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_08853504;
    }
L_08853504:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1351u);
    aot_gpr_31 = (0x0885351Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885351Cu) goto L_0885351C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885351C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_08853524;
    }
L_08853524:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1363u);
    aot_gpr_31 = (0x0885353Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885353Cu) goto L_0885353C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885353C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_08853544;
    }
L_08853544:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1338u);
    aot_gpr_31 = (0x0885355Cu);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885355Cu) goto L_0885355C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885355C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_08853564;
    }
L_08853564:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1342u);
    aot_gpr_31 = (0x0885357Cu);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885357Cu) goto L_0885357C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885357C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_08853584;
    }
L_08853584:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1356u);
    aot_gpr_31 = (0x0885359Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885359Cu) goto L_0885359C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885359C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_088535A4;
    }
L_088535A4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088535B8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088535B8u) goto L_088535B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088535B8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088535C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853744;
      }
      goto L_088535E8;
    }
L_088535E8:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24544)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853600:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1385u);
    aot_gpr_31 = (0x08853618u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853618u) goto L_08853618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853618:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885361C;
L_0885361C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08853758;
      }
      goto L_08853624;
    }
L_08853624:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1387u);
    aot_gpr_31 = (0x0885363Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885363Cu) goto L_0885363C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885363C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_08853644;
    }
L_08853644:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1379u);
    aot_gpr_31 = (0x0885365Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885365Cu) goto L_0885365C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885365C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_08853664;
    }
L_08853664:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1374u);
    aot_gpr_31 = (0x0885367Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885367Cu) goto L_0885367C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885367C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_08853684;
    }
L_08853684:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1372u);
    aot_gpr_31 = (0x0885369Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885369Cu) goto L_0885369C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885369C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_088536A4;
    }
L_088536A4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1376u);
    aot_gpr_31 = (0x088536BCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088536BCu) goto L_088536BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088536BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_088536C4;
    }
L_088536C4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1390u);
    aot_gpr_31 = (0x088536DCu);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088536DCu) goto L_088536DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088536DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_088536E4;
    }
L_088536E4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1365u);
    aot_gpr_31 = (0x088536FCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088536FCu) goto L_088536FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088536FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_08853704;
    }
L_08853704:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1368u);
    aot_gpr_31 = (0x0885371Cu);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885371Cu) goto L_0885371C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885371C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_08853724;
    }
L_08853724:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1382u);
    aot_gpr_31 = (0x0885373Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885373Cu) goto L_0885373C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885373C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_08853744;
    }
L_08853744:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08853758u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853758u) goto L_08853758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853758:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853804;
      }
      goto L_08853784;
    }
L_08853784:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_088537E4;
      }
      goto L_08853790;
    }
L_08853790:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088537C4;
      }
      goto L_08853798;
    }
L_08853798:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08853824;
      }
      goto L_088537A0;
    }
L_088537A0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1397u);
    aot_gpr_31 = (0x088537B8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088537B8u) goto L_088537B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088537B8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088537BC;
L_088537BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08853834;
      }
      goto L_088537C4;
    }
L_088537C4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1394u);
    aot_gpr_31 = (0x088537DCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088537DCu) goto L_088537DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088537DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088537BC;
      }
      goto L_088537E4;
    }
L_088537E4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1391u);
    aot_gpr_31 = (0x088537FCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088537FCu) goto L_088537FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088537FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088537BC;
      }
      goto L_08853804;
    }
L_08853804:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1400u);
    aot_gpr_31 = (0x0885381Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885381Cu) goto L_0885381C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885381C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088537BC;
      }
      goto L_08853824;
    }
L_08853824:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08853834u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853834u) goto L_08853834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853834:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853840:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088538E0;
      }
      goto L_08853860;
    }
L_08853860:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_088538C0;
      }
      goto L_0885386C;
    }
L_0885386C:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088538A0;
      }
      goto L_08853874;
    }
L_08853874:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08853900;
      }
      goto L_0885387C;
    }
L_0885387C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1409u);
    aot_gpr_31 = (0x08853894u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853894u) goto L_08853894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853894:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853898;
L_08853898:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08853910;
      }
      goto L_088538A0;
    }
L_088538A0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1406u);
    aot_gpr_31 = (0x088538B8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088538B8u) goto L_088538B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088538B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853898;
      }
      goto L_088538C0;
    }
L_088538C0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1403u);
    aot_gpr_31 = (0x088538D8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088538D8u) goto L_088538D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088538D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853898;
      }
      goto L_088538E0;
    }
L_088538E0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1412u);
    aot_gpr_31 = (0x088538F8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088538F8u) goto L_088538F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088538F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853898;
      }
      goto L_08853900;
    }
L_08853900:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08853910u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853910u) goto L_08853910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853910:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0885391C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088539BC;
      }
      goto L_0885393C;
    }
L_0885393C:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_0885399C;
      }
      goto L_08853948;
    }
L_08853948:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_0885397C;
      }
      goto L_08853950;
    }
L_08853950:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_088539DC;
      }
      goto L_08853958;
    }
L_08853958:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1489u);
    aot_gpr_31 = (0x08853970u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853970u) goto L_08853970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853970:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853974;
L_08853974:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088539EC;
      }
      goto L_0885397C;
    }
L_0885397C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1417u);
    aot_gpr_31 = (0x08853994u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853994u) goto L_08853994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853974;
      }
      goto L_0885399C;
    }
L_0885399C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1415u);
    aot_gpr_31 = (0x088539B4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088539B4u) goto L_088539B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088539B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853974;
      }
      goto L_088539BC;
    }
L_088539BC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1491u);
    aot_gpr_31 = (0x088539D4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088539D4u) goto L_088539D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088539D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853974;
      }
      goto L_088539DC;
    }
L_088539DC:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088539ECu);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088539ECu) goto L_088539EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088539EC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088539F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853B78;
      }
      goto L_08853A1C;
    }
L_08853A1C:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24712)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853A34:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1437u);
    aot_gpr_31 = (0x08853A4Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853A4Cu) goto L_08853A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853A4C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853A50;
L_08853A50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08853B8C;
      }
      goto L_08853A58;
    }
L_08853A58:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1439u);
    aot_gpr_31 = (0x08853A70u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853A70u) goto L_08853A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853A78;
    }
L_08853A78:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1431u);
    aot_gpr_31 = (0x08853A90u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853A90u) goto L_08853A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853A98;
    }
L_08853A98:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1427u);
    aot_gpr_31 = (0x08853AB0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853AB0u) goto L_08853AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853AB8;
    }
L_08853AB8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1424u);
    aot_gpr_31 = (0x08853AD0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853AD0u) goto L_08853AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853AD8;
    }
L_08853AD8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1429u);
    aot_gpr_31 = (0x08853AF0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853AF0u) goto L_08853AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853AF8;
    }
L_08853AF8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1442u);
    aot_gpr_31 = (0x08853B10u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853B10u) goto L_08853B10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853B18;
    }
L_08853B18:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1419u);
    aot_gpr_31 = (0x08853B30u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853B30u) goto L_08853B30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853B38;
    }
L_08853B38:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1422u);
    aot_gpr_31 = (0x08853B50u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853B50u) goto L_08853B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853B58;
    }
L_08853B58:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1434u);
    aot_gpr_31 = (0x08853B70u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853B70u) goto L_08853B70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853B70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853B78;
    }
L_08853B78:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08853B8Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853B8Cu) goto L_08853B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853B8C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853B98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853CF8;
      }
      goto L_08853BBC;
    }
L_08853BBC:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24880)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853BD4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1459u);
    aot_gpr_31 = (0x08853BECu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853BECu) goto L_08853BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853BEC:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853BF0;
L_08853BF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08853D0C;
      }
      goto L_08853BF8;
    }
L_08853BF8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1461u);
    aot_gpr_31 = (0x08853C10u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853C10u) goto L_08853C10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853C10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853C18;
    }
L_08853C18:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1453u);
    aot_gpr_31 = (0x08853C30u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853C30u) goto L_08853C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853C38;
    }
L_08853C38:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1449u);
    aot_gpr_31 = (0x08853C50u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853C50u) goto L_08853C50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853C50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853C58;
    }
L_08853C58:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1447u);
    aot_gpr_31 = (0x08853C70u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853C70u) goto L_08853C70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853C70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853C78;
    }
L_08853C78:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1451u);
    aot_gpr_31 = (0x08853C90u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853C90u) goto L_08853C90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853C90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853C98;
    }
L_08853C98:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1464u);
    aot_gpr_31 = (0x08853CB0u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853CB0u) goto L_08853CB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853CB8;
    }
L_08853CB8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1443u);
    aot_gpr_31 = (0x08853CD0u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853CD0u) goto L_08853CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853CD8;
    }
L_08853CD8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1456u);
    aot_gpr_31 = (0x08853CF0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853CF0u) goto L_08853CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853CF8;
    }
L_08853CF8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08853D0Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853D0Cu) goto L_08853D0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853D0C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853D18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853DB8;
      }
      goto L_08853D38;
    }
L_08853D38:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08853D98;
      }
      goto L_08853D44;
    }
L_08853D44:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08853D78;
      }
      goto L_08853D4C;
    }
L_08853D4C:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08853DD8;
      }
      goto L_08853D54;
    }
L_08853D54:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1499u);
    aot_gpr_31 = (0x08853D6Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853D6Cu) goto L_08853D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853D6C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853D70;
L_08853D70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08853DE8;
      }
      goto L_08853D78;
    }
L_08853D78:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1496u);
    aot_gpr_31 = (0x08853D90u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853D90u) goto L_08853D90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853D90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853D70;
      }
      goto L_08853D98;
    }
L_08853D98:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1493u);
    aot_gpr_31 = (0x08853DB0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853DB0u) goto L_08853DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853DB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853D70;
      }
      goto L_08853DB8;
    }
L_08853DB8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1502u);
    aot_gpr_31 = (0x08853DD0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853DD0u) goto L_08853DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853DD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853D70;
      }
      goto L_08853DD8;
    }
L_08853DD8:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08853DE8u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853DE8u) goto L_08853DE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853DE8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853DF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853E94;
      }
      goto L_08853E14;
    }
L_08853E14:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08853E74;
      }
      goto L_08853E20;
    }
L_08853E20:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08853E54;
      }
      goto L_08853E28;
    }
L_08853E28:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08853EB4;
      }
      goto L_08853E30;
    }
L_08853E30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1511u);
    aot_gpr_31 = (0x08853E48u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853E48u) goto L_08853E48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853E48:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853E4C;
L_08853E4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08853EC4;
      }
      goto L_08853E54;
    }
L_08853E54:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1508u);
    aot_gpr_31 = (0x08853E6Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853E6Cu) goto L_08853E6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853E6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853E4C;
      }
      goto L_08853E74;
    }
L_08853E74:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1505u);
    aot_gpr_31 = (0x08853E8Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853E8Cu) goto L_08853E8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853E4C;
      }
      goto L_08853E94;
    }
L_08853E94:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1514u);
    aot_gpr_31 = (0x08853EACu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853EACu) goto L_08853EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853E4C;
      }
      goto L_08853EB4;
    }
L_08853EB4:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08853EC4u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853EC4u) goto L_08853EC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853EC4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853ED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853F70;
      }
      goto L_08853EF0;
    }
L_08853EF0:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08853F50;
      }
      goto L_08853EFC;
    }
L_08853EFC:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08853F30;
      }
      goto L_08853F04;
    }
L_08853F04:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08853F90;
      }
      goto L_08853F0C;
    }
L_08853F0C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1523u);
    aot_gpr_31 = (0x08853F24u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853F24u) goto L_08853F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853F24:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853F28;
L_08853F28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08853FA0;
      }
      goto L_08853F30;
    }
L_08853F30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1520u);
    aot_gpr_31 = (0x08853F48u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853F48u) goto L_08853F48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853F28;
      }
      goto L_08853F50;
    }
L_08853F50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1517u);
    aot_gpr_31 = (0x08853F68u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853F68u) goto L_08853F68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853F68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853F28;
      }
      goto L_08853F70;
    }
L_08853F70:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1526u);
    aot_gpr_31 = (0x08853F88u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853F88u) goto L_08853F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853F28;
      }
      goto L_08853F90;
    }
L_08853F90:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08853FA0u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853FA0u) goto L_08853FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853FA0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08853FAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 116 ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 3u, 0x08854010u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08853FCC;
    }
L_08853FCC:
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 115 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          goto L_08853FF8;
      }
      goto L_08853FD8;
    }
L_08853FD8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 1551u);
    aot_gpr_31 = (0x08853FF0u);
    aot_gpr_8 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08853FF0u) goto L_08853FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08853FF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 6u, 0x08854038u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08853FF8;
    }
L_08853FF8:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.pc = 0x08854000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0019(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0019_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_19(Runtime &runtime) {
    runtime.register_generated_unit(19u, 0x08850000u, 16384u, &recomp_unit_0019, &recomp_unit_0019_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08850000u, &recomp_unit_0019, "recomp_unit_0019",
                                          kEntryMasks_recomp_unit_0019, 64u);
}
} // namespace psprecomp
