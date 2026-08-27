#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0021[64] = {
    0x282828282828282Dull, 0xA0A0960920242828ull, 0x0A901304A2824048ull, 0x0B05480914141416ull,
    0x050582A4048A0A0Aull, 0x828282C152024505ull, 0x9141414160A90122ull, 0x8048A0A0A0B05480ull,
    0x5050505050505820ull, 0x5058208048505050ull, 0x5050505050505050ull, 0x1012282024504048ull,
    0x0582A4048A080914ull, 0x8282C15202450505ull, 0x41414160A9012282ull, 0x48A0A0A0B0548091ull,
    0x2024505050582A40ull, 0x0A90122828282C15ull, 0x0B05480914141416ull, 0x050582A4048A0A0Aull,
    0x828282C152024505ull, 0x2024505058290122ull, 0x0582A4048A0A0B05ull, 0x8282C15202450505ull,
    0x41414160A9012282ull, 0x48A0A0A0B0548091ull, 0x4024505050582A40ull, 0x2828282828282C10ull,
    0x2C10402428282828ull, 0x2828282828282828ull, 0x28282C1040242828ull, 0x2428282828282828ull,
    0x28282828282C1040ull, 0x28282C1040242828ull, 0x2828282828282828ull, 0x282828282C104024ull,
    0x4024282828282828ull, 0x2828282828282C10ull, 0x282C104024282828ull, 0x4024282828282828ull,
    0x2828282828282C10ull, 0x2C10402428282828ull, 0x2828282828282828ull, 0x28282C1040242828ull,
    0x2428282828282828ull, 0x28282828282C1040ull, 0x28282C1520242828ull, 0x1414141608201228ull,
    0x2012141414141414ull, 0x1414141414141608ull, 0x1416082012141414ull, 0x1414141414141414ull,
    0x1414141416082012ull, 0x0820121414141414ull, 0x1414141414141416ull, 0x1414160820121414ull,
    0x1214141414141414ull, 0x1414141414160820ull, 0x1608201214141414ull, 0x1414141414141414ull,
    0x1414141608201214ull, 0x2012141414141414ull, 0x1414141414141608ull, 0x1416082012141414ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0021[64] = {
    1u, 19u, 36u, 52u, 70u, 87u, 105u, 123u, 139u, 155u, 170u, 186u, 199u, 215u, 233u, 250u,
    268u, 284u, 302u, 320u, 337u, 355u, 371u, 389u, 407u, 424u, 442u, 458u, 474u, 489u, 505u, 520u,
    536u, 551u, 566u, 582u, 597u, 612u, 628u, 643u, 658u, 674u, 689u, 705u, 720u, 736u, 751u, 768u,
    783u, 798u, 814u, 829u, 845u, 860u, 874u, 891u, 906u, 922u, 937u, 952u, 968u, 983u, 998u, 1014u,
};
void recomp_unit_0021_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=5,4,6,7,31,8 fprs= gpr_occ=6802 fpr_occ=0 gpr_total=9277 fpr_total=0
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_8 = ctx.gpr[8];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[5] = aot_gpr_5; ctx.gpr[4] = aot_gpr_4; ctx.gpr[6] = aot_gpr_6; ctx.gpr[7] = aot_gpr_7; ctx.gpr[31] = aot_gpr_31; ctx.gpr[8] = aot_gpr_8; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_5 = ctx.gpr[5]; aot_gpr_4 = ctx.gpr[4]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_7 = ctx.gpr[7]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_8 = ctx.gpr[8]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08858000u;
        entry_id = 0u;
        if (entry_delta < 16372u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0021[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0021[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08858000;
    case 2u: goto L_08858008;
    case 3u: goto L_0885800C;
    case 4u: goto L_08858014;
    case 5u: goto L_0885802C;
    case 6u: goto L_08858034;
    case 7u: goto L_0885804C;
    case 8u: goto L_08858054;
    case 9u: goto L_0885806C;
    case 10u: goto L_08858074;
    case 11u: goto L_0885808C;
    case 12u: goto L_08858094;
    case 13u: goto L_088580AC;
    case 14u: goto L_088580B4;
    case 15u: goto L_088580CC;
    case 16u: goto L_088580D4;
    case 17u: goto L_088580EC;
    case 18u: goto L_088580F4;
    case 19u: goto L_0885810C;
    case 20u: goto L_08858114;
    case 21u: goto L_0885812C;
    case 22u: goto L_08858134;
    case 23u: goto L_08858148;
    case 24u: goto L_08858154;
    case 25u: goto L_08858174;
    case 26u: goto L_08858180;
    case 27u: goto L_0885818C;
    case 28u: goto L_088581A4;
    case 29u: goto L_088581A8;
    case 30u: goto L_088581B0;
    case 31u: goto L_088581BC;
    case 32u: goto L_088581D4;
    case 33u: goto L_088581DC;
    case 34u: goto L_088581F4;
    case 35u: goto L_088581FC;
    case 36u: goto L_0885820C;
    case 37u: goto L_08858218;
    case 38u: goto L_08858238;
    case 39u: goto L_08858244;
    case 40u: goto L_0885825C;
    case 41u: goto L_08858264;
    case 42u: goto L_08858274;
    case 43u: goto L_0885827C;
    case 44u: goto L_08858288;
    case 45u: goto L_088582A0;
    case 46u: goto L_088582A4;
    case 47u: goto L_088582B0;
    case 48u: goto L_088582D0;
    case 49u: goto L_088582DC;
    case 50u: goto L_088582E4;
    case 51u: goto L_088582EC;
    case 52u: goto L_08858304;
    case 53u: goto L_08858308;
    case 54u: goto L_08858310;
    case 55u: goto L_08858328;
    case 56u: goto L_08858330;
    case 57u: goto L_08858348;
    case 58u: goto L_08858350;
    case 59u: goto L_08858368;
    case 60u: goto L_08858370;
    case 61u: goto L_08858380;
    case 62u: goto L_0885838C;
    case 63u: goto L_088583AC;
    case 64u: goto L_088583B8;
    case 65u: goto L_088583C0;
    case 66u: goto L_088583C8;
    case 67u: goto L_088583E0;
    case 68u: goto L_088583E4;
    case 69u: goto L_088583EC;
    case 70u: goto L_08858404;
    case 71u: goto L_0885840C;
    case 72u: goto L_08858424;
    case 73u: goto L_0885842C;
    case 74u: goto L_08858444;
    case 75u: goto L_0885844C;
    case 76u: goto L_0885845C;
    case 77u: goto L_08858468;
    case 78u: goto L_08858488;
    case 79u: goto L_08858494;
    case 80u: goto L_0885849C;
    case 81u: goto L_088584A4;
    case 82u: goto L_088584BC;
    case 83u: goto L_088584C0;
    case 84u: goto L_088584C8;
    case 85u: goto L_088584E0;
    case 86u: goto L_088584E8;
    case 87u: goto L_08858500;
    case 88u: goto L_08858508;
    case 89u: goto L_08858520;
    case 90u: goto L_08858528;
    case 91u: goto L_08858538;
    case 92u: goto L_08858544;
    case 93u: goto L_08858564;
    case 94u: goto L_08858570;
    case 95u: goto L_08858578;
    case 96u: goto L_08858580;
    case 97u: goto L_08858598;
    case 98u: goto L_0885859C;
    case 99u: goto L_088585A4;
    case 100u: goto L_088585BC;
    case 101u: goto L_088585C4;
    case 102u: goto L_088585DC;
    case 103u: goto L_088585E4;
    case 104u: goto L_088585FC;
    case 105u: goto L_08858604;
    case 106u: goto L_08858614;
    case 107u: goto L_08858620;
    case 108u: goto L_08858640;
    case 109u: goto L_0885864C;
    case 110u: goto L_08858654;
    case 111u: goto L_0885865C;
    case 112u: goto L_08858674;
    case 113u: goto L_08858678;
    case 114u: goto L_08858680;
    case 115u: goto L_08858698;
    case 116u: goto L_088586A0;
    case 117u: goto L_088586B8;
    case 118u: goto L_088586C0;
    case 119u: goto L_088586D8;
    case 120u: goto L_088586E0;
    case 121u: goto L_088586F0;
    case 122u: goto L_088586FC;
    case 123u: goto L_0885871C;
    case 124u: goto L_08858728;
    case 125u: goto L_08858730;
    case 126u: goto L_08858738;
    case 127u: goto L_08858750;
    case 128u: goto L_08858754;
    case 129u: goto L_0885875C;
    case 130u: goto L_08858774;
    case 131u: goto L_0885877C;
    case 132u: goto L_08858794;
    case 133u: goto L_0885879C;
    case 134u: goto L_088587B4;
    case 135u: goto L_088587BC;
    case 136u: goto L_088587CC;
    case 137u: goto L_088587D8;
    case 138u: goto L_088587FC;
    case 139u: goto L_08858814;
    case 140u: goto L_0885882C;
    case 141u: goto L_08858830;
    case 142u: goto L_08858838;
    case 143u: goto L_08858850;
    case 144u: goto L_08858858;
    case 145u: goto L_08858870;
    case 146u: goto L_08858878;
    case 147u: goto L_08858890;
    case 148u: goto L_08858898;
    case 149u: goto L_088588B0;
    case 150u: goto L_088588B8;
    case 151u: goto L_088588D0;
    case 152u: goto L_088588D8;
    case 153u: goto L_088588F0;
    case 154u: goto L_088588F8;
    case 155u: goto L_08858910;
    case 156u: goto L_08858918;
    case 157u: goto L_08858930;
    case 158u: goto L_08858938;
    case 159u: goto L_08858950;
    case 160u: goto L_08858958;
    case 161u: goto L_0885896C;
    case 162u: goto L_08858978;
    case 163u: goto L_0885899C;
    case 164u: goto L_088589B4;
    case 165u: goto L_088589CC;
    case 166u: goto L_088589D0;
    case 167u: goto L_088589D8;
    case 168u: goto L_088589F0;
    case 169u: goto L_088589F8;
    case 170u: goto L_08858A10;
    case 171u: goto L_08858A18;
    case 172u: goto L_08858A30;
    case 173u: goto L_08858A38;
    case 174u: goto L_08858A50;
    case 175u: goto L_08858A58;
    case 176u: goto L_08858A70;
    case 177u: goto L_08858A78;
    case 178u: goto L_08858A90;
    case 179u: goto L_08858A98;
    case 180u: goto L_08858AB0;
    case 181u: goto L_08858AB8;
    case 182u: goto L_08858AD0;
    case 183u: goto L_08858AD8;
    case 184u: goto L_08858AF0;
    case 185u: goto L_08858AF8;
    case 186u: goto L_08858B0C;
    case 187u: goto L_08858B18;
    case 188u: goto L_08858B38;
    case 189u: goto L_08858B50;
    case 190u: goto L_08858B58;
    case 191u: goto L_08858B68;
    case 192u: goto L_08858B74;
    case 193u: goto L_08858B94;
    case 194u: goto L_08858BAC;
    case 195u: goto L_08858BB4;
    case 196u: goto L_08858BC4;
    case 197u: goto L_08858BD0;
    case 198u: goto L_08858BF0;
    case 199u: goto L_08858C08;
    case 200u: goto L_08858C10;
    case 201u: goto L_08858C20;
    case 202u: goto L_08858C2C;
    case 203u: goto L_08858C4C;
    case 204u: goto L_08858C64;
    case 205u: goto L_08858C6C;
    case 206u: goto L_08858C7C;
    case 207u: goto L_08858C88;
    case 208u: goto L_08858CA8;
    case 209u: goto L_08858CB4;
    case 210u: goto L_08858CBC;
    case 211u: goto L_08858CC4;
    case 212u: goto L_08858CDC;
    case 213u: goto L_08858CE0;
    case 214u: goto L_08858CE8;
    case 215u: goto L_08858D00;
    case 216u: goto L_08858D08;
    case 217u: goto L_08858D20;
    case 218u: goto L_08858D28;
    case 219u: goto L_08858D40;
    case 220u: goto L_08858D48;
    case 221u: goto L_08858D58;
    case 222u: goto L_08858D64;
    case 223u: goto L_08858D84;
    case 224u: goto L_08858D90;
    case 225u: goto L_08858D98;
    case 226u: goto L_08858DA0;
    case 227u: goto L_08858DB8;
    case 228u: goto L_08858DBC;
    case 229u: goto L_08858DC4;
    case 230u: goto L_08858DDC;
    case 231u: goto L_08858DE4;
    case 232u: goto L_08858DFC;
    case 233u: goto L_08858E04;
    case 234u: goto L_08858E1C;
    case 235u: goto L_08858E24;
    case 236u: goto L_08858E34;
    case 237u: goto L_08858E40;
    case 238u: goto L_08858E60;
    case 239u: goto L_08858E6C;
    case 240u: goto L_08858E74;
    case 241u: goto L_08858E7C;
    case 242u: goto L_08858E94;
    case 243u: goto L_08858E98;
    case 244u: goto L_08858EA0;
    case 245u: goto L_08858EB8;
    case 246u: goto L_08858EC0;
    case 247u: goto L_08858ED8;
    case 248u: goto L_08858EE0;
    case 249u: goto L_08858EF8;
    case 250u: goto L_08858F00;
    case 251u: goto L_08858F10;
    case 252u: goto L_08858F1C;
    case 253u: goto L_08858F3C;
    case 254u: goto L_08858F48;
    case 255u: goto L_08858F50;
    case 256u: goto L_08858F58;
    case 257u: goto L_08858F70;
    case 258u: goto L_08858F74;
    case 259u: goto L_08858F7C;
    case 260u: goto L_08858F94;
    case 261u: goto L_08858F9C;
    case 262u: goto L_08858FB4;
    case 263u: goto L_08858FBC;
    case 264u: goto L_08858FD4;
    case 265u: goto L_08858FDC;
    case 266u: goto L_08858FEC;
    case 267u: goto L_08858FF8;
    case 268u: goto L_08859018;
    case 269u: goto L_08859024;
    case 270u: goto L_0885902C;
    case 271u: goto L_08859034;
    case 272u: goto L_0885904C;
    case 273u: goto L_08859050;
    case 274u: goto L_08859058;
    case 275u: goto L_08859070;
    case 276u: goto L_08859078;
    case 277u: goto L_08859090;
    case 278u: goto L_08859098;
    case 279u: goto L_088590B0;
    case 280u: goto L_088590B8;
    case 281u: goto L_088590C8;
    case 282u: goto L_088590D4;
    case 283u: goto L_088590F4;
    case 284u: goto L_08859100;
    case 285u: goto L_08859108;
    case 286u: goto L_08859110;
    case 287u: goto L_08859128;
    case 288u: goto L_0885912C;
    case 289u: goto L_08859134;
    case 290u: goto L_0885914C;
    case 291u: goto L_08859154;
    case 292u: goto L_0885916C;
    case 293u: goto L_08859174;
    case 294u: goto L_0885918C;
    case 295u: goto L_08859194;
    case 296u: goto L_088591A4;
    case 297u: goto L_088591B0;
    case 298u: goto L_088591D0;
    case 299u: goto L_088591DC;
    case 300u: goto L_088591E4;
    case 301u: goto L_088591EC;
    case 302u: goto L_08859204;
    case 303u: goto L_08859208;
    case 304u: goto L_08859210;
    case 305u: goto L_08859228;
    case 306u: goto L_08859230;
    case 307u: goto L_08859248;
    case 308u: goto L_08859250;
    case 309u: goto L_08859268;
    case 310u: goto L_08859270;
    case 311u: goto L_08859280;
    case 312u: goto L_0885928C;
    case 313u: goto L_088592AC;
    case 314u: goto L_088592B8;
    case 315u: goto L_088592C0;
    case 316u: goto L_088592C8;
    case 317u: goto L_088592E0;
    case 318u: goto L_088592E4;
    case 319u: goto L_088592EC;
    case 320u: goto L_08859304;
    case 321u: goto L_0885930C;
    case 322u: goto L_08859324;
    case 323u: goto L_0885932C;
    case 324u: goto L_08859344;
    case 325u: goto L_0885934C;
    case 326u: goto L_0885935C;
    case 327u: goto L_08859368;
    case 328u: goto L_08859388;
    case 329u: goto L_08859394;
    case 330u: goto L_0885939C;
    case 331u: goto L_088593A4;
    case 332u: goto L_088593BC;
    case 333u: goto L_088593C0;
    case 334u: goto L_088593C8;
    case 335u: goto L_088593E0;
    case 336u: goto L_088593E8;
    case 337u: goto L_08859400;
    case 338u: goto L_08859408;
    case 339u: goto L_08859420;
    case 340u: goto L_08859428;
    case 341u: goto L_08859438;
    case 342u: goto L_08859444;
    case 343u: goto L_08859464;
    case 344u: goto L_08859470;
    case 345u: goto L_08859478;
    case 346u: goto L_08859480;
    case 347u: goto L_08859498;
    case 348u: goto L_0885949C;
    case 349u: goto L_088594A4;
    case 350u: goto L_088594BC;
    case 351u: goto L_088594C4;
    case 352u: goto L_088594DC;
    case 353u: goto L_088594E4;
    case 354u: goto L_088594FC;
    case 355u: goto L_08859504;
    case 356u: goto L_08859514;
    case 357u: goto L_08859520;
    case 358u: goto L_08859540;
    case 359u: goto L_0885954C;
    case 360u: goto L_08859554;
    case 361u: goto L_0885956C;
    case 362u: goto L_08859570;
    case 363u: goto L_08859578;
    case 364u: goto L_08859590;
    case 365u: goto L_08859598;
    case 366u: goto L_088595B0;
    case 367u: goto L_088595B8;
    case 368u: goto L_088595C8;
    case 369u: goto L_088595D4;
    case 370u: goto L_088595F4;
    case 371u: goto L_08859600;
    case 372u: goto L_08859608;
    case 373u: goto L_08859620;
    case 374u: goto L_08859624;
    case 375u: goto L_0885962C;
    case 376u: goto L_08859644;
    case 377u: goto L_0885964C;
    case 378u: goto L_08859664;
    case 379u: goto L_0885966C;
    case 380u: goto L_0885967C;
    case 381u: goto L_08859688;
    case 382u: goto L_088596A8;
    case 383u: goto L_088596B4;
    case 384u: goto L_088596BC;
    case 385u: goto L_088596C4;
    case 386u: goto L_088596DC;
    case 387u: goto L_088596E0;
    case 388u: goto L_088596E8;
    case 389u: goto L_08859700;
    case 390u: goto L_08859708;
    case 391u: goto L_08859720;
    case 392u: goto L_08859728;
    case 393u: goto L_08859740;
    case 394u: goto L_08859748;
    case 395u: goto L_08859758;
    case 396u: goto L_08859764;
    case 397u: goto L_08859784;
    case 398u: goto L_08859790;
    case 399u: goto L_08859798;
    case 400u: goto L_088597A0;
    case 401u: goto L_088597B8;
    case 402u: goto L_088597BC;
    case 403u: goto L_088597C4;
    case 404u: goto L_088597DC;
    case 405u: goto L_088597E4;
    case 406u: goto L_088597FC;
    case 407u: goto L_08859804;
    case 408u: goto L_0885981C;
    case 409u: goto L_08859824;
    case 410u: goto L_08859834;
    case 411u: goto L_08859840;
    case 412u: goto L_08859860;
    case 413u: goto L_0885986C;
    case 414u: goto L_08859874;
    case 415u: goto L_0885987C;
    case 416u: goto L_08859894;
    case 417u: goto L_08859898;
    case 418u: goto L_088598A0;
    case 419u: goto L_088598B8;
    case 420u: goto L_088598C0;
    case 421u: goto L_088598D8;
    case 422u: goto L_088598E0;
    case 423u: goto L_088598F8;
    case 424u: goto L_08859900;
    case 425u: goto L_08859910;
    case 426u: goto L_0885991C;
    case 427u: goto L_0885993C;
    case 428u: goto L_08859948;
    case 429u: goto L_08859950;
    case 430u: goto L_08859958;
    case 431u: goto L_08859970;
    case 432u: goto L_08859974;
    case 433u: goto L_0885997C;
    case 434u: goto L_08859994;
    case 435u: goto L_0885999C;
    case 436u: goto L_088599B4;
    case 437u: goto L_088599BC;
    case 438u: goto L_088599D4;
    case 439u: goto L_088599DC;
    case 440u: goto L_088599EC;
    case 441u: goto L_088599F8;
    case 442u: goto L_08859A18;
    case 443u: goto L_08859A24;
    case 444u: goto L_08859A2C;
    case 445u: goto L_08859A34;
    case 446u: goto L_08859A4C;
    case 447u: goto L_08859A50;
    case 448u: goto L_08859A58;
    case 449u: goto L_08859A70;
    case 450u: goto L_08859A78;
    case 451u: goto L_08859A90;
    case 452u: goto L_08859A98;
    case 453u: goto L_08859AB0;
    case 454u: goto L_08859AB8;
    case 455u: goto L_08859AC8;
    case 456u: goto L_08859AD4;
    case 457u: goto L_08859AF8;
    case 458u: goto L_08859B10;
    case 459u: goto L_08859B28;
    case 460u: goto L_08859B2C;
    case 461u: goto L_08859B34;
    case 462u: goto L_08859B4C;
    case 463u: goto L_08859B54;
    case 464u: goto L_08859B6C;
    case 465u: goto L_08859B74;
    case 466u: goto L_08859B8C;
    case 467u: goto L_08859B94;
    case 468u: goto L_08859BAC;
    case 469u: goto L_08859BB4;
    case 470u: goto L_08859BCC;
    case 471u: goto L_08859BD4;
    case 472u: goto L_08859BEC;
    case 473u: goto L_08859BF4;
    case 474u: goto L_08859C0C;
    case 475u: goto L_08859C14;
    case 476u: goto L_08859C2C;
    case 477u: goto L_08859C34;
    case 478u: goto L_08859C4C;
    case 479u: goto L_08859C54;
    case 480u: goto L_08859C6C;
    case 481u: goto L_08859C74;
    case 482u: goto L_08859C88;
    case 483u: goto L_08859C94;
    case 484u: goto L_08859CB8;
    case 485u: goto L_08859CD0;
    case 486u: goto L_08859CE8;
    case 487u: goto L_08859CEC;
    case 488u: goto L_08859CF4;
    case 489u: goto L_08859D0C;
    case 490u: goto L_08859D14;
    case 491u: goto L_08859D2C;
    case 492u: goto L_08859D34;
    case 493u: goto L_08859D4C;
    case 494u: goto L_08859D54;
    case 495u: goto L_08859D6C;
    case 496u: goto L_08859D74;
    case 497u: goto L_08859D8C;
    case 498u: goto L_08859D94;
    case 499u: goto L_08859DAC;
    case 500u: goto L_08859DB4;
    case 501u: goto L_08859DCC;
    case 502u: goto L_08859DD4;
    case 503u: goto L_08859DEC;
    case 504u: goto L_08859DF4;
    case 505u: goto L_08859E0C;
    case 506u: goto L_08859E14;
    case 507u: goto L_08859E2C;
    case 508u: goto L_08859E34;
    case 509u: goto L_08859E48;
    case 510u: goto L_08859E54;
    case 511u: goto L_08859E78;
    case 512u: goto L_08859E90;
    case 513u: goto L_08859EA8;
    case 514u: goto L_08859EAC;
    case 515u: goto L_08859EB4;
    case 516u: goto L_08859ECC;
    case 517u: goto L_08859ED4;
    case 518u: goto L_08859EEC;
    case 519u: goto L_08859EF4;
    case 520u: goto L_08859F0C;
    case 521u: goto L_08859F14;
    case 522u: goto L_08859F2C;
    case 523u: goto L_08859F34;
    case 524u: goto L_08859F4C;
    case 525u: goto L_08859F54;
    case 526u: goto L_08859F6C;
    case 527u: goto L_08859F74;
    case 528u: goto L_08859F8C;
    case 529u: goto L_08859F94;
    case 530u: goto L_08859FAC;
    case 531u: goto L_08859FB4;
    case 532u: goto L_08859FCC;
    case 533u: goto L_08859FD4;
    case 534u: goto L_08859FE8;
    case 535u: goto L_08859FF4;
    case 536u: goto L_0885A018;
    case 537u: goto L_0885A030;
    case 538u: goto L_0885A048;
    case 539u: goto L_0885A04C;
    case 540u: goto L_0885A054;
    case 541u: goto L_0885A06C;
    case 542u: goto L_0885A074;
    case 543u: goto L_0885A08C;
    case 544u: goto L_0885A094;
    case 545u: goto L_0885A0AC;
    case 546u: goto L_0885A0B4;
    case 547u: goto L_0885A0CC;
    case 548u: goto L_0885A0D4;
    case 549u: goto L_0885A0EC;
    case 550u: goto L_0885A0F4;
    case 551u: goto L_0885A10C;
    case 552u: goto L_0885A114;
    case 553u: goto L_0885A12C;
    case 554u: goto L_0885A134;
    case 555u: goto L_0885A148;
    case 556u: goto L_0885A154;
    case 557u: goto L_0885A178;
    case 558u: goto L_0885A190;
    case 559u: goto L_0885A1A8;
    case 560u: goto L_0885A1AC;
    case 561u: goto L_0885A1B4;
    case 562u: goto L_0885A1CC;
    case 563u: goto L_0885A1D4;
    case 564u: goto L_0885A1EC;
    case 565u: goto L_0885A1F4;
    case 566u: goto L_0885A20C;
    case 567u: goto L_0885A214;
    case 568u: goto L_0885A22C;
    case 569u: goto L_0885A234;
    case 570u: goto L_0885A24C;
    case 571u: goto L_0885A254;
    case 572u: goto L_0885A26C;
    case 573u: goto L_0885A274;
    case 574u: goto L_0885A28C;
    case 575u: goto L_0885A294;
    case 576u: goto L_0885A2AC;
    case 577u: goto L_0885A2B4;
    case 578u: goto L_0885A2CC;
    case 579u: goto L_0885A2D4;
    case 580u: goto L_0885A2EC;
    case 581u: goto L_0885A2F4;
    case 582u: goto L_0885A308;
    case 583u: goto L_0885A314;
    case 584u: goto L_0885A338;
    case 585u: goto L_0885A350;
    case 586u: goto L_0885A368;
    case 587u: goto L_0885A36C;
    case 588u: goto L_0885A374;
    case 589u: goto L_0885A38C;
    case 590u: goto L_0885A394;
    case 591u: goto L_0885A3AC;
    case 592u: goto L_0885A3B4;
    case 593u: goto L_0885A3CC;
    case 594u: goto L_0885A3D4;
    case 595u: goto L_0885A3EC;
    case 596u: goto L_0885A3F4;
    case 597u: goto L_0885A40C;
    case 598u: goto L_0885A414;
    case 599u: goto L_0885A42C;
    case 600u: goto L_0885A434;
    case 601u: goto L_0885A44C;
    case 602u: goto L_0885A454;
    case 603u: goto L_0885A46C;
    case 604u: goto L_0885A474;
    case 605u: goto L_0885A48C;
    case 606u: goto L_0885A494;
    case 607u: goto L_0885A4AC;
    case 608u: goto L_0885A4B4;
    case 609u: goto L_0885A4C8;
    case 610u: goto L_0885A4D4;
    case 611u: goto L_0885A4F8;
    case 612u: goto L_0885A510;
    case 613u: goto L_0885A528;
    case 614u: goto L_0885A52C;
    case 615u: goto L_0885A534;
    case 616u: goto L_0885A54C;
    case 617u: goto L_0885A554;
    case 618u: goto L_0885A56C;
    case 619u: goto L_0885A574;
    case 620u: goto L_0885A58C;
    case 621u: goto L_0885A594;
    case 622u: goto L_0885A5AC;
    case 623u: goto L_0885A5B4;
    case 624u: goto L_0885A5CC;
    case 625u: goto L_0885A5D4;
    case 626u: goto L_0885A5EC;
    case 627u: goto L_0885A5F4;
    case 628u: goto L_0885A60C;
    case 629u: goto L_0885A614;
    case 630u: goto L_0885A62C;
    case 631u: goto L_0885A634;
    case 632u: goto L_0885A64C;
    case 633u: goto L_0885A654;
    case 634u: goto L_0885A668;
    case 635u: goto L_0885A674;
    case 636u: goto L_0885A698;
    case 637u: goto L_0885A6B0;
    case 638u: goto L_0885A6C8;
    case 639u: goto L_0885A6CC;
    case 640u: goto L_0885A6D4;
    case 641u: goto L_0885A6EC;
    case 642u: goto L_0885A6F4;
    case 643u: goto L_0885A70C;
    case 644u: goto L_0885A714;
    case 645u: goto L_0885A72C;
    case 646u: goto L_0885A734;
    case 647u: goto L_0885A74C;
    case 648u: goto L_0885A754;
    case 649u: goto L_0885A76C;
    case 650u: goto L_0885A774;
    case 651u: goto L_0885A78C;
    case 652u: goto L_0885A794;
    case 653u: goto L_0885A7AC;
    case 654u: goto L_0885A7B4;
    case 655u: goto L_0885A7C8;
    case 656u: goto L_0885A7D4;
    case 657u: goto L_0885A7F8;
    case 658u: goto L_0885A810;
    case 659u: goto L_0885A828;
    case 660u: goto L_0885A82C;
    case 661u: goto L_0885A834;
    case 662u: goto L_0885A84C;
    case 663u: goto L_0885A854;
    case 664u: goto L_0885A86C;
    case 665u: goto L_0885A874;
    case 666u: goto L_0885A88C;
    case 667u: goto L_0885A894;
    case 668u: goto L_0885A8AC;
    case 669u: goto L_0885A8B4;
    case 670u: goto L_0885A8CC;
    case 671u: goto L_0885A8D4;
    case 672u: goto L_0885A8EC;
    case 673u: goto L_0885A8F4;
    case 674u: goto L_0885A90C;
    case 675u: goto L_0885A914;
    case 676u: goto L_0885A92C;
    case 677u: goto L_0885A934;
    case 678u: goto L_0885A94C;
    case 679u: goto L_0885A954;
    case 680u: goto L_0885A96C;
    case 681u: goto L_0885A974;
    case 682u: goto L_0885A988;
    case 683u: goto L_0885A994;
    case 684u: goto L_0885A9B8;
    case 685u: goto L_0885A9D0;
    case 686u: goto L_0885A9E8;
    case 687u: goto L_0885A9EC;
    case 688u: goto L_0885A9F4;
    case 689u: goto L_0885AA0C;
    case 690u: goto L_0885AA14;
    case 691u: goto L_0885AA2C;
    case 692u: goto L_0885AA34;
    case 693u: goto L_0885AA4C;
    case 694u: goto L_0885AA54;
    case 695u: goto L_0885AA6C;
    case 696u: goto L_0885AA74;
    case 697u: goto L_0885AA8C;
    case 698u: goto L_0885AA94;
    case 699u: goto L_0885AAAC;
    case 700u: goto L_0885AAB4;
    case 701u: goto L_0885AACC;
    case 702u: goto L_0885AAD4;
    case 703u: goto L_0885AAEC;
    case 704u: goto L_0885AAF4;
    case 705u: goto L_0885AB0C;
    case 706u: goto L_0885AB14;
    case 707u: goto L_0885AB2C;
    case 708u: goto L_0885AB34;
    case 709u: goto L_0885AB48;
    case 710u: goto L_0885AB54;
    case 711u: goto L_0885AB78;
    case 712u: goto L_0885AB90;
    case 713u: goto L_0885ABA8;
    case 714u: goto L_0885ABAC;
    case 715u: goto L_0885ABB4;
    case 716u: goto L_0885ABCC;
    case 717u: goto L_0885ABD4;
    case 718u: goto L_0885ABEC;
    case 719u: goto L_0885ABF4;
    case 720u: goto L_0885AC0C;
    case 721u: goto L_0885AC14;
    case 722u: goto L_0885AC2C;
    case 723u: goto L_0885AC34;
    case 724u: goto L_0885AC4C;
    case 725u: goto L_0885AC54;
    case 726u: goto L_0885AC6C;
    case 727u: goto L_0885AC74;
    case 728u: goto L_0885AC8C;
    case 729u: goto L_0885AC94;
    case 730u: goto L_0885ACAC;
    case 731u: goto L_0885ACB4;
    case 732u: goto L_0885ACCC;
    case 733u: goto L_0885ACD4;
    case 734u: goto L_0885ACE8;
    case 735u: goto L_0885ACF4;
    case 736u: goto L_0885AD18;
    case 737u: goto L_0885AD30;
    case 738u: goto L_0885AD48;
    case 739u: goto L_0885AD4C;
    case 740u: goto L_0885AD54;
    case 741u: goto L_0885AD6C;
    case 742u: goto L_0885AD74;
    case 743u: goto L_0885AD8C;
    case 744u: goto L_0885AD94;
    case 745u: goto L_0885ADAC;
    case 746u: goto L_0885ADB4;
    case 747u: goto L_0885ADCC;
    case 748u: goto L_0885ADD4;
    case 749u: goto L_0885ADEC;
    case 750u: goto L_0885ADF4;
    case 751u: goto L_0885AE0C;
    case 752u: goto L_0885AE14;
    case 753u: goto L_0885AE2C;
    case 754u: goto L_0885AE34;
    case 755u: goto L_0885AE48;
    case 756u: goto L_0885AE54;
    case 757u: goto L_0885AE74;
    case 758u: goto L_0885AE80;
    case 759u: goto L_0885AE88;
    case 760u: goto L_0885AE90;
    case 761u: goto L_0885AEA8;
    case 762u: goto L_0885AEAC;
    case 763u: goto L_0885AEB4;
    case 764u: goto L_0885AECC;
    case 765u: goto L_0885AED4;
    case 766u: goto L_0885AEEC;
    case 767u: goto L_0885AEF4;
    case 768u: goto L_0885AF0C;
    case 769u: goto L_0885AF14;
    case 770u: goto L_0885AF24;
    case 771u: goto L_0885AF30;
    case 772u: goto L_0885AF54;
    case 773u: goto L_0885AF6C;
    case 774u: goto L_0885AF84;
    case 775u: goto L_0885AF88;
    case 776u: goto L_0885AF90;
    case 777u: goto L_0885AFA8;
    case 778u: goto L_0885AFB0;
    case 779u: goto L_0885AFC8;
    case 780u: goto L_0885AFD0;
    case 781u: goto L_0885AFE8;
    case 782u: goto L_0885AFF0;
    case 783u: goto L_0885B008;
    case 784u: goto L_0885B010;
    case 785u: goto L_0885B028;
    case 786u: goto L_0885B030;
    case 787u: goto L_0885B048;
    case 788u: goto L_0885B050;
    case 789u: goto L_0885B068;
    case 790u: goto L_0885B070;
    case 791u: goto L_0885B088;
    case 792u: goto L_0885B090;
    case 793u: goto L_0885B0A8;
    case 794u: goto L_0885B0B0;
    case 795u: goto L_0885B0C4;
    case 796u: goto L_0885B0D0;
    case 797u: goto L_0885B0F4;
    case 798u: goto L_0885B10C;
    case 799u: goto L_0885B124;
    case 800u: goto L_0885B128;
    case 801u: goto L_0885B130;
    case 802u: goto L_0885B148;
    case 803u: goto L_0885B150;
    case 804u: goto L_0885B168;
    case 805u: goto L_0885B170;
    case 806u: goto L_0885B188;
    case 807u: goto L_0885B190;
    case 808u: goto L_0885B1A8;
    case 809u: goto L_0885B1B0;
    case 810u: goto L_0885B1C8;
    case 811u: goto L_0885B1D0;
    case 812u: goto L_0885B1E8;
    case 813u: goto L_0885B1F0;
    case 814u: goto L_0885B208;
    case 815u: goto L_0885B210;
    case 816u: goto L_0885B228;
    case 817u: goto L_0885B230;
    case 818u: goto L_0885B248;
    case 819u: goto L_0885B250;
    case 820u: goto L_0885B264;
    case 821u: goto L_0885B270;
    case 822u: goto L_0885B294;
    case 823u: goto L_0885B2AC;
    case 824u: goto L_0885B2C4;
    case 825u: goto L_0885B2C8;
    case 826u: goto L_0885B2D0;
    case 827u: goto L_0885B2E8;
    case 828u: goto L_0885B2F0;
    case 829u: goto L_0885B308;
    case 830u: goto L_0885B310;
    case 831u: goto L_0885B328;
    case 832u: goto L_0885B330;
    case 833u: goto L_0885B348;
    case 834u: goto L_0885B350;
    case 835u: goto L_0885B368;
    case 836u: goto L_0885B370;
    case 837u: goto L_0885B388;
    case 838u: goto L_0885B390;
    case 839u: goto L_0885B3A8;
    case 840u: goto L_0885B3B0;
    case 841u: goto L_0885B3C8;
    case 842u: goto L_0885B3D0;
    case 843u: goto L_0885B3E8;
    case 844u: goto L_0885B3F0;
    case 845u: goto L_0885B404;
    case 846u: goto L_0885B410;
    case 847u: goto L_0885B434;
    case 848u: goto L_0885B44C;
    case 849u: goto L_0885B464;
    case 850u: goto L_0885B468;
    case 851u: goto L_0885B470;
    case 852u: goto L_0885B488;
    case 853u: goto L_0885B490;
    case 854u: goto L_0885B4A8;
    case 855u: goto L_0885B4B0;
    case 856u: goto L_0885B4C8;
    case 857u: goto L_0885B4D0;
    case 858u: goto L_0885B4E8;
    case 859u: goto L_0885B4F0;
    case 860u: goto L_0885B508;
    case 861u: goto L_0885B510;
    case 862u: goto L_0885B528;
    case 863u: goto L_0885B530;
    case 864u: goto L_0885B548;
    case 865u: goto L_0885B550;
    case 866u: goto L_0885B568;
    case 867u: goto L_0885B570;
    case 868u: goto L_0885B588;
    case 869u: goto L_0885B590;
    case 870u: goto L_0885B5A4;
    case 871u: goto L_0885B5B0;
    case 872u: goto L_0885B5D4;
    case 873u: goto L_0885B5EC;
    case 874u: goto L_0885B604;
    case 875u: goto L_0885B608;
    case 876u: goto L_0885B610;
    case 877u: goto L_0885B628;
    case 878u: goto L_0885B630;
    case 879u: goto L_0885B648;
    case 880u: goto L_0885B650;
    case 881u: goto L_0885B668;
    case 882u: goto L_0885B670;
    case 883u: goto L_0885B688;
    case 884u: goto L_0885B690;
    case 885u: goto L_0885B6A8;
    case 886u: goto L_0885B6B0;
    case 887u: goto L_0885B6C8;
    case 888u: goto L_0885B6D0;
    case 889u: goto L_0885B6E8;
    case 890u: goto L_0885B6F0;
    case 891u: goto L_0885B708;
    case 892u: goto L_0885B710;
    case 893u: goto L_0885B728;
    case 894u: goto L_0885B730;
    case 895u: goto L_0885B744;
    case 896u: goto L_0885B750;
    case 897u: goto L_0885B774;
    case 898u: goto L_0885B78C;
    case 899u: goto L_0885B7A4;
    case 900u: goto L_0885B7A8;
    case 901u: goto L_0885B7B0;
    case 902u: goto L_0885B7C8;
    case 903u: goto L_0885B7D0;
    case 904u: goto L_0885B7E8;
    case 905u: goto L_0885B7F0;
    case 906u: goto L_0885B808;
    case 907u: goto L_0885B810;
    case 908u: goto L_0885B828;
    case 909u: goto L_0885B830;
    case 910u: goto L_0885B848;
    case 911u: goto L_0885B850;
    case 912u: goto L_0885B868;
    case 913u: goto L_0885B870;
    case 914u: goto L_0885B888;
    case 915u: goto L_0885B890;
    case 916u: goto L_0885B8A8;
    case 917u: goto L_0885B8B0;
    case 918u: goto L_0885B8C8;
    case 919u: goto L_0885B8D0;
    case 920u: goto L_0885B8E4;
    case 921u: goto L_0885B8F0;
    case 922u: goto L_0885B914;
    case 923u: goto L_0885B92C;
    case 924u: goto L_0885B944;
    case 925u: goto L_0885B948;
    case 926u: goto L_0885B950;
    case 927u: goto L_0885B968;
    case 928u: goto L_0885B970;
    case 929u: goto L_0885B988;
    case 930u: goto L_0885B990;
    case 931u: goto L_0885B9A8;
    case 932u: goto L_0885B9B0;
    case 933u: goto L_0885B9C8;
    case 934u: goto L_0885B9D0;
    case 935u: goto L_0885B9E8;
    case 936u: goto L_0885B9F0;
    case 937u: goto L_0885BA08;
    case 938u: goto L_0885BA10;
    case 939u: goto L_0885BA28;
    case 940u: goto L_0885BA30;
    case 941u: goto L_0885BA48;
    case 942u: goto L_0885BA50;
    case 943u: goto L_0885BA68;
    case 944u: goto L_0885BA70;
    case 945u: goto L_0885BA84;
    case 946u: goto L_0885BA90;
    case 947u: goto L_0885BAB4;
    case 948u: goto L_0885BACC;
    case 949u: goto L_0885BAE4;
    case 950u: goto L_0885BAE8;
    case 951u: goto L_0885BAF0;
    case 952u: goto L_0885BB08;
    case 953u: goto L_0885BB10;
    case 954u: goto L_0885BB28;
    case 955u: goto L_0885BB30;
    case 956u: goto L_0885BB48;
    case 957u: goto L_0885BB50;
    case 958u: goto L_0885BB68;
    case 959u: goto L_0885BB70;
    case 960u: goto L_0885BB88;
    case 961u: goto L_0885BB90;
    case 962u: goto L_0885BBA8;
    case 963u: goto L_0885BBB0;
    case 964u: goto L_0885BBC8;
    case 965u: goto L_0885BBD0;
    case 966u: goto L_0885BBE8;
    case 967u: goto L_0885BBF0;
    case 968u: goto L_0885BC08;
    case 969u: goto L_0885BC10;
    case 970u: goto L_0885BC24;
    case 971u: goto L_0885BC30;
    case 972u: goto L_0885BC54;
    case 973u: goto L_0885BC6C;
    case 974u: goto L_0885BC84;
    case 975u: goto L_0885BC88;
    case 976u: goto L_0885BC90;
    case 977u: goto L_0885BCA8;
    case 978u: goto L_0885BCB0;
    case 979u: goto L_0885BCC8;
    case 980u: goto L_0885BCD0;
    case 981u: goto L_0885BCE8;
    case 982u: goto L_0885BCF0;
    case 983u: goto L_0885BD08;
    case 984u: goto L_0885BD10;
    case 985u: goto L_0885BD28;
    case 986u: goto L_0885BD30;
    case 987u: goto L_0885BD48;
    case 988u: goto L_0885BD50;
    case 989u: goto L_0885BD68;
    case 990u: goto L_0885BD70;
    case 991u: goto L_0885BD88;
    case 992u: goto L_0885BD90;
    case 993u: goto L_0885BDA8;
    case 994u: goto L_0885BDB0;
    case 995u: goto L_0885BDC4;
    case 996u: goto L_0885BDD0;
    case 997u: goto L_0885BDF4;
    case 998u: goto L_0885BE0C;
    case 999u: goto L_0885BE24;
    case 1000u: goto L_0885BE28;
    case 1001u: goto L_0885BE30;
    case 1002u: goto L_0885BE48;
    case 1003u: goto L_0885BE50;
    case 1004u: goto L_0885BE68;
    case 1005u: goto L_0885BE70;
    case 1006u: goto L_0885BE88;
    case 1007u: goto L_0885BE90;
    case 1008u: goto L_0885BEA8;
    case 1009u: goto L_0885BEB0;
    case 1010u: goto L_0885BEC8;
    case 1011u: goto L_0885BED0;
    case 1012u: goto L_0885BEE8;
    case 1013u: goto L_0885BEF0;
    case 1014u: goto L_0885BF08;
    case 1015u: goto L_0885BF10;
    case 1016u: goto L_0885BF28;
    case 1017u: goto L_0885BF30;
    case 1018u: goto L_0885BF48;
    case 1019u: goto L_0885BF50;
    case 1020u: goto L_0885BF64;
    case 1021u: goto L_0885BF70;
    case 1022u: goto L_0885BF94;
    case 1023u: goto L_0885BFAC;
    case 1024u: goto L_0885BFC4;
    case 1025u: goto L_0885BFC8;
    case 1026u: goto L_0885BFD0;
    case 1027u: goto L_0885BFE8;
    case 1028u: goto L_0885BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08858000:
    aot_gpr_31 = (0x08858008u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858008u) goto L_08858008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858008:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885800C;
L_0885800C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08858148;
      }
      goto L_08858014;
    }
L_08858014:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2811u);
    aot_gpr_31 = (0x0885802Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885802Cu) goto L_0885802C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885802C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885800C;
      }
      goto L_08858034;
    }
L_08858034:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2803u);
    aot_gpr_31 = (0x0885804Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885804Cu) goto L_0885804C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885804C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885800C;
      }
      goto L_08858054;
    }
L_08858054:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2799u);
    aot_gpr_31 = (0x0885806Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885806Cu) goto L_0885806C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885806C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885800C;
      }
      goto L_08858074;
    }
L_08858074:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2797u);
    aot_gpr_31 = (0x0885808Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885808Cu) goto L_0885808C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885808C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885800C;
      }
      goto L_08858094;
    }
L_08858094:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2801u);
    aot_gpr_31 = (0x088580ACu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088580ACu) goto L_088580AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088580AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885800C;
      }
      goto L_088580B4;
    }
L_088580B4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2814u);
    aot_gpr_31 = (0x088580CCu);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088580CCu) goto L_088580CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088580CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885800C;
      }
      goto L_088580D4;
    }
L_088580D4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2790u);
    aot_gpr_31 = (0x088580ECu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088580ECu) goto L_088580EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088580EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885800C;
      }
      goto L_088580F4;
    }
L_088580F4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2793u);
    aot_gpr_31 = (0x0885810Cu);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885810Cu) goto L_0885810C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885810C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885800C;
      }
      goto L_08858114;
    }
L_08858114:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2806u);
    aot_gpr_31 = (0x0885812Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885812Cu) goto L_0885812C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885812C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885800C;
      }
      goto L_08858134;
    }
L_08858134:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08858148u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858148u) goto L_08858148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858148:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858154:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 141 ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088581B0;
      }
      goto L_08858174;
    }
L_08858174:
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 139 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          goto L_088581FC;
      }
      goto L_08858180;
    }
L_08858180:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 140 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
      if (branch_taken) {
          goto L_088581DC;
      }
      goto L_0885818C;
    }
L_0885818C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2847u);
    aot_gpr_31 = (0x088581A4u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088581A4u) goto L_088581A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088581A4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088581A8;
L_088581A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885820C;
      }
      goto L_088581B0;
    }
L_088581B0:
    aot_gpr_7 = (0u | 158u);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_088581FC;
      }
      goto L_088581BC;
    }
L_088581BC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2840u);
    aot_gpr_31 = (0x088581D4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088581D4u) goto L_088581D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088581D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088581A8;
      }
      goto L_088581DC;
    }
L_088581DC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2843u);
    aot_gpr_31 = (0x088581F4u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088581F4u) goto L_088581F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088581F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088581A8;
      }
      goto L_088581FC;
    }
L_088581FC:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x0885820Cu);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885820Cu) goto L_0885820C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885820C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 140 ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885827C;
      }
      goto L_08858238;
    }
L_08858238:
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 139 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          goto L_08858264;
      }
      goto L_08858244;
    }
L_08858244:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2855u);
    aot_gpr_31 = (0x0885825Cu);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885825Cu) goto L_0885825C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885825C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088582A4;
      }
      goto L_08858264;
    }
L_08858264:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08858274u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858274u) goto L_08858274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858274:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088582A4;
      }
      goto L_0885827C;
    }
L_0885827C:
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 141 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08858264;
      }
      goto L_08858288;
    }
L_08858288:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2851u);
    aot_gpr_31 = (0x088582A0u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088582A0u) goto L_088582A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088582A0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088582A4;
L_088582A4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_088582B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08858350;
      }
      goto L_088582D0;
    }
L_088582D0:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08858330;
      }
      goto L_088582DC;
    }
L_088582DC:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08858310;
      }
      goto L_088582E4;
    }
L_088582E4:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08858370;
      }
      goto L_088582EC;
    }
L_088582EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2865u);
    aot_gpr_31 = (0x08858304u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858304u) goto L_08858304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858304:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08858308;
L_08858308:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08858380;
      }
      goto L_08858310;
    }
L_08858310:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2862u);
    aot_gpr_31 = (0x08858328u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858328u) goto L_08858328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858308;
      }
      goto L_08858330;
    }
L_08858330:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2859u);
    aot_gpr_31 = (0x08858348u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858348u) goto L_08858348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858348:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858308;
      }
      goto L_08858350;
    }
L_08858350:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2868u);
    aot_gpr_31 = (0x08858368u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858368u) goto L_08858368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858308;
      }
      goto L_08858370;
    }
L_08858370:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08858380u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858380u) goto L_08858380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858380:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885838C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885842C;
      }
      goto L_088583AC;
    }
L_088583AC:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_0885840C;
      }
      goto L_088583B8;
    }
L_088583B8:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088583EC;
      }
      goto L_088583C0;
    }
L_088583C0:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_0885844C;
      }
      goto L_088583C8;
    }
L_088583C8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2875u);
    aot_gpr_31 = (0x088583E0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088583E0u) goto L_088583E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088583E0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088583E4;
L_088583E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885845C;
      }
      goto L_088583EC;
    }
L_088583EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2873u);
    aot_gpr_31 = (0x08858404u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858404u) goto L_08858404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088583E4;
      }
      goto L_0885840C;
    }
L_0885840C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2871u);
    aot_gpr_31 = (0x08858424u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858424u) goto L_08858424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088583E4;
      }
      goto L_0885842C;
    }
L_0885842C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2877u);
    aot_gpr_31 = (0x08858444u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858444u) goto L_08858444;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088583E4;
      }
      goto L_0885844C;
    }
L_0885844C:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x0885845Cu);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885845Cu) goto L_0885845C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885845C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08858508;
      }
      goto L_08858488;
    }
L_08858488:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_088584E8;
      }
      goto L_08858494;
    }
L_08858494:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088584C8;
      }
      goto L_0885849C;
    }
L_0885849C:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08858528;
      }
      goto L_088584A4;
    }
L_088584A4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2883u);
    aot_gpr_31 = (0x088584BCu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088584BCu) goto L_088584BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088584BC:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088584C0;
L_088584C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08858538;
      }
      goto L_088584C8;
    }
L_088584C8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2881u);
    aot_gpr_31 = (0x088584E0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088584E0u) goto L_088584E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088584E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088584C0;
      }
      goto L_088584E8;
    }
L_088584E8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2879u);
    aot_gpr_31 = (0x08858500u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858500u) goto L_08858500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858500:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088584C0;
      }
      goto L_08858508;
    }
L_08858508:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2885u);
    aot_gpr_31 = (0x08858520u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858520u) goto L_08858520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088584C0;
      }
      goto L_08858528;
    }
L_08858528:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08858538u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858538u) goto L_08858538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858538:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088585E4;
      }
      goto L_08858564;
    }
L_08858564:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_088585C4;
      }
      goto L_08858570;
    }
L_08858570:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088585A4;
      }
      goto L_08858578;
    }
L_08858578:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08858604;
      }
      goto L_08858580;
    }
L_08858580:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2891u);
    aot_gpr_31 = (0x08858598u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858598u) goto L_08858598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858598:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885859C;
L_0885859C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08858614;
      }
      goto L_088585A4;
    }
L_088585A4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2889u);
    aot_gpr_31 = (0x088585BCu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088585BCu) goto L_088585BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088585BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885859C;
      }
      goto L_088585C4;
    }
L_088585C4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2887u);
    aot_gpr_31 = (0x088585DCu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088585DCu) goto L_088585DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088585DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885859C;
      }
      goto L_088585E4;
    }
L_088585E4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2901u);
    aot_gpr_31 = (0x088585FCu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088585FCu) goto L_088585FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088585FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885859C;
      }
      goto L_08858604;
    }
L_08858604:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08858614u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858614u) goto L_08858614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858614:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088586C0;
      }
      goto L_08858640;
    }
L_08858640:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_088586A0;
      }
      goto L_0885864C;
    }
L_0885864C:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08858680;
      }
      goto L_08858654;
    }
L_08858654:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_088586E0;
      }
      goto L_0885865C;
    }
L_0885865C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2897u);
    aot_gpr_31 = (0x08858674u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858674u) goto L_08858674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858674:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08858678;
L_08858678:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088586F0;
      }
      goto L_08858680;
    }
L_08858680:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2895u);
    aot_gpr_31 = (0x08858698u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858698u) goto L_08858698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858678;
      }
      goto L_088586A0;
    }
L_088586A0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2893u);
    aot_gpr_31 = (0x088586B8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088586B8u) goto L_088586B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088586B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858678;
      }
      goto L_088586C0;
    }
L_088586C0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2899u);
    aot_gpr_31 = (0x088586D8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088586D8u) goto L_088586D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088586D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858678;
      }
      goto L_088586E0;
    }
L_088586E0:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088586F0u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088586F0u) goto L_088586F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088586F0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_088586FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885879C;
      }
      goto L_0885871C;
    }
L_0885871C:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_0885877C;
      }
      goto L_08858728;
    }
L_08858728:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_0885875C;
      }
      goto L_08858730;
    }
L_08858730:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_088587BC;
      }
      goto L_08858738;
    }
L_08858738:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2909u);
    aot_gpr_31 = (0x08858750u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858750u) goto L_08858750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858750:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08858754;
L_08858754:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088587CC;
      }
      goto L_0885875C;
    }
L_0885875C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2906u);
    aot_gpr_31 = (0x08858774u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858774u) goto L_08858774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858754;
      }
      goto L_0885877C;
    }
L_0885877C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2903u);
    aot_gpr_31 = (0x08858794u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858794u) goto L_08858794;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858754;
      }
      goto L_0885879C;
    }
L_0885879C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2911u);
    aot_gpr_31 = (0x088587B4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088587B4u) goto L_088587B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088587B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858754;
      }
      goto L_088587BC;
    }
L_088587BC:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088587CCu);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088587CCu) goto L_088587CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088587CC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_088587D8:
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
          goto L_08858958;
      }
      goto L_088587FC;
    }
L_088587FC:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30728)));
    jump_target = ctx.gpr[1];
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
L_08858814:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2933u);
    aot_gpr_31 = (0x0885882Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885882Cu) goto L_0885882C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885882C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08858830;
L_08858830:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885896C;
      }
      goto L_08858838;
    }
L_08858838:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2935u);
    aot_gpr_31 = (0x08858850u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858850u) goto L_08858850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858830;
      }
      goto L_08858858;
    }
L_08858858:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2927u);
    aot_gpr_31 = (0x08858870u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858870u) goto L_08858870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858870:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858830;
      }
      goto L_08858878;
    }
L_08858878:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2923u);
    aot_gpr_31 = (0x08858890u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858890u) goto L_08858890;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858830;
      }
      goto L_08858898;
    }
L_08858898:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2921u);
    aot_gpr_31 = (0x088588B0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088588B0u) goto L_088588B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088588B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858830;
      }
      goto L_088588B8;
    }
L_088588B8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2925u);
    aot_gpr_31 = (0x088588D0u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088588D0u) goto L_088588D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088588D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858830;
      }
      goto L_088588D8;
    }
L_088588D8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2938u);
    aot_gpr_31 = (0x088588F0u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088588F0u) goto L_088588F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088588F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858830;
      }
      goto L_088588F8;
    }
L_088588F8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2914u);
    aot_gpr_31 = (0x08858910u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858910u) goto L_08858910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858830;
      }
      goto L_08858918;
    }
L_08858918:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2917u);
    aot_gpr_31 = (0x08858930u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858930u) goto L_08858930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858830;
      }
      goto L_08858938;
    }
L_08858938:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2930u);
    aot_gpr_31 = (0x08858950u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858950u) goto L_08858950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858950:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858830;
      }
      goto L_08858958;
    }
L_08858958:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885896Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885896Cu) goto L_0885896C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885896C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858978:
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
          goto L_08858AF8;
      }
      goto L_0885899C;
    }
L_0885899C:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30896)));
    jump_target = ctx.gpr[1];
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
L_088589B4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2958u);
    aot_gpr_31 = (0x088589CCu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088589CCu) goto L_088589CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088589CC:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088589D0;
L_088589D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08858B0C;
      }
      goto L_088589D8;
    }
L_088589D8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2960u);
    aot_gpr_31 = (0x088589F0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088589F0u) goto L_088589F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088589F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088589D0;
      }
      goto L_088589F8;
    }
L_088589F8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2952u);
    aot_gpr_31 = (0x08858A10u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858A10u) goto L_08858A10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858A10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088589D0;
      }
      goto L_08858A18;
    }
L_08858A18:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2948u);
    aot_gpr_31 = (0x08858A30u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858A30u) goto L_08858A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858A30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088589D0;
      }
      goto L_08858A38;
    }
L_08858A38:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2946u);
    aot_gpr_31 = (0x08858A50u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858A50u) goto L_08858A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858A50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088589D0;
      }
      goto L_08858A58;
    }
L_08858A58:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2950u);
    aot_gpr_31 = (0x08858A70u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858A70u) goto L_08858A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088589D0;
      }
      goto L_08858A78;
    }
L_08858A78:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2963u);
    aot_gpr_31 = (0x08858A90u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858A90u) goto L_08858A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088589D0;
      }
      goto L_08858A98;
    }
L_08858A98:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2939u);
    aot_gpr_31 = (0x08858AB0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858AB0u) goto L_08858AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088589D0;
      }
      goto L_08858AB8;
    }
L_08858AB8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2942u);
    aot_gpr_31 = (0x08858AD0u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858AD0u) goto L_08858AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088589D0;
      }
      goto L_08858AD8;
    }
L_08858AD8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2955u);
    aot_gpr_31 = (0x08858AF0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858AF0u) goto L_08858AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088589D0;
      }
      goto L_08858AF8;
    }
L_08858AF8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08858B0Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858B0Cu) goto L_08858B0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858B0C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858B18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 137u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08858B58;
      }
      goto L_08858B38;
    }
L_08858B38:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2964u);
    aot_gpr_31 = (0x08858B50u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858B50u) goto L_08858B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858B68;
      }
      goto L_08858B58;
    }
L_08858B58:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08858B68u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858B68u) goto L_08858B68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858B68:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858B74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 137u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08858BB4;
      }
      goto L_08858B94;
    }
L_08858B94:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2967u);
    aot_gpr_31 = (0x08858BACu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858BACu) goto L_08858BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858BAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858BC4;
      }
      goto L_08858BB4;
    }
L_08858BB4:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08858BC4u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858BC4u) goto L_08858BC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858BC4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858BD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 137u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08858C10;
      }
      goto L_08858BF0;
    }
L_08858BF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2970u);
    aot_gpr_31 = (0x08858C08u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858C08u) goto L_08858C08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858C08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858C20;
      }
      goto L_08858C10;
    }
L_08858C10:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08858C20u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858C20u) goto L_08858C20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858C20:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858C2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 137u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08858C6C;
      }
      goto L_08858C4C;
    }
L_08858C4C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2973u);
    aot_gpr_31 = (0x08858C64u);
    aot_gpr_8 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858C64u) goto L_08858C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858C7C;
      }
      goto L_08858C6C;
    }
L_08858C6C:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08858C7Cu);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858C7Cu) goto L_08858C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858C7C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858C88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08858D28;
      }
      goto L_08858CA8;
    }
L_08858CA8:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08858D08;
      }
      goto L_08858CB4;
    }
L_08858CB4:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08858CE8;
      }
      goto L_08858CBC;
    }
L_08858CBC:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08858D48;
      }
      goto L_08858CC4;
    }
L_08858CC4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2984u);
    aot_gpr_31 = (0x08858CDCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858CDCu) goto L_08858CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858CDC:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08858CE0;
L_08858CE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08858D58;
      }
      goto L_08858CE8;
    }
L_08858CE8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2981u);
    aot_gpr_31 = (0x08858D00u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858D00u) goto L_08858D00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858D00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858CE0;
      }
      goto L_08858D08;
    }
L_08858D08:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2978u);
    aot_gpr_31 = (0x08858D20u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858D20u) goto L_08858D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858CE0;
      }
      goto L_08858D28;
    }
L_08858D28:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2987u);
    aot_gpr_31 = (0x08858D40u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858D40u) goto L_08858D40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858D40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858CE0;
      }
      goto L_08858D48;
    }
L_08858D48:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08858D58u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858D58u) goto L_08858D58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858D58:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858D64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08858E04;
      }
      goto L_08858D84;
    }
L_08858D84:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08858DE4;
      }
      goto L_08858D90;
    }
L_08858D90:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08858DC4;
      }
      goto L_08858D98;
    }
L_08858D98:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08858E24;
      }
      goto L_08858DA0;
    }
L_08858DA0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2996u);
    aot_gpr_31 = (0x08858DB8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858DB8u) goto L_08858DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858DB8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08858DBC;
L_08858DBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08858E34;
      }
      goto L_08858DC4;
    }
L_08858DC4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2993u);
    aot_gpr_31 = (0x08858DDCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858DDCu) goto L_08858DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858DDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858DBC;
      }
      goto L_08858DE4;
    }
L_08858DE4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2990u);
    aot_gpr_31 = (0x08858DFCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858DFCu) goto L_08858DFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858DFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858DBC;
      }
      goto L_08858E04;
    }
L_08858E04:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 2999u);
    aot_gpr_31 = (0x08858E1Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858E1Cu) goto L_08858E1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858E1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858DBC;
      }
      goto L_08858E24;
    }
L_08858E24:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08858E34u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858E34u) goto L_08858E34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858E34:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858E40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08858EE0;
      }
      goto L_08858E60;
    }
L_08858E60:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08858EC0;
      }
      goto L_08858E6C;
    }
L_08858E6C:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08858EA0;
      }
      goto L_08858E74;
    }
L_08858E74:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08858F00;
      }
      goto L_08858E7C;
    }
L_08858E7C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3008u);
    aot_gpr_31 = (0x08858E94u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858E94u) goto L_08858E94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858E94:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08858E98;
L_08858E98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08858F10;
      }
      goto L_08858EA0;
    }
L_08858EA0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3005u);
    aot_gpr_31 = (0x08858EB8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858EB8u) goto L_08858EB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858E98;
      }
      goto L_08858EC0;
    }
L_08858EC0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3002u);
    aot_gpr_31 = (0x08858ED8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858ED8u) goto L_08858ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858E98;
      }
      goto L_08858EE0;
    }
L_08858EE0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3011u);
    aot_gpr_31 = (0x08858EF8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858EF8u) goto L_08858EF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858E98;
      }
      goto L_08858F00;
    }
L_08858F00:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08858F10u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858F10u) goto L_08858F10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858F10:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858F1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08858FBC;
      }
      goto L_08858F3C;
    }
L_08858F3C:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08858F9C;
      }
      goto L_08858F48;
    }
L_08858F48:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08858F7C;
      }
      goto L_08858F50;
    }
L_08858F50:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08858FDC;
      }
      goto L_08858F58;
    }
L_08858F58:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3020u);
    aot_gpr_31 = (0x08858F70u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858F70u) goto L_08858F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858F70:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08858F74;
L_08858F74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08858FEC;
      }
      goto L_08858F7C;
    }
L_08858F7C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3017u);
    aot_gpr_31 = (0x08858F94u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858F94u) goto L_08858F94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858F74;
      }
      goto L_08858F9C;
    }
L_08858F9C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3014u);
    aot_gpr_31 = (0x08858FB4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858FB4u) goto L_08858FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858FB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858F74;
      }
      goto L_08858FBC;
    }
L_08858FBC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3023u);
    aot_gpr_31 = (0x08858FD4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858FD4u) goto L_08858FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08858F74;
      }
      goto L_08858FDC;
    }
L_08858FDC:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08858FECu);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08858FECu) goto L_08858FEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08858FEC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08858FF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08859098;
      }
      goto L_08859018;
    }
L_08859018:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08859078;
      }
      goto L_08859024;
    }
L_08859024:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08859058;
      }
      goto L_0885902C;
    }
L_0885902C:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_088590B8;
      }
      goto L_08859034;
    }
L_08859034:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3032u);
    aot_gpr_31 = (0x0885904Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885904Cu) goto L_0885904C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885904C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08859050;
L_08859050:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088590C8;
      }
      goto L_08859058;
    }
L_08859058:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3029u);
    aot_gpr_31 = (0x08859070u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859070u) goto L_08859070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859050;
      }
      goto L_08859078;
    }
L_08859078:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3026u);
    aot_gpr_31 = (0x08859090u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859090u) goto L_08859090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859050;
      }
      goto L_08859098;
    }
L_08859098:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3035u);
    aot_gpr_31 = (0x088590B0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088590B0u) goto L_088590B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088590B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859050;
      }
      goto L_088590B8;
    }
L_088590B8:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088590C8u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088590C8u) goto L_088590C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088590C8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_088590D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08859174;
      }
      goto L_088590F4;
    }
L_088590F4:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08859154;
      }
      goto L_08859100;
    }
L_08859100:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08859134;
      }
      goto L_08859108;
    }
L_08859108:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08859194;
      }
      goto L_08859110;
    }
L_08859110:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3044u);
    aot_gpr_31 = (0x08859128u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859128u) goto L_08859128;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859128:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885912C;
L_0885912C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088591A4;
      }
      goto L_08859134;
    }
L_08859134:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3041u);
    aot_gpr_31 = (0x0885914Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885914Cu) goto L_0885914C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885914C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885912C;
      }
      goto L_08859154;
    }
L_08859154:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3038u);
    aot_gpr_31 = (0x0885916Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885916Cu) goto L_0885916C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885916C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885912C;
      }
      goto L_08859174;
    }
L_08859174:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3047u);
    aot_gpr_31 = (0x0885918Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885918Cu) goto L_0885918C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885918C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885912C;
      }
      goto L_08859194;
    }
L_08859194:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088591A4u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088591A4u) goto L_088591A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088591A4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_088591B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08859250;
      }
      goto L_088591D0;
    }
L_088591D0:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08859230;
      }
      goto L_088591DC;
    }
L_088591DC:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08859210;
      }
      goto L_088591E4;
    }
L_088591E4:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08859270;
      }
      goto L_088591EC;
    }
L_088591EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3056u);
    aot_gpr_31 = (0x08859204u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859204u) goto L_08859204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859204:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08859208;
L_08859208:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08859280;
      }
      goto L_08859210;
    }
L_08859210:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3053u);
    aot_gpr_31 = (0x08859228u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859228u) goto L_08859228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859208;
      }
      goto L_08859230;
    }
L_08859230:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3050u);
    aot_gpr_31 = (0x08859248u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859248u) goto L_08859248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859248:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859208;
      }
      goto L_08859250;
    }
L_08859250:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3059u);
    aot_gpr_31 = (0x08859268u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859268u) goto L_08859268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859208;
      }
      goto L_08859270;
    }
L_08859270:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08859280u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859280u) goto L_08859280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859280:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885928C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885932C;
      }
      goto L_088592AC;
    }
L_088592AC:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_0885930C;
      }
      goto L_088592B8;
    }
L_088592B8:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088592EC;
      }
      goto L_088592C0;
    }
L_088592C0:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_0885934C;
      }
      goto L_088592C8;
    }
L_088592C8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3068u);
    aot_gpr_31 = (0x088592E0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088592E0u) goto L_088592E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088592E0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088592E4;
L_088592E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885935C;
      }
      goto L_088592EC;
    }
L_088592EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3065u);
    aot_gpr_31 = (0x08859304u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859304u) goto L_08859304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088592E4;
      }
      goto L_0885930C;
    }
L_0885930C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3062u);
    aot_gpr_31 = (0x08859324u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859324u) goto L_08859324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088592E4;
      }
      goto L_0885932C;
    }
L_0885932C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3071u);
    aot_gpr_31 = (0x08859344u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859344u) goto L_08859344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088592E4;
      }
      goto L_0885934C;
    }
L_0885934C:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x0885935Cu);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885935Cu) goto L_0885935C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885935C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08859368:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08859408;
      }
      goto L_08859388;
    }
L_08859388:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_088593E8;
      }
      goto L_08859394;
    }
L_08859394:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088593C8;
      }
      goto L_0885939C;
    }
L_0885939C:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08859428;
      }
      goto L_088593A4;
    }
L_088593A4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3130u);
    aot_gpr_31 = (0x088593BCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088593BCu) goto L_088593BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088593BC:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088593C0;
L_088593C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08859438;
      }
      goto L_088593C8;
    }
L_088593C8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3127u);
    aot_gpr_31 = (0x088593E0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088593E0u) goto L_088593E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088593E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088593C0;
      }
      goto L_088593E8;
    }
L_088593E8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3124u);
    aot_gpr_31 = (0x08859400u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859400u) goto L_08859400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859400:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088593C0;
      }
      goto L_08859408;
    }
L_08859408:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3133u);
    aot_gpr_31 = (0x08859420u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859420u) goto L_08859420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088593C0;
      }
      goto L_08859428;
    }
L_08859428:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08859438u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859438u) goto L_08859438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859438:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08859444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088594E4;
      }
      goto L_08859464;
    }
L_08859464:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_088594C4;
      }
      goto L_08859470;
    }
L_08859470:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088594A4;
      }
      goto L_08859478;
    }
L_08859478:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08859504;
      }
      goto L_08859480;
    }
L_08859480:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3142u);
    aot_gpr_31 = (0x08859498u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859498u) goto L_08859498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859498:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885949C;
L_0885949C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08859514;
      }
      goto L_088594A4;
    }
L_088594A4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3139u);
    aot_gpr_31 = (0x088594BCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088594BCu) goto L_088594BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088594BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885949C;
      }
      goto L_088594C4;
    }
L_088594C4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3136u);
    aot_gpr_31 = (0x088594DCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088594DCu) goto L_088594DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088594DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885949C;
      }
      goto L_088594E4;
    }
L_088594E4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3145u);
    aot_gpr_31 = (0x088594FCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088594FCu) goto L_088594FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088594FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885949C;
      }
      goto L_08859504;
    }
L_08859504:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08859514u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859514u) goto L_08859514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859514:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08859520:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 158u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08859598;
      }
      goto L_08859540;
    }
L_08859540:
    aot_gpr_7 = (0u | 115u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 111u);
      if (branch_taken) {
          goto L_08859578;
      }
      goto L_0885954C;
    }
L_0885954C:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_088595B8;
      }
      goto L_08859554;
    }
L_08859554:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3151u);
    aot_gpr_31 = (0x0885956Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885956Cu) goto L_0885956C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885956C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08859570;
L_08859570:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088595C8;
      }
      goto L_08859578;
    }
L_08859578:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3153u);
    aot_gpr_31 = (0x08859590u);
    aot_gpr_8 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859590u) goto L_08859590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859570;
      }
      goto L_08859598;
    }
L_08859598:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3148u);
    aot_gpr_31 = (0x088595B0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088595B0u) goto L_088595B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088595B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859570;
      }
      goto L_088595B8;
    }
L_088595B8:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088595C8u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088595C8u) goto L_088595C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088595C8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_088595D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 158u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885964C;
      }
      goto L_088595F4;
    }
L_088595F4:
    aot_gpr_7 = (0u | 115u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 111u);
      if (branch_taken) {
          goto L_0885962C;
      }
      goto L_08859600;
    }
L_08859600:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_0885966C;
      }
      goto L_08859608;
    }
L_08859608:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3161u);
    aot_gpr_31 = (0x08859620u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859620u) goto L_08859620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859620:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08859624;
L_08859624:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885967C;
      }
      goto L_0885962C;
    }
L_0885962C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3163u);
    aot_gpr_31 = (0x08859644u);
    aot_gpr_8 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859644u) goto L_08859644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859624;
      }
      goto L_0885964C;
    }
L_0885964C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3158u);
    aot_gpr_31 = (0x08859664u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859664u) goto L_08859664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859624;
      }
      goto L_0885966C;
    }
L_0885966C:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x0885967Cu);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885967Cu) goto L_0885967C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885967C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08859688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08859728;
      }
      goto L_088596A8;
    }
L_088596A8:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08859708;
      }
      goto L_088596B4;
    }
L_088596B4:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088596E8;
      }
      goto L_088596BC;
    }
L_088596BC:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08859748;
      }
      goto L_088596C4;
    }
L_088596C4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3174u);
    aot_gpr_31 = (0x088596DCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088596DCu) goto L_088596DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088596DC:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088596E0;
L_088596E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08859758;
      }
      goto L_088596E8;
    }
L_088596E8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3171u);
    aot_gpr_31 = (0x08859700u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859700u) goto L_08859700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088596E0;
      }
      goto L_08859708;
    }
L_08859708:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3168u);
    aot_gpr_31 = (0x08859720u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859720u) goto L_08859720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088596E0;
      }
      goto L_08859728;
    }
L_08859728:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3177u);
    aot_gpr_31 = (0x08859740u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859740u) goto L_08859740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088596E0;
      }
      goto L_08859748;
    }
L_08859748:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08859758u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859758u) goto L_08859758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859758:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08859764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08859804;
      }
      goto L_08859784;
    }
L_08859784:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_088597E4;
      }
      goto L_08859790;
    }
L_08859790:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088597C4;
      }
      goto L_08859798;
    }
L_08859798:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08859824;
      }
      goto L_088597A0;
    }
L_088597A0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3186u);
    aot_gpr_31 = (0x088597B8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088597B8u) goto L_088597B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088597B8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088597BC;
L_088597BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08859834;
      }
      goto L_088597C4;
    }
L_088597C4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3183u);
    aot_gpr_31 = (0x088597DCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088597DCu) goto L_088597DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088597DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088597BC;
      }
      goto L_088597E4;
    }
L_088597E4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3180u);
    aot_gpr_31 = (0x088597FCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088597FCu) goto L_088597FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088597FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088597BC;
      }
      goto L_08859804;
    }
L_08859804:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3189u);
    aot_gpr_31 = (0x0885981Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885981Cu) goto L_0885981C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885981C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088597BC;
      }
      goto L_08859824;
    }
L_08859824:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08859834u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859834u) goto L_08859834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859834:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08859840:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088598E0;
      }
      goto L_08859860;
    }
L_08859860:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_088598C0;
      }
      goto L_0885986C;
    }
L_0885986C:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_088598A0;
      }
      goto L_08859874;
    }
L_08859874:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08859900;
      }
      goto L_0885987C;
    }
L_0885987C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3198u);
    aot_gpr_31 = (0x08859894u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859894u) goto L_08859894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859894:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08859898;
L_08859898:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08859910;
      }
      goto L_088598A0;
    }
L_088598A0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3195u);
    aot_gpr_31 = (0x088598B8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088598B8u) goto L_088598B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088598B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859898;
      }
      goto L_088598C0;
    }
L_088598C0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3192u);
    aot_gpr_31 = (0x088598D8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088598D8u) goto L_088598D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088598D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859898;
      }
      goto L_088598E0;
    }
L_088598E0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3201u);
    aot_gpr_31 = (0x088598F8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088598F8u) goto L_088598F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088598F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859898;
      }
      goto L_08859900;
    }
L_08859900:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08859910u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859910u) goto L_08859910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859910:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885991C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088599BC;
      }
      goto L_0885993C;
    }
L_0885993C:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_0885999C;
      }
      goto L_08859948;
    }
L_08859948:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_0885997C;
      }
      goto L_08859950;
    }
L_08859950:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_088599DC;
      }
      goto L_08859958;
    }
L_08859958:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3210u);
    aot_gpr_31 = (0x08859970u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859970u) goto L_08859970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859970:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08859974;
L_08859974:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088599EC;
      }
      goto L_0885997C;
    }
L_0885997C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3207u);
    aot_gpr_31 = (0x08859994u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859994u) goto L_08859994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859974;
      }
      goto L_0885999C;
    }
L_0885999C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3204u);
    aot_gpr_31 = (0x088599B4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088599B4u) goto L_088599B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088599B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859974;
      }
      goto L_088599BC;
    }
L_088599BC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3213u);
    aot_gpr_31 = (0x088599D4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088599D4u) goto L_088599D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088599D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859974;
      }
      goto L_088599DC;
    }
L_088599DC:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088599ECu);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088599ECu) goto L_088599EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088599EC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_088599F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08859A98;
      }
      goto L_08859A18;
    }
L_08859A18:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_08859A78;
      }
      goto L_08859A24;
    }
L_08859A24:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_08859A58;
      }
      goto L_08859A2C;
    }
L_08859A2C:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_08859AB8;
      }
      goto L_08859A34;
    }
L_08859A34:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3221u);
    aot_gpr_31 = (0x08859A4Cu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859A4Cu) goto L_08859A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859A4C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08859A50;
L_08859A50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08859AC8;
      }
      goto L_08859A58;
    }
L_08859A58:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3219u);
    aot_gpr_31 = (0x08859A70u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859A70u) goto L_08859A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859A50;
      }
      goto L_08859A78;
    }
L_08859A78:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3216u);
    aot_gpr_31 = (0x08859A90u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859A90u) goto L_08859A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859A50;
      }
      goto L_08859A98;
    }
L_08859A98:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3223u);
    aot_gpr_31 = (0x08859AB0u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859AB0u) goto L_08859AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859A50;
      }
      goto L_08859AB8;
    }
L_08859AB8:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08859AC8u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859AC8u) goto L_08859AC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859AC8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08859AD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-108));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08859C74;
      }
      goto L_08859AF8;
    }
L_08859AF8:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31080)));
    jump_target = ctx.gpr[1];
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
L_08859B10:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3453u);
    aot_gpr_31 = (0x08859B28u);
    aot_gpr_8 = (0u | 13u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859B28u) goto L_08859B28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859B28:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08859B2C;
L_08859B2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08859C88;
      }
      goto L_08859B34;
    }
L_08859B34:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3388u);
    aot_gpr_31 = (0x08859B4Cu);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859B4Cu) goto L_08859B4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859B2C;
      }
      goto L_08859B54;
    }
L_08859B54:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3408u);
    aot_gpr_31 = (0x08859B6Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859B6Cu) goto L_08859B6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859B2C;
      }
      goto L_08859B74;
    }
L_08859B74:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3416u);
    aot_gpr_31 = (0x08859B8Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859B8Cu) goto L_08859B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859B8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859B2C;
      }
      goto L_08859B94;
    }
L_08859B94:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3419u);
    aot_gpr_31 = (0x08859BACu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859BACu) goto L_08859BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859BAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859B2C;
      }
      goto L_08859BB4;
    }
L_08859BB4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3450u);
    aot_gpr_31 = (0x08859BCCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859BCCu) goto L_08859BCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859B2C;
      }
      goto L_08859BD4;
    }
L_08859BD4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3388u);
    aot_gpr_31 = (0x08859BECu);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859BECu) goto L_08859BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859BEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859B2C;
      }
      goto L_08859BF4;
    }
L_08859BF4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3383u);
    aot_gpr_31 = (0x08859C0Cu);
    aot_gpr_8 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859C0Cu) goto L_08859C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859C0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859B2C;
      }
      goto L_08859C14;
    }
L_08859C14:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3398u);
    aot_gpr_31 = (0x08859C2Cu);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859C2Cu) goto L_08859C2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859C2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859B2C;
      }
      goto L_08859C34;
    }
L_08859C34:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3438u);
    aot_gpr_31 = (0x08859C4Cu);
    aot_gpr_8 = (0u | 12u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859C4Cu) goto L_08859C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859B2C;
      }
      goto L_08859C54;
    }
L_08859C54:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3435u);
    aot_gpr_31 = (0x08859C6Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859C6Cu) goto L_08859C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859B2C;
      }
      goto L_08859C74;
    }
L_08859C74:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08859C88u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859C88u) goto L_08859C88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859C88:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08859C94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-108));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08859E34;
      }
      goto L_08859CB8;
    }
L_08859CB8:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31240)));
    jump_target = ctx.gpr[1];
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
L_08859CD0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3531u);
    aot_gpr_31 = (0x08859CE8u);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859CE8u) goto L_08859CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859CE8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08859CEC;
L_08859CEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08859E48;
      }
      goto L_08859CF4;
    }
L_08859CF4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3471u);
    aot_gpr_31 = (0x08859D0Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859D0Cu) goto L_08859D0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859D0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859CEC;
      }
      goto L_08859D14;
    }
L_08859D14:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3488u);
    aot_gpr_31 = (0x08859D2Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859D2Cu) goto L_08859D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859CEC;
      }
      goto L_08859D34;
    }
L_08859D34:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3496u);
    aot_gpr_31 = (0x08859D4Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859D4Cu) goto L_08859D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859D4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859CEC;
      }
      goto L_08859D54;
    }
L_08859D54:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3499u);
    aot_gpr_31 = (0x08859D6Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859D6Cu) goto L_08859D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859D6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859CEC;
      }
      goto L_08859D74;
    }
L_08859D74:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3528u);
    aot_gpr_31 = (0x08859D8Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859D8Cu) goto L_08859D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859D8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859CEC;
      }
      goto L_08859D94;
    }
L_08859D94:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3471u);
    aot_gpr_31 = (0x08859DACu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859DACu) goto L_08859DAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859DAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859CEC;
      }
      goto L_08859DB4;
    }
L_08859DB4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3466u);
    aot_gpr_31 = (0x08859DCCu);
    aot_gpr_8 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859DCCu) goto L_08859DCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859CEC;
      }
      goto L_08859DD4;
    }
L_08859DD4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3479u);
    aot_gpr_31 = (0x08859DECu);
    aot_gpr_8 = (0u | 9u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859DECu) goto L_08859DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859DEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859CEC;
      }
      goto L_08859DF4;
    }
L_08859DF4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3518u);
    aot_gpr_31 = (0x08859E0Cu);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859E0Cu) goto L_08859E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859E0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859CEC;
      }
      goto L_08859E14;
    }
L_08859E14:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3515u);
    aot_gpr_31 = (0x08859E2Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859E2Cu) goto L_08859E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859CEC;
      }
      goto L_08859E34;
    }
L_08859E34:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08859E48u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859E48u) goto L_08859E48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859E48:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08859E54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-108));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08859FD4;
      }
      goto L_08859E78;
    }
L_08859E78:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31400)));
    jump_target = ctx.gpr[1];
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
L_08859E90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3601u);
    aot_gpr_31 = (0x08859EA8u);
    aot_gpr_8 = (0u | 13u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859EA8u) goto L_08859EA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859EA8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08859EAC;
L_08859EAC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08859FE8;
      }
      goto L_08859EB4;
    }
L_08859EB4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3546u);
    aot_gpr_31 = (0x08859ECCu);
    aot_gpr_8 = (0u | 9u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859ECCu) goto L_08859ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859ECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859EAC;
      }
      goto L_08859ED4;
    }
L_08859ED4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3565u);
    aot_gpr_31 = (0x08859EECu);
    aot_gpr_8 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859EECu) goto L_08859EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859EEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859EAC;
      }
      goto L_08859EF4;
    }
L_08859EF4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3570u);
    aot_gpr_31 = (0x08859F0Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859F0Cu) goto L_08859F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859EAC;
      }
      goto L_08859F14;
    }
L_08859F14:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3573u);
    aot_gpr_31 = (0x08859F2Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859F2Cu) goto L_08859F2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859EAC;
      }
      goto L_08859F34;
    }
L_08859F34:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3546u);
    aot_gpr_31 = (0x08859F4Cu);
    aot_gpr_8 = (0u | 9u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859F4Cu) goto L_08859F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859EAC;
      }
      goto L_08859F54;
    }
L_08859F54:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3541u);
    aot_gpr_31 = (0x08859F6Cu);
    aot_gpr_8 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859F6Cu) goto L_08859F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859F6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859EAC;
      }
      goto L_08859F74;
    }
L_08859F74:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3555u);
    aot_gpr_31 = (0x08859F8Cu);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859F8Cu) goto L_08859F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859EAC;
      }
      goto L_08859F94;
    }
L_08859F94:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3591u);
    aot_gpr_31 = (0x08859FACu);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859FACu) goto L_08859FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859FAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859EAC;
      }
      goto L_08859FB4;
    }
L_08859FB4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3589u);
    aot_gpr_31 = (0x08859FCCu);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859FCCu) goto L_08859FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859FCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08859EAC;
      }
      goto L_08859FD4;
    }
L_08859FD4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08859FE8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08859FE8u) goto L_08859FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08859FE8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_08859FF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-115));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(33) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885A134;
      }
      goto L_0885A018;
    }
L_0885A018:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31560)));
    jump_target = ctx.gpr[1];
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
L_0885A030:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3658u);
    aot_gpr_31 = (0x0885A048u);
    aot_gpr_8 = (0u | 9u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A048u) goto L_0885A048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A048:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885A04C;
L_0885A04C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885A148;
      }
      goto L_0885A054;
    }
L_0885A054:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3620u);
    aot_gpr_31 = (0x0885A06Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A06Cu) goto L_0885A06C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A06C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A04C;
      }
      goto L_0885A074;
    }
L_0885A074:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3628u);
    aot_gpr_31 = (0x0885A08Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A08Cu) goto L_0885A08C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A08C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A04C;
      }
      goto L_0885A094;
    }
L_0885A094:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3631u);
    aot_gpr_31 = (0x0885A0ACu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A0ACu) goto L_0885A0AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A0AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A04C;
      }
      goto L_0885A0B4;
    }
L_0885A0B4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3655u);
    aot_gpr_31 = (0x0885A0CCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A0CCu) goto L_0885A0CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A0CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A04C;
      }
      goto L_0885A0D4;
    }
L_0885A0D4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3614u);
    aot_gpr_31 = (0x0885A0ECu);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A0ECu) goto L_0885A0EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A0EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A04C;
      }
      goto L_0885A0F4;
    }
L_0885A0F4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3647u);
    aot_gpr_31 = (0x0885A10Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A10Cu) goto L_0885A10C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A10C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A04C;
      }
      goto L_0885A114;
    }
L_0885A114:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3644u);
    aot_gpr_31 = (0x0885A12Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A12Cu) goto L_0885A12C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A12C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A04C;
      }
      goto L_0885A134;
    }
L_0885A134:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885A148u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A148u) goto L_0885A148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A148:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885A154:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-108));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885A2F4;
      }
      goto L_0885A178;
    }
L_0885A178:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31696)));
    jump_target = ctx.gpr[1];
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
L_0885A190:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3838u);
    aot_gpr_31 = (0x0885A1A8u);
    aot_gpr_8 = (0u | 35u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A1A8u) goto L_0885A1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A1A8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885A1AC;
L_0885A1AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885A308;
      }
      goto L_0885A1B4;
    }
L_0885A1B4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3675u);
    aot_gpr_31 = (0x0885A1CCu);
    aot_gpr_8 = (0u | 19u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A1CCu) goto L_0885A1CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A1CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A1AC;
      }
      goto L_0885A1D4;
    }
L_0885A1D4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3719u);
    aot_gpr_31 = (0x0885A1ECu);
    aot_gpr_8 = (0u | 12u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A1ECu) goto L_0885A1EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A1EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A1AC;
      }
      goto L_0885A1F4;
    }
L_0885A1F4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3731u);
    aot_gpr_31 = (0x0885A20Cu);
    aot_gpr_8 = (0u | 12u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A20Cu) goto L_0885A20C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A20C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A1AC;
      }
      goto L_0885A214;
    }
L_0885A214:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3743u);
    aot_gpr_31 = (0x0885A22Cu);
    aot_gpr_8 = (0u | 25u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A22Cu) goto L_0885A22C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A22C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A1AC;
      }
      goto L_0885A234;
    }
L_0885A234:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3828u);
    aot_gpr_31 = (0x0885A24Cu);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A24Cu) goto L_0885A24C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A24C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A1AC;
      }
      goto L_0885A254;
    }
L_0885A254:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3675u);
    aot_gpr_31 = (0x0885A26Cu);
    aot_gpr_8 = (0u | 19u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A26Cu) goto L_0885A26C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A26C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A1AC;
      }
      goto L_0885A274;
    }
L_0885A274:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3667u);
    aot_gpr_31 = (0x0885A28Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A28Cu) goto L_0885A28C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A28C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A1AC;
      }
      goto L_0885A294;
    }
L_0885A294:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3694u);
    aot_gpr_31 = (0x0885A2ACu);
    aot_gpr_8 = (0u | 25u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A2ACu) goto L_0885A2AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A2AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A1AC;
      }
      goto L_0885A2B4;
    }
L_0885A2B4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3798u);
    aot_gpr_31 = (0x0885A2CCu);
    aot_gpr_8 = (0u | 30u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A2CCu) goto L_0885A2CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A2CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A1AC;
      }
      goto L_0885A2D4;
    }
L_0885A2D4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3790u);
    aot_gpr_31 = (0x0885A2ECu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A2ECu) goto L_0885A2EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A2EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A1AC;
      }
      goto L_0885A2F4;
    }
L_0885A2F4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885A308u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A308u) goto L_0885A308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A308:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885A314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-108));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885A4B4;
      }
      goto L_0885A338;
    }
L_0885A338:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31856)));
    jump_target = ctx.gpr[1];
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
L_0885A350:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4058u);
    aot_gpr_31 = (0x0885A368u);
    aot_gpr_8 = (0u | 35u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A368u) goto L_0885A368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A368:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885A36C;
L_0885A36C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885A4C8;
      }
      goto L_0885A374;
    }
L_0885A374:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3881u);
    aot_gpr_31 = (0x0885A38Cu);
    aot_gpr_8 = (0u | 18u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A38Cu) goto L_0885A38C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A38C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A36C;
      }
      goto L_0885A394;
    }
L_0885A394:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3924u);
    aot_gpr_31 = (0x0885A3ACu);
    aot_gpr_8 = (0u | 19u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A3ACu) goto L_0885A3AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A3AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A36C;
      }
      goto L_0885A3B4;
    }
L_0885A3B4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3943u);
    aot_gpr_31 = (0x0885A3CCu);
    aot_gpr_8 = (0u | 15u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A3CCu) goto L_0885A3CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A3CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A36C;
      }
      goto L_0885A3D4;
    }
L_0885A3D4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3958u);
    aot_gpr_31 = (0x0885A3ECu);
    aot_gpr_8 = (0u | 30u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A3ECu) goto L_0885A3EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A3EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A36C;
      }
      goto L_0885A3F4;
    }
L_0885A3F4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4048u);
    aot_gpr_31 = (0x0885A40Cu);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A40Cu) goto L_0885A40C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A40C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A36C;
      }
      goto L_0885A414;
    }
L_0885A414:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3881u);
    aot_gpr_31 = (0x0885A42Cu);
    aot_gpr_8 = (0u | 18u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A42Cu) goto L_0885A42C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A42C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A36C;
      }
      goto L_0885A434;
    }
L_0885A434:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3873u);
    aot_gpr_31 = (0x0885A44Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A44Cu) goto L_0885A44C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A44C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A36C;
      }
      goto L_0885A454;
    }
L_0885A454:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 3899u);
    aot_gpr_31 = (0x0885A46Cu);
    aot_gpr_8 = (0u | 25u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A46Cu) goto L_0885A46C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A46C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A36C;
      }
      goto L_0885A474;
    }
L_0885A474:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4013u);
    aot_gpr_31 = (0x0885A48Cu);
    aot_gpr_8 = (0u | 35u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A48Cu) goto L_0885A48C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A48C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A36C;
      }
      goto L_0885A494;
    }
L_0885A494:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4005u);
    aot_gpr_31 = (0x0885A4ACu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A4ACu) goto L_0885A4AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A4AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A36C;
      }
      goto L_0885A4B4;
    }
L_0885A4B4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885A4C8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A4C8u) goto L_0885A4C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A4C8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885A4D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-108));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885A654;
      }
      goto L_0885A4F8;
    }
L_0885A4F8:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32016)));
    jump_target = ctx.gpr[1];
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
L_0885A510:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4217u);
    aot_gpr_31 = (0x0885A528u);
    aot_gpr_8 = (0u | 35u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A528u) goto L_0885A528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A528:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885A52C;
L_0885A52C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885A668;
      }
      goto L_0885A534;
    }
L_0885A534:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4099u);
    aot_gpr_31 = (0x0885A54Cu);
    aot_gpr_8 = (0u | 24u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A54Cu) goto L_0885A54C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A54C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A52C;
      }
      goto L_0885A554;
    }
L_0885A554:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4142u);
    aot_gpr_31 = (0x0885A56Cu);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A56Cu) goto L_0885A56C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A56C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A52C;
      }
      goto L_0885A574;
    }
L_0885A574:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4152u);
    aot_gpr_31 = (0x0885A58Cu);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A58Cu) goto L_0885A58C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A58C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A52C;
      }
      goto L_0885A594;
    }
L_0885A594:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4162u);
    aot_gpr_31 = (0x0885A5ACu);
    aot_gpr_8 = (0u | 20u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A5ACu) goto L_0885A5AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A5AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A52C;
      }
      goto L_0885A5B4;
    }
L_0885A5B4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4099u);
    aot_gpr_31 = (0x0885A5CCu);
    aot_gpr_8 = (0u | 24u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A5CCu) goto L_0885A5CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A5CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A52C;
      }
      goto L_0885A5D4;
    }
L_0885A5D4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4093u);
    aot_gpr_31 = (0x0885A5ECu);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A5ECu) goto L_0885A5EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A5EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A52C;
      }
      goto L_0885A5F4;
    }
L_0885A5F4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4123u);
    aot_gpr_31 = (0x0885A60Cu);
    aot_gpr_8 = (0u | 19u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A60Cu) goto L_0885A60C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A60C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A52C;
      }
      goto L_0885A614;
    }
L_0885A614:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4187u);
    aot_gpr_31 = (0x0885A62Cu);
    aot_gpr_8 = (0u | 30u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A62Cu) goto L_0885A62C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A62C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A52C;
      }
      goto L_0885A634;
    }
L_0885A634:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4182u);
    aot_gpr_31 = (0x0885A64Cu);
    aot_gpr_8 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A64Cu) goto L_0885A64C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A64C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A52C;
      }
      goto L_0885A654;
    }
L_0885A654:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885A668u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A668u) goto L_0885A668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A668:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885A674:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-115));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(33) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885A7B4;
      }
      goto L_0885A698;
    }
L_0885A698:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32176)));
    jump_target = ctx.gpr[1];
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
L_0885A6B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4343u);
    aot_gpr_31 = (0x0885A6C8u);
    aot_gpr_8 = (0u | 15u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A6C8u) goto L_0885A6C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A6C8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885A6CC;
L_0885A6CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885A7C8;
      }
      goto L_0885A6D4;
    }
L_0885A6D4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4270u);
    aot_gpr_31 = (0x0885A6ECu);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A6ECu) goto L_0885A6EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A6EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A6CC;
      }
      goto L_0885A6F4;
    }
L_0885A6F4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4280u);
    aot_gpr_31 = (0x0885A70Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A70Cu) goto L_0885A70C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A70C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A6CC;
      }
      goto L_0885A714;
    }
L_0885A714:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4288u);
    aot_gpr_31 = (0x0885A72Cu);
    aot_gpr_8 = (0u | 12u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A72Cu) goto L_0885A72C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A72C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A6CC;
      }
      goto L_0885A734;
    }
L_0885A734:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4335u);
    aot_gpr_31 = (0x0885A74Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A74Cu) goto L_0885A74C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A74C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A6CC;
      }
      goto L_0885A754;
    }
L_0885A754:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4252u);
    aot_gpr_31 = (0x0885A76Cu);
    aot_gpr_8 = (0u | 18u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A76Cu) goto L_0885A76C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A76C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A6CC;
      }
      goto L_0885A774;
    }
L_0885A774:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4320u);
    aot_gpr_31 = (0x0885A78Cu);
    aot_gpr_8 = (0u | 15u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A78Cu) goto L_0885A78C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A78C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A6CC;
      }
      goto L_0885A794;
    }
L_0885A794:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4315u);
    aot_gpr_31 = (0x0885A7ACu);
    aot_gpr_8 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A7ACu) goto L_0885A7AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A7AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A6CC;
      }
      goto L_0885A7B4;
    }
L_0885A7B4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885A7C8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A7C8u) goto L_0885A7C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A7C8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885A7D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-108));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885A974;
      }
      goto L_0885A7F8;
    }
L_0885A7F8:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32312)));
    jump_target = ctx.gpr[1];
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
L_0885A810:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4513u);
    aot_gpr_31 = (0x0885A828u);
    aot_gpr_8 = (0u | 38u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A828u) goto L_0885A828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A828:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885A82C;
L_0885A82C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885A988;
      }
      goto L_0885A834;
    }
L_0885A834:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4366u);
    aot_gpr_31 = (0x0885A84Cu);
    aot_gpr_8 = (0u | 17u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A84Cu) goto L_0885A84C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A84C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A82C;
      }
      goto L_0885A854;
    }
L_0885A854:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4401u);
    aot_gpr_31 = (0x0885A86Cu);
    aot_gpr_8 = (0u | 12u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A86Cu) goto L_0885A86C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A86C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A82C;
      }
      goto L_0885A874;
    }
L_0885A874:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4413u);
    aot_gpr_31 = (0x0885A88Cu);
    aot_gpr_8 = (0u | 13u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A88Cu) goto L_0885A88C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A88C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A82C;
      }
      goto L_0885A894;
    }
L_0885A894:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4426u);
    aot_gpr_31 = (0x0885A8ACu);
    aot_gpr_8 = (0u | 23u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A8ACu) goto L_0885A8AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A8AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A82C;
      }
      goto L_0885A8B4;
    }
L_0885A8B4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4501u);
    aot_gpr_31 = (0x0885A8CCu);
    aot_gpr_8 = (0u | 12u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A8CCu) goto L_0885A8CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A8CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A82C;
      }
      goto L_0885A8D4;
    }
L_0885A8D4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4366u);
    aot_gpr_31 = (0x0885A8ECu);
    aot_gpr_8 = (0u | 17u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A8ECu) goto L_0885A8EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A8EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A82C;
      }
      goto L_0885A8F4;
    }
L_0885A8F4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4358u);
    aot_gpr_31 = (0x0885A90Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A90Cu) goto L_0885A90C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A90C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A82C;
      }
      goto L_0885A914;
    }
L_0885A914:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4383u);
    aot_gpr_31 = (0x0885A92Cu);
    aot_gpr_8 = (0u | 18u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A92Cu) goto L_0885A92C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A92C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A82C;
      }
      goto L_0885A934;
    }
L_0885A934:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4472u);
    aot_gpr_31 = (0x0885A94Cu);
    aot_gpr_8 = (0u | 29u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A94Cu) goto L_0885A94C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A94C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A82C;
      }
      goto L_0885A954;
    }
L_0885A954:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4465u);
    aot_gpr_31 = (0x0885A96Cu);
    aot_gpr_8 = (0u | 7u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A96Cu) goto L_0885A96C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A96C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A82C;
      }
      goto L_0885A974;
    }
L_0885A974:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885A988u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A988u) goto L_0885A988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A988:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885A994:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-108));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885AB34;
      }
      goto L_0885A9B8;
    }
L_0885A9B8:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32472)));
    jump_target = ctx.gpr[1];
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
L_0885A9D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4719u);
    aot_gpr_31 = (0x0885A9E8u);
    aot_gpr_8 = (0u | 31u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885A9E8u) goto L_0885A9E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885A9E8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885A9EC;
L_0885A9EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885AB48;
      }
      goto L_0885A9F4;
    }
L_0885A9F4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4558u);
    aot_gpr_31 = (0x0885AA0Cu);
    aot_gpr_8 = (0u | 15u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AA0Cu) goto L_0885AA0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AA0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A9EC;
      }
      goto L_0885AA14;
    }
L_0885AA14:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4594u);
    aot_gpr_31 = (0x0885AA2Cu);
    aot_gpr_8 = (0u | 16u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AA2Cu) goto L_0885AA2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AA2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A9EC;
      }
      goto L_0885AA34;
    }
L_0885AA34:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4610u);
    aot_gpr_31 = (0x0885AA4Cu);
    aot_gpr_8 = (0u | 15u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AA4Cu) goto L_0885AA4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AA4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A9EC;
      }
      goto L_0885AA54;
    }
L_0885AA54:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4625u);
    aot_gpr_31 = (0x0885AA6Cu);
    aot_gpr_8 = (0u | 30u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AA6Cu) goto L_0885AA6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AA6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A9EC;
      }
      goto L_0885AA74;
    }
L_0885AA74:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4707u);
    aot_gpr_31 = (0x0885AA8Cu);
    aot_gpr_8 = (0u | 12u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AA8Cu) goto L_0885AA8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AA8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A9EC;
      }
      goto L_0885AA94;
    }
L_0885AA94:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4558u);
    aot_gpr_31 = (0x0885AAACu);
    aot_gpr_8 = (0u | 15u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AAACu) goto L_0885AAAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AAAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A9EC;
      }
      goto L_0885AAB4;
    }
L_0885AAB4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4551u);
    aot_gpr_31 = (0x0885AACCu);
    aot_gpr_8 = (0u | 7u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AACCu) goto L_0885AACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AACC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A9EC;
      }
      goto L_0885AAD4;
    }
L_0885AAD4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4573u);
    aot_gpr_31 = (0x0885AAECu);
    aot_gpr_8 = (0u | 21u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AAECu) goto L_0885AAEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AAEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A9EC;
      }
      goto L_0885AAF4;
    }
L_0885AAF4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4679u);
    aot_gpr_31 = (0x0885AB0Cu);
    aot_gpr_8 = (0u | 28u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AB0Cu) goto L_0885AB0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AB0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A9EC;
      }
      goto L_0885AB14;
    }
L_0885AB14:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4672u);
    aot_gpr_31 = (0x0885AB2Cu);
    aot_gpr_8 = (0u | 7u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AB2Cu) goto L_0885AB2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AB2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885A9EC;
      }
      goto L_0885AB34;
    }
L_0885AB34:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885AB48u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AB48u) goto L_0885AB48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AB48:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885AB54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-108));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885ACD4;
      }
      goto L_0885AB78;
    }
L_0885AB78:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32632)));
    jump_target = ctx.gpr[1];
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
L_0885AB90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4859u);
    aot_gpr_31 = (0x0885ABA8u);
    aot_gpr_8 = (0u | 32u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ABA8u) goto L_0885ABA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ABA8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885ABAC;
L_0885ABAC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885ACE8;
      }
      goto L_0885ABB4;
    }
L_0885ABB4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4756u);
    aot_gpr_31 = (0x0885ABCCu);
    aot_gpr_8 = (0u | 19u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ABCCu) goto L_0885ABCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ABCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885ABAC;
      }
      goto L_0885ABD4;
    }
L_0885ABD4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4790u);
    aot_gpr_31 = (0x0885ABECu);
    aot_gpr_8 = (0u | 9u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ABECu) goto L_0885ABEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ABEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885ABAC;
      }
      goto L_0885ABF4;
    }
L_0885ABF4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4799u);
    aot_gpr_31 = (0x0885AC0Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AC0Cu) goto L_0885AC0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AC0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885ABAC;
      }
      goto L_0885AC14;
    }
L_0885AC14:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4807u);
    aot_gpr_31 = (0x0885AC2Cu);
    aot_gpr_8 = (0u | 17u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AC2Cu) goto L_0885AC2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AC2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885ABAC;
      }
      goto L_0885AC34;
    }
L_0885AC34:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4756u);
    aot_gpr_31 = (0x0885AC4Cu);
    aot_gpr_8 = (0u | 19u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AC4Cu) goto L_0885AC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AC4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885ABAC;
      }
      goto L_0885AC54;
    }
L_0885AC54:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4750u);
    aot_gpr_31 = (0x0885AC6Cu);
    aot_gpr_8 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AC6Cu) goto L_0885AC6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AC6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885ABAC;
      }
      goto L_0885AC74;
    }
L_0885AC74:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4775u);
    aot_gpr_31 = (0x0885AC8Cu);
    aot_gpr_8 = (0u | 15u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AC8Cu) goto L_0885AC8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AC8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885ABAC;
      }
      goto L_0885AC94;
    }
L_0885AC94:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4829u);
    aot_gpr_31 = (0x0885ACACu);
    aot_gpr_8 = (0u | 30u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ACACu) goto L_0885ACAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ACAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885ABAC;
      }
      goto L_0885ACB4;
    }
L_0885ACB4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4824u);
    aot_gpr_31 = (0x0885ACCCu);
    aot_gpr_8 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ACCCu) goto L_0885ACCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ACCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885ABAC;
      }
      goto L_0885ACD4;
    }
L_0885ACD4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885ACE8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ACE8u) goto L_0885ACE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ACE8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885ACF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-115));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(33) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885AE34;
      }
      goto L_0885AD18;
    }
L_0885AD18:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32744)));
    jump_target = ctx.gpr[1];
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
L_0885AD30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4975u);
    aot_gpr_31 = (0x0885AD48u);
    aot_gpr_8 = (0u | 15u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AD48u) goto L_0885AD48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AD48:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885AD4C;
L_0885AD4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885AE48;
      }
      goto L_0885AD54;
    }
L_0885AD54:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4905u);
    aot_gpr_31 = (0x0885AD6Cu);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AD6Cu) goto L_0885AD6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AD6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AD4C;
      }
      goto L_0885AD74;
    }
L_0885AD74:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4915u);
    aot_gpr_31 = (0x0885AD8Cu);
    aot_gpr_8 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AD8Cu) goto L_0885AD8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AD8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AD4C;
      }
      goto L_0885AD94;
    }
L_0885AD94:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4923u);
    aot_gpr_31 = (0x0885ADACu);
    aot_gpr_8 = (0u | 16u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ADACu) goto L_0885ADAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ADAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AD4C;
      }
      goto L_0885ADB4;
    }
L_0885ADB4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4966u);
    aot_gpr_31 = (0x0885ADCCu);
    aot_gpr_8 = (0u | 9u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ADCCu) goto L_0885ADCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ADCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AD4C;
      }
      goto L_0885ADD4;
    }
L_0885ADD4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4891u);
    aot_gpr_31 = (0x0885ADECu);
    aot_gpr_8 = (0u | 14u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ADECu) goto L_0885ADEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ADEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AD4C;
      }
      goto L_0885ADF4;
    }
L_0885ADF4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4956u);
    aot_gpr_31 = (0x0885AE0Cu);
    aot_gpr_8 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AE0Cu) goto L_0885AE0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AE0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AD4C;
      }
      goto L_0885AE14;
    }
L_0885AE14:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4951u);
    aot_gpr_31 = (0x0885AE2Cu);
    aot_gpr_8 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AE2Cu) goto L_0885AE2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AE2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AD4C;
      }
      goto L_0885AE34;
    }
L_0885AE34:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885AE48u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AE48u) goto L_0885AE48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AE48:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885AE54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885AEF4;
      }
      goto L_0885AE74;
    }
L_0885AE74:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_0885AED4;
      }
      goto L_0885AE80;
    }
L_0885AE80:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_0885AEB4;
      }
      goto L_0885AE88;
    }
L_0885AE88:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_0885AF14;
      }
      goto L_0885AE90;
    }
L_0885AE90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4996u);
    aot_gpr_31 = (0x0885AEA8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AEA8u) goto L_0885AEA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AEA8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885AEAC;
L_0885AEAC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885AF24;
      }
      goto L_0885AEB4;
    }
L_0885AEB4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4993u);
    aot_gpr_31 = (0x0885AECCu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AECCu) goto L_0885AECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AEAC;
      }
      goto L_0885AED4;
    }
L_0885AED4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4990u);
    aot_gpr_31 = (0x0885AEECu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AEECu) goto L_0885AEEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AEEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AEAC;
      }
      goto L_0885AEF4;
    }
L_0885AEF4:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 4999u);
    aot_gpr_31 = (0x0885AF0Cu);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AF0Cu) goto L_0885AF0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AF0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AEAC;
      }
      goto L_0885AF14;
    }
L_0885AF14:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x0885AF24u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AF24u) goto L_0885AF24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AF24:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885AF30:
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
          goto L_0885B0B0;
      }
      goto L_0885AF54;
    }
L_0885AF54:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32608)));
    jump_target = ctx.gpr[1];
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
L_0885AF6C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5022u);
    aot_gpr_31 = (0x0885AF84u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AF84u) goto L_0885AF84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AF84:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885AF88;
L_0885AF88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885B0C4;
      }
      goto L_0885AF90;
    }
L_0885AF90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5024u);
    aot_gpr_31 = (0x0885AFA8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AFA8u) goto L_0885AFA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AFA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AF88;
      }
      goto L_0885AFB0;
    }
L_0885AFB0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5016u);
    aot_gpr_31 = (0x0885AFC8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AFC8u) goto L_0885AFC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AFC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AF88;
      }
      goto L_0885AFD0;
    }
L_0885AFD0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5012u);
    aot_gpr_31 = (0x0885AFE8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885AFE8u) goto L_0885AFE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885AFE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AF88;
      }
      goto L_0885AFF0;
    }
L_0885AFF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5010u);
    aot_gpr_31 = (0x0885B008u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B008u) goto L_0885B008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AF88;
      }
      goto L_0885B010;
    }
L_0885B010:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5014u);
    aot_gpr_31 = (0x0885B028u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B028u) goto L_0885B028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AF88;
      }
      goto L_0885B030;
    }
L_0885B030:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5027u);
    aot_gpr_31 = (0x0885B048u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B048u) goto L_0885B048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AF88;
      }
      goto L_0885B050;
    }
L_0885B050:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5002u);
    aot_gpr_31 = (0x0885B068u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B068u) goto L_0885B068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AF88;
      }
      goto L_0885B070;
    }
L_0885B070:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5005u);
    aot_gpr_31 = (0x0885B088u);
    aot_gpr_8 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B088u) goto L_0885B088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AF88;
      }
      goto L_0885B090;
    }
L_0885B090:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5019u);
    aot_gpr_31 = (0x0885B0A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B0A8u) goto L_0885B0A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B0A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885AF88;
      }
      goto L_0885B0B0;
    }
L_0885B0B0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885B0C4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B0C4u) goto L_0885B0C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B0C4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885B0D0:
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
          goto L_0885B250;
      }
      goto L_0885B0F4;
    }
L_0885B0F4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32440)));
    jump_target = ctx.gpr[1];
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
L_0885B10C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5047u);
    aot_gpr_31 = (0x0885B124u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B124u) goto L_0885B124;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B124:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885B128;
L_0885B128:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885B264;
      }
      goto L_0885B130;
    }
L_0885B130:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5049u);
    aot_gpr_31 = (0x0885B148u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B148u) goto L_0885B148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B148:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B128;
      }
      goto L_0885B150;
    }
L_0885B150:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5041u);
    aot_gpr_31 = (0x0885B168u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B168u) goto L_0885B168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B168:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B128;
      }
      goto L_0885B170;
    }
L_0885B170:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5037u);
    aot_gpr_31 = (0x0885B188u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B188u) goto L_0885B188;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B128;
      }
      goto L_0885B190;
    }
L_0885B190:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5035u);
    aot_gpr_31 = (0x0885B1A8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B1A8u) goto L_0885B1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B1A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B128;
      }
      goto L_0885B1B0;
    }
L_0885B1B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5039u);
    aot_gpr_31 = (0x0885B1C8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B1C8u) goto L_0885B1C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B1C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B128;
      }
      goto L_0885B1D0;
    }
L_0885B1D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5052u);
    aot_gpr_31 = (0x0885B1E8u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B1E8u) goto L_0885B1E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B128;
      }
      goto L_0885B1F0;
    }
L_0885B1F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5028u);
    aot_gpr_31 = (0x0885B208u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B208u) goto L_0885B208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B128;
      }
      goto L_0885B210;
    }
L_0885B210:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5031u);
    aot_gpr_31 = (0x0885B228u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B228u) goto L_0885B228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B128;
      }
      goto L_0885B230;
    }
L_0885B230:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5044u);
    aot_gpr_31 = (0x0885B248u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B248u) goto L_0885B248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B248:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B128;
      }
      goto L_0885B250;
    }
L_0885B250:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885B264u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B264u) goto L_0885B264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B264:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885B270:
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
          goto L_0885B3F0;
      }
      goto L_0885B294;
    }
L_0885B294:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32272)));
    jump_target = ctx.gpr[1];
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
L_0885B2AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5072u);
    aot_gpr_31 = (0x0885B2C4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B2C4u) goto L_0885B2C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B2C4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885B2C8;
L_0885B2C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885B404;
      }
      goto L_0885B2D0;
    }
L_0885B2D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5074u);
    aot_gpr_31 = (0x0885B2E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B2E8u) goto L_0885B2E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B2E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B2C8;
      }
      goto L_0885B2F0;
    }
L_0885B2F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5066u);
    aot_gpr_31 = (0x0885B308u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B308u) goto L_0885B308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B2C8;
      }
      goto L_0885B310;
    }
L_0885B310:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5062u);
    aot_gpr_31 = (0x0885B328u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B328u) goto L_0885B328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B2C8;
      }
      goto L_0885B330;
    }
L_0885B330:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5060u);
    aot_gpr_31 = (0x0885B348u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B348u) goto L_0885B348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B348:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B2C8;
      }
      goto L_0885B350;
    }
L_0885B350:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5064u);
    aot_gpr_31 = (0x0885B368u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B368u) goto L_0885B368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B2C8;
      }
      goto L_0885B370;
    }
L_0885B370:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5077u);
    aot_gpr_31 = (0x0885B388u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B388u) goto L_0885B388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B2C8;
      }
      goto L_0885B390;
    }
L_0885B390:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5053u);
    aot_gpr_31 = (0x0885B3A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B3A8u) goto L_0885B3A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B3A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B2C8;
      }
      goto L_0885B3B0;
    }
L_0885B3B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5056u);
    aot_gpr_31 = (0x0885B3C8u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B3C8u) goto L_0885B3C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B3C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B2C8;
      }
      goto L_0885B3D0;
    }
L_0885B3D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5069u);
    aot_gpr_31 = (0x0885B3E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B3E8u) goto L_0885B3E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B3E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B2C8;
      }
      goto L_0885B3F0;
    }
L_0885B3F0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885B404u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B404u) goto L_0885B404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B404:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885B410:
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
          goto L_0885B590;
      }
      goto L_0885B434;
    }
L_0885B434:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32104)));
    jump_target = ctx.gpr[1];
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
L_0885B44C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5097u);
    aot_gpr_31 = (0x0885B464u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B464u) goto L_0885B464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B464:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885B468;
L_0885B468:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885B5A4;
      }
      goto L_0885B470;
    }
L_0885B470:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5099u);
    aot_gpr_31 = (0x0885B488u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B488u) goto L_0885B488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B468;
      }
      goto L_0885B490;
    }
L_0885B490:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5091u);
    aot_gpr_31 = (0x0885B4A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B4A8u) goto L_0885B4A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B4A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B468;
      }
      goto L_0885B4B0;
    }
L_0885B4B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5087u);
    aot_gpr_31 = (0x0885B4C8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B4C8u) goto L_0885B4C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B4C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B468;
      }
      goto L_0885B4D0;
    }
L_0885B4D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5085u);
    aot_gpr_31 = (0x0885B4E8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B4E8u) goto L_0885B4E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B4E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B468;
      }
      goto L_0885B4F0;
    }
L_0885B4F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5089u);
    aot_gpr_31 = (0x0885B508u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B508u) goto L_0885B508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B468;
      }
      goto L_0885B510;
    }
L_0885B510:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5102u);
    aot_gpr_31 = (0x0885B528u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B528u) goto L_0885B528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B468;
      }
      goto L_0885B530;
    }
L_0885B530:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5078u);
    aot_gpr_31 = (0x0885B548u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B548u) goto L_0885B548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B468;
      }
      goto L_0885B550;
    }
L_0885B550:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5081u);
    aot_gpr_31 = (0x0885B568u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B568u) goto L_0885B568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B468;
      }
      goto L_0885B570;
    }
L_0885B570:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5094u);
    aot_gpr_31 = (0x0885B588u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B588u) goto L_0885B588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B468;
      }
      goto L_0885B590;
    }
L_0885B590:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885B5A4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B5A4u) goto L_0885B5A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B5A4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885B5B0:
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
          goto L_0885B730;
      }
      goto L_0885B5D4;
    }
L_0885B5D4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31936)));
    jump_target = ctx.gpr[1];
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
L_0885B5EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5122u);
    aot_gpr_31 = (0x0885B604u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B604u) goto L_0885B604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B604:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885B608;
L_0885B608:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885B744;
      }
      goto L_0885B610;
    }
L_0885B610:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5124u);
    aot_gpr_31 = (0x0885B628u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B628u) goto L_0885B628;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B608;
      }
      goto L_0885B630;
    }
L_0885B630:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5116u);
    aot_gpr_31 = (0x0885B648u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B648u) goto L_0885B648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B608;
      }
      goto L_0885B650;
    }
L_0885B650:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5112u);
    aot_gpr_31 = (0x0885B668u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B668u) goto L_0885B668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B608;
      }
      goto L_0885B670;
    }
L_0885B670:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5110u);
    aot_gpr_31 = (0x0885B688u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B688u) goto L_0885B688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B608;
      }
      goto L_0885B690;
    }
L_0885B690:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5114u);
    aot_gpr_31 = (0x0885B6A8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B6A8u) goto L_0885B6A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B6A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B608;
      }
      goto L_0885B6B0;
    }
L_0885B6B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5126u);
    aot_gpr_31 = (0x0885B6C8u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B6C8u) goto L_0885B6C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B6C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B608;
      }
      goto L_0885B6D0;
    }
L_0885B6D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5103u);
    aot_gpr_31 = (0x0885B6E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B6E8u) goto L_0885B6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B6E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B608;
      }
      goto L_0885B6F0;
    }
L_0885B6F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5106u);
    aot_gpr_31 = (0x0885B708u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B708u) goto L_0885B708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B608;
      }
      goto L_0885B710;
    }
L_0885B710:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5119u);
    aot_gpr_31 = (0x0885B728u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B728u) goto L_0885B728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B608;
      }
      goto L_0885B730;
    }
L_0885B730:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885B744u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B744u) goto L_0885B744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B744:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885B750:
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
          goto L_0885B8D0;
      }
      goto L_0885B774;
    }
L_0885B774:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31768)));
    jump_target = ctx.gpr[1];
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
L_0885B78C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5146u);
    aot_gpr_31 = (0x0885B7A4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B7A4u) goto L_0885B7A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B7A4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885B7A8;
L_0885B7A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885B8E4;
      }
      goto L_0885B7B0;
    }
L_0885B7B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5148u);
    aot_gpr_31 = (0x0885B7C8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B7C8u) goto L_0885B7C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B7C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B7A8;
      }
      goto L_0885B7D0;
    }
L_0885B7D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5140u);
    aot_gpr_31 = (0x0885B7E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B7E8u) goto L_0885B7E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B7E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B7A8;
      }
      goto L_0885B7F0;
    }
L_0885B7F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5136u);
    aot_gpr_31 = (0x0885B808u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B808u) goto L_0885B808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B7A8;
      }
      goto L_0885B810;
    }
L_0885B810:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5134u);
    aot_gpr_31 = (0x0885B828u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B828u) goto L_0885B828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B7A8;
      }
      goto L_0885B830;
    }
L_0885B830:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5138u);
    aot_gpr_31 = (0x0885B848u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B848u) goto L_0885B848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B7A8;
      }
      goto L_0885B850;
    }
L_0885B850:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5151u);
    aot_gpr_31 = (0x0885B868u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B868u) goto L_0885B868;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B7A8;
      }
      goto L_0885B870;
    }
L_0885B870:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5127u);
    aot_gpr_31 = (0x0885B888u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B888u) goto L_0885B888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B7A8;
      }
      goto L_0885B890;
    }
L_0885B890:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5130u);
    aot_gpr_31 = (0x0885B8A8u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B8A8u) goto L_0885B8A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B8A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B7A8;
      }
      goto L_0885B8B0;
    }
L_0885B8B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5143u);
    aot_gpr_31 = (0x0885B8C8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B8C8u) goto L_0885B8C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B8C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B7A8;
      }
      goto L_0885B8D0;
    }
L_0885B8D0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885B8E4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B8E4u) goto L_0885B8E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B8E4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885B8F0:
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
          goto L_0885BA70;
      }
      goto L_0885B914;
    }
L_0885B914:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31600)));
    jump_target = ctx.gpr[1];
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
L_0885B92C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5171u);
    aot_gpr_31 = (0x0885B944u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B944u) goto L_0885B944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B944:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885B948;
L_0885B948:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885BA84;
      }
      goto L_0885B950;
    }
L_0885B950:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5173u);
    aot_gpr_31 = (0x0885B968u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B968u) goto L_0885B968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B968:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B948;
      }
      goto L_0885B970;
    }
L_0885B970:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5165u);
    aot_gpr_31 = (0x0885B988u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B988u) goto L_0885B988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B948;
      }
      goto L_0885B990;
    }
L_0885B990:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5161u);
    aot_gpr_31 = (0x0885B9A8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B9A8u) goto L_0885B9A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B9A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B948;
      }
      goto L_0885B9B0;
    }
L_0885B9B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5159u);
    aot_gpr_31 = (0x0885B9C8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B9C8u) goto L_0885B9C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B9C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B948;
      }
      goto L_0885B9D0;
    }
L_0885B9D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5163u);
    aot_gpr_31 = (0x0885B9E8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885B9E8u) goto L_0885B9E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885B9E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B948;
      }
      goto L_0885B9F0;
    }
L_0885B9F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5176u);
    aot_gpr_31 = (0x0885BA08u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BA08u) goto L_0885BA08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BA08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B948;
      }
      goto L_0885BA10;
    }
L_0885BA10:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5152u);
    aot_gpr_31 = (0x0885BA28u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BA28u) goto L_0885BA28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BA28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B948;
      }
      goto L_0885BA30;
    }
L_0885BA30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5155u);
    aot_gpr_31 = (0x0885BA48u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BA48u) goto L_0885BA48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BA48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B948;
      }
      goto L_0885BA50;
    }
L_0885BA50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5168u);
    aot_gpr_31 = (0x0885BA68u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BA68u) goto L_0885BA68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BA68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885B948;
      }
      goto L_0885BA70;
    }
L_0885BA70:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885BA84u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BA84u) goto L_0885BA84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BA84:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885BA90:
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
          goto L_0885BC10;
      }
      goto L_0885BAB4;
    }
L_0885BAB4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31432)));
    jump_target = ctx.gpr[1];
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
L_0885BACC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5196u);
    aot_gpr_31 = (0x0885BAE4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BAE4u) goto L_0885BAE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BAE4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885BAE8;
L_0885BAE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885BC24;
      }
      goto L_0885BAF0;
    }
L_0885BAF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5198u);
    aot_gpr_31 = (0x0885BB08u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BB08u) goto L_0885BB08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BB08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BAE8;
      }
      goto L_0885BB10;
    }
L_0885BB10:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5190u);
    aot_gpr_31 = (0x0885BB28u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BB28u) goto L_0885BB28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BB28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BAE8;
      }
      goto L_0885BB30;
    }
L_0885BB30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5186u);
    aot_gpr_31 = (0x0885BB48u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BB48u) goto L_0885BB48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BB48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BAE8;
      }
      goto L_0885BB50;
    }
L_0885BB50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5184u);
    aot_gpr_31 = (0x0885BB68u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BB68u) goto L_0885BB68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BB68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BAE8;
      }
      goto L_0885BB70;
    }
L_0885BB70:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5188u);
    aot_gpr_31 = (0x0885BB88u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BB88u) goto L_0885BB88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BB88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BAE8;
      }
      goto L_0885BB90;
    }
L_0885BB90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5201u);
    aot_gpr_31 = (0x0885BBA8u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BBA8u) goto L_0885BBA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BBA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BAE8;
      }
      goto L_0885BBB0;
    }
L_0885BBB0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5177u);
    aot_gpr_31 = (0x0885BBC8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BBC8u) goto L_0885BBC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BBC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BAE8;
      }
      goto L_0885BBD0;
    }
L_0885BBD0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5180u);
    aot_gpr_31 = (0x0885BBE8u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BBE8u) goto L_0885BBE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BBE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BAE8;
      }
      goto L_0885BBF0;
    }
L_0885BBF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5193u);
    aot_gpr_31 = (0x0885BC08u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BC08u) goto L_0885BC08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BC08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BAE8;
      }
      goto L_0885BC10;
    }
L_0885BC10:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885BC24u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BC24u) goto L_0885BC24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BC24:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885BC30:
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
          goto L_0885BDB0;
      }
      goto L_0885BC54;
    }
L_0885BC54:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31264)));
    jump_target = ctx.gpr[1];
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
L_0885BC6C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5221u);
    aot_gpr_31 = (0x0885BC84u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BC84u) goto L_0885BC84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BC84:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885BC88;
L_0885BC88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885BDC4;
      }
      goto L_0885BC90;
    }
L_0885BC90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5223u);
    aot_gpr_31 = (0x0885BCA8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BCA8u) goto L_0885BCA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BCA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BC88;
      }
      goto L_0885BCB0;
    }
L_0885BCB0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5215u);
    aot_gpr_31 = (0x0885BCC8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BCC8u) goto L_0885BCC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BCC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BC88;
      }
      goto L_0885BCD0;
    }
L_0885BCD0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5211u);
    aot_gpr_31 = (0x0885BCE8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BCE8u) goto L_0885BCE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BCE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BC88;
      }
      goto L_0885BCF0;
    }
L_0885BCF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5209u);
    aot_gpr_31 = (0x0885BD08u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BD08u) goto L_0885BD08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BD08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BC88;
      }
      goto L_0885BD10;
    }
L_0885BD10:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5213u);
    aot_gpr_31 = (0x0885BD28u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BD28u) goto L_0885BD28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BD28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BC88;
      }
      goto L_0885BD30;
    }
L_0885BD30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5226u);
    aot_gpr_31 = (0x0885BD48u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BD48u) goto L_0885BD48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BD48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BC88;
      }
      goto L_0885BD50;
    }
L_0885BD50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5202u);
    aot_gpr_31 = (0x0885BD68u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BD68u) goto L_0885BD68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BD68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BC88;
      }
      goto L_0885BD70;
    }
L_0885BD70:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5205u);
    aot_gpr_31 = (0x0885BD88u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BD88u) goto L_0885BD88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BD88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BC88;
      }
      goto L_0885BD90;
    }
L_0885BD90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5218u);
    aot_gpr_31 = (0x0885BDA8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BDA8u) goto L_0885BDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BDA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BC88;
      }
      goto L_0885BDB0;
    }
L_0885BDB0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885BDC4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BDC4u) goto L_0885BDC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BDC4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885BDD0:
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
          goto L_0885BF50;
      }
      goto L_0885BDF4;
    }
L_0885BDF4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31096)));
    jump_target = ctx.gpr[1];
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
L_0885BE0C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5246u);
    aot_gpr_31 = (0x0885BE24u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BE24u) goto L_0885BE24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BE24:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885BE28;
L_0885BE28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885BF64;
      }
      goto L_0885BE30;
    }
L_0885BE30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5248u);
    aot_gpr_31 = (0x0885BE48u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BE48u) goto L_0885BE48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BE48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BE28;
      }
      goto L_0885BE50;
    }
L_0885BE50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5240u);
    aot_gpr_31 = (0x0885BE68u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BE68u) goto L_0885BE68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BE68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BE28;
      }
      goto L_0885BE70;
    }
L_0885BE70:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5236u);
    aot_gpr_31 = (0x0885BE88u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BE88u) goto L_0885BE88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BE88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BE28;
      }
      goto L_0885BE90;
    }
L_0885BE90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5234u);
    aot_gpr_31 = (0x0885BEA8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BEA8u) goto L_0885BEA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BEA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BE28;
      }
      goto L_0885BEB0;
    }
L_0885BEB0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5238u);
    aot_gpr_31 = (0x0885BEC8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BEC8u) goto L_0885BEC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BEC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BE28;
      }
      goto L_0885BED0;
    }
L_0885BED0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5251u);
    aot_gpr_31 = (0x0885BEE8u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BEE8u) goto L_0885BEE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BEE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BE28;
      }
      goto L_0885BEF0;
    }
L_0885BEF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5227u);
    aot_gpr_31 = (0x0885BF08u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BF08u) goto L_0885BF08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BF08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BE28;
      }
      goto L_0885BF10;
    }
L_0885BF10:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5230u);
    aot_gpr_31 = (0x0885BF28u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BF28u) goto L_0885BF28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BF28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BE28;
      }
      goto L_0885BF30;
    }
L_0885BF30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5243u);
    aot_gpr_31 = (0x0885BF48u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BF48u) goto L_0885BF48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BF48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BE28;
      }
      goto L_0885BF50;
    }
L_0885BF50:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885BF64u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BF64u) goto L_0885BF64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BF64:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885BF70:
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
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 17u, 0x0885C0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0885BF94;
    }
L_0885BF94:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30920)));
    jump_target = ctx.gpr[1];
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
L_0885BFAC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5296u);
    aot_gpr_31 = (0x0885BFC4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BFC4u) goto L_0885BFC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BFC4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885BFC8;
L_0885BFC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 18u, 0x0885C104u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0885BFD0;
    }
L_0885BFD0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5298u);
    aot_gpr_31 = (0x0885BFE8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885BFE8u) goto L_0885BFE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885BFE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885BFC8;
      }
      goto L_0885BFF0;
    }
L_0885BFF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5290u);
    ctx.pc = 0x0885C000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0021(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0021_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_21(Runtime &runtime) {
    runtime.register_generated_unit(21u, 0x08858000u, 16384u, &recomp_unit_0021, &recomp_unit_0021_entry);
    runtime.register_function(0x08858000u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858008u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885800Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858014u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885802Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858034u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885804Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858054u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885806Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858074u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885808Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858094u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088580F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885810Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858114u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885812Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858134u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858148u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858154u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858174u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858180u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885818Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088581FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885820Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858218u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858238u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858244u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885825Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858264u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858274u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885827Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858288u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088582ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858304u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858308u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858310u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858328u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858330u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858348u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858350u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858368u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858370u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858380u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885838Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088583ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858404u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885840Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858424u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885842Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858444u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885844Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885845Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858468u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858488u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858494u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885849Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088584E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858500u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858508u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858520u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858528u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858538u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858544u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858564u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858570u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858578u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858580u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858598u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885859Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088585A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088585BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088585C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088585DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088585E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088585FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858604u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858614u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858620u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858640u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885864Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858654u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885865Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858674u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858678u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858680u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858698u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088586FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885871Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858728u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858730u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858738u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858750u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858754u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885875Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858774u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885877Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858794u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885879Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088587FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858814u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885882Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858830u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858838u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858850u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858858u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858870u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858878u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858890u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858898u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088588B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088588B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088588D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088588D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088588F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088588F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858910u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858918u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858930u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858938u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858950u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858958u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885896Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858978u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885899Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088589F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A38u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A78u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858A98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858AB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858AB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858AD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858AD8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858AF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858AF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B38u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858B94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858BACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858BB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858BC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858BD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858BF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858C88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CBCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CDCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CE0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858CE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D00u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D20u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D84u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858D98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DA0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DBCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DDCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DE4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858DFCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E04u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E1Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E40u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E60u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858E98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858EA0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858EB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858EC0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858ED8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858EE0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858EF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F00u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F1Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F3Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F7Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858F9Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FBCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FDCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08858FF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859018u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859024u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885902Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859034u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885904Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859050u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859058u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859070u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859078u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859090u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859098u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088590B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088590B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088590C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088590D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088590F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859100u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859108u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859110u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859128u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885912Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859134u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885914Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859154u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885916Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859174u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885918Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859194u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088591A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088591B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088591D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088591DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088591E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088591ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859204u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859208u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859210u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859228u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859230u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859248u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859250u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859268u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859270u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859280u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885928Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088592ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088592B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088592C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088592C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088592E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088592E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088592ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859304u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885930Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859324u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885932Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859344u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885934Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885935Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859368u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859388u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859394u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885939Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088593E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859400u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859408u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859420u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859428u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859438u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859444u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859464u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859470u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859478u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859480u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859498u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885949Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088594FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859504u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859514u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859520u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859540u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885954Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859554u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885956Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859570u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859578u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859590u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859598u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088595F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859600u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859608u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859620u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859624u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885962Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859644u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885964Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859664u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885966Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885967Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859688u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088596E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859700u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859708u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859720u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859728u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859740u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859748u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859758u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859764u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859784u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859790u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859798u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088597FCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859804u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885981Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859824u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859834u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859840u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859860u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885986Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859874u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885987Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859894u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859898u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598A0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598C0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598D8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598E0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088598F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859900u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859910u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885991Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885993Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859948u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859950u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859958u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859970u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859974u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885997Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859994u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885999Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599BCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599DCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x088599F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A58u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A78u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859A98u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859AB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859AB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859AC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859AD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859AF8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859B94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859BF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859C94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859CB8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859CD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859CE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859CECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859CF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859D94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859DACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859DB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859DCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859DD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859DECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859DF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E78u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859E90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859EA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859EACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859EB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859ECCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859ED4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859EECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859EF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859F94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x08859FF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A018u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A030u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A048u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A04Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A054u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A06Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A074u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A08Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A094u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A0F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A10Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A114u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A12Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A134u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A148u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A154u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A178u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A190u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A1F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A20Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A214u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A22Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A234u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A24Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A254u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A26Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A274u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A28Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A294u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A2F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A308u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A314u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A338u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A350u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A368u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A36Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A374u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A38Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A394u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A3F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A40Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A414u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A42Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A434u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A44Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A454u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A46Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A474u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A48Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A494u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A4ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A4B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A4C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A4D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A4F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A510u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A528u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A52Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A534u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A54Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A554u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A56Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A574u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A58Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A594u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A5ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A5B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A5CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A5D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A5ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A5F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A60Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A614u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A62Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A634u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A64Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A654u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A668u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A674u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A698u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A6F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A70Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A714u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A72Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A734u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A74Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A754u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A76Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A774u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A78Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A794u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A7F8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A810u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A828u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A82Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A834u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A84Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A854u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A86Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A874u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A88Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A894u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8B4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8CCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A8F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A90Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A914u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A92Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A934u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A94Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A954u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A96Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A974u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A988u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A994u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9B8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885A9F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AA94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AACCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AAF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB78u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AB90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ABF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AC94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ACF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD18u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD4Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD8Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AD94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADCCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADD4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885ADF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE2Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE34u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE74u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE80u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AE90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AEA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AEACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AEB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AECCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AED4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AEECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AEF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF14u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF84u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AF90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885AFF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B008u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B010u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B028u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B030u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B048u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B050u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B068u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B070u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B088u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B090u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B0F4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B10Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B124u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B128u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B130u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B148u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B150u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B168u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B170u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B188u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B190u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B1F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B208u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B210u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B228u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B230u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B248u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B250u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B264u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B270u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B294u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2ACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2C4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B2F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B308u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B310u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B328u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B330u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B348u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B350u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B368u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B370u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B388u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B390u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B3A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B3B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B3C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B3D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B3E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B3F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B404u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B410u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B434u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B44Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B464u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B468u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B470u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B488u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B490u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B4A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B4B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B4C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B4D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B4E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B4F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B508u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B510u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B528u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B530u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B548u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B550u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B568u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B570u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B588u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B590u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B5A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B5B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B5D4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B5ECu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B604u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B608u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B610u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B628u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B630u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B648u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B650u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B668u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B670u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B688u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B690u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B6F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B708u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B710u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B728u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B730u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B744u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B750u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B774u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B78Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7A4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B7F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B808u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B810u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B828u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B830u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B848u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B850u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B868u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B870u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B888u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B890u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8E4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B8F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B914u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B92Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B944u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B948u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B950u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B968u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B970u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B988u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B990u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B9A8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B9B0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B9C8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B9D0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B9E8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885B9F0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA84u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BA90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BAB4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BACCu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BAE4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BAE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BAF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BB90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BBA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BBB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BBC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BBD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BBE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BBF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC54u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC6Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC84u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BC90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BCA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BCB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BCC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BCD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BCE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BCF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BD90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BDF4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE0Cu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE24u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE68u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE88u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BE90u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEA8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEB0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BED0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BEF0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF08u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF10u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF28u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF30u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF48u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF50u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF64u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF70u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BF94u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFACu, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFC4u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFC8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFD0u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFE8u, &recomp_unit_0021, "recomp_unit_0021");
    runtime.register_function(0x0885BFF0u, &recomp_unit_0021, "recomp_unit_0021");
}
} // namespace psprecomp
