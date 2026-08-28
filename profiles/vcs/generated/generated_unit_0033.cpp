#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0033[64] = {
    0x5A45201649510505ull, 0xA024484184155545ull, 0xA3248008AAAA8904ull, 0x4902995292969555ull,
    0x54A44900A2844145ull, 0x92A020B0042482AAull, 0xA0086A2A2AA95154ull, 0x0A22222A08355492ull,
    0xA052424554AA9551ull, 0xAAAAAA9551202434ull, 0x69452D0A1694B42Aull, 0x0410A000020A0969ull,
    0x22A0494122812221ull, 0x0240200200296281ull, 0x1004008A40081809ull, 0x50042C4010041062ull,
    0xA1555540A0628011ull, 0x03081805400A4550ull, 0xA24A4000094088A1ull, 0x064920C92490644Aull,
    0x000048028A4924A9ull, 0x0020000040041010ull, 0x880014610822204Aull, 0x0504440008880008ull,
    0x529202B2090000A0ull, 0x94A4808555522AAAull, 0x15548C6902054AAAull, 0xAA5482952AAAA922ull,
    0x50516A915A00B522ull, 0x0850802800290B22ull, 0x00A9002020A08000ull, 0x0023115048046008ull,
    0x00418960024024A0ull, 0x5222124A8A420202ull, 0xD4AA4AA551155005ull, 0x00902146848A8010ull,
    0x00904004A0250000ull, 0x0006008400004800ull, 0x8549680405000000ull, 0x90945695A6084508ull,
    0xA005255119212849ull, 0x020AA152AA92A002ull, 0x5001800000000000ull, 0x0A90500024840408ull,
    0x2AA88002000204A3ull, 0x4A28A28A28A28A29ull, 0x054D08494A694491ull, 0x4A569295A4AA5A4Aull,
    0x569295A4A569295Aull, 0x5695A4A569295A4Aull, 0x895AAB492A95695Aull, 0x122525A49128A082ull,
    0x04200110A440154Aull, 0x5A5081082A014208ull, 0x5002850080451252ull, 0x30048A848952222Dull,
    0x154852082C922554ull, 0x95B4925016950035ull, 0x00104510894524A4ull, 0xB545452D54904048ull,
    0x5690969094552AAAull, 0x2481532520442024ull, 0x88A45244A1494B12ull, 0x914415A455092102ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0033[64] = {
    1u, 22u, 42u, 62u, 88u, 107u, 125u, 148u, 168u, 192u, 217u, 243u, 256u, 273u, 285u, 296u,
    309u, 329u, 344u, 359u, 379u, 394u, 399u, 413u, 422u, 437u, 461u, 484u, 510u, 533u, 547u, 556u,
    569u, 582u, 599u, 624u, 638u, 647u, 653u, 665u, 687u, 707u, 726u, 730u, 742u, 756u, 778u, 800u,
    828u, 857u, 886u, 916u, 936u, 950u, 966u, 981u, 1001u, 1022u, 1046u, 1062u, 1085u, 1111u, 1128u, 1150u,
};
void recomp_unit_0033_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,16,29,2 fprs=12,13,14,15 gpr_occ=3860 fpr_occ=277 gpr_total=5345 fpr_total=315
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.gpr[29] = aot_gpr_29; ctx.gpr[2] = aot_gpr_2; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_2 = ctx.gpr[2]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08888000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0033[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0033[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08888000;
    case 2u: goto L_08888008;
    case 3u: goto L_08888020;
    case 4u: goto L_08888028;
    case 5u: goto L_08888040;
    case 6u: goto L_08888050;
    case 7u: goto L_08888058;
    case 8u: goto L_08888060;
    case 9u: goto L_0888806C;
    case 10u: goto L_08888078;
    case 11u: goto L_08888084;
    case 12u: goto L_08888088;
    case 13u: goto L_08888090;
    case 14u: goto L_088880B4;
    case 15u: goto L_088880C0;
    case 16u: goto L_088880C8;
    case 17u: goto L_088880D8;
    case 18u: goto L_088880E4;
    case 19u: goto L_088880EC;
    case 20u: goto L_088880F0;
    case 21u: goto L_088880F8;
    case 22u: goto L_08888100;
    case 23u: goto L_08888108;
    case 24u: goto L_08888118;
    case 25u: goto L_08888120;
    case 26u: goto L_08888128;
    case 27u: goto L_08888130;
    case 28u: goto L_08888138;
    case 29u: goto L_08888140;
    case 30u: goto L_08888148;
    case 31u: goto L_08888150;
    case 32u: goto L_08888168;
    case 33u: goto L_0888817C;
    case 34u: goto L_08888180;
    case 35u: goto L_08888198;
    case 36u: goto L_088881AC;
    case 37u: goto L_088881B8;
    case 38u: goto L_088881C8;
    case 39u: goto L_088881D4;
    case 40u: goto L_088881F4;
    case 41u: goto L_088881FC;
    case 42u: goto L_08888208;
    case 43u: goto L_08888220;
    case 44u: goto L_0888822C;
    case 45u: goto L_0888823C;
    case 46u: goto L_08888244;
    case 47u: goto L_0888824C;
    case 48u: goto L_08888254;
    case 49u: goto L_0888825C;
    case 50u: goto L_08888264;
    case 51u: goto L_0888826C;
    case 52u: goto L_08888274;
    case 53u: goto L_0888827C;
    case 54u: goto L_0888828C;
    case 55u: goto L_088882BC;
    case 56u: goto L_088882C8;
    case 57u: goto L_088882D4;
    case 58u: goto L_088882E0;
    case 59u: goto L_088882E4;
    case 60u: goto L_088882F4;
    case 61u: goto L_088882FC;
    case 62u: goto L_08888300;
    case 63u: goto L_08888308;
    case 64u: goto L_08888310;
    case 65u: goto L_08888318;
    case 66u: goto L_08888320;
    case 67u: goto L_08888328;
    case 68u: goto L_08888330;
    case 69u: goto L_0888833C;
    case 70u: goto L_08888344;
    case 71u: goto L_08888348;
    case 72u: goto L_08888350;
    case 73u: goto L_0888835C;
    case 74u: goto L_08888364;
    case 75u: goto L_08888370;
    case 76u: goto L_0888837C;
    case 77u: goto L_08888384;
    case 78u: goto L_08888390;
    case 79u: goto L_08888398;
    case 80u: goto L_088883A0;
    case 81u: goto L_088883AC;
    case 82u: goto L_088883B0;
    case 83u: goto L_088883BC;
    case 84u: goto L_088883C4;
    case 85u: goto L_088883E0;
    case 86u: goto L_088883EC;
    case 87u: goto L_088883F8;
    case 88u: goto L_08888400;
    case 89u: goto L_08888408;
    case 90u: goto L_08888418;
    case 91u: goto L_08888420;
    case 92u: goto L_08888438;
    case 93u: goto L_08888448;
    case 94u: goto L_0888845C;
    case 95u: goto L_08888464;
    case 96u: goto L_08888474;
    case 97u: goto L_0888847C;
    case 98u: goto L_088884A0;
    case 99u: goto L_088884AC;
    case 100u: goto L_088884B8;
    case 101u: goto L_088884C8;
    case 102u: goto L_088884D4;
    case 103u: goto L_088884DC;
    case 104u: goto L_088884E8;
    case 105u: goto L_088884F0;
    case 106u: goto L_088884F8;
    case 107u: goto L_08888504;
    case 108u: goto L_0888850C;
    case 109u: goto L_08888514;
    case 110u: goto L_0888851C;
    case 111u: goto L_08888524;
    case 112u: goto L_0888853C;
    case 113u: goto L_08888548;
    case 114u: goto L_08888554;
    case 115u: goto L_08888568;
    case 116u: goto L_08888590;
    case 117u: goto L_08888594;
    case 118u: goto L_0888859C;
    case 119u: goto L_088885B4;
    case 120u: goto L_088885D4;
    case 121u: goto L_088885DC;
    case 122u: goto L_088885E4;
    case 123u: goto L_088885F0;
    case 124u: goto L_088885FC;
    case 125u: goto L_08888608;
    case 126u: goto L_08888610;
    case 127u: goto L_08888618;
    case 128u: goto L_08888620;
    case 129u: goto L_08888630;
    case 130u: goto L_08888638;
    case 131u: goto L_08888640;
    case 132u: goto L_0888864C;
    case 133u: goto L_08888654;
    case 134u: goto L_0888865C;
    case 135u: goto L_08888664;
    case 136u: goto L_0888866C;
    case 137u: goto L_08888674;
    case 138u: goto L_08888684;
    case 139u: goto L_0888868C;
    case 140u: goto L_08888694;
    case 141u: goto L_088886A4;
    case 142u: goto L_088886AC;
    case 143u: goto L_088886B4;
    case 144u: goto L_088886B8;
    case 145u: goto L_088886CC;
    case 146u: goto L_088886F4;
    case 147u: goto L_088886FC;
    case 148u: goto L_08888704;
    case 149u: goto L_08888710;
    case 150u: goto L_0888871C;
    case 151u: goto L_08888728;
    case 152u: goto L_08888730;
    case 153u: goto L_08888738;
    case 154u: goto L_08888740;
    case 155u: goto L_08888748;
    case 156u: goto L_08888750;
    case 157u: goto L_08888754;
    case 158u: goto L_0888876C;
    case 159u: goto L_08888784;
    case 160u: goto L_0888878C;
    case 161u: goto L_08888794;
    case 162u: goto L_088887A4;
    case 163u: goto L_088887B4;
    case 164u: goto L_088887C4;
    case 165u: goto L_088887D4;
    case 166u: goto L_088887E4;
    case 167u: goto L_088887EC;
    case 168u: goto L_08888800;
    case 169u: goto L_08888810;
    case 170u: goto L_08888818;
    case 171u: goto L_08888820;
    case 172u: goto L_08888828;
    case 173u: goto L_08888830;
    case 174u: goto L_0888883C;
    case 175u: goto L_08888844;
    case 176u: goto L_0888884C;
    case 177u: goto L_08888854;
    case 178u: goto L_0888885C;
    case 179u: goto L_08888868;
    case 180u: goto L_08888870;
    case 181u: goto L_08888878;
    case 182u: goto L_08888880;
    case 183u: goto L_08888888;
    case 184u: goto L_08888898;
    case 185u: goto L_088888A4;
    case 186u: goto L_088888B8;
    case 187u: goto L_088888C4;
    case 188u: goto L_088888D0;
    case 189u: goto L_088888D8;
    case 190u: goto L_088888F4;
    case 191u: goto L_088888FC;
    case 192u: goto L_08888908;
    case 193u: goto L_08888910;
    case 194u: goto L_08888914;
    case 195u: goto L_08888928;
    case 196u: goto L_08888934;
    case 197u: goto L_08888954;
    case 198u: goto L_08888960;
    case 199u: goto L_08888970;
    case 200u: goto L_08888978;
    case 201u: goto L_08888980;
    case 202u: goto L_08888988;
    case 203u: goto L_08888990;
    case 204u: goto L_0888899C;
    case 205u: goto L_088889A4;
    case 206u: goto L_088889AC;
    case 207u: goto L_088889B4;
    case 208u: goto L_088889BC;
    case 209u: goto L_088889C4;
    case 210u: goto L_088889CC;
    case 211u: goto L_088889D4;
    case 212u: goto L_088889DC;
    case 213u: goto L_088889E4;
    case 214u: goto L_088889EC;
    case 215u: goto L_088889F4;
    case 216u: goto L_088889FC;
    case 217u: goto L_08888A04;
    case 218u: goto L_08888A0C;
    case 219u: goto L_08888A14;
    case 220u: goto L_08888A28;
    case 221u: goto L_08888A30;
    case 222u: goto L_08888A34;
    case 223u: goto L_08888A3C;
    case 224u: goto L_08888A48;
    case 225u: goto L_08888A50;
    case 226u: goto L_08888A5C;
    case 227u: goto L_08888A64;
    case 228u: goto L_08888A68;
    case 229u: goto L_08888A70;
    case 230u: goto L_08888A84;
    case 231u: goto L_08888A8C;
    case 232u: goto L_08888AA0;
    case 233u: goto L_08888AA8;
    case 234u: goto L_08888AAC;
    case 235u: goto L_08888AB4;
    case 236u: goto L_08888AC0;
    case 237u: goto L_08888AC8;
    case 238u: goto L_08888AD8;
    case 239u: goto L_08888AE0;
    case 240u: goto L_08888AEC;
    case 241u: goto L_08888AF4;
    case 242u: goto L_08888AF8;
    case 243u: goto L_08888B00;
    case 244u: goto L_08888B0C;
    case 245u: goto L_08888B14;
    case 246u: goto L_08888B18;
    case 247u: goto L_08888B20;
    case 248u: goto L_08888B2C;
    case 249u: goto L_08888B44;
    case 250u: goto L_08888B4C;
    case 251u: goto L_08888B64;
    case 252u: goto L_08888BB4;
    case 253u: goto L_08888BBC;
    case 254u: goto L_08888BD0;
    case 255u: goto L_08888BE8;
    case 256u: goto L_08888C00;
    case 257u: goto L_08888C14;
    case 258u: goto L_08888C24;
    case 259u: goto L_08888C34;
    case 260u: goto L_08888C40;
    case 261u: goto L_08888C5C;
    case 262u: goto L_08888C64;
    case 263u: goto L_08888C74;
    case 264u: goto L_08888C80;
    case 265u: goto L_08888C98;
    case 266u: goto L_08888CA0;
    case 267u: goto L_08888CAC;
    case 268u: goto L_08888CB8;
    case 269u: goto L_08888CD4;
    case 270u: goto L_08888CDC;
    case 271u: goto L_08888CE4;
    case 272u: goto L_08888CF4;
    case 273u: goto L_08888D00;
    case 274u: goto L_08888D1C;
    case 275u: goto L_08888D24;
    case 276u: goto L_08888D34;
    case 277u: goto L_08888D38;
    case 278u: goto L_08888D40;
    case 279u: goto L_08888D4C;
    case 280u: goto L_08888D54;
    case 281u: goto L_08888D84;
    case 282u: goto L_08888DB4;
    case 283u: goto L_08888DD8;
    case 284u: goto L_08888DE4;
    case 285u: goto L_08888E00;
    case 286u: goto L_08888E0C;
    case 287u: goto L_08888E2C;
    case 288u: goto L_08888E30;
    case 289u: goto L_08888E4C;
    case 290u: goto L_08888E78;
    case 291u: goto L_08888E84;
    case 292u: goto L_08888E8C;
    case 293u: goto L_08888E9C;
    case 294u: goto L_08888EC8;
    case 295u: goto L_08888EF0;
    case 296u: goto L_08888F04;
    case 297u: goto L_08888F14;
    case 298u: goto L_08888F18;
    case 299u: goto L_08888F30;
    case 300u: goto L_08888F48;
    case 301u: goto L_08888F70;
    case 302u: goto L_08888F98;
    case 303u: goto L_08888FA8;
    case 304u: goto L_08888FAC;
    case 305u: goto L_08888FB4;
    case 306u: goto L_08888FC8;
    case 307u: goto L_08888FF0;
    case 308u: goto L_08888FF8;
    case 309u: goto L_08889000;
    case 310u: goto L_08889010;
    case 311u: goto L_0888903C;
    case 312u: goto L_08889044;
    case 313u: goto L_08889054;
    case 314u: goto L_08889058;
    case 315u: goto L_08889074;
    case 316u: goto L_0888907C;
    case 317u: goto L_08889098;
    case 318u: goto L_088890A0;
    case 319u: goto L_088890A8;
    case 320u: goto L_088890B0;
    case 321u: goto L_088890B8;
    case 322u: goto L_088890C0;
    case 323u: goto L_088890C8;
    case 324u: goto L_088890D0;
    case 325u: goto L_088890D8;
    case 326u: goto L_088890E0;
    case 327u: goto L_088890F4;
    case 328u: goto L_088890FC;
    case 329u: goto L_08889110;
    case 330u: goto L_08889118;
    case 331u: goto L_08889120;
    case 332u: goto L_08889128;
    case 333u: goto L_08889138;
    case 334u: goto L_08889144;
    case 335u: goto L_0888914C;
    case 336u: goto L_08889178;
    case 337u: goto L_08889180;
    case 338u: goto L_08889188;
    case 339u: goto L_088891AC;
    case 340u: goto L_088891B0;
    case 341u: goto L_088891CC;
    case 342u: goto L_088891E0;
    case 343u: goto L_088891E4;
    case 344u: goto L_08889200;
    case 345u: goto L_08889214;
    case 346u: goto L_0888921C;
    case 347u: goto L_0888922C;
    case 348u: goto L_0888923C;
    case 349u: goto L_08889258;
    case 350u: goto L_08889260;
    case 351u: goto L_0888926C;
    case 352u: goto L_088892B8;
    case 353u: goto L_088892C4;
    case 354u: goto L_088892CC;
    case 355u: goto L_088892D8;
    case 356u: goto L_088892E4;
    case 357u: goto L_088892F4;
    case 358u: goto L_088892FC;
    case 359u: goto L_08889304;
    case 360u: goto L_0888930C;
    case 361u: goto L_08889318;
    case 362u: goto L_08889328;
    case 363u: goto L_08889334;
    case 364u: goto L_08889338;
    case 365u: goto L_08889350;
    case 366u: goto L_0888935C;
    case 367u: goto L_08889368;
    case 368u: goto L_08889374;
    case 369u: goto L_08889380;
    case 370u: goto L_0888938C;
    case 371u: goto L_08889398;
    case 372u: goto L_0888939C;
    case 373u: goto L_088893B4;
    case 374u: goto L_088893C0;
    case 375u: goto L_088893CC;
    case 376u: goto L_088893D8;
    case 377u: goto L_088893E4;
    case 378u: goto L_088893E8;
    case 379u: goto L_08889400;
    case 380u: goto L_0888940C;
    case 381u: goto L_08889414;
    case 382u: goto L_0888941C;
    case 383u: goto L_08889428;
    case 384u: goto L_08889434;
    case 385u: goto L_08889440;
    case 386u: goto L_0888944C;
    case 387u: goto L_08889458;
    case 388u: goto L_08889464;
    case 389u: goto L_0888946C;
    case 390u: goto L_0888947C;
    case 391u: goto L_08889484;
    case 392u: goto L_088894AC;
    case 393u: goto L_088894B8;
    case 394u: goto L_08889510;
    case 395u: goto L_08889530;
    case 396u: goto L_08889548;
    case 397u: goto L_08889578;
    case 398u: goto L_088895D4;
    case 399u: goto L_08889604;
    case 400u: goto L_0888960C;
    case 401u: goto L_08889618;
    case 402u: goto L_08889634;
    case 403u: goto L_08889644;
    case 404u: goto L_08889654;
    case 405u: goto L_0888966C;
    case 406u: goto L_08889680;
    case 407u: goto L_08889694;
    case 408u: goto L_08889698;
    case 409u: goto L_088896A8;
    case 410u: goto L_088896B0;
    case 411u: goto L_088896EC;
    case 412u: goto L_088896FC;
    case 413u: goto L_0888970C;
    case 414u: goto L_0888974C;
    case 415u: goto L_0888975C;
    case 416u: goto L_0888976C;
    case 417u: goto L_088897A8;
    case 418u: goto L_088897B8;
    case 419u: goto L_088897C8;
    case 420u: goto L_088897E0;
    case 421u: goto L_088897E8;
    case 422u: goto L_08889814;
    case 423u: goto L_0888981C;
    case 424u: goto L_08889860;
    case 425u: goto L_0888986C;
    case 426u: goto L_08889884;
    case 427u: goto L_08889890;
    case 428u: goto L_08889894;
    case 429u: goto L_0888989C;
    case 430u: goto L_088898A4;
    case 431u: goto L_088898C4;
    case 432u: goto L_088898D0;
    case 433u: goto L_088898DC;
    case 434u: goto L_088898E4;
    case 435u: goto L_088898F0;
    case 436u: goto L_088898F8;
    case 437u: goto L_08889904;
    case 438u: goto L_0888990C;
    case 439u: goto L_08889914;
    case 440u: goto L_0888991C;
    case 441u: goto L_08889924;
    case 442u: goto L_0888992C;
    case 443u: goto L_08889934;
    case 444u: goto L_08889944;
    case 445u: goto L_08889950;
    case 446u: goto L_08889958;
    case 447u: goto L_08889960;
    case 448u: goto L_08889968;
    case 449u: goto L_08889970;
    case 450u: goto L_08889978;
    case 451u: goto L_08889980;
    case 452u: goto L_08889988;
    case 453u: goto L_0888999C;
    case 454u: goto L_088899BC;
    case 455u: goto L_088899C8;
    case 456u: goto L_088899D4;
    case 457u: goto L_088899DC;
    case 458u: goto L_088899E8;
    case 459u: goto L_088899F0;
    case 460u: goto L_088899FC;
    case 461u: goto L_08889A04;
    case 462u: goto L_08889A0C;
    case 463u: goto L_08889A14;
    case 464u: goto L_08889A1C;
    case 465u: goto L_08889A24;
    case 466u: goto L_08889A2C;
    case 467u: goto L_08889A38;
    case 468u: goto L_08889A40;
    case 469u: goto L_08889A48;
    case 470u: goto L_08889A64;
    case 471u: goto L_08889A80;
    case 472u: goto L_08889A8C;
    case 473u: goto L_08889A94;
    case 474u: goto L_08889A98;
    case 475u: goto L_08889AA8;
    case 476u: goto L_08889AAC;
    case 477u: goto L_08889ABC;
    case 478u: goto L_08889AC8;
    case 479u: goto L_08889AD0;
    case 480u: goto L_08889AD8;
    case 481u: goto L_08889AE0;
    case 482u: goto L_08889AE8;
    case 483u: goto L_08889AF0;
    case 484u: goto L_08889B04;
    case 485u: goto L_08889B14;
    case 486u: goto L_08889B20;
    case 487u: goto L_08889B2C;
    case 488u: goto L_08889B34;
    case 489u: goto L_08889B3C;
    case 490u: goto L_08889B44;
    case 491u: goto L_08889B4C;
    case 492u: goto L_08889B54;
    case 493u: goto L_08889B5C;
    case 494u: goto L_08889B64;
    case 495u: goto L_08889B6C;
    case 496u: goto L_08889B74;
    case 497u: goto L_08889B80;
    case 498u: goto L_08889B88;
    case 499u: goto L_08889B90;
    case 500u: goto L_08889B9C;
    case 501u: goto L_08889BA4;
    case 502u: goto L_08889BBC;
    case 503u: goto L_08889BC8;
    case 504u: goto L_08889BD0;
    case 505u: goto L_08889BD8;
    case 506u: goto L_08889BE4;
    case 507u: goto L_08889BEC;
    case 508u: goto L_08889BF4;
    case 509u: goto L_08889BFC;
    case 510u: goto L_08889C04;
    case 511u: goto L_08889C14;
    case 512u: goto L_08889C20;
    case 513u: goto L_08889C28;
    case 514u: goto L_08889C30;
    case 515u: goto L_08889C34;
    case 516u: goto L_08889C3C;
    case 517u: goto L_08889C64;
    case 518u: goto L_08889C6C;
    case 519u: goto L_08889C70;
    case 520u: goto L_08889C78;
    case 521u: goto L_08889C80;
    case 522u: goto L_08889C90;
    case 523u: goto L_08889C9C;
    case 524u: goto L_08889CA4;
    case 525u: goto L_08889CAC;
    case 526u: goto L_08889CB4;
    case 527u: goto L_08889CB8;
    case 528u: goto L_08889CC0;
    case 529u: goto L_08889CD0;
    case 530u: goto L_08889CD8;
    case 531u: goto L_08889CF0;
    case 532u: goto L_08889CF8;
    case 533u: goto L_08889D04;
    case 534u: goto L_08889D14;
    case 535u: goto L_08889D20;
    case 536u: goto L_08889D24;
    case 537u: goto L_08889D2C;
    case 538u: goto L_08889D40;
    case 539u: goto L_08889D4C;
    case 540u: goto L_08889D54;
    case 541u: goto L_08889D8C;
    case 542u: goto L_08889D94;
    case 543u: goto L_08889DBC;
    case 544u: goto L_08889DD0;
    case 545u: goto L_08889DD8;
    case 546u: goto L_08889DEC;
    case 547u: goto L_08889E3C;
    case 548u: goto L_08889E54;
    case 549u: goto L_08889E5C;
    case 550u: goto L_08889E74;
    case 551u: goto L_08889E94;
    case 552u: goto L_08889EC0;
    case 553u: goto L_08889ECC;
    case 554u: goto L_08889ED4;
    case 555u: goto L_08889EDC;
    case 556u: goto L_08889F0C;
    case 557u: goto L_08889F34;
    case 558u: goto L_08889F38;
    case 559u: goto L_08889F48;
    case 560u: goto L_08889F6C;
    case 561u: goto L_08889F78;
    case 562u: goto L_08889F90;
    case 563u: goto L_08889F98;
    case 564u: goto L_08889FA0;
    case 565u: goto L_08889FB0;
    case 566u: goto L_08889FC0;
    case 567u: goto L_08889FC4;
    case 568u: goto L_08889FD4;
    case 569u: goto L_0888A014;
    case 570u: goto L_0888A01C;
    case 571u: goto L_0888A028;
    case 572u: goto L_0888A034;
    case 573u: goto L_0888A058;
    case 574u: goto L_0888A064;
    case 575u: goto L_0888A094;
    case 576u: goto L_0888A098;
    case 577u: goto L_0888A0A0;
    case 578u: goto L_0888A0AC;
    case 579u: goto L_0888A0BC;
    case 580u: goto L_0888A0C0;
    case 581u: goto L_0888A0D8;
    case 582u: goto L_0888A104;
    case 583u: goto L_0888A124;
    case 584u: goto L_0888A144;
    case 585u: goto L_0888A158;
    case 586u: goto L_0888A164;
    case 587u: goto L_0888A16C;
    case 588u: goto L_0888A17C;
    case 589u: goto L_0888A184;
    case 590u: goto L_0888A18C;
    case 591u: goto L_0888A198;
    case 592u: goto L_0888A1A4;
    case 593u: goto L_0888A1B0;
    case 594u: goto L_0888A1C4;
    case 595u: goto L_0888A1D4;
    case 596u: goto L_0888A1E4;
    case 597u: goto L_0888A1F0;
    case 598u: goto L_0888A1F8;
    case 599u: goto L_0888A200;
    case 600u: goto L_0888A208;
    case 601u: goto L_0888A230;
    case 602u: goto L_0888A238;
    case 603u: goto L_0888A240;
    case 604u: goto L_0888A248;
    case 605u: goto L_0888A250;
    case 606u: goto L_0888A260;
    case 607u: goto L_0888A270;
    case 608u: goto L_0888A278;
    case 609u: goto L_0888A280;
    case 610u: goto L_0888A288;
    case 611u: goto L_0888A294;
    case 612u: goto L_0888A29C;
    case 613u: goto L_0888A2A4;
    case 614u: goto L_0888A2AC;
    case 615u: goto L_0888A2B8;
    case 616u: goto L_0888A2C4;
    case 617u: goto L_0888A2CC;
    case 618u: goto L_0888A2D4;
    case 619u: goto L_0888A2DC;
    case 620u: goto L_0888A2E8;
    case 621u: goto L_0888A2F0;
    case 622u: goto L_0888A2F8;
    case 623u: goto L_0888A2FC;
    case 624u: goto L_0888A310;
    case 625u: goto L_0888A33C;
    case 626u: goto L_0888A344;
    case 627u: goto L_0888A34C;
    case 628u: goto L_0888A35C;
    case 629u: goto L_0888A368;
    case 630u: goto L_0888A37C;
    case 631u: goto L_0888A384;
    case 632u: goto L_0888A388;
    case 633u: goto L_0888A398;
    case 634u: goto L_0888A3A0;
    case 635u: goto L_0888A3B4;
    case 636u: goto L_0888A3D0;
    case 637u: goto L_0888A3DC;
    case 638u: goto L_0888A440;
    case 639u: goto L_0888A448;
    case 640u: goto L_0888A454;
    case 641u: goto L_0888A474;
    case 642u: goto L_0888A47C;
    case 643u: goto L_0888A488;
    case 644u: goto L_0888A4B8;
    case 645u: goto L_0888A4D0;
    case 646u: goto L_0888A4DC;
    case 647u: goto L_0888A52C;
    case 648u: goto L_0888A538;
    case 649u: goto L_0888A588;
    case 650u: goto L_0888A59C;
    case 651u: goto L_0888A5C4;
    case 652u: goto L_0888A5C8;
    case 653u: goto L_0888A660;
    case 654u: goto L_0888A668;
    case 655u: goto L_0888A688;
    case 656u: goto L_0888A6AC;
    case 657u: goto L_0888A6B4;
    case 658u: goto L_0888A6B8;
    case 659u: goto L_0888A6C0;
    case 660u: goto L_0888A6CC;
    case 661u: goto L_0888A6D8;
    case 662u: goto L_0888A6E0;
    case 663u: goto L_0888A6E8;
    case 664u: goto L_0888A6FC;
    case 665u: goto L_0888A70C;
    case 666u: goto L_0888A720;
    case 667u: goto L_0888A728;
    case 668u: goto L_0888A738;
    case 669u: goto L_0888A74C;
    case 670u: goto L_0888A764;
    case 671u: goto L_0888A768;
    case 672u: goto L_0888A774;
    case 673u: goto L_0888A77C;
    case 674u: goto L_0888A780;
    case 675u: goto L_0888A788;
    case 676u: goto L_0888A790;
    case 677u: goto L_0888A79C;
    case 678u: goto L_0888A7A4;
    case 679u: goto L_0888A7A8;
    case 680u: goto L_0888A7B0;
    case 681u: goto L_0888A7B8;
    case 682u: goto L_0888A7C8;
    case 683u: goto L_0888A7D0;
    case 684u: goto L_0888A7DC;
    case 685u: goto L_0888A7F0;
    case 686u: goto L_0888A7FC;
    case 687u: goto L_0888A800;
    case 688u: goto L_0888A80C;
    case 689u: goto L_0888A818;
    case 690u: goto L_0888A82C;
    case 691u: goto L_0888A834;
    case 692u: goto L_0888A840;
    case 693u: goto L_0888A854;
    case 694u: goto L_0888A860;
    case 695u: goto L_0888A86C;
    case 696u: goto L_0888A870;
    case 697u: goto L_0888A880;
    case 698u: goto L_0888A890;
    case 699u: goto L_0888A898;
    case 700u: goto L_0888A8A0;
    case 701u: goto L_0888A8A8;
    case 702u: goto L_0888A8B4;
    case 703u: goto L_0888A8C0;
    case 704u: goto L_0888A8C8;
    case 705u: goto L_0888A8F4;
    case 706u: goto L_0888A8FC;
    case 707u: goto L_0888A904;
    case 708u: goto L_0888A934;
    case 709u: goto L_0888A93C;
    case 710u: goto L_0888A944;
    case 711u: goto L_0888A950;
    case 712u: goto L_0888A95C;
    case 713u: goto L_0888A964;
    case 714u: goto L_0888A96C;
    case 715u: goto L_0888A974;
    case 716u: goto L_0888A97C;
    case 717u: goto L_0888A984;
    case 718u: goto L_0888A990;
    case 719u: goto L_0888A998;
    case 720u: goto L_0888A9A0;
    case 721u: goto L_0888A9B4;
    case 722u: goto L_0888A9BC;
    case 723u: goto L_0888A9C4;
    case 724u: goto L_0888A9CC;
    case 725u: goto L_0888A9E4;
    case 726u: goto L_0888AABC;
    case 727u: goto L_0888AAC0;
    case 728u: goto L_0888AAF0;
    case 729u: goto L_0888AAF8;
    case 730u: goto L_0888AB0C;
    case 731u: goto L_0888AB28;
    case 732u: goto L_0888AB48;
    case 733u: goto L_0888AB5C;
    case 734u: goto L_0888AB68;
    case 735u: goto L_0888AB74;
    case 736u: goto L_0888ABB0;
    case 737u: goto L_0888ABB8;
    case 738u: goto L_0888ABD0;
    case 739u: goto L_0888ABDC;
    case 740u: goto L_0888ABE4;
    case 741u: goto L_0888ABEC;
    case 742u: goto L_0888AC00;
    case 743u: goto L_0888AC04;
    case 744u: goto L_0888AC14;
    case 745u: goto L_0888AC1C;
    case 746u: goto L_0888AC28;
    case 747u: goto L_0888AC44;
    case 748u: goto L_0888AC84;
    case 749u: goto L_0888ACBC;
    case 750u: goto L_0888ACCC;
    case 751u: goto L_0888ACD4;
    case 752u: goto L_0888ACDC;
    case 753u: goto L_0888ACE4;
    case 754u: goto L_0888ACEC;
    case 755u: goto L_0888ACF4;
    case 756u: goto L_0888AD00;
    case 757u: goto L_0888AD0C;
    case 758u: goto L_0888AD14;
    case 759u: goto L_0888AD24;
    case 760u: goto L_0888AD2C;
    case 761u: goto L_0888AD3C;
    case 762u: goto L_0888AD44;
    case 763u: goto L_0888AD54;
    case 764u: goto L_0888AD5C;
    case 765u: goto L_0888AD6C;
    case 766u: goto L_0888AD74;
    case 767u: goto L_0888AD84;
    case 768u: goto L_0888AD8C;
    case 769u: goto L_0888AD9C;
    case 770u: goto L_0888ADA4;
    case 771u: goto L_0888ADB4;
    case 772u: goto L_0888ADBC;
    case 773u: goto L_0888ADCC;
    case 774u: goto L_0888ADD4;
    case 775u: goto L_0888ADE4;
    case 776u: goto L_0888ADEC;
    case 777u: goto L_0888ADF8;
    case 778u: goto L_0888AE00;
    case 779u: goto L_0888AE10;
    case 780u: goto L_0888AE1C;
    case 781u: goto L_0888AE28;
    case 782u: goto L_0888AE38;
    case 783u: goto L_0888AE40;
    case 784u: goto L_0888AE4C;
    case 785u: goto L_0888AE54;
    case 786u: goto L_0888AE58;
    case 787u: goto L_0888AE64;
    case 788u: goto L_0888AE6C;
    case 789u: goto L_0888AE78;
    case 790u: goto L_0888AE80;
    case 791u: goto L_0888AE8C;
    case 792u: goto L_0888AE98;
    case 793u: goto L_0888AEAC;
    case 794u: goto L_0888AEC0;
    case 795u: goto L_0888AEC8;
    case 796u: goto L_0888AECC;
    case 797u: goto L_0888AED8;
    case 798u: goto L_0888AEE0;
    case 799u: goto L_0888AEE8;
    case 800u: goto L_0888AF04;
    case 801u: goto L_0888AF0C;
    case 802u: goto L_0888AF18;
    case 803u: goto L_0888AF24;
    case 804u: goto L_0888AF2C;
    case 805u: goto L_0888AF30;
    case 806u: goto L_0888AF38;
    case 807u: goto L_0888AF44;
    case 808u: goto L_0888AF4C;
    case 809u: goto L_0888AF54;
    case 810u: goto L_0888AF5C;
    case 811u: goto L_0888AF68;
    case 812u: goto L_0888AF74;
    case 813u: goto L_0888AF7C;
    case 814u: goto L_0888AF80;
    case 815u: goto L_0888AF88;
    case 816u: goto L_0888AF90;
    case 817u: goto L_0888AF9C;
    case 818u: goto L_0888AFA4;
    case 819u: goto L_0888AFB0;
    case 820u: goto L_0888AFBC;
    case 821u: goto L_0888AFC4;
    case 822u: goto L_0888AFC8;
    case 823u: goto L_0888AFD0;
    case 824u: goto L_0888AFD8;
    case 825u: goto L_0888AFE4;
    case 826u: goto L_0888AFEC;
    case 827u: goto L_0888AFF8;
    case 828u: goto L_0888B004;
    case 829u: goto L_0888B00C;
    case 830u: goto L_0888B010;
    case 831u: goto L_0888B018;
    case 832u: goto L_0888B020;
    case 833u: goto L_0888B02C;
    case 834u: goto L_0888B034;
    case 835u: goto L_0888B040;
    case 836u: goto L_0888B04C;
    case 837u: goto L_0888B054;
    case 838u: goto L_0888B058;
    case 839u: goto L_0888B060;
    case 840u: goto L_0888B068;
    case 841u: goto L_0888B074;
    case 842u: goto L_0888B07C;
    case 843u: goto L_0888B088;
    case 844u: goto L_0888B094;
    case 845u: goto L_0888B09C;
    case 846u: goto L_0888B0A0;
    case 847u: goto L_0888B0A8;
    case 848u: goto L_0888B0B0;
    case 849u: goto L_0888B0BC;
    case 850u: goto L_0888B0C4;
    case 851u: goto L_0888B0D0;
    case 852u: goto L_0888B0DC;
    case 853u: goto L_0888B0E4;
    case 854u: goto L_0888B0E8;
    case 855u: goto L_0888B0F0;
    case 856u: goto L_0888B0F8;
    case 857u: goto L_0888B104;
    case 858u: goto L_0888B10C;
    case 859u: goto L_0888B118;
    case 860u: goto L_0888B124;
    case 861u: goto L_0888B12C;
    case 862u: goto L_0888B130;
    case 863u: goto L_0888B138;
    case 864u: goto L_0888B140;
    case 865u: goto L_0888B14C;
    case 866u: goto L_0888B154;
    case 867u: goto L_0888B160;
    case 868u: goto L_0888B16C;
    case 869u: goto L_0888B174;
    case 870u: goto L_0888B178;
    case 871u: goto L_0888B180;
    case 872u: goto L_0888B188;
    case 873u: goto L_0888B194;
    case 874u: goto L_0888B19C;
    case 875u: goto L_0888B1A8;
    case 876u: goto L_0888B1B4;
    case 877u: goto L_0888B1BC;
    case 878u: goto L_0888B1C0;
    case 879u: goto L_0888B1C8;
    case 880u: goto L_0888B1D0;
    case 881u: goto L_0888B1DC;
    case 882u: goto L_0888B1E4;
    case 883u: goto L_0888B1E8;
    case 884u: goto L_0888B1F0;
    case 885u: goto L_0888B1F8;
    case 886u: goto L_0888B204;
    case 887u: goto L_0888B20C;
    case 888u: goto L_0888B210;
    case 889u: goto L_0888B218;
    case 890u: goto L_0888B220;
    case 891u: goto L_0888B22C;
    case 892u: goto L_0888B234;
    case 893u: goto L_0888B238;
    case 894u: goto L_0888B240;
    case 895u: goto L_0888B248;
    case 896u: goto L_0888B250;
    case 897u: goto L_0888B25C;
    case 898u: goto L_0888B264;
    case 899u: goto L_0888B26C;
    case 900u: goto L_0888B274;
    case 901u: goto L_0888B280;
    case 902u: goto L_0888B28C;
    case 903u: goto L_0888B298;
    case 904u: goto L_0888B2A0;
    case 905u: goto L_0888B2A4;
    case 906u: goto L_0888B2AC;
    case 907u: goto L_0888B2B4;
    case 908u: goto L_0888B2BC;
    case 909u: goto L_0888B2C4;
    case 910u: goto L_0888B2CC;
    case 911u: goto L_0888B2D0;
    case 912u: goto L_0888B2D8;
    case 913u: goto L_0888B2E0;
    case 914u: goto L_0888B2EC;
    case 915u: goto L_0888B2FC;
    case 916u: goto L_0888B304;
    case 917u: goto L_0888B31C;
    case 918u: goto L_0888B334;
    case 919u: goto L_0888B33C;
    case 920u: goto L_0888B34C;
    case 921u: goto L_0888B354;
    case 922u: goto L_0888B360;
    case 923u: goto L_0888B370;
    case 924u: goto L_0888B37C;
    case 925u: goto L_0888B388;
    case 926u: goto L_0888B394;
    case 927u: goto L_0888B39C;
    case 928u: goto L_0888B3A0;
    case 929u: goto L_0888B3A8;
    case 930u: goto L_0888B3B4;
    case 931u: goto L_0888B3C0;
    case 932u: goto L_0888B3C8;
    case 933u: goto L_0888B3D4;
    case 934u: goto L_0888B3E4;
    case 935u: goto L_0888B3F0;
    case 936u: goto L_0888B404;
    case 937u: goto L_0888B40C;
    case 938u: goto L_0888B418;
    case 939u: goto L_0888B420;
    case 940u: goto L_0888B428;
    case 941u: goto L_0888B430;
    case 942u: goto L_0888B458;
    case 943u: goto L_0888B468;
    case 944u: goto L_0888B474;
    case 945u: goto L_0888B47C;
    case 946u: goto L_0888B490;
    case 947u: goto L_0888B4A0;
    case 948u: goto L_0888B4D4;
    case 949u: goto L_0888B4E8;
    case 950u: goto L_0888B50C;
    case 951u: goto L_0888B524;
    case 952u: goto L_0888B538;
    case 953u: goto L_0888B540;
    case 954u: goto L_0888B564;
    case 955u: goto L_0888B56C;
    case 956u: goto L_0888B574;
    case 957u: goto L_0888B58C;
    case 958u: goto L_0888B5A0;
    case 959u: goto L_0888B5BC;
    case 960u: goto L_0888B5D0;
    case 961u: goto L_0888B5D8;
    case 962u: goto L_0888B5E4;
    case 963u: goto L_0888B5EC;
    case 964u: goto L_0888B5F0;
    case 965u: goto L_0888B5F8;
    case 966u: goto L_0888B604;
    case 967u: goto L_0888B610;
    case 968u: goto L_0888B618;
    case 969u: goto L_0888B624;
    case 970u: goto L_0888B630;
    case 971u: goto L_0888B640;
    case 972u: goto L_0888B648;
    case 973u: goto L_0888B658;
    case 974u: goto L_0888B67C;
    case 975u: goto L_0888B6A0;
    case 976u: goto L_0888B6A8;
    case 977u: goto L_0888B6BC;
    case 978u: goto L_0888B6C4;
    case 979u: goto L_0888B6F0;
    case 980u: goto L_0888B6F8;
    case 981u: goto L_0888B700;
    case 982u: goto L_0888B708;
    case 983u: goto L_0888B70C;
    case 984u: goto L_0888B714;
    case 985u: goto L_0888B724;
    case 986u: goto L_0888B734;
    case 987u: goto L_0888B744;
    case 988u: goto L_0888B750;
    case 989u: goto L_0888B758;
    case 990u: goto L_0888B760;
    case 991u: goto L_0888B76C;
    case 992u: goto L_0888B77C;
    case 993u: goto L_0888B788;
    case 994u: goto L_0888B79C;
    case 995u: goto L_0888B7A4;
    case 996u: goto L_0888B7AC;
    case 997u: goto L_0888B7BC;
    case 998u: goto L_0888B7C8;
    case 999u: goto L_0888B7F0;
    case 1000u: goto L_0888B7F4;
    case 1001u: goto L_0888B808;
    case 1002u: goto L_0888B810;
    case 1003u: goto L_0888B818;
    case 1004u: goto L_0888B820;
    case 1005u: goto L_0888B828;
    case 1006u: goto L_0888B834;
    case 1007u: goto L_0888B844;
    case 1008u: goto L_0888B850;
    case 1009u: goto L_0888B85C;
    case 1010u: goto L_0888B868;
    case 1011u: goto L_0888B86C;
    case 1012u: goto L_0888B874;
    case 1013u: goto L_0888B88C;
    case 1014u: goto L_0888B8A4;
    case 1015u: goto L_0888B8B0;
    case 1016u: goto L_0888B8B8;
    case 1017u: goto L_0888B8CC;
    case 1018u: goto L_0888B8D8;
    case 1019u: goto L_0888B8E0;
    case 1020u: goto L_0888B8E8;
    case 1021u: goto L_0888B8F0;
    case 1022u: goto L_0888B900;
    case 1023u: goto L_0888B908;
    case 1024u: goto L_0888B910;
    case 1025u: goto L_0888B914;
    case 1026u: goto L_0888B940;
    case 1027u: goto L_0888B948;
    case 1028u: goto L_0888B950;
    case 1029u: goto L_0888B95C;
    case 1030u: goto L_0888B964;
    case 1031u: goto L_0888B968;
    case 1032u: goto L_0888B970;
    case 1033u: goto L_0888B990;
    case 1034u: goto L_0888B998;
    case 1035u: goto L_0888B9A4;
    case 1036u: goto L_0888B9B0;
    case 1037u: goto L_0888B9BC;
    case 1038u: goto L_0888B9C8;
    case 1039u: goto L_0888B9D0;
    case 1040u: goto L_0888B9D4;
    case 1041u: goto L_0888B9DC;
    case 1042u: goto L_0888B9E0;
    case 1043u: goto L_0888B9E8;
    case 1044u: goto L_0888B9F0;
    case 1045u: goto L_0888B9FC;
    case 1046u: goto L_0888BA08;
    case 1047u: goto L_0888BA14;
    case 1048u: goto L_0888BA1C;
    case 1049u: goto L_0888BA28;
    case 1050u: goto L_0888BA34;
    case 1051u: goto L_0888BA40;
    case 1052u: goto L_0888BA48;
    case 1053u: goto L_0888BA58;
    case 1054u: goto L_0888BA60;
    case 1055u: goto L_0888BA6C;
    case 1056u: goto L_0888BA7C;
    case 1057u: goto L_0888BA90;
    case 1058u: goto L_0888BAA0;
    case 1059u: goto L_0888BAA8;
    case 1060u: goto L_0888BAB8;
    case 1061u: goto L_0888BAD0;
    case 1062u: goto L_0888BB0C;
    case 1063u: goto L_0888BB18;
    case 1064u: goto L_0888BB38;
    case 1065u: goto L_0888BB50;
    case 1066u: goto L_0888BB5C;
    case 1067u: goto L_0888BB68;
    case 1068u: goto L_0888BB70;
    case 1069u: goto L_0888BB78;
    case 1070u: goto L_0888BB80;
    case 1071u: goto L_0888BB88;
    case 1072u: goto L_0888BB8C;
    case 1073u: goto L_0888BB94;
    case 1074u: goto L_0888BBA0;
    case 1075u: goto L_0888BBA8;
    case 1076u: goto L_0888BBB8;
    case 1077u: goto L_0888BBC0;
    case 1078u: goto L_0888BBC8;
    case 1079u: goto L_0888BBD8;
    case 1080u: goto L_0888BBE0;
    case 1081u: goto L_0888BBE8;
    case 1082u: goto L_0888BBF0;
    case 1083u: goto L_0888BBF4;
    case 1084u: goto L_0888BBFC;
    case 1085u: goto L_0888BC04;
    case 1086u: goto L_0888BC0C;
    case 1087u: goto L_0888BC14;
    case 1088u: goto L_0888BC1C;
    case 1089u: goto L_0888BC24;
    case 1090u: goto L_0888BC2C;
    case 1091u: goto L_0888BC34;
    case 1092u: goto L_0888BC40;
    case 1093u: goto L_0888BC48;
    case 1094u: goto L_0888BC50;
    case 1095u: goto L_0888BC58;
    case 1096u: goto L_0888BC68;
    case 1097u: goto L_0888BC70;
    case 1098u: goto L_0888BC7C;
    case 1099u: goto L_0888BC90;
    case 1100u: goto L_0888BC9C;
    case 1101u: goto L_0888BCA4;
    case 1102u: goto L_0888BCA8;
    case 1103u: goto L_0888BCB0;
    case 1104u: goto L_0888BCBC;
    case 1105u: goto L_0888BCD0;
    case 1106u: goto L_0888BCDC;
    case 1107u: goto L_0888BCE4;
    case 1108u: goto L_0888BCE8;
    case 1109u: goto L_0888BCF0;
    case 1110u: goto L_0888BCF8;
    case 1111u: goto L_0888BD08;
    case 1112u: goto L_0888BD14;
    case 1113u: goto L_0888BD34;
    case 1114u: goto L_0888BD48;
    case 1115u: goto L_0888BD58;
    case 1116u: goto L_0888BD74;
    case 1117u: goto L_0888BD80;
    case 1118u: goto L_0888BD88;
    case 1119u: goto L_0888BD94;
    case 1120u: goto L_0888BDA0;
    case 1121u: goto L_0888BDA4;
    case 1122u: goto L_0888BDB0;
    case 1123u: goto L_0888BDB8;
    case 1124u: goto L_0888BDC0;
    case 1125u: goto L_0888BDDC;
    case 1126u: goto L_0888BDE8;
    case 1127u: goto L_0888BDF4;
    case 1128u: goto L_0888BE04;
    case 1129u: goto L_0888BE10;
    case 1130u: goto L_0888BE20;
    case 1131u: goto L_0888BE24;
    case 1132u: goto L_0888BE2C;
    case 1133u: goto L_0888BE38;
    case 1134u: goto L_0888BE40;
    case 1135u: goto L_0888BE4C;
    case 1136u: goto L_0888BE58;
    case 1137u: goto L_0888BE60;
    case 1138u: goto L_0888BE74;
    case 1139u: goto L_0888BE7C;
    case 1140u: goto L_0888BE88;
    case 1141u: goto L_0888BE98;
    case 1142u: goto L_0888BEA4;
    case 1143u: goto L_0888BEB0;
    case 1144u: goto L_0888BEB8;
    case 1145u: goto L_0888BEC8;
    case 1146u: goto L_0888BED4;
    case 1147u: goto L_0888BEDC;
    case 1148u: goto L_0888BEEC;
    case 1149u: goto L_0888BEFC;
    case 1150u: goto L_0888BF04;
    case 1151u: goto L_0888BF20;
    case 1152u: goto L_0888BF34;
    case 1153u: goto L_0888BF40;
    case 1154u: goto L_0888BF4C;
    case 1155u: goto L_0888BF60;
    case 1156u: goto L_0888BF68;
    case 1157u: goto L_0888BF70;
    case 1158u: goto L_0888BF78;
    case 1159u: goto L_0888BF88;
    case 1160u: goto L_0888BF94;
    case 1161u: goto L_0888BF9C;
    case 1162u: goto L_0888BFA0;
    case 1163u: goto L_0888BFA8;
    case 1164u: goto L_0888BFB0;
    case 1165u: goto L_0888BFC8;
    case 1166u: goto L_0888BFD8;
    case 1167u: goto L_0888BFE0;
    case 1168u: goto L_0888BFF0;
    case 1169u: goto L_0888BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08888000u;
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
L_08888000:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888008:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08888020u);
    aot_gpr_5 = (0u | 23u);
    goto L_088888D8;
L_08888020:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08888040;
      }
      goto L_08888028;
    }
L_08888028:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1540), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23248));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1536), aot_gpr_4);
    goto L_08888040;
L_08888040:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888050:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1540), static_cast<std::uint8_t>(0u));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888058:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1552), 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888060:
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08888088;
      }
      goto L_0888806C;
    }
L_0888806C:
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
      if (branch_taken) {
          goto L_08888088;
      }
      goto L_08888078;
    }
L_08888078:
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
      if (branch_taken) {
          goto L_08888088;
      }
      goto L_08888084;
    }
L_08888084:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08888088;
L_08888088:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888090:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08888180;
      }
      goto L_088880B4;
    }
L_088880B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 112 ? 1u : 0u);
      if (branch_taken) {
          goto L_08888180;
      }
      goto L_088880C0;
    }
L_088880C0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08888180;
      }
      goto L_088880C8;
    }
L_088880C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1400)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08888180;
      }
      goto L_088880D8;
    }
L_088880D8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088880E4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 18u, 0x088880E4u, 0x08986064u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 548u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 548u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 548u, 0x08986064u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088880E4u) goto L_088880E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088880E4:
    aot_gpr_31 = (0x088880ECu);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 19u, 0x088880ECu, 0x08AABAF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 404u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 404u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088880ECu) goto L_088880EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088880EC:
    ctx.gpr[17] = (0u | 0u);
    goto L_088880F0;
L_088880F0:
    aot_gpr_31 = (0x088880F8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 21u, 0x088880F8u, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088880F8u) goto L_088880F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088880F8:
    aot_gpr_31 = (0x08888100u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0076.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 22u, 0x08888100u, 0x08934DB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0076_entry(rt, ctx, 206u, aot_mem);
#else
        recomp_unit_0076_entry(rt, ctx, 206u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 206u, 0x08934DB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888100u) goto L_08888100;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888100:
    aot_gpr_31 = (0x08888108u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0076.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 23u, 0x08888108u, 0x0893441Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0076_entry(rt, ctx, 57u, aot_mem);
#else
        recomp_unit_0076_entry(rt, ctx, 57u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 57u, 0x0893441Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888108u) goto L_08888108;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888108:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088880F0;
      }
      goto L_08888118;
    }
L_08888118:
    aot_gpr_31 = (0x08888120u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 25u, 0x08888120u, 0x08AABB88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888120u) goto L_08888120;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888120:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08888150;
      }
      goto L_08888128;
    }
L_08888128:
    aot_gpr_31 = (0x08888130u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 27u, 0x08888130u, 0x08AABB30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 407u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 407u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 407u, 0x08AABB30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888130u) goto L_08888130;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888130:
    aot_gpr_31 = (0x08888138u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 28u, 0x08888138u, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888138u) goto L_08888138;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888138:
    aot_gpr_31 = (0x08888140u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0076.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 29u, 0x08888140u, 0x08934DB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0076_entry(rt, ctx, 206u, aot_mem);
#else
        recomp_unit_0076_entry(rt, ctx, 206u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 206u, 0x08934DB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888140u) goto L_08888140;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888140:
    aot_gpr_31 = (0x08888148u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0076.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 30u, 0x08888148u, 0x0893441Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0076_entry(rt, ctx, 57u, aot_mem);
#else
        recomp_unit_0076_entry(rt, ctx, 57u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 57u, 0x0893441Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888148u) goto L_08888148;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888148:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08888118;
      }
      goto L_08888150;
    }
L_08888150:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x08888168u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 32u, 0x08888168u, 0x08AAB9A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 377u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 377u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888168u) goto L_08888168;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888168:
    aot_gpr_4 = (0u | 127u);
    aot_gpr_5 = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    aot_gpr_31 = (0x0888817Cu);
    ctx.gpr[7] = (0u | 1u);
    goto L_0888A144;
L_0888817C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08888180;
L_08888180:
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
L_08888198:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088881FC;
      }
      goto L_088881AC;
    }
L_088881AC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088881FC;
      }
      goto L_088881B8;
    }
L_088881B8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1400)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[6];
      if (branch_taken) {
          goto L_088881FC;
      }
      goto L_088881C8;
    }
L_088881C8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088881F4;
      }
      goto L_088881D4;
    }
L_088881D4:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25948), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 113u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 113u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_088881F4;
L_088881F4:
    aot_gpr_31 = (0x088881FCu);
    goto L_0888A16C;
L_088881FC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888208:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0888827C;
      }
      goto L_08888220;
    }
L_08888220:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888827C;
      }
      goto L_0888822C;
    }
L_0888822C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1400)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0888827C;
      }
      goto L_0888823C;
    }
L_0888823C:
    aot_gpr_31 = (0x08888244u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 46u, 0x08888244u, 0x08AABB88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888244u) goto L_08888244;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888244:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08888274;
      }
      goto L_0888824C;
    }
L_0888824C:
    aot_gpr_31 = (0x08888254u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 48u, 0x08888254u, 0x08AABAF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 404u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 404u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888254u) goto L_08888254;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888254:
    aot_gpr_31 = (0x0888825Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 49u, 0x0888825Cu, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888825Cu) goto L_0888825C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888825C:
    aot_gpr_31 = (0x08888264u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0076.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 50u, 0x08888264u, 0x08934DB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0076_entry(rt, ctx, 206u, aot_mem);
#else
        recomp_unit_0076_entry(rt, ctx, 206u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 206u, 0x08934DB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888264u) goto L_08888264;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888264:
    aot_gpr_31 = (0x0888826Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0076.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 51u, 0x0888826Cu, 0x0893441Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0076_entry(rt, ctx, 57u, aot_mem);
#else
        recomp_unit_0076_entry(rt, ctx, 57u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 57u, 0x0893441Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888826Cu) goto L_0888826C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888826C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888823C;
      }
      goto L_08888274;
    }
L_08888274:
    aot_gpr_4 = (0u | 113u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0888827C;
L_0888827C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888828C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    aot_gpr_5 = (0u | 110u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_5;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088882C8;
      }
      goto L_088882BC;
    }
L_088882BC:
    aot_gpr_4 = (0u | 9u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1544), 0u);
    goto L_088882C8;
L_088882C8:
    aot_gpr_4 = (0u | 109u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_088882E0;
      }
      goto L_088882D4;
    }
L_088882D4:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1548), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088882E4;
      }
      goto L_088882E0;
    }
L_088882E0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1548), static_cast<std::uint8_t>(0u));
    goto L_088882E4;
L_088882E4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1513), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08888300;
      }
      goto L_088882F4;
    }
L_088882F4:
    aot_gpr_31 = (0x088882FCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 61u, 0x088882FCu, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088882FCu) goto L_088882FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088882FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08888300;
L_08888300:
    aot_gpr_31 = (0x08888308u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888308u) goto L_08888308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08888308:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08888364;
      }
      goto L_08888310;
    }
L_08888310:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0888835C;
      }
      goto L_08888318;
    }
L_08888318:
    aot_gpr_31 = (0x08888320u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 66u, 0x08888320u, 0x08AABB88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888320u) goto L_08888320;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888320:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08888330;
      }
      goto L_08888328;
    }
L_08888328:
    aot_gpr_31 = (0x08888330u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 68u, 0x08888330u, 0x08AABAF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 404u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 404u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888330u) goto L_08888330;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888330:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08888348;
      }
      goto L_0888833C;
    }
L_0888833C:
    aot_gpr_31 = (0x08888344u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 70u, 0x08888344u, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888344u) goto L_08888344;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888344:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08888348;
L_08888348:
    aot_gpr_31 = (0x08888350u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 277u, 0x088B5BCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888350u) goto L_08888350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08888350:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1513), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08888364;
      }
      goto L_0888835C;
    }
L_0888835C:
    ctx.gpr[18] = (0u | 111u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08888364;
L_08888364:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088883C4;
      }
      goto L_08888370;
    }
L_08888370:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 112 ? 1u : 0u);
      if (branch_taken) {
          goto L_088883C4;
      }
      goto L_0888837C;
    }
L_0888837C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088883C4;
      }
      goto L_08888384;
    }
L_08888384:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1399)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1400)));
      if (branch_taken) {
          goto L_08888398;
      }
      goto L_08888390;
    }
L_08888390:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088883C4;
      }
      goto L_08888398;
    }
L_08888398:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_088883B0;
      }
      goto L_088883A0;
    }
L_088883A0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1410)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088883B0;
      }
      goto L_088883AC;
    }
L_088883AC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1410), static_cast<std::uint8_t>(0u));
    goto L_088883B0;
L_088883B0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1401), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088883C4;
      }
      goto L_088883BC;
    }
L_088883BC:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1412), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088883C4;
L_088883C4:
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
L_088883E0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1399)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088883F8;
      }
      goto L_088883EC;
    }
L_088883EC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1400)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08888400;
      }
      goto L_088883F8;
    }
L_088883F8:
    aot_gpr_5 = (0u | 113u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08888400;
L_08888400:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888408:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1380), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1384), aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888418:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(1416));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888420:
    ctx.gpr[6] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888438:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1416)));
    aot_gpr_2 = (0u | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_08888448;
L_08888448:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1416)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08888464;
      }
      goto L_0888845C;
    }
L_0888845C:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_2 = (aot_gpr_5 | 0u);
    goto L_08888464;
L_08888464:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_gpr_5 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08888448;
      }
      goto L_08888474;
    }
L_08888474:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888847C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1397)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 111u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[18];
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08888524;
      }
      goto L_088884A0;
    }
L_088884A0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088884ACu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 99u, 0x088884ACu, 0x088C63C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 454u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 454u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088884ACu) goto L_088884AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088884AC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088884C8;
      }
      goto L_088884B8;
    }
L_088884B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
      if (branch_taken) {
          goto L_088884D4;
      }
      goto L_088884C8;
    }
L_088884C8:
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
    goto L_088884D4;
L_088884D4:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_0888850C;
      }
      goto L_088884DC;
    }
L_088884DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088884F0;
      }
      goto L_088884E8;
    }
L_088884E8:
    aot_gpr_31 = (0x088884F0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088884F0u) goto L_088884F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088884F0:
    aot_gpr_31 = (0x088884F8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 106u, 0x088884F8u, 0x089C6F60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 679u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 679u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088884F8u) goto L_088884F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088884F8:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_2));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
      if (branch_taken) {
          goto L_0888850C;
      }
      goto L_08888504;
    }
L_08888504:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
    goto L_0888850C;
L_0888850C:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08888524;
      }
      goto L_08888514;
    }
L_08888514:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888524;
      }
      goto L_0888851C;
    }
L_0888851C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08888524;
L_08888524:
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
L_0888853C:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08888594;
      }
      goto L_08888548;
    }
L_08888548:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 113 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08888594;
      }
      goto L_08888554;
    }
L_08888554:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1389), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08888590;
      }
      goto L_08888568;
    }
L_08888568:
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_gpr_5 = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1392), aot_gpr_5);
      if (branch_taken) {
          goto L_08888594;
      }
      goto L_08888590;
    }
L_08888590:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1392), ctx.gpr[7]);
    goto L_08888594;
L_08888594:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888859C:
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088885B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088886B4;
      }
      goto L_088885D4;
    }
L_088885D4:
    aot_gpr_31 = (0x088885DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0888876C;
L_088885DC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08888694;
      }
      goto L_088885E4;
    }
L_088885E4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088885F0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 123u, 0x088885F0u, 0x088C63C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 454u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 454u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088885F0u) goto L_088885F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088885F0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08888674;
      }
      goto L_088885FC;
    }
L_088885FC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08888608u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08889B04;
L_08888608:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08888620;
      }
      goto L_08888610;
    }
L_08888610:
    aot_gpr_31 = (0x08888618u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08889C04;
L_08888618:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08888640;
      }
      goto L_08888620;
    }
L_08888620:
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1396)));
    aot_gpr_4 = (0u | 113u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08888638;
      }
      goto L_08888630;
    }
L_08888630:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_08888638;
    }
L_08888638:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 31u);
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_08888640;
    }
L_08888640:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08888654;
      }
      goto L_0888864C;
    }
L_0888864C:
    aot_gpr_31 = (0x08888654u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 133u, 0x08888654u, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888654u) goto L_08888654;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888654:
    aot_gpr_31 = (0x0888865Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888865Cu) goto L_0888865C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888865C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0888866C;
      }
      goto L_08888664;
    }
L_08888664:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 111u);
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_0888866C;
    }
L_0888866C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_08888674;
    }
L_08888674:
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1396)));
    aot_gpr_4 = (0u | 113u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0888868C;
      }
      goto L_08888684;
    }
L_08888684:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_0888868C;
    }
L_0888868C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 9u);
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_08888694;
    }
L_08888694:
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1396)));
    aot_gpr_4 = (0u | 113u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_088886AC;
      }
      goto L_088886A4;
    }
L_088886A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_088886AC;
    }
L_088886AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 9u);
      if (branch_taken) {
          goto L_088886B8;
      }
      goto L_088886B4;
    }
L_088886B4:
    aot_gpr_2 = (0u | 0u);
    goto L_088886B8;
L_088886B8:
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
L_088886CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08888754;
      }
      goto L_088886F4;
    }
L_088886F4:
    aot_gpr_31 = (0x088886FCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0888876C;
L_088886FC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08888750;
      }
      goto L_08888704;
    }
L_08888704:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08888710u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 149u, 0x08888710u, 0x088C63C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 454u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 454u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888710u) goto L_08888710;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888710:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08888754;
      }
      goto L_0888871C;
    }
L_0888871C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08888728u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08889B04;
L_08888728:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08888748;
      }
      goto L_08888730;
    }
L_08888730:
    aot_gpr_31 = (0x08888738u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08889C04;
L_08888738:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08888748;
      }
      goto L_08888740;
    }
L_08888740:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(aot_gpr_16));
      if (branch_taken) {
          goto L_08888754;
      }
      goto L_08888748;
    }
L_08888748:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1396), static_cast<std::uint8_t>(aot_gpr_16));
      if (branch_taken) {
          goto L_08888754;
      }
      goto L_08888750;
    }
L_08888750:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1396), static_cast<std::uint8_t>(aot_gpr_16));
    goto L_08888754;
L_08888754:
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
L_0888876C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08888784u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 159u, 0x08888784u, 0x088C63C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 454u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 454u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888784u) goto L_08888784;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888784:
    aot_gpr_31 = (0x0888878Cu);
    aot_gpr_16 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888878Cu) goto L_0888878C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888878C:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08888880;
      }
      goto L_08888794;
    }
L_08888794:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 60u);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[6];
      if (branch_taken) {
          goto L_08888820;
      }
      goto L_088887A4;
    }
L_088887A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 63u);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[6];
      if (branch_taken) {
          goto L_08888820;
      }
      goto L_088887B4;
    }
L_088887B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 65u);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[6];
      if (branch_taken) {
          goto L_08888820;
      }
      goto L_088887C4;
    }
L_088887C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08888820;
      }
      goto L_088887D4;
    }
L_088887D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08888820;
      }
      goto L_088887E4;
    }
L_088887E4:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_0888883C;
      }
      goto L_088887EC;
    }
L_088887EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 80u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08888818;
      }
      goto L_08888800;
    }
L_08888800:
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 180 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < -938 ? 1u : 0u);
      if (branch_taken) {
          goto L_08888828;
      }
      goto L_08888810;
    }
L_08888810:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 247 ? 1u : 0u);
      if (branch_taken) {
          goto L_08888854;
      }
      goto L_08888818;
    }
L_08888818:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08888888;
      }
      goto L_08888820;
    }
L_08888820:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08888888;
      }
      goto L_08888828;
    }
L_08888828:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 178 ? 1u : 0u);
      if (branch_taken) {
          goto L_08888844;
      }
      goto L_08888830;
    }
L_08888830:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < -939 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08888878;
      }
      goto L_0888883C;
    }
L_0888883C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08888888;
      }
      goto L_08888844;
    }
L_08888844:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888883C;
      }
      goto L_0888884C;
    }
L_0888884C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08888878;
      }
      goto L_08888854;
    }
L_08888854:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 251u);
      if (branch_taken) {
          goto L_08888870;
      }
      goto L_0888885C;
    }
L_0888885C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 246 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888883C;
      }
      goto L_08888868;
    }
L_08888868:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08888878;
      }
      goto L_08888870;
    }
L_08888870:
    { const bool branch_taken = aot_gpr_16 != aot_gpr_4;
      if (branch_taken) {
          goto L_0888883C;
      }
      goto L_08888878;
    }
L_08888878:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08888888;
      }
      goto L_08888880;
    }
L_08888880:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08888888;
      }
      goto L_08888888;
    }
L_08888888:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888898:
    ctx.gpr[7] = (aot_gpr_5 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088888D0;
      }
      goto L_088888A4;
    }
L_088888A4:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_088888C4;
      }
      goto L_088888B8;
    }
L_088888B8:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_088888C4;
L_088888C4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1416)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1416), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088888D0;
L_088888D0:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088888D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088888F4u);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 190u, 0x088888F4u, 0x08AABB88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088888F4u) goto L_088888F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088888F4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08888910;
      }
      goto L_088888FC;
    }
L_088888FC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_08888910;
      }
      goto L_08888908;
    }
L_08888908:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08888914;
      }
      goto L_08888910;
    }
L_08888910:
    aot_gpr_2 = (0u | 0u);
    goto L_08888914;
L_08888914:
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
L_08888928:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888934:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x08888954u);
    ctx.gpr[18] = (aot_gpr_5 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 197u, 0x08888954u, 0x08AABB88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888954u) goto L_08888954;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888954:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08888970;
      }
      goto L_08888960;
    }
L_08888960:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    aot_gpr_5 = (0u | 111u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08888980;
      }
      goto L_08888970;
    }
L_08888970:
    if (ctx.gpr[17] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
        goto L_08888990;
    }
    goto L_08888978;
L_08888978:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088889DC;
      }
      goto L_08888980;
    }
L_08888980:
    aot_gpr_31 = (0x08888988u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0888847C;
L_08888988:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08888B4C;
      }
      goto L_08888990;
    }
L_08888990:
    aot_gpr_5 = (0u | 111u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088889DC;
      }
      goto L_0888899C;
    }
L_0888899C:
    aot_gpr_31 = (0x088889A4u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 205u, 0x088889A4u, 0x08AABAF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 404u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 404u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088889A4u) goto L_088889A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088889A4:
    aot_gpr_31 = (0x088889ACu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 206u, 0x088889ACu, 0x08AABB88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088889ACu) goto L_088889AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088889AC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088889DC;
      }
      goto L_088889B4;
    }
L_088889B4:
    aot_gpr_31 = (0x088889BCu);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 208u, 0x088889BCu, 0x08AABAF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 404u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 404u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088889BCu) goto L_088889BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088889BC:
    aot_gpr_31 = (0x088889C4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 209u, 0x088889C4u, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088889C4u) goto L_088889C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088889C4:
    aot_gpr_31 = (0x088889CCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0076.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 210u, 0x088889CCu, 0x08934DB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0076_entry(rt, ctx, 206u, aot_mem);
#else
        recomp_unit_0076_entry(rt, ctx, 206u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 206u, 0x08934DB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088889CCu) goto L_088889CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088889CC:
    aot_gpr_31 = (0x088889D4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0076.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 211u, 0x088889D4u, 0x0893441Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0076_entry(rt, ctx, 57u, aot_mem);
#else
        recomp_unit_0076_entry(rt, ctx, 57u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 57u, 0x0893441Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088889D4u) goto L_088889D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088889D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088889A4;
      }
      goto L_088889DC;
    }
L_088889DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1400)));
      if (branch_taken) {
          goto L_088889EC;
      }
      goto L_088889E4;
    }
L_088889E4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1402), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1405), static_cast<std::uint8_t>(0u));
    goto L_088889EC;
L_088889EC:
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
        goto L_08888A04;
    }
    goto L_088889F4;
L_088889F4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08888B4C;
      }
      goto L_088889FC;
    }
L_088889FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08888A14;
      }
      goto L_08888A04;
    }
L_08888A04:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08888A8C;
      }
      goto L_08888A0C;
    }
L_08888A0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08888B4C;
      }
      goto L_08888A14;
    }
L_08888A14:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_5 | ctx.gpr[18]);
      if (branch_taken) {
          goto L_08888A34;
      }
      goto L_08888A28;
    }
L_08888A28:
    aot_gpr_31 = (0x08888A30u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888A30u) goto L_08888A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08888A30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08888A34;
L_08888A34:
    aot_gpr_31 = (0x08888A3Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 223u, 0x08888A3Cu, 0x089C6F60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 679u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 679u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888A3Cu) goto L_08888A3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888A3C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08888A48u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 224u, 0x08888A48u, 0x08A06798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 627u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 627u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 627u, 0x08A06798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888A48u) goto L_08888A48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888A48:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08888A84;
      }
      goto L_08888A50;
    }
L_08888A50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08888A68;
      }
      goto L_08888A5C;
    }
L_08888A5C:
    aot_gpr_31 = (0x08888A64u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888A64u) goto L_08888A64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08888A64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08888A68;
L_08888A68:
    aot_gpr_31 = (0x08888A70u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 229u, 0x08888A70u, 0x089C6F60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 679u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 679u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888A70u) goto L_08888A70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888A70:
    aot_gpr_5 = (aot_gpr_2 & 255u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_gpr_31 = (0x08888A84u);
    ctx.gpr[7] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 230u, 0x08888A84u, 0x08A06360u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 559u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 559u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 559u, 0x08A06360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888A84u) goto L_08888A84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888A84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08888B4C;
      }
      goto L_08888A8C;
    }
L_08888A8C:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_5 | ctx.gpr[18]);
      if (branch_taken) {
          goto L_08888AAC;
      }
      goto L_08888AA0;
    }
L_08888AA0:
    aot_gpr_31 = (0x08888AA8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888AA8u) goto L_08888AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08888AA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08888AAC;
L_08888AAC:
    aot_gpr_31 = (0x08888AB4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 235u, 0x08888AB4u, 0x089C6F60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 679u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 679u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888AB4u) goto L_08888AB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888AB4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08888AC0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 236u, 0x08888AC0u, 0x08A06798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 627u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 627u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 627u, 0x08A06798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888AC0u) goto L_08888AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888AC0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08888B44;
      }
      goto L_08888AC8;
    }
L_08888AC8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08888AD8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0888876C;
L_08888AD8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08888B44;
      }
      goto L_08888AE0;
    }
L_08888AE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888AF8;
      }
      goto L_08888AEC;
    }
L_08888AEC:
    aot_gpr_31 = (0x08888AF4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888AF4u) goto L_08888AF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08888AF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08888AF8;
L_08888AF8:
    aot_gpr_31 = (0x08888B00u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 243u, 0x08888B00u, 0x089C6F60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 679u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 679u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888B00u) goto L_08888B00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888B00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08888B18;
      }
      goto L_08888B0C;
    }
L_08888B0C:
    aot_gpr_31 = (0x08888B14u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888B14u) goto L_08888B14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08888B14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08888B18;
L_08888B18:
    aot_gpr_31 = (0x08888B20u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 247u, 0x08888B20u, 0x089C6F60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 679u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 679u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888B20u) goto L_08888B20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888B20:
    aot_gpr_5 = (aot_gpr_2 & 255u);
    aot_gpr_31 = (0x08888B2Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0888981C;
L_08888B2C:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08888B44u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 249u, 0x08888B44u, 0x08AAB9A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 377u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 377u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888B44u) goto L_08888B44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888B44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08888B4C;
      }
      goto L_08888B4C;
    }
L_08888B4C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_08888B64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 5u));
    ctx.gpr[9] = (ctx.gpr[9] >> 27u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 5u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08888BBC;
      }
      goto L_08888BB4;
    }
L_08888BB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_gpr_29 | 0u);
      if (branch_taken) {
          goto L_08888BBC;
      }
      goto L_08888BBC;
    }
L_08888BBC:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08888C24;
      }
      goto L_08888BD0;
    }
L_08888BD0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_gpr_4 = (ctx.gpr[17] << 5u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x08888BE8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 255u, 0x08888BE8u, 0x08ABE308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888BE8u) goto L_08888BE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888BE8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      ctx.gpr[6] = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08888C24;
      }
      goto L_08888C00;
    }
L_08888C00:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x08888C14u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888C14u) goto L_08888C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08888C14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_08888C24;
L_08888C24:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888C64;
      }
      goto L_08888C34;
    }
L_08888C34:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
        goto L_08888C5C;
    }
    goto L_08888C40;
L_08888C40:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    goto L_08888C5C;
L_08888C5C:
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888C34;
      }
      goto L_08888C64;
    }
L_08888C64:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
      if (branch_taken) {
          goto L_08888CA0;
      }
      goto L_08888C74;
    }
L_08888C74:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08888C98;
      }
      goto L_08888C80;
    }
L_08888C80:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    goto L_08888C98;
L_08888C98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888CDC;
      }
      goto L_08888CA0;
    }
L_08888CA0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888CDC;
      }
      goto L_08888CAC;
    }
L_08888CAC:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08888CD4;
    }
    goto L_08888CB8;
L_08888CB8:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08888CD4;
L_08888CD4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888CAC;
      }
      goto L_08888CDC;
    }
L_08888CDC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08888D24;
      }
      goto L_08888CE4;
    }
L_08888CE4:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888D24;
      }
      goto L_08888CF4;
    }
L_08888CF4:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
        goto L_08888D1C;
    }
    goto L_08888D00;
L_08888D00:
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
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    goto L_08888D1C;
L_08888D1C:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888CF4;
      }
      goto L_08888D24;
    }
L_08888D24:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888D40;
      }
      goto L_08888D34;
    }
L_08888D34:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    goto L_08888D38;
L_08888D38:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888D38;
      }
      goto L_08888D40;
    }
L_08888D40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08888D54;
      }
      goto L_08888D4C;
    }
L_08888D4C:
    aot_gpr_31 = (0x08888D54u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888D54u) goto L_08888D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08888D54:
    aot_gpr_4 = (ctx.gpr[17] << 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
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
L_08888D84:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08888DB4u);
    goto L_08888050;
L_08888DB4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1532)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[6];
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08888E0C;
      }
      goto L_08888DD8;
    }
L_08888DD8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
        goto L_08888E00;
    }
    goto L_08888DE4;
L_08888DE4:
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    goto L_08888E00;
L_08888E00:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1528), aot_gpr_4);
      if (branch_taken) {
          goto L_08888E30;
      }
      goto L_08888E0C;
    }
L_08888E0C:
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1524));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08888E2Cu);
    ctx.gpr[9] = (0u | 1u);
    goto L_08888B64;
L_08888E2C:
    aot_gpr_2 = (0u | 1u);
    goto L_08888E30;
L_08888E30:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888E4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1524)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_08888F14;
      }
      goto L_08888E78;
    }
L_08888E78:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08888E84u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 291u, 0x08888E84u, 0x08A93144u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 456u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 456u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888E84u) goto L_08888E84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888E84:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08888F04;
      }
      goto L_08888E8C;
    }
L_08888E8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08888EF0;
      }
      goto L_08888E9C;
    }
L_08888E9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_gpr_4 - aot_gpr_5);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 5u));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] >> 27u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 5u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888EF0;
      }
      goto L_08888EC8;
    }
L_08888EC8:
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888EC8;
      }
      goto L_08888EF0;
    }
L_08888EF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    aot_gpr_2 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1528), aot_gpr_4);
      if (branch_taken) {
          goto L_08888F18;
      }
      goto L_08888F04;
    }
L_08888F04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_08888E78;
      }
      goto L_08888F14;
    }
L_08888F14:
    aot_gpr_2 = (0u | 0u);
    goto L_08888F18;
L_08888F18:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
L_08888F30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08888F48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08888050;
L_08888F48:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1524)));
    aot_gpr_5 = (ctx.gpr[6] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 5u));
    ctx.gpr[7] = (ctx.gpr[7] >> 27u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 5u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888F98;
      }
      goto L_08888F70;
    }
L_08888F70:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888F70;
      }
      goto L_08888F98;
    }
L_08888F98:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[6];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08888FB4;
      }
      goto L_08888FA8;
    }
L_08888FA8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    goto L_08888FAC;
L_08888FAC:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[6];
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08888FAC;
      }
      goto L_08888FB4;
    }
L_08888FB4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1528), aot_gpr_5);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08888FC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08889118;
      }
      goto L_08888FF0;
    }
L_08888FF0:
    aot_gpr_31 = (0x08888FF8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 308u, 0x08888FF8u, 0x08AABB88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08888FF8u) goto L_08888FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08888FF8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888907C;
      }
      goto L_08889000;
    }
L_08889000:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    aot_gpr_5 = (0u | 113u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (0u | 113u);
      if (branch_taken) {
          goto L_08889044;
      }
      goto L_08889010;
    }
L_08889010:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 127u);
    aot_gpr_5 = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    aot_gpr_31 = (0x0888903Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_0888903C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088891E4;
      }
      goto L_08889044;
    }
L_08889044:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1403))))));
      if (branch_taken) {
          goto L_08889058;
      }
      goto L_08889054;
    }
L_08889054:
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    goto L_08889058;
L_08889058:
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08889074u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 315u, 0x08889074u, 0x08AAB9A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 377u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 377u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889074u) goto L_08889074;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08889074:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088891E4;
      }
      goto L_0888907C;
    }
L_0888907C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1403))))));
    aot_gpr_5 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_16 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08889098u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0049.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 317u, 0x08889098u, 0x088CA414u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0049_entry(rt, ctx, 442u, aot_mem);
#else
        recomp_unit_0049_entry(rt, ctx, 442u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 442u, 0x088CA414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889098u) goto L_08889098;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08889098:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088890E0;
      }
      goto L_088890A0;
    }
L_088890A0:
    aot_gpr_31 = (0x088890A8u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0049.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 319u, 0x088890A8u, 0x088CA414u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0049_entry(rt, ctx, 442u, aot_mem);
#else
        recomp_unit_0049_entry(rt, ctx, 442u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 442u, 0x088CA414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088890A8u) goto L_088890A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088890A8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088890E0;
      }
      goto L_088890B0;
    }
L_088890B0:
    aot_gpr_31 = (0x088890B8u);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0049.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 321u, 0x088890B8u, 0x088CA414u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0049_entry(rt, ctx, 442u, aot_mem);
#else
        recomp_unit_0049_entry(rt, ctx, 442u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 442u, 0x088CA414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088890B8u) goto L_088890B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088890B8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088890E0;
      }
      goto L_088890C0;
    }
L_088890C0:
    aot_gpr_31 = (0x088890C8u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0049.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 323u, 0x088890C8u, 0x088CA414u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0049_entry(rt, ctx, 442u, aot_mem);
#else
        recomp_unit_0049_entry(rt, ctx, 442u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 442u, 0x088CA414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088890C8u) goto L_088890C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088890C8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088890E0;
      }
      goto L_088890D0;
    }
L_088890D0:
    aot_gpr_31 = (0x088890D8u);
    aot_gpr_5 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0049.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 325u, 0x088890D8u, 0x088CA414u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0049_entry(rt, ctx, 442u, aot_mem);
#else
        recomp_unit_0049_entry(rt, ctx, 442u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 442u, 0x088CA414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088890D8u) goto L_088890D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088890D8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088890FC;
      }
      goto L_088890E0;
    }
L_088890E0:
    aot_gpr_4 = (0u | 31u);
    aot_gpr_5 = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    aot_gpr_31 = (0x088890F4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_088890F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088891E4;
      }
      goto L_088890FC;
    }
L_088890FC:
    aot_gpr_4 = (0u | 127u);
    aot_gpr_5 = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    aot_gpr_31 = (0x08889110u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_08889110:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088891E4;
      }
      goto L_08889118;
    }
L_08889118:
    aot_gpr_31 = (0x08889120u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 331u, 0x08889120u, 0x08AABB88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889120u) goto L_08889120;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08889120:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08889188;
      }
      goto L_08889128;
    }
L_08889128:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    aot_gpr_5 = (0u | 113u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08889178;
      }
      goto L_08889138;
    }
L_08889138:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25948)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08889178;
      }
      goto L_08889144;
    }
L_08889144:
    aot_gpr_31 = (0x0888914Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08889CF0;
L_0888914C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    aot_gpr_5 = (2237u << 16u);
    ctx.gpr[6] = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23248));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25948), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08889178;
L_08889178:
    aot_gpr_31 = (0x08889180u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 337u, 0x08889180u, 0x08AABAF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 404u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 404u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889180u) goto L_08889180;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08889180:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1520), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088891E4;
      }
      goto L_08889188;
    }
L_08889188:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25948), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 113u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1403))))));
      if (branch_taken) {
          goto L_088891B0;
      }
      goto L_088891AC;
    }
L_088891AC:
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    goto L_088891B0;
L_088891B0:
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088891CCu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 341u, 0x088891CCu, 0x08AAB9A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 377u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 377u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088891CCu) goto L_088891CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088891CC:
    aot_gpr_4 = (0u | 127u);
    aot_gpr_5 = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    aot_gpr_31 = (0x088891E0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_088891E0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088891E4;
L_088891E4:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
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
L_08889200:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    aot_gpr_31 = (0x08889214u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08889D2C;
L_08889214:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0888922C;
      }
      goto L_0888921C;
    }
L_0888921C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
    aot_gpr_5 = (0u | 113u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08889258;
      }
      goto L_0888922C;
    }
L_0888922C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(18) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08889464;
      }
      goto L_0888923C;
    }
L_0888923C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23288)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08889258:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_08889260;
    }
L_08889260:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8002)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088892C4;
      }
      goto L_0888926C;
    }
L_0888926C:
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
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25936));
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
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17796u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 2048u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088892C4;
      }
      goto L_088892B8;
    }
L_088892B8:
    aot_gpr_4 = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_088892C4;
    }
L_088892C4:
    aot_gpr_31 = (0x088892CCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 354u, 0x088892CCu, 0x08AF99F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 278u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 278u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 278u, 0x08AF99F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088892CCu) goto L_088892CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088892CC:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_088892F4;
      }
      goto L_088892D8;
    }
L_088892D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088892FC;
      }
      goto L_088892E4;
    }
L_088892E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916), aot_gpr_4);
      if (branch_taken) {
          goto L_088892FC;
      }
      goto L_088892F4;
    }
L_088892F4:
    aot_gpr_4 = (0u | 20u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916), aot_gpr_4);
    goto L_088892FC;
L_088892FC:
    aot_gpr_31 = (0x08889304u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 359u, 0x08889304u, 0x08AF99F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 278u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 278u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 278u, 0x08AF99F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889304u) goto L_08889304;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08889304:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
      if (branch_taken) {
          goto L_08889368;
      }
      goto L_0888930C;
    }
L_0888930C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08889368;
      }
      goto L_08889318;
    }
L_08889318:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    aot_gpr_4 = (0u | 5u);
    if (aot_gpr_5 == aot_gpr_4) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
        goto L_08889338;
    }
    goto L_08889328;
L_08889328:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_0888935C;
      }
      goto L_08889334;
    }
L_08889334:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    goto L_08889338;
L_08889338:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0888935C;
      }
      goto L_08889350;
    }
L_08889350:
    aot_gpr_4 = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08889414;
      }
      goto L_0888935C;
    }
L_0888935C:
    aot_gpr_4 = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08889414;
      }
      goto L_08889368;
    }
L_08889368:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08889414;
      }
      goto L_08889374;
    }
L_08889374:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2828)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 5u);
      if (branch_taken) {
          goto L_088893CC;
      }
      goto L_08889380;
    }
L_08889380:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    if (aot_gpr_5 == aot_gpr_4) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
        goto L_0888939C;
    }
    goto L_0888938C;
L_0888938C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_088893C0;
      }
      goto L_08889398;
    }
L_08889398:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    goto L_0888939C;
L_0888939C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088893C0;
      }
      goto L_088893B4;
    }
L_088893B4:
    aot_gpr_4 = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08889414;
      }
      goto L_088893C0;
    }
L_088893C0:
    aot_gpr_4 = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08889414;
      }
      goto L_088893CC;
    }
L_088893CC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    if (aot_gpr_5 == aot_gpr_4) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
        goto L_088893E8;
    }
    goto L_088893D8;
L_088893D8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_0888940C;
      }
      goto L_088893E4;
    }
L_088893E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    goto L_088893E8;
L_088893E8:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0888940C;
      }
      goto L_08889400;
    }
L_08889400:
    aot_gpr_4 = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08889414;
      }
      goto L_0888940C;
    }
L_0888940C:
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08889414;
L_08889414:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_0888941C;
    }
L_0888941C:
    aot_gpr_4 = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_08889428;
    }
L_08889428:
    aot_gpr_4 = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_08889434;
    }
L_08889434:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_08889440;
    }
L_08889440:
    aot_gpr_4 = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_0888944C;
    }
L_0888944C:
    aot_gpr_4 = (0u | 17u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_08889458;
    }
L_08889458:
    aot_gpr_4 = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888946C;
      }
      goto L_08889464;
    }
L_08889464:
    aot_gpr_4 = (0u | 30u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0888946C;
L_0888946C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888947C:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08889484:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_5 & 255u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_31);
    aot_gpr_31 = (0x088894ACu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 392u, 0x088894ACu, 0x08887C88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 866u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 866u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 866u, 0x08887C88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088894ACu) goto L_088894AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088894AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8002)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08889604;
      }
      goto L_088894B8;
    }
L_088894B8:
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
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25936));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08889604;
      }
      goto L_08889510;
    }
L_08889510:
    aot_gpr_4 = (17796u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 2048u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17150u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_088895D4;
      }
      goto L_08889530;
    }
L_08889530:
    aot_gpr_4 = (17352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 127u);
      if (branch_taken) {
          goto L_08889578;
      }
      goto L_08889548;
    }
L_08889548:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8002)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088897C8;
      }
      goto L_08889578;
    }
L_08889578:
    aot_fpr_13 = std::sqrt(aot_fpr_13);
    aot_gpr_5 = (16800u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16948u << 16u);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_15;
    aot_gpr_5 = (16256u << 16u);
    ctx.gpr[6] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8002)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = ctx.fpr[16] - aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088897C8;
      }
      goto L_088895D4;
    }
L_088895D4:
    aot_fpr_13 = std::sqrt(aot_fpr_13);
    aot_gpr_4 = (17026u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16908u << 16u);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_15;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088897C8;
      }
      goto L_08889604;
    }
L_08889604:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08889618;
      }
      goto L_0888960C;
    }
L_0888960C:
    aot_fpr_13 = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08889698;
      }
      goto L_08889618;
    }
L_08889618:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892)));
    aot_gpr_4 = (17036u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08889698;
      }
      goto L_08889634;
    }
L_08889634:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1398)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (16277u << 16u);
      if (branch_taken) {
          goto L_0888966C;
      }
      goto L_08889644;
    }
L_08889644:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1398)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 15 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16277u << 16u);
      if (branch_taken) {
          goto L_0888966C;
      }
      goto L_08889654;
    }
L_08889654:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892)));
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + aot_fpr_15;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892), std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_08889680;
      }
      goto L_0888966C;
    }
L_0888966C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892)));
    aot_gpr_4 = (aot_gpr_4 | 21845u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + aot_fpr_15;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892), std::bit_cast<std::uint32_t>(aot_fpr_14));
    goto L_08889680;
L_08889680:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08889698;
      }
      goto L_08889694;
    }
L_08889694:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08889698;
L_08889698:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1397)));
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088896FC;
      }
      goto L_088896A8;
    }
L_088896A8:
    aot_gpr_31 = (0x088896B0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 410u, 0x088896B0u, 0x08AF99F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 278u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 278u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 278u, 0x08AF99F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088896B0u) goto L_088896B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088896B0:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17036u << 16u);
    aot_gpr_5 = (0u | 2u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088897B8;
      }
      goto L_088896EC;
    }
L_088896EC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088897B8;
      }
      goto L_088896FC;
    }
L_088896FC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1397)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0888975C;
      }
      goto L_0888970C;
    }
L_0888970C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25916)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17036u << 16u);
    aot_gpr_5 = (0u | 2u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088897B8;
      }
      goto L_0888974C;
    }
L_0888974C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088897B8;
      }
      goto L_0888975C;
    }
L_0888975C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1397)));
    aot_gpr_5 = (0u | 18u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892)));
        goto L_088897A8;
    }
    goto L_0888976C;
L_0888976C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25892)));
    aot_gpr_4 = (16025u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088897B8;
      }
      goto L_088897A8;
    }
L_088897A8:
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088897B8;
L_088897B8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088897C8u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    goto L_08889F48;
L_088897C8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088897E0:
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (aot_gpr_5 + aot_gpr_5);
    goto L_088897E8;
L_088897E8:
    ctx.gpr[6] = (aot_gpr_5 + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 53 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (aot_gpr_5 + aot_gpr_5);
      if (branch_taken) {
          goto L_088897E8;
      }
      goto L_08889814;
    }
L_08889814:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888981C:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[6] = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[6] = (aot_gpr_5 + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 5u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_gpr_2 = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(20000));
      if (branch_taken) {
          goto L_08889884;
      }
      goto L_08889860;
    }
L_08889860:
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 29 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_08889884;
      }
      goto L_0888986C;
    }
L_0888986C:
    ctx.gpr[6] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08889894;
      }
      goto L_08889884;
    }
L_08889884:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08889894;
      }
      goto L_08889890;
    }
L_08889890:
    aot_gpr_2 = (0u | 0u);
    goto L_08889894;
L_08889894:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888989C;
      }
      goto L_0888989C;
    }
L_0888989C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088898A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088898C4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 431u, 0x088898C4u, 0x088C63C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 454u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 454u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088898C4u) goto L_088898C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088898C4:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08889980;
      }
      goto L_088898D0;
    }
L_088898D0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088898DCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08889B04;
L_088898DC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08889914;
      }
      goto L_088898E4;
    }
L_088898E4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088898F0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08889C04;
L_088898F0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888990C;
      }
      goto L_088898F8;
    }
L_088898F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888991C;
      }
      goto L_08889904;
    }
L_08889904:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08889924;
      }
      goto L_0888990C;
    }
L_0888990C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 32u);
      if (branch_taken) {
          goto L_08889988;
      }
      goto L_08889914;
    }
L_08889914:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 9u);
      if (branch_taken) {
          goto L_08889988;
      }
      goto L_0888991C;
    }
L_0888991C:
    aot_gpr_31 = (0x08889924u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 441u, 0x08889924u, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889924u) goto L_08889924;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08889924:
    aot_gpr_31 = (0x0888992Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888992Cu) goto L_0888992C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888992C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08889960;
      }
      goto L_08889934;
    }
L_08889934:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    aot_gpr_5 = (0u | 111u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08889958;
      }
      goto L_08889944;
    }
L_08889944:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08889968;
      }
      goto L_08889950;
    }
L_08889950:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08889970;
      }
      goto L_08889958;
    }
L_08889958:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
      if (branch_taken) {
          goto L_08889988;
      }
      goto L_08889960;
    }
L_08889960:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 111u);
      if (branch_taken) {
          goto L_08889988;
      }
      goto L_08889968;
    }
L_08889968:
    aot_gpr_31 = (0x08889970u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889970u) goto L_08889970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889970:
    aot_gpr_31 = (0x08889978u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 450u, 0x08889978u, 0x089C6F60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 679u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 679u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889978u) goto L_08889978;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08889978:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 & 255u);
      if (branch_taken) {
          goto L_08889988;
      }
      goto L_08889980;
    }
L_08889980:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 9u);
      if (branch_taken) {
          goto L_08889988;
      }
      goto L_08889988;
    }
L_08889988:
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
L_0888999C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x088899BCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 454u, 0x088899BCu, 0x088C63C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 454u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 454u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088899BCu) goto L_088899BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088899BC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08889AE8;
      }
      goto L_088899C8;
    }
L_088899C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088899D4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08889B04;
L_088899D4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08889A0C;
      }
      goto L_088899DC;
    }
L_088899DC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088899E8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08889C04;
L_088899E8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08889A04;
      }
      goto L_088899F0;
    }
L_088899F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08889A14;
      }
      goto L_088899FC;
    }
L_088899FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08889A1C;
      }
      goto L_08889A04;
    }
L_08889A04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 32u);
      if (branch_taken) {
          goto L_08889AF0;
      }
      goto L_08889A0C;
    }
L_08889A0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 9u);
      if (branch_taken) {
          goto L_08889AF0;
      }
      goto L_08889A14;
    }
L_08889A14:
    aot_gpr_31 = (0x08889A1Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 464u, 0x08889A1Cu, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889A1Cu) goto L_08889A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08889A1C:
    aot_gpr_31 = (0x08889A24u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889A24u) goto L_08889A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889A24:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08889A40;
      }
      goto L_08889A2C;
    }
L_08889A2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
        goto L_08889A48;
    }
    goto L_08889A38;
L_08889A38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08889AAC;
      }
      goto L_08889A40;
    }
L_08889A40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 111u);
      if (branch_taken) {
          goto L_08889AF0;
      }
      goto L_08889A48;
    }
L_08889A48:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08889A80;
      }
      goto L_08889A64;
    }
L_08889A64:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-10));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08889A64;
      }
      goto L_08889A80;
    }
L_08889A80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
        goto L_08889A98;
    }
    goto L_08889A8C;
L_08889A8C:
    aot_gpr_31 = (0x08889A94u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889A94u) goto L_08889A94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889A94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    goto L_08889A98;
L_08889A98:
    aot_gpr_5 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_gpr_31 = (0x08889AA8u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 475u, 0x08889AA8u, 0x089C6F68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 680u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 680u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 680u, 0x089C6F68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889AA8u) goto L_08889AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08889AA8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    goto L_08889AAC;
L_08889AAC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    aot_gpr_5 = (0u | 111u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08889AE0;
      }
      goto L_08889ABC;
    }
L_08889ABC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08889AD0;
      }
      goto L_08889AC8;
    }
L_08889AC8:
    aot_gpr_31 = (0x08889AD0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889AD0u) goto L_08889AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889AD0:
    aot_gpr_31 = (0x08889AD8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 480u, 0x08889AD8u, 0x089C6F60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 679u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 679u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889AD8u) goto L_08889AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08889AD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 & 255u);
      if (branch_taken) {
          goto L_08889AF0;
      }
      goto L_08889AE0;
    }
L_08889AE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
      if (branch_taken) {
          goto L_08889AF0;
      }
      goto L_08889AE8;
    }
L_08889AE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 9u);
      if (branch_taken) {
          goto L_08889AF0;
      }
      goto L_08889AF0;
    }
L_08889AF0:
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
L_08889B04:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 219 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 275 ? 1u : 0u);
      if (branch_taken) {
          goto L_08889B88;
      }
      goto L_08889B14;
    }
L_08889B14:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 189 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 207 ? 1u : 0u);
      if (branch_taken) {
          goto L_08889B34;
      }
      goto L_08889B20;
    }
L_08889B20:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-992));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889B2C;
    }
L_08889B2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08889BFC;
      }
      goto L_08889B34;
    }
L_08889B34:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 195 ? 1u : 0u);
      if (branch_taken) {
          goto L_08889B74;
      }
      goto L_08889B3C;
    }
L_08889B3C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-189));
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889B44;
    }
L_08889B44:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889B4C;
    }
L_08889B4C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889B54;
    }
L_08889B54:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889B5C;
    }
L_08889B5C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889B64;
    }
L_08889B64:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889B6C;
    }
L_08889B6C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889B74;
    }
L_08889B74:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 208 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889B80;
    }
L_08889B80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08889BFC;
      }
      goto L_08889B88;
    }
L_08889B88:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 279 ? 1u : 0u);
      if (branch_taken) {
          goto L_08889BD0;
      }
      goto L_08889B90;
    }
L_08889B90:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 261 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 235 ? 1u : 0u);
      if (branch_taken) {
          goto L_08889BBC;
      }
      goto L_08889B9C;
    }
L_08889B9C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-219));
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889BA4;
    }
L_08889BA4:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23216)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08889BBC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 262 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889BC8;
    }
L_08889BC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889BD0;
    }
L_08889BD0:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 280 ? 1u : 0u);
        goto L_08889BEC;
    }
    goto L_08889BD8;
L_08889BD8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 276 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889BE4;
    }
L_08889BE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889BEC;
    }
L_08889BEC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08889B80;
      }
      goto L_08889BF4;
    }
L_08889BF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08889B2C;
      }
      goto L_08889BFC;
    }
L_08889BFC:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08889C04:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-937));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08889C30;
      }
      goto L_08889C14;
    }
L_08889C14:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8001)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08889C28;
      }
      goto L_08889C20;
    }
L_08889C20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08889C34;
      }
      goto L_08889C28;
    }
L_08889C28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08889C34;
      }
      goto L_08889C30;
    }
L_08889C30:
    aot_gpr_2 = (0u | 0u);
    goto L_08889C34;
L_08889C34:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08889C3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08889C70;
      }
      goto L_08889C64;
    }
L_08889C64:
    aot_gpr_31 = (0x08889C6Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 518u, 0x08889C6Cu, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889C6Cu) goto L_08889C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08889C6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08889C70;
L_08889C70:
    aot_gpr_31 = (0x08889C78u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889C78u) goto L_08889C78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889C78:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08889CD0;
      }
      goto L_08889C80;
    }
L_08889C80:
    aot_gpr_4 = (2244u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(27840));
    { const bool branch_taken = aot_gpr_16 != aot_gpr_4;
      if (branch_taken) {
          goto L_08889CA4;
      }
      goto L_08889C90;
    }
L_08889C90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08889CAC;
      }
      goto L_08889C9C;
    }
L_08889C9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08889CB8;
      }
      goto L_08889CA4;
    }
L_08889CA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08889CD8;
      }
      goto L_08889CAC;
    }
L_08889CAC:
    aot_gpr_31 = (0x08889CB4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 526u, 0x08889CB4u, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889CB4u) goto L_08889CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08889CB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08889CB8;
L_08889CB8:
    aot_gpr_31 = (0x08889CC0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 483u, 0x088B693Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889CC0u) goto L_08889CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889CC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr_2 = (aot_gpr_2 ^ aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08889CD8;
      }
      goto L_08889CD0;
    }
L_08889CD0:
    aot_gpr_2 = (ctx.gpr[17] ^ aot_gpr_16);
    aot_gpr_2 = (aot_gpr_2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08889CD8;
L_08889CD8:
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
L_08889CF0:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08889CF8:
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08889D24;
      }
      goto L_08889D04;
    }
L_08889D04:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08889D20;
      }
      goto L_08889D14;
    }
L_08889D14:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08889D20;
L_08889D20:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1452), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08889D24;
L_08889D24:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08889D2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_31);
    aot_gpr_31 = (0x08889D40u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889D40u) goto L_08889D40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889D40:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08889D54;
      }
      goto L_08889D4C;
    }
L_08889D4C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08889F38;
      }
      goto L_08889D54;
    }
L_08889D54:
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
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1524)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 5u));
    ctx.gpr[6] = (ctx.gpr[6] >> 27u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 5u));
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25888));
      if (branch_taken) {
          goto L_08889F34;
      }
      goto L_08889D8C;
    }
L_08889D8C:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (0u | 0u);
    goto L_08889D94;
L_08889D94:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1524)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 5u));
    ctx.gpr[9] = (ctx.gpr[9] >> 27u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 5u));
    ctx.gpr[8] = (aot_gpr_4 < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1524)));
        goto L_08889DEC;
    }
    goto L_08889DBC;
L_08889DBC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_gpr_4 = (ctx.gpr[6] | 0u);
    aot_gpr_31 = (0x08889DD0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889DD0u) goto L_08889DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889DD0:
    aot_gpr_31 = (0x08889DD8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889DD8u) goto L_08889DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889DD8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1524)));
    goto L_08889DEC;
L_08889DEC:
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_5);
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1524)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 5u));
    ctx.gpr[9] = (ctx.gpr[9] >> 27u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 5u));
    ctx.gpr[8] = (aot_gpr_4 < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1524)));
        goto L_08889E74;
    }
    goto L_08889E3C;
L_08889E3C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[6] | 0u);
    aot_gpr_31 = (0x08889E54u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889E54u) goto L_08889E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889E54:
    aot_gpr_31 = (0x08889E5Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889E5Cu) goto L_08889E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889E5C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_5 = aot_run_words[1];
      ctx.gpr[6] = aot_run_words[2];
    }
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1524)));
    goto L_08889E74;
L_08889E74:
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_5);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
        goto L_08889F0C;
    }
    goto L_08889E94;
L_08889E94:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1528)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1524)));
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 5u));
    ctx.gpr[8] = (ctx.gpr[8] >> 27u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 5u));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1456), static_cast<std::uint8_t>(aot_gpr_2));
      if (branch_taken) {
          goto L_08889EDC;
      }
      goto L_08889EC0;
    }
L_08889EC0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_31 = (0x08889ECCu);
    aot_gpr_4 = (ctx.gpr[6] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889ECCu) goto L_08889ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889ECC:
    aot_gpr_31 = (0x08889ED4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889ED4u) goto L_08889ED4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889ED4:
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    goto L_08889EDC;
L_08889EDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1524)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1472));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1488), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1492), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08889F38;
      }
      goto L_08889F0C;
    }
L_08889F0C:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1524)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 5u));
    ctx.gpr[9] = (ctx.gpr[9] >> 27u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 5u));
    ctx.gpr[8] = (aot_gpr_4 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08889D94;
      }
      goto L_08889F34;
    }
L_08889F34:
    aot_gpr_2 = (0u | 0u);
    goto L_08889F38;
L_08889F38:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08889F48:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_31);
    aot_gpr_31 = (0x08889F6Cu);
    ctx.gpr[18] = (0u | 70u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08889F6Cu) goto L_08889F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08889F6C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08889F98;
      }
      goto L_08889F78;
    }
L_08889F78:
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
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1456)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08889FA0;
      }
      goto L_08889F90;
    }
L_08889F90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888A0A0;
      }
      goto L_08889F98;
    }
L_08889F98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0888A0C0;
      }
      goto L_08889FA0;
    }
L_08889FA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1492)));
    aot_gpr_5 = (0u | 23u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08889FC4;
      }
      goto L_08889FB0;
    }
L_08889FB0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08889FC4;
      }
      goto L_08889FC0;
    }
L_08889FC0:
    ctx.gpr[18] = (0u | 127u);
    goto L_08889FC4;
L_08889FC4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1398)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1492)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0888A01C;
      }
      goto L_08889FD4;
    }
L_08889FD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1492)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1472));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1488)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0888A028;
      }
      goto L_0888A014;
    }
L_0888A014:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1488)));
      if (branch_taken) {
          goto L_0888A034;
      }
      goto L_0888A01C;
    }
L_0888A01C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0888A0C0;
      }
      goto L_0888A028;
    }
L_0888A028:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1488), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1488)));
    goto L_0888A034;
L_0888A034:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[18]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
      if (branch_taken) {
          goto L_0888A064;
      }
      goto L_0888A058;
    }
L_0888A058:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_0888A064;
L_0888A064:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (0u | 40u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888A098;
      }
      goto L_0888A094;
    }
L_0888A094:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_0888A098;
L_0888A098:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0888A0C0;
      }
      goto L_0888A0A0;
    }
L_0888A0A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1504)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0888A0BC;
      }
      goto L_0888A0AC;
    }
L_0888A0AC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1504)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1504), aot_gpr_4);
    goto L_0888A0BC;
L_0888A0BC:
    aot_gpr_2 = (0u | 0u);
    goto L_0888A0C0;
L_0888A0C0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888A0D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (2232u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8332), aot_gpr_16);
    aot_gpr_5 = (0u | 512u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0888A104u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-23376));
    ctx.pc = 0x08B734C4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888A104:
    aot_gpr_4 = (2232u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8336), aot_gpr_2);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x0888A124u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-23356));
    ctx.pc = 0x08B7341Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888A124:
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8340), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23248));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888A144:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0888A158u);
    aot_gpr_4 = (aot_gpr_4 << 8u);
    goto L_0888A164;
L_0888A158:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888A164:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25912), aot_gpr_4);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888A16C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0888A17Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 588u, 0x0888A17Cu, 0x08AABBB4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 414u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 414u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 414u, 0x08AABBB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A17Cu) goto L_0888A17C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A17C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888A18C;
      }
      goto L_0888A184;
    }
L_0888A184:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888A1A4;
      }
      goto L_0888A18C;
    }
L_0888A18C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8336)));
    aot_gpr_31 = (0x0888A198u);
    aot_gpr_5 = (0u | 1u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888A198:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8356)));
    aot_gpr_31 = (0x0888A1A4u);
    aot_gpr_5 = (0u | 2u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888A1A4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888A1B0:
    aot_gpr_4 = (2244u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(27968))))));
    aot_gpr_5 = (0u | 82u);
    { const bool branch_taken = ctx.gpr[6] != aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(27968));
      if (branch_taken) {
          goto L_0888A1F0;
      }
      goto L_0888A1C4;
    }
L_0888A1C4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (0u | 73u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[6];
      if (branch_taken) {
          goto L_0888A1F0;
      }
      goto L_0888A1D4;
    }
L_0888A1D4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_5 = (0u | 70u);
    { const bool branch_taken = ctx.gpr[6] != aot_gpr_5;
      if (branch_taken) {
          goto L_0888A1F0;
      }
      goto L_0888A1E4;
    }
L_0888A1E4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0888A1F0;
      }
      goto L_0888A1F0;
    }
L_0888A1F0:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888A1F8:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888A200:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888A208:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2237u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1008));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    aot_gpr_5 = (0u | 111u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0888A240;
      }
      goto L_0888A230;
    }
L_0888A230:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A248;
      }
      goto L_0888A238;
    }
L_0888A238:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888A288;
      }
      goto L_0888A240;
    }
L_0888A240:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0888A2FC;
      }
      goto L_0888A248;
    }
L_0888A248:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888A288;
      }
      goto L_0888A250;
    }
L_0888A250:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_0888A278;
      }
      goto L_0888A260;
    }
L_0888A260:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x0888A270u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 607u, 0x0888A270u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A270u) goto L_0888A270;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A270:
    aot_gpr_31 = (0x0888A278u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25904));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A278u) goto L_0888A278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888A278:
    aot_gpr_31 = (0x0888A280u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 609u, 0x0888A280u, 0x0882E9B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 611u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 611u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A280u) goto L_0888A280;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A280:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888A29C;
      }
      goto L_0888A288;
    }
L_0888A288:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A2A4;
      }
      goto L_0888A294;
    }
L_0888A294:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888A2B8;
      }
      goto L_0888A29C;
    }
L_0888A29C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0888A2FC;
      }
      goto L_0888A2A4;
    }
L_0888A2A4:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0888A2B8;
      }
      goto L_0888A2AC;
    }
L_0888A2AC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1456)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0888A2CC;
      }
      goto L_0888A2B8;
    }
L_0888A2B8:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 33 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 53 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A2D4;
      }
      goto L_0888A2C4;
    }
L_0888A2C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888A2DC;
      }
      goto L_0888A2CC;
    }
L_0888A2CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0888A2FC;
      }
      goto L_0888A2D4;
    }
L_0888A2D4:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0888A2F0;
      }
      goto L_0888A2DC;
    }
L_0888A2DC:
    aot_gpr_5 = (0u | 109u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0888A2F8;
      }
      goto L_0888A2E8;
    }
L_0888A2E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0888A2FC;
      }
      goto L_0888A2F0;
    }
L_0888A2F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0888A2FC;
      }
      goto L_0888A2F8;
    }
L_0888A2F8:
    aot_gpr_2 = (0u | 0u);
    goto L_0888A2FC;
L_0888A2FC:
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
L_0888A310:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888A660;
      }
      goto L_0888A33C;
    }
L_0888A33C:
    aot_gpr_31 = (0x0888A344u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A344u) goto L_0888A344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888A344:
    aot_gpr_31 = (0x0888A34Cu);
    goto L_0888A0D8;
L_0888A34C:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0888A35Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-23336));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 628u, 0x0888A35Cu, 0x08938F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 250u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 250u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A35Cu) goto L_0888A35C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A35C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0888A388;
      }
      goto L_0888A368;
    }
L_0888A368:
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 18432u);
    aot_gpr_31 = (0x0888A37Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-23432));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 630u, 0x0888A37Cu, 0x08939050u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 270u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 270u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A37Cu) goto L_0888A37C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A37C:
    aot_gpr_31 = (0x0888A384u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 631u, 0x0888A384u, 0x08938F40u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 254u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 254u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A384u) goto L_0888A384;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A384:
    ctx.gpr[17] = (0u | 1u);
    goto L_0888A388;
L_0888A388:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 112 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1380), static_cast<std::uint8_t>(0u));
        goto L_0888A5C8;
    }
    goto L_0888A398;
L_0888A398:
    aot_gpr_31 = (0x0888A3A0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A3A0u) goto L_0888A3A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888A3A0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25836)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25840)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0888A3B4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A3B4u) goto L_0888A3B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888A3B4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] << 10u);
      if (branch_taken) {
          goto L_0888A47C;
      }
      goto L_0888A3D0;
    }
L_0888A3D0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (17235u << 16u);
      if (branch_taken) {
          goto L_0888A47C;
      }
      goto L_0888A3DC;
    }
L_0888A3DC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18756));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (20527u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14896));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (18271u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20563));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (12101u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(19777));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (17490u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21333));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (47u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21065));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (ctx.gpr[19] << 3u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-552));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_31 = (0x0888A440u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 638u, 0x0888A440u, 0x08B58238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 45u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 45u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A440u) goto L_0888A440;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A440:
    aot_gpr_31 = (0x0888A448u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 639u, 0x0888A448u, 0x08938F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 250u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 250u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A448u) goto L_0888A448;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A448:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0888A47C;
      }
      goto L_0888A454;
    }
L_0888A454:
    aot_gpr_4 = (ctx.gpr[19] << 11u);
    aot_gpr_5 = (0u + aot_gpr_4);
    aot_gpr_4 = (2240u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-23432));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0888A474u);
    ctx.gpr[6] = (0u | 2048u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 641u, 0x0888A474u, 0x08939050u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 270u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 270u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A474u) goto L_0888A474;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A474:
    aot_gpr_31 = (0x0888A47Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 642u, 0x0888A47Cu, 0x08938F40u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 254u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 254u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A47Cu) goto L_0888A47C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A47C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2240u << 16u);
      if (branch_taken) {
          goto L_0888A4B8;
      }
      goto L_0888A488;
    }
L_0888A488:
    aot_gpr_4 = (ctx.gpr[19] << 11u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-23432));
    aot_gpr_4 = (0u + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_5 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(24), aot_gpr_4);
      if (branch_taken) {
          goto L_0888A4D0;
      }
      goto L_0888A4B8;
    }
L_0888A4B8:
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (0u | 100u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_gpr_5);
    goto L_0888A4D0;
L_0888A4D0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 5u);
      if (branch_taken) {
          goto L_0888A52C;
      }
      goto L_0888A4DC;
    }
L_0888A4DC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_5 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26320)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(28), aot_gpr_4);
      if (branch_taken) {
          goto L_0888A59C;
      }
      goto L_0888A52C;
    }
L_0888A52C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 33 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 5u);
      if (branch_taken) {
          goto L_0888A588;
      }
      goto L_0888A538;
    }
L_0888A538:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_5 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26320)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(28), aot_gpr_4);
      if (branch_taken) {
          goto L_0888A59C;
      }
      goto L_0888A588;
    }
L_0888A588:
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), 0u);
    goto L_0888A59C;
L_0888A59C:
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 112 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888A398;
      }
      goto L_0888A5C4;
    }
L_0888A5C4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1380), static_cast<std::uint8_t>(0u));
    goto L_0888A5C8;
L_0888A5C8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1384), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1389), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1392), aot_gpr_4);
    aot_gpr_5 = (0u | 113u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1396), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 4u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1399), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1400), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1401), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1402), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 113u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1404), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1405), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1406), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1407), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1409), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1410), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1411), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1412), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1536), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1540), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1544), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1548), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x0888A660u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1552), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 653u, 0x0888A660u, 0x08AAB8F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 371u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 371u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 371u, 0x08AAB8F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A660u) goto L_0888A660;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A660:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0888A668;
      }
      goto L_0888A668;
    }
L_0888A668:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888A688:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888A6B8;
      }
      goto L_0888A6AC;
    }
L_0888A6AC:
    aot_gpr_31 = (0x0888A6B4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 657u, 0x0888A6B4u, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A6B4u) goto L_0888A6B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A6B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888A6B8;
L_0888A6B8:
    aot_gpr_31 = (0x0888A6C0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 252u, 0x088B5A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A6C0u) goto L_0888A6C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888A6C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1544)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_0888A768;
      }
      goto L_0888A6CC;
    }
L_0888A6CC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0888A6D8u);
    aot_gpr_5 = (0u | 110u);
    goto L_088888D8;
L_0888A6D8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0888A6E8;
      }
      goto L_0888A6E0;
    }
L_0888A6E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1544), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0888A768;
      }
      goto L_0888A6E8;
    }
L_0888A6E8:
    aot_gpr_4 = (0u | 9u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1399)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888A728;
      }
      goto L_0888A6FC;
    }
L_0888A6FC:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0888A70Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 665u, 0x0888A70Cu, 0x08A063CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 565u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 565u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A70Cu) goto L_0888A70C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A70C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 110u);
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_31 = (0x0888A720u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 666u, 0x0888A720u, 0x08A06360u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 559u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 559u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 559u, 0x08A06360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A720u) goto L_0888A720;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A720:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888A74C;
      }
      goto L_0888A728;
    }
L_0888A728:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
    aot_gpr_5 = (0u | 110u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0888A74C;
      }
      goto L_0888A738;
    }
L_0888A738:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 110u);
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_31 = (0x0888A74Cu);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 669u, 0x0888A74Cu, 0x08A06360u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 559u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 559u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 559u, 0x08A06360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A74Cu) goto L_0888A74C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A74C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1544)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1544), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 1001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888A768;
      }
      goto L_0888A764;
    }
L_0888A764:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1544), ctx.gpr[17]);
    goto L_0888A768;
L_0888A768:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888A780;
      }
      goto L_0888A774;
    }
L_0888A774:
    aot_gpr_31 = (0x0888A77Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 673u, 0x0888A77Cu, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A77Cu) goto L_0888A77C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A77C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888A780;
L_0888A780:
    aot_gpr_31 = (0x0888A788u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 484u, 0x088B6944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A788u) goto L_0888A788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888A788:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888A7B8;
      }
      goto L_0888A790;
    }
L_0888A790:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888A7A8;
      }
      goto L_0888A79C;
    }
L_0888A79C:
    aot_gpr_31 = (0x0888A7A4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 678u, 0x0888A7A4u, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A7A4u) goto L_0888A7A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A7A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888A7A8;
L_0888A7A8:
    aot_gpr_31 = (0x0888A7B0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A7B0u) goto L_0888A7B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888A7B0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888A7D0;
      }
      goto L_0888A7B8;
    }
L_0888A7B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
    aot_gpr_5 = (0u | 111u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0888A7D0;
      }
      goto L_0888A7C8;
    }
L_0888A7C8:
    aot_gpr_31 = (0x0888A7D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0888847C;
L_0888A7D0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888A800;
      }
      goto L_0888A7DC;
    }
L_0888A7DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1384)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1380), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0888A7FC;
      }
      goto L_0888A7F0;
    }
L_0888A7F0:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0888A7FC;
L_0888A7FC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1452), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0888A800;
L_0888A800:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A80C;
    }
L_0888A80C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A818;
    }
L_0888A818:
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1410)));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1400)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0888A834;
      }
      goto L_0888A82C;
    }
L_0888A82C:
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1399)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1411), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0888A834;
L_0888A834:
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1411)));
    { const bool branch_taken = ctx.gpr[6] == aot_gpr_5;
      if (branch_taken) {
          goto L_0888A944;
      }
      goto L_0888A840;
    }
L_0888A840:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1410), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1409)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0888A870;
      }
      goto L_0888A854;
    }
L_0888A854:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0888A870;
      }
      goto L_0888A860;
    }
L_0888A860:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(26342)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0888A870;
      }
      goto L_0888A86C;
    }
L_0888A86C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1409), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_0888A870;
L_0888A870:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26344)));
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888A8A0;
      }
      goto L_0888A880;
    }
L_0888A880:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    aot_gpr_31 = (0x0888A890u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 698u, 0x0888A890u, 0x08AABB88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A890u) goto L_0888A890;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A890:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (0u | 113u);
      if (branch_taken) {
          goto L_0888A8A8;
      }
      goto L_0888A898;
    }
L_0888A898:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25832), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0888A904;
      }
      goto L_0888A8A0;
    }
L_0888A8A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A8A8;
    }
L_0888A8A8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_0888A8F4;
      }
      goto L_0888A8B4;
    }
L_0888A8B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25832)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888A8F4;
      }
      goto L_0888A8C0;
    }
L_0888A8C0:
    aot_gpr_31 = (0x0888A8C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08889CF0;
L_0888A8C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    aot_gpr_5 = (2237u << 16u);
    ctx.gpr[6] = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23248));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25832), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_0888A8F4;
L_0888A8F4:
    aot_gpr_31 = (0x0888A8FCu);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 706u, 0x0888A8FCu, 0x08AABAF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 404u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 404u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888A8FCu) goto L_0888A8FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888A8FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A904;
    }
L_0888A904:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1411)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1410), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1400), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1402), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1404), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1405), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 113u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1412)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0888A93C;
      }
      goto L_0888A934;
    }
L_0888A934:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A93C;
    }
L_0888A93C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1412), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A944;
    }
L_0888A944:
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_0888A964;
      }
      goto L_0888A950;
    }
L_0888A950:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(26342)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888A964;
      }
      goto L_0888A95C;
    }
L_0888A95C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0888A984;
      }
      goto L_0888A964;
    }
L_0888A964:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A990;
      }
      goto L_0888A96C;
    }
L_0888A96C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_0888A9BC;
      }
      goto L_0888A974;
    }
L_0888A974:
    aot_gpr_31 = (0x0888A97Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0888B67C;
L_0888A97C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A984;
    }
L_0888A984:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1400), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A990;
    }
L_0888A990:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A9C4;
      }
      goto L_0888A998;
    }
L_0888A998:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888A9BC;
      }
      goto L_0888A9A0;
    }
L_0888A9A0:
    aot_gpr_4 = (0u | 127u);
    aot_gpr_5 = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    aot_gpr_31 = (0x0888A9B4u);
    ctx.gpr[7] = (0u | 1u);
    goto L_0888A144;
L_0888A9B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A9BC;
    }
L_0888A9BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888A9CC;
      }
      goto L_0888A9C4;
    }
L_0888A9C4:
    aot_gpr_31 = (0x0888A9CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0888BAD0;
L_0888A9CC:
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
L_0888A9E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1389), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1392), aot_gpr_5);
    ctx.gpr[6] = (0u | 113u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1401), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1402), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 113u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1404), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1405), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1406), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1407), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1409), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1410), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1412), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1508)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1508), aot_gpr_5);
    ctx.gpr[6] = (2232u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23496));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[10]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[19] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0888AAC0;
      }
      goto L_0888AABC;
    }
L_0888AABC:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1508), 0u);
    goto L_0888AAC0;
L_0888AAC0:
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (2237u << 16u);
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (20224u << 16u);
    ctx.gpr[21] = (0u | 5u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_16 = (ctx.gpr[19] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[22] = (32768u << 16u);
    goto L_0888AAF0;
L_0888AAF0:
    aot_gpr_31 = (0x0888AAF8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AAF8u) goto L_0888AAF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888AAF8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25836)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25840)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0888AB0Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AB0Cu) goto L_0888AB0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888AB0C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0888AB28u);
    ctx.gpr[18] = (ctx.gpr[18] << 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AB28u) goto L_0888AB28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888AB28:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[20];
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    if (static_cast<std::int32_t>(aot_gpr_4) < 0) {
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[24];
        goto L_0888AB48;
    }
    goto L_0888AB48;
L_0888AB48:
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[26];
        goto L_0888AB68;
    }
    goto L_0888AB5C;
L_0888AB5C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0888AB74;
      }
      goto L_0888AB68;
    }
L_0888AB68:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[22]);
    goto L_0888AB74;
L_0888AB74:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[20]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(26320)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[23]);
    aot_gpr_5 = (ctx.gpr[6] + aot_gpr_5);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (ctx.hi);
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0888ABB8;
      }
      goto L_0888ABB0;
    }
L_0888ABB0:
    { const std::uint32_t dividend = ctx.gpr[18]; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (ctx.hi);
    goto L_0888ABB8;
L_0888ABB8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0888AAF0;
      }
      goto L_0888ABD0;
    }
L_0888ABD0:
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_29 | 0u);
    goto L_0888ABDC;
L_0888ABDC:
    aot_gpr_31 = (0x0888ABE4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 740u, 0x0888ABE4u, 0x0899142Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 292u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 292u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 292u, 0x0899142Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888ABE4u) goto L_0888ABE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888ABE4:
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0888AC04;
      }
      goto L_0888ABEC;
    }
L_0888ABEC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0888AC04;
      }
      goto L_0888AC00;
    }
L_0888AC00:
    aot_gpr_16 = (0u | 1u);
    goto L_0888AC04;
L_0888AC04:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888ABDC;
      }
      goto L_0888AC14;
    }
L_0888AC14:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_0888AC44;
      }
      goto L_0888AC1C;
    }
L_0888AC1C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_0888AC28;
L_0888AC28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1416), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888AC28;
      }
      goto L_0888AC44;
    }
L_0888AC44:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1552), 0u);
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[23] = aot_run_words[11];
      aot_gpr_31 = aot_run_words[12];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888AC84:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-224));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(204), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0888AD00;
      }
      goto L_0888ACBC;
    }
L_0888ACBC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888AD00;
      }
      goto L_0888ACCC;
    }
L_0888ACCC:
    aot_gpr_31 = (0x0888ACD4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0888876C;
L_0888ACD4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888ACDC;
    }
L_0888ACDC:
    aot_gpr_31 = (0x0888ACE4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 753u, 0x0888ACE4u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888ACE4u) goto L_0888ACE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888ACE4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888AD0C;
      }
      goto L_0888ACEC;
    }
L_0888ACEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888AE10;
      }
      goto L_0888ACF4;
    }
L_0888ACF4:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888AD00;
    }
L_0888AD00:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888AD0C;
    }
L_0888AD0C:
    aot_gpr_31 = (0x0888AD14u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 758u, 0x0888AD14u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AD14u) goto L_0888AD14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888AD14:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AD24;
    }
L_0888AD24:
    aot_gpr_31 = (0x0888AD2Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 760u, 0x0888AD2Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AD2Cu) goto L_0888AD2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888AD2C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[17] = (0u | 261u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AD3C;
    }
L_0888AD3C:
    aot_gpr_31 = (0x0888AD44u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 762u, 0x0888AD44u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AD44u) goto L_0888AD44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888AD44:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 219u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AD54;
    }
L_0888AD54:
    aot_gpr_31 = (0x0888AD5Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 764u, 0x0888AD5Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AD5Cu) goto L_0888AD5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888AD5C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 207u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AD6C;
    }
L_0888AD6C:
    aot_gpr_31 = (0x0888AD74u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 766u, 0x0888AD74u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AD74u) goto L_0888AD74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888AD74:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 234u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AD84;
    }
L_0888AD84:
    aot_gpr_31 = (0x0888AD8Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 768u, 0x0888AD8Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AD8Cu) goto L_0888AD8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888AD8C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 191u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AD9C;
    }
L_0888AD9C:
    aot_gpr_31 = (0x0888ADA4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 770u, 0x0888ADA4u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888ADA4u) goto L_0888ADA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888ADA4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 279u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888ADB4;
    }
L_0888ADB4:
    aot_gpr_31 = (0x0888ADBCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 772u, 0x0888ADBCu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888ADBCu) goto L_0888ADBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888ADBC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 189u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888ADCC;
    }
L_0888ADCC:
    aot_gpr_31 = (0x0888ADD4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 774u, 0x0888ADD4u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888ADD4u) goto L_0888ADD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888ADD4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 194u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888ADE4;
    }
L_0888ADE4:
    aot_gpr_31 = (0x0888ADECu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 776u, 0x0888ADECu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888ADECu) goto L_0888ADEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888ADEC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888ADF8;
    }
L_0888ADF8:
    aot_gpr_31 = (0x0888AE00u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 778u, 0x0888AE00u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AE00u) goto L_0888AE00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888AE00:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 275u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0888ACF4;
      }
      goto L_0888AE10;
    }
L_0888AE10:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x0888AE1Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 780u, 0x0888AE1Cu, 0x088C63C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 454u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 454u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AE1Cu) goto L_0888AE1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888AE1C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0888AE40;
      }
      goto L_0888AE28;
    }
L_0888AE28:
    ctx.gpr[17] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888AE4C;
      }
      goto L_0888AE38;
    }
L_0888AE38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888AE58;
      }
      goto L_0888AE40;
    }
L_0888AE40:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888AE4C;
    }
L_0888AE4C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888AE58;
      }
      goto L_0888AE54;
    }
L_0888AE54:
    ctx.gpr[17] = (0u | 9u);
    goto L_0888AE58;
L_0888AE58:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 111u);
      if (branch_taken) {
          goto L_0888AE6C;
      }
      goto L_0888AE64;
    }
L_0888AE64:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_0888AE80;
      }
      goto L_0888AE6C;
    }
L_0888AE6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
      if (branch_taken) {
          goto L_0888AE8C;
      }
      goto L_0888AE78;
    }
L_0888AE78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888AEC8;
      }
      goto L_0888AE80;
    }
L_0888AE80:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888AE8C;
    }
L_0888AE8C:
    ctx.gpr[6] = (0u | 111u);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[6];
      if (branch_taken) {
          goto L_0888AEC8;
      }
      goto L_0888AE98;
    }
L_0888AE98:
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888AECC;
      }
      goto L_0888AEAC;
    }
L_0888AEAC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-10));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888AEAC;
      }
      goto L_0888AEC0;
    }
L_0888AEC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888AECC;
      }
      goto L_0888AEC8;
    }
L_0888AEC8:
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    goto L_0888AECC;
L_0888AECC:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 24 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888AF04;
      }
      goto L_0888AED8;
    }
L_0888AED8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888AF4C;
      }
      goto L_0888AEE0;
    }
L_0888AEE0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888AF18;
      }
      goto L_0888AEE8;
    }
L_0888AEE8:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23152)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    jump_target = ctx.gpr[1];
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888AF04:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u | 111u);
      if (branch_taken) {
          goto L_0888AF30;
      }
      goto L_0888AF0C;
    }
L_0888AF0C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 30 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888AF4C;
      }
      goto L_0888AF18;
    }
L_0888AF18:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0888B280;
      }
      goto L_0888AF24;
    }
L_0888AF24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25748));
      if (branch_taken) {
          goto L_0888B2AC;
      }
      goto L_0888AF2C;
    }
L_0888AF2C:
    ctx.gpr[18] = (0u | 111u);
    goto L_0888AF30;
L_0888AF30:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
      if (branch_taken) {
          goto L_0888AF4C;
      }
      goto L_0888AF38;
    }
L_0888AF38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888B1DC;
      }
      goto L_0888AF44;
    }
L_0888AF44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888B1E8;
      }
      goto L_0888AF4C;
    }
L_0888AF4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888AF54;
    }
L_0888AF54:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25820));
      if (branch_taken) {
          goto L_0888AF88;
      }
      goto L_0888AF5C;
    }
L_0888AF5C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0888AF68u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 811u, 0x0888AF68u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AF68u) goto L_0888AF68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888AF68:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0888AF80;
      }
      goto L_0888AF74;
    }
L_0888AF74:
    aot_gpr_31 = (0x0888AF7Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AF7Cu) goto L_0888AF7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888AF7C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888AF80;
L_0888AF80:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25820));
    goto L_0888AF88;
L_0888AF88:
    aot_gpr_31 = (0x0888AF90u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 816u, 0x0888AF90u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AF90u) goto L_0888AF90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888AF90:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888AF9C;
    }
L_0888AF9C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25812));
      if (branch_taken) {
          goto L_0888AFD0;
      }
      goto L_0888AFA4;
    }
L_0888AFA4:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0888AFB0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 819u, 0x0888AFB0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AFB0u) goto L_0888AFB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888AFB0:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0888AFC8;
      }
      goto L_0888AFBC;
    }
L_0888AFBC:
    aot_gpr_31 = (0x0888AFC4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AFC4u) goto L_0888AFC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888AFC4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888AFC8;
L_0888AFC8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25812));
    goto L_0888AFD0;
L_0888AFD0:
    aot_gpr_31 = (0x0888AFD8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 824u, 0x0888AFD8u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AFD8u) goto L_0888AFD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888AFD8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888AFE4;
    }
L_0888AFE4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25804));
      if (branch_taken) {
          goto L_0888B018;
      }
      goto L_0888AFEC;
    }
L_0888AFEC:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0888AFF8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 827u, 0x0888AFF8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888AFF8u) goto L_0888AFF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888AFF8:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0888B010;
      }
      goto L_0888B004;
    }
L_0888B004:
    aot_gpr_31 = (0x0888B00Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B00Cu) goto L_0888B00C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B00C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B010;
L_0888B010:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25804));
    goto L_0888B018;
L_0888B018:
    aot_gpr_31 = (0x0888B020u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 832u, 0x0888B020u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B020u) goto L_0888B020;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B020:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B02C;
    }
L_0888B02C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25796));
      if (branch_taken) {
          goto L_0888B060;
      }
      goto L_0888B034;
    }
L_0888B034:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0888B040u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 835u, 0x0888B040u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B040u) goto L_0888B040;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B040:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0888B058;
      }
      goto L_0888B04C;
    }
L_0888B04C:
    aot_gpr_31 = (0x0888B054u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B054u) goto L_0888B054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B054:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B058;
L_0888B058:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25796));
    goto L_0888B060;
L_0888B060:
    aot_gpr_31 = (0x0888B068u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 840u, 0x0888B068u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B068u) goto L_0888B068;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B068:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B074;
    }
L_0888B074:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25788));
      if (branch_taken) {
          goto L_0888B0A8;
      }
      goto L_0888B07C;
    }
L_0888B07C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0888B088u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 843u, 0x0888B088u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B088u) goto L_0888B088;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B088:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0888B0A0;
      }
      goto L_0888B094;
    }
L_0888B094:
    aot_gpr_31 = (0x0888B09Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B09Cu) goto L_0888B09C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B09C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B0A0;
L_0888B0A0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25788));
    goto L_0888B0A8;
L_0888B0A8:
    aot_gpr_31 = (0x0888B0B0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 848u, 0x0888B0B0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B0B0u) goto L_0888B0B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B0B0:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B0BC;
    }
L_0888B0BC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25780));
      if (branch_taken) {
          goto L_0888B0F0;
      }
      goto L_0888B0C4;
    }
L_0888B0C4:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0888B0D0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 851u, 0x0888B0D0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B0D0u) goto L_0888B0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B0D0:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0888B0E8;
      }
      goto L_0888B0DC;
    }
L_0888B0DC:
    aot_gpr_31 = (0x0888B0E4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B0E4u) goto L_0888B0E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B0E4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B0E8;
L_0888B0E8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25780));
    goto L_0888B0F0;
L_0888B0F0:
    aot_gpr_31 = (0x0888B0F8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 856u, 0x0888B0F8u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B0F8u) goto L_0888B0F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B0F8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B104;
    }
L_0888B104:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25772));
      if (branch_taken) {
          goto L_0888B138;
      }
      goto L_0888B10C;
    }
L_0888B10C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0888B118u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 859u, 0x0888B118u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B118u) goto L_0888B118;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B118:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0888B130;
      }
      goto L_0888B124;
    }
L_0888B124:
    aot_gpr_31 = (0x0888B12Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B12Cu) goto L_0888B12C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B12C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B130;
L_0888B130:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25772));
    goto L_0888B138;
L_0888B138:
    aot_gpr_31 = (0x0888B140u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 864u, 0x0888B140u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B140u) goto L_0888B140;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B140:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B14C;
    }
L_0888B14C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25764));
      if (branch_taken) {
          goto L_0888B180;
      }
      goto L_0888B154;
    }
L_0888B154:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0888B160u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 867u, 0x0888B160u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B160u) goto L_0888B160;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B160:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0888B178;
      }
      goto L_0888B16C;
    }
L_0888B16C:
    aot_gpr_31 = (0x0888B174u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B174u) goto L_0888B174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B174:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B178;
L_0888B178:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25764));
    goto L_0888B180;
L_0888B180:
    aot_gpr_31 = (0x0888B188u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 872u, 0x0888B188u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B188u) goto L_0888B188;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B188:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B194;
    }
L_0888B194:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25756));
      if (branch_taken) {
          goto L_0888B1C8;
      }
      goto L_0888B19C;
    }
L_0888B19C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0888B1A8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 875u, 0x0888B1A8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B1A8u) goto L_0888B1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B1A8:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0888B1C0;
      }
      goto L_0888B1B4;
    }
L_0888B1B4:
    aot_gpr_31 = (0x0888B1BCu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B1BCu) goto L_0888B1BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B1BC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B1C0;
L_0888B1C0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25756));
    goto L_0888B1C8;
L_0888B1C8:
    aot_gpr_31 = (0x0888B1D0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 880u, 0x0888B1D0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B1D0u) goto L_0888B1D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B1D0:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B1DC;
    }
L_0888B1DC:
    aot_gpr_31 = (0x0888B1E4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 882u, 0x0888B1E4u, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B1E4u) goto L_0888B1E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B1E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888B1E8;
L_0888B1E8:
    aot_gpr_31 = (0x0888B1F0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 484u, 0x088B6944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B1F0u) goto L_0888B1F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B1F0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888B220;
      }
      goto L_0888B1F8;
    }
L_0888B1F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888B210;
      }
      goto L_0888B204;
    }
L_0888B204:
    aot_gpr_31 = (0x0888B20Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 887u, 0x0888B20Cu, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B20Cu) goto L_0888B20C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B20C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888B210;
L_0888B210:
    aot_gpr_31 = (0x0888B218u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B218u) goto L_0888B218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B218:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888B250;
      }
      goto L_0888B220;
    }
L_0888B220:
    ctx.gpr[17] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
      if (branch_taken) {
          goto L_0888B238;
      }
      goto L_0888B22C;
    }
L_0888B22C:
    aot_gpr_31 = (0x0888B234u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0888847C;
L_0888B234:
    ctx.gpr[17] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
    goto L_0888B238;
L_0888B238:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
      if (branch_taken) {
          goto L_0888B248;
      }
      goto L_0888B240;
    }
L_0888B240:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888AF18;
      }
      goto L_0888B248;
    }
L_0888B248:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B250;
    }
L_0888B250:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0888B26C;
      }
      goto L_0888B25C;
    }
L_0888B25C:
    aot_gpr_31 = (0x0888B264u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 898u, 0x0888B264u, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B264u) goto L_0888B264;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B264:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_0888B26C;
L_0888B26C:
    aot_gpr_31 = (0x0888B274u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 440u, 0x088B6698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B274u) goto L_0888B274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B274:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0888B2BC;
      }
      goto L_0888B280;
    }
L_0888B280:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0888B28Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 902u, 0x0888B28Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B28Cu) goto L_0888B28C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B28C:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0888B2A4;
      }
      goto L_0888B298;
    }
L_0888B298:
    aot_gpr_31 = (0x0888B2A0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B2A0u) goto L_0888B2A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B2A0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0888B2A4;
L_0888B2A4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25748));
    goto L_0888B2AC;
L_0888B2AC:
    aot_gpr_31 = (0x0888B2B4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 907u, 0x0888B2B4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B2B4u) goto L_0888B2B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B2B4:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0888B2BC;
L_0888B2BC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888B2D0;
      }
      goto L_0888B2C4;
    }
L_0888B2C4:
    aot_gpr_31 = (0x0888B2CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B2CCu) goto L_0888B2CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B2CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0888B2D0;
L_0888B2D0:
    aot_gpr_31 = (0x0888B2D8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 912u, 0x0888B2D8u, 0x089BACE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 607u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 607u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 607u, 0x089BACE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B2D8u) goto L_0888B2D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B2D8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888B31C;
      }
      goto L_0888B2E0;
    }
L_0888B2E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25822)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_0888B304;
      }
      goto L_0888B2EC;
    }
L_0888B2EC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 113u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0888B334;
      }
      goto L_0888B2FC;
    }
L_0888B2FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888B33C;
      }
      goto L_0888B304;
    }
L_0888B304:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25822), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B31C;
    }
L_0888B31C:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25822), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B334;
    }
L_0888B334:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1516), aot_gpr_4);
    goto L_0888B33C;
L_0888B33C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25828)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0888B34Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08889C3C;
L_0888B34C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0888B37C;
      }
      goto L_0888B354;
    }
L_0888B354:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888B370;
      }
      goto L_0888B360;
    }
L_0888B360:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824)));
      if (branch_taken) {
          goto L_0888B404;
      }
      goto L_0888B370;
    }
L_0888B370:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B37C;
    }
L_0888B37C:
    aot_gpr_4 = (0u | 111u);
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25828), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0888B3B4;
      }
      goto L_0888B388;
    }
L_0888B388:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888B3A0;
      }
      goto L_0888B394;
    }
L_0888B394:
    aot_gpr_31 = (0x0888B39Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 927u, 0x0888B39Cu, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B39Cu) goto L_0888B39C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B39C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888B3A0;
L_0888B3A0:
    aot_gpr_31 = (0x0888B3A8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 483u, 0x088B693Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B3A8u) goto L_0888B3A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B3A8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_2);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1516)));
      if (branch_taken) {
          goto L_0888B3C0;
      }
      goto L_0888B3B4;
    }
L_0888B3B4:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1516)));
    goto L_0888B3C0;
L_0888B3C0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888B3E4;
      }
      goto L_0888B3C8;
    }
L_0888B3C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888B3F0;
      }
      goto L_0888B3D4;
    }
L_0888B3D4:
    aot_gpr_4 = (0u | 60u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824)));
      if (branch_taken) {
          goto L_0888B404;
      }
      goto L_0888B3E4;
    }
L_0888B3E4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1516), aot_gpr_4);
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B3F0;
    }
L_0888B3F0:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B404;
    }
L_0888B404:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888B418;
      }
      goto L_0888B40C;
    }
L_0888B40C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888B47C;
      }
      goto L_0888B418;
    }
L_0888B418:
    aot_gpr_31 = (0x0888B420u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B420u) goto L_0888B420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B420:
    aot_gpr_31 = (0x0888B428u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_16, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B428u) goto L_0888B428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B428:
    aot_gpr_31 = (0x0888B430u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B430u) goto L_0888B430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B430:
    aot_gpr_4 = (0u | 77u);
    aot_gpr_5 = (0u | 155u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 210u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x0888B458u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B458u) goto L_0888B458;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B458:
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0888B468u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 943u, 0x0888B468u, 0x08887B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 851u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 851u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B468u) goto L_0888B468;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B468:
    aot_gpr_4 = (0u | 111u);
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_0888B490;
      }
      goto L_0888B474;
    }
L_0888B474:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888B610;
      }
      goto L_0888B47C;
    }
L_0888B47C:
    aot_gpr_5 = (0u | 60u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25823), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B490;
    }
L_0888B490:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(156));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25740));
    aot_gpr_31 = (0x0888B4A0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 947u, 0x0888B4A0u, 0x08887B04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 843u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 843u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B4A0u) goto L_0888B4A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B4A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_gpr_5 = (17948u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(140));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0888B4D4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B4D4u) goto L_0888B4D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B4D4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0888B4E8u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 949u, 0x0888B4E8u, 0x08B0C6DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 93u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 93u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 93u, 0x08B0C6DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B4E8u) goto L_0888B4E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B4E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_31 = (0x0888B50Cu);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B50Cu) goto L_0888B50C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B50C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0888B524u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 951u, 0x0888B524u, 0x08B0C660u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B524u) goto L_0888B524;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B524:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-110));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_0888B5D8;
      }
      goto L_0888B538;
    }
L_0888B538:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_0888B5D8;
      }
      goto L_0888B540;
    }
L_0888B540:
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(164));
    aot_gpr_5 = (17366u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17287u << 16u);
    aot_gpr_31 = (0x0888B564u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B564u) goto L_0888B564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B564:
    aot_gpr_31 = (0x0888B56Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 955u, 0x0888B56Cu, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B56Cu) goto L_0888B56C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B56C:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_0888B574;
L_0888B574:
    ctx.gpr[6] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(34)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(180), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0888B574;
      }
      goto L_0888B58C;
    }
L_0888B58C:
    aot_gpr_4 = (0u | 32u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (aot_gpr_29 | 0u);
    goto L_0888B5A0;
L_0888B5A0:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[6] + static_cast<std::uint32_t>(180)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[6] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0888B5A0;
      }
      goto L_0888B5BC;
    }
L_0888B5BC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(34));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x0888B5D0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 960u, 0x0888B5D0u, 0x08887B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 851u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 851u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B5D0u) goto L_0888B5D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B5D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888B610;
      }
      goto L_0888B5D8;
    }
L_0888B5D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888B5F0;
      }
      goto L_0888B5E4;
    }
L_0888B5E4:
    aot_gpr_31 = (0x0888B5ECu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 963u, 0x0888B5ECu, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B5ECu) goto L_0888B5EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B5EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888B5F0;
L_0888B5F0:
    aot_gpr_31 = (0x0888B5F8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 434u, 0x088B6620u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B5F8u) goto L_0888B5F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B5F8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 65 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888B610;
      }
      goto L_0888B604;
    }
L_0888B604:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0888B610u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 967u, 0x0888B610u, 0x08887B30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 846u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 846u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 846u, 0x08887B30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B610u) goto L_0888B610;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B610:
    aot_gpr_31 = (0x0888B618u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 968u, 0x0888B618u, 0x08B0C748u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 96u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 96u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 96u, 0x08B0C748u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B618u) goto L_0888B618;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B618:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0888B624u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 969u, 0x0888B624u, 0x08AFD8D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 283u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 283u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 283u, 0x08AFD8D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B624u) goto L_0888B624;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B624:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888B648;
      }
      goto L_0888B630;
    }
L_0888B630:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0888B640u);
    ctx.gpr[6] = (0u | 48u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B640u) goto L_0888B640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B640:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888B658;
      }
      goto L_0888B648;
    }
L_0888B648:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0888B658u);
    ctx.gpr[6] = (0u | 7u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B658u) goto L_0888B658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B658:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888B67C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888B714;
      }
      goto L_0888B6A0;
    }
L_0888B6A0:
    aot_gpr_31 = (0x0888B6A8u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 976u, 0x0888B6A8u, 0x08AABAF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 404u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 404u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B6A8u) goto L_0888B6A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B6A8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23248));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x0888B6BCu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 977u, 0x0888B6BCu, 0x08AABB88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B6BCu) goto L_0888B6BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B6BC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888B6F8;
      }
      goto L_0888B6C4;
    }
L_0888B6C4:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25948), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 113u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 113u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[6] = (0u | 110u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0888B708;
      }
      goto L_0888B6F0;
    }
L_0888B6F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888B70C;
      }
      goto L_0888B6F8;
    }
L_0888B6F8:
    aot_gpr_31 = (0x0888B700u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088897E0;
L_0888B700:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B708;
    }
L_0888B708:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0888B70C;
L_0888B70C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888B734;
      }
      goto L_0888B714;
    }
L_0888B714:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0888B734;
      }
      goto L_0888B724;
    }
L_0888B724:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25948), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 113u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    goto L_0888B734;
L_0888B734:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26344)));
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888B758;
      }
      goto L_0888B744;
    }
L_0888B744:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1402)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
      if (branch_taken) {
          goto L_0888B760;
      }
      goto L_0888B750;
    }
L_0888B750:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888B77C;
      }
      goto L_0888B758;
    }
L_0888B758:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B760;
    }
L_0888B760:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1405)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0888B77C;
      }
      goto L_0888B76C;
    }
L_0888B76C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1401)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1404), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0888B77C;
L_0888B77C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1403))))));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_0888B8E0;
      }
      goto L_0888B788;
    }
L_0888B788:
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1402), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1405)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888B818;
      }
      goto L_0888B79C;
    }
L_0888B79C:
    aot_gpr_31 = (0x0888B7A4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 995u, 0x0888B7A4u, 0x08AABB88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B7A4u) goto L_0888B7A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B7A4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0888B818;
      }
      goto L_0888B7AC;
    }
L_0888B7AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    aot_gpr_5 = (0u | 113u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0888B7F4;
      }
      goto L_0888B7BC;
    }
L_0888B7BC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-25736)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
      if (branch_taken) {
          goto L_0888B7F4;
      }
      goto L_0888B7C8;
    }
L_0888B7C8:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23248));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    aot_gpr_31 = (0x0888B7F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08889CF0;
L_0888B7F0:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25736), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_0888B7F4;
L_0888B7F4:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    aot_gpr_31 = (0x0888B808u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_0888B808:
    aot_gpr_31 = (0x0888B810u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1002u, 0x0888B810u, 0x08AABAF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 404u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 404u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B810u) goto L_0888B810;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B810:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B818;
    }
L_0888B818:
    aot_gpr_31 = (0x0888B820u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25736), static_cast<std::uint8_t>(0u));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1004u, 0x0888B820u, 0x08AABB88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B820u) goto L_0888B820;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B820:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1403))))));
      if (branch_taken) {
          goto L_0888B834;
      }
      goto L_0888B828;
    }
L_0888B828:
    ctx.gpr[17] = (0u | 113u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_0888B844;
      }
      goto L_0888B834;
    }
L_0888B834:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1405), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1402), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B844;
    }
L_0888B844:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0888B868;
      }
      goto L_0888B850;
    }
L_0888B850:
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_31 = (0x0888B85Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0888981C;
L_0888B85C:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1403))))));
      if (branch_taken) {
          goto L_0888B86C;
      }
      goto L_0888B868;
    }
L_0888B868:
    aot_gpr_5 = (0u | 0u);
    goto L_0888B86C;
L_0888B86C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B874;
    }
L_0888B874:
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0888B88Cu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1013u, 0x0888B88Cu, 0x08AAB9A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 377u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 377u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B88Cu) goto L_0888B88C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B88C:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1403))))));
    ctx.gpr[6] = (0u | 110u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[6];
    aot_gpr_5 = (0u | 100u);
      if (branch_taken) {
          goto L_0888B8B0;
      }
      goto L_0888B8A4;
    }
L_0888B8A4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_0888B8B8;
      }
      goto L_0888B8B0;
    }
L_0888B8B0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(6)));
    goto L_0888B8B8;
L_0888B8B8:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    aot_gpr_31 = (0x0888B8CCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_0888B8CC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1403))))));
    aot_gpr_31 = (0x0888B8D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08889CF8;
L_0888B8D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1405), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B8E0;
    }
L_0888B8E0:
    aot_gpr_31 = (0x0888B8E8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1020u, 0x0888B8E8u, 0x08AABB88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B8E8u) goto L_0888B8E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B8E8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888B9F0;
      }
      goto L_0888B8F0;
    }
L_0888B8F0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 109 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 111 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888B948;
      }
      goto L_0888B900;
    }
L_0888B900:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888B9E8;
      }
      goto L_0888B908;
    }
L_0888B908:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0888B9E8;
      }
      goto L_0888B910;
    }
L_0888B910:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    goto L_0888B914;
L_0888B914:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0888B940u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1026u, 0x0888B940u, 0x08AAB9A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 377u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 377u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B940u) goto L_0888B940;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B940:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B948;
    }
L_0888B948:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 112 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888B968;
      }
      goto L_0888B950;
    }
L_0888B950:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 110 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0888B914;
      }
      goto L_0888B95C;
    }
L_0888B95C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888B998;
      }
      goto L_0888B964;
    }
L_0888B964:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 112 ? 1u : 0u);
    goto L_0888B968;
L_0888B968:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0888B9E8;
      }
      goto L_0888B970;
    }
L_0888B970:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0888B990u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0169.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1033u, 0x0888B990u, 0x08AAB9A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0169_entry(rt, ctx, 377u, aot_mem);
#else
        recomp_unit_0169_entry(rt, ctx, 377u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 377u, 0x08AAB9A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B990u) goto L_0888B990;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B990:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B998;
    }
L_0888B998:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888B9E0;
      }
      goto L_0888B9A4;
    }
L_0888B9A4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0888B9B0u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1036u, 0x0888B9B0u, 0x08887E98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 894u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 894u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 894u, 0x08887E98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B9B0u) goto L_0888B9B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B9B0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1513)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888B9DC;
      }
      goto L_0888B9BC;
    }
L_0888B9BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
        goto L_0888B9D4;
    }
    goto L_0888B9C8;
L_0888B9C8:
    aot_gpr_31 = (0x0888B9D0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1039u, 0x0888B9D0u, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B9D0u) goto L_0888B9D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888B9D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888B9D4;
L_0888B9D4:
    aot_gpr_31 = (0x0888B9DCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 277u, 0x088B5BCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888B9DCu) goto L_0888B9DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888B9DC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1513), static_cast<std::uint8_t>(0u));
    goto L_0888B9E0;
L_0888B9E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B9E8;
    }
L_0888B9E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888B9F0;
    }
L_0888B9F0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0888BA08;
      }
      goto L_0888B9FC;
    }
L_0888B9FC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888BAB8;
      }
      goto L_0888BA08;
    }
L_0888BA08:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1548)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0888BA7C;
      }
      goto L_0888BA14;
    }
L_0888BA14:
    aot_gpr_31 = (0x0888BA1Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1048u, 0x0888BA1Cu, 0x08A1C770u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BA1Cu) goto L_0888BA1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BA1C:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_0888BA7C;
      }
      goto L_0888BA28;
    }
L_0888BA28:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x0888BA34u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1050u, 0x0888BA34u, 0x0880A704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 559u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 559u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 559u, 0x0880A704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BA34u) goto L_0888BA34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BA34:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 126 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888BA7C;
      }
      goto L_0888BA40;
    }
L_0888BA40:
    aot_gpr_31 = (0x0888BA48u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1052u, 0x0888BA48u, 0x0880A704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 559u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 559u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 559u, 0x0880A704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BA48u) goto L_0888BA48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BA48:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(10));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_31 = (0x0888BA58u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1053u, 0x0888BA58u, 0x0880A6F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 557u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 557u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 557u, 0x0880A6F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BA58u) goto L_0888BA58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BA58:
    aot_gpr_31 = (0x0888BA60u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1054u, 0x0888BA60u, 0x0880A704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 559u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 559u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 559u, 0x0880A704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BA60u) goto L_0888BA60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BA60:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888BA7C;
      }
      goto L_0888BA6C;
    }
L_0888BA6C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1548), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0888BA7Cu);
    aot_gpr_5 = (0u | 127u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1056u, 0x0888BA7Cu, 0x0880A6F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 557u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 557u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 557u, 0x0880A6F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BA7Cu) goto L_0888BA7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BA7C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(6)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(7)));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_0888BAA8;
      }
      goto L_0888BA90;
    }
L_0888BA90:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_0888BAA0;
    }
    goto L_0888BAA0;
L_0888BAA0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(6)));
    goto L_0888BAA8;
L_0888BAA8:
    aot_gpr_5 = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    aot_gpr_31 = (0x0888BAB8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0888A144;
L_0888BAB8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_0888BAD0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 113u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1520), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x0888BB0Cu);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1456), static_cast<std::uint8_t>(0u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BB0Cu) goto L_0888BB0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888BB0C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0888BB18u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0048.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1063u, 0x0888BB18u, 0x088C63C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0048_entry(rt, ctx, 454u, aot_mem);
#else
        recomp_unit_0048_entry(rt, ctx, 454u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BB18u) goto L_0888BB18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BB18:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1406)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1406), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1407), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[19] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_0888BB5C;
      }
      goto L_0888BB38;
    }
L_0888BB38:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23112)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0888BB50:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1406), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1406)));
      if (branch_taken) {
          goto L_0888BB8C;
      }
      goto L_0888BB5C;
    }
L_0888BB5C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7701)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888BB70;
      }
      goto L_0888BB68;
    }
L_0888BB68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1406), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0888BB88;
      }
      goto L_0888BB70;
    }
L_0888BB70:
    aot_gpr_31 = (0x0888BB78u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0888876C;
L_0888BB78:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0888BB88;
      }
      goto L_0888BB80;
    }
L_0888BB80:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1406), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0888BB88;
L_0888BB88:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1406)));
    goto L_0888BB8C;
L_0888BB8C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0888BD14;
      }
      goto L_0888BB94;
    }
L_0888BB94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888BD14;
      }
      goto L_0888BBA0;
    }
L_0888BBA0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BBA8;
    }
L_0888BBA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 58u);
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BBB8;
    }
L_0888BBB8:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BBC0;
    }
L_0888BBC0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0888BBF4;
      }
      goto L_0888BBC8;
    }
L_0888BBC8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 194u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0888BBF4;
      }
      goto L_0888BBD8;
    }
L_0888BBD8:
    aot_gpr_31 = (0x0888BBE0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BBE0u) goto L_0888BBE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888BBE0:
    aot_gpr_31 = (0x0888BBE8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1081u, 0x0888BBE8u, 0x0898CF8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 347u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 347u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BBE8u) goto L_0888BBE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BBE8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0888BBF4;
      }
      goto L_0888BBF0;
    }
L_0888BBF0:
    ctx.gpr[20] = (0u | 1u);
    goto L_0888BBF4;
L_0888BBF4:
    aot_gpr_31 = (0x0888BBFCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BBFCu) goto L_0888BBFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888BBFC:
    aot_gpr_31 = (0x0888BC04u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1085u, 0x0888BC04u, 0x0898D410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 461u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 461u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 461u, 0x0898D410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BC04u) goto L_0888BC04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BC04:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888BC24;
      }
      goto L_0888BC0C;
    }
L_0888BC0C:
    aot_gpr_31 = (0x0888BC14u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BC14u) goto L_0888BC14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888BC14:
    aot_gpr_31 = (0x0888BC1Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1088u, 0x0888BC1Cu, 0x0898D464u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 468u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 468u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 468u, 0x0898D464u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BC1Cu) goto L_0888BC1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BC1C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC24;
    }
L_0888BC24:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC2C;
    }
L_0888BC2C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC34;
    }
L_0888BC34:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0888BC40u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08889B04;
L_0888BC40:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC48;
    }
L_0888BC48:
    aot_gpr_31 = (0x0888BC50u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08889C04;
L_0888BC50:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BC58;
    }
L_0888BC58:
    aot_gpr_4 = (0u | 18u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), aot_gpr_4);
    aot_gpr_31 = (0x0888BC68u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BC68u) goto L_0888BC68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888BC68:
    aot_gpr_31 = (0x0888BC70u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1097u, 0x0888BC70u, 0x0898D410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 461u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 461u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 461u, 0x0898D410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BC70u) goto L_0888BC70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BC70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (0u | 111u);
      if (branch_taken) {
          goto L_0888BCBC;
      }
      goto L_0888BC7C;
    }
L_0888BC7C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_0888BCF8;
      }
      goto L_0888BC90;
    }
L_0888BC90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888BCA8;
      }
      goto L_0888BC9C;
    }
L_0888BC9C:
    aot_gpr_31 = (0x0888BCA4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1101u, 0x0888BCA4u, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BCA4u) goto L_0888BCA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BCA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888BCA8;
L_0888BCA8:
    aot_gpr_31 = (0x0888BCB0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 490u, 0x088B6998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BCB0u) goto L_0888BCB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888BCB0:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888BCF8;
      }
      goto L_0888BCBC;
    }
L_0888BCBC:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(9));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_0888BCF8;
      }
      goto L_0888BCD0;
    }
L_0888BCD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888BCE8;
      }
      goto L_0888BCDC;
    }
L_0888BCDC:
    aot_gpr_31 = (0x0888BCE4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1107u, 0x0888BCE4u, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BCE4u) goto L_0888BCE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BCE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888BCE8;
L_0888BCE8:
    aot_gpr_31 = (0x0888BCF0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 501u, 0x088B6A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BCF0u) goto L_0888BCF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888BCF0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0888BCF8;
L_0888BCF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BD08;
    }
L_0888BD08:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), aot_gpr_4);
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BD14;
    }
L_0888BD14:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888BD74;
      }
      goto L_0888BD34;
    }
L_0888BD34:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1409)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0888BD58;
      }
      goto L_0888BD48;
    }
L_0888BD48:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23248));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_5);
    goto L_0888BD58;
L_0888BD58:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    goto L_0888BD74;
L_0888BD74:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1409)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888BD88;
      }
      goto L_0888BD80;
    }
L_0888BD80:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1407), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1409), static_cast<std::uint8_t>(0u));
    goto L_0888BD88;
L_0888BD88:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_0888BDA4;
      }
      goto L_0888BD94;
    }
L_0888BD94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_0888BDA4;
      }
      goto L_0888BDA0;
    }
L_0888BDA0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1407), static_cast<std::uint8_t>(0u));
    goto L_0888BDA4;
L_0888BDA4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0888BDDC;
      }
      goto L_0888BDB0;
    }
L_0888BDB0:
    aot_gpr_31 = (0x0888BDB8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0888876C;
L_0888BDB8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0888BDDC;
      }
      goto L_0888BDC0;
    }
L_0888BDC0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(10)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1407), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    goto L_0888BDDC;
L_0888BDDC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1406)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 50u, 0x0888C264u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0888BDE8;
    }
L_0888BDE8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1407)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 29u, 0x0888C170u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0888BDF4;
    }
L_0888BDF4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 112 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888BE98;
      }
      goto L_0888BE04;
    }
L_0888BE04:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_0888BE24;
      }
      goto L_0888BE10;
    }
L_0888BE10:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[6];
      if (branch_taken) {
          goto L_0888BE24;
      }
      goto L_0888BE20;
    }
L_0888BE20:
    aot_gpr_4 = (0u | 0u);
    goto L_0888BE24;
L_0888BE24:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888BE98;
      }
      goto L_0888BE2C;
    }
L_0888BE2C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0888BE38u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_08888FC8;
L_0888BE38:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0888BE98;
      }
      goto L_0888BE40;
    }
L_0888BE40:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888BE60;
      }
      goto L_0888BE4C;
    }
L_0888BE4C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_0888BE7C;
      }
      goto L_0888BE58;
    }
L_0888BE58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0888BE98;
      }
      goto L_0888BE60;
    }
L_0888BE60:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    aot_gpr_31 = (0x0888BE74u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088897E0;
L_0888BE74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 62u, 0x0888C2ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0888BE7C;
    }
L_0888BE7C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_gpr_31 = (0x0888BE88u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088898A4;
L_0888BE88:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_2));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    goto L_0888BE98;
L_0888BE98:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1388)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888BF34;
      }
      goto L_0888BEA4;
    }
L_0888BEA4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0888BEB0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08889B04;
L_0888BEB0:
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888BEC8;
      }
      goto L_0888BEB8;
    }
L_0888BEB8:
    aot_gpr_4 = (0u | 9u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1392)));
      if (branch_taken) {
          goto L_0888BEFC;
      }
      goto L_0888BEC8;
    }
L_0888BEC8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0888BED4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08889C04;
L_0888BED4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0888BEEC;
      }
      goto L_0888BEDC;
    }
L_0888BEDC:
    aot_gpr_4 = (0u | 32u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1392)));
      if (branch_taken) {
          goto L_0888BEFC;
      }
      goto L_0888BEEC;
    }
L_0888BEEC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1389)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1392)));
    goto L_0888BEFC;
L_0888BEFC:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_0888BF20;
      }
      goto L_0888BF04;
    }
L_0888BF04:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
    ctx.gpr[6] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(32), 0u);
    goto L_0888BF20;
L_0888BF20:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1397)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 16u, 0x0888C0C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0888BF34;
    }
L_0888BF34:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6008)));
      if (branch_taken) {
          goto L_0888BF60;
      }
      goto L_0888BF40;
    }
L_0888BF40:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), aot_gpr_4);
      if (branch_taken) {
          goto L_0888BF70;
      }
      goto L_0888BF4C;
    }
L_0888BF4C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0888BF70;
      }
      goto L_0888BF60;
    }
L_0888BF60:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0888BF70;
      }
      goto L_0888BF68;
    }
L_0888BF68:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6008), aot_gpr_4);
    goto L_0888BF70;
L_0888BF70:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 7u, 0x0888C050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0888BF78;
    }
L_0888BF78:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1398)));
    aot_gpr_5 = (0u | 111u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 7u, 0x0888C050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0888BF88;
    }
L_0888BF88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0888BFA0;
      }
      goto L_0888BF94;
    }
L_0888BF94:
    aot_gpr_31 = (0x0888BF9Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0033->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0033_entry, 1161u, 0x0888BF9Cu, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BF9Cu) goto L_0888BF9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0888BF9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_0888BFA0;
L_0888BFA0:
    aot_gpr_31 = (0x0888BFA8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0888BFA8u) goto L_0888BFA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0888BFA8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 7u, 0x0888C050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0888BFB0;
    }
L_0888BFB0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(695)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25952)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (0u | 9u);
      if (branch_taken) {
          goto L_0888BFD8;
      }
      goto L_0888BFC8;
    }
L_0888BFC8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-10));
    ctx.gpr[6] = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_0888BFC8;
      }
      goto L_0888BFD8;
    }
L_0888BFD8:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0888BFFC;
      }
      goto L_0888BFE0;
    }
L_0888BFE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6008)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 7u, 0x0888C050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0888BFF0;
    }
L_0888BFF0:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 7u, 0x0888C050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0888BFFC;
    }
L_0888BFFC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1)));
    ctx.pc = 0x0888C000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0033(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0033_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_33(Runtime &runtime) {
    runtime.register_generated_unit(33u, 0x08888000u, 16384u, &recomp_unit_0033, &recomp_unit_0033_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08888000u, &recomp_unit_0033, "recomp_unit_0033",
                                          kEntryMasks_recomp_unit_0033, 64u);
}
} // namespace psprecomp
