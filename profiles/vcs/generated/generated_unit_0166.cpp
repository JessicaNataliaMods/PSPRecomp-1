#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0166[64] = {
    0x0060000000000001ull, 0x0000004012010402ull, 0x4000000000000000ull, 0x2000802008081008ull,
    0x2840080000801000ull, 0x1280A42220022022ull, 0x8500100202005212ull, 0x0420010088008000ull,
    0x0200032A008001A8ull, 0x8002020100000000ull, 0x8040000000018808ull, 0x0000108080A80080ull,
    0x00080801800A0000ull, 0x0180020201420200ull, 0x0000815440400101ull, 0x2014848480521125ull,
    0x00000180A0010020ull, 0x0101000010084000ull, 0x0602005010100000ull, 0x4008200820510281ull,
    0xA0020602A95144A9ull, 0x946220CA52949294ull, 0x00A8A25144A28A28ull, 0x0000480000020000ull,
    0x0000012000000900ull, 0x9000000480000024ull, 0x0240000012000000ull, 0x0005000000480000ull,
    0x0240090024009002ull, 0x9002400900240090ull, 0x0908200020201400ull, 0x0111308404848413ull,
    0x2422A91005130908ull, 0x0424209424200000ull, 0x3210080020020020ull, 0x40301082806A0000ull,
    0x0000404108002040ull, 0x006800008A28A001ull, 0x8006090140320000ull, 0x2806809145000800ull,
    0x28A000040040C120ull, 0x0818240500C8000Aull, 0x4240020203210080ull, 0x10AA404060901403ull,
    0x00C4028420010A90ull, 0x058240500C582405ull, 0x8240500C00582405ull, 0x8240508A0A906905ull,
    0x142C120284101005ull, 0x480A0B0480A16090ull, 0x22202002002000B0ull, 0x4A00230480A00422ull,
    0x80800B0480A08115ull, 0x0010880818240500ull, 0x1202910000000001ull, 0x0000000206090154ull,
    0x2940800000000000ull, 0x4202400002048004ull, 0x4811210240834920ull, 0x5410020480000420ull,
    0xA13508010044908Dull, 0x0042048115082426ull, 0xA08A005020654105ull, 0x92120020024AAB28ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0166[64] = {
    1u, 4u, 10u, 11u, 18u, 24u, 37u, 48u, 54u, 65u, 69u, 75u, 82u, 88u, 96u, 105u,
    121u, 127u, 132u, 139u, 150u, 169u, 192u, 211u, 214u, 218u, 224u, 228u, 232u, 241u, 251u, 259u,
    274u, 291u, 301u, 309u, 320u, 326u, 337u, 347u, 359u, 369u, 381u, 391u, 406u, 418u, 434u, 448u,
    466u, 480u, 496u, 505u, 518u, 532u, 542u, 549u, 558u, 563u, 571u, 586u, 595u, 612u, 626u, 642u,
};
void recomp_unit_0166_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,7,6,8 fprs=12,13,20,0 gpr_occ=5048 fpr_occ=258 gpr_total=6781 fpr_total=398
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_8 = ctx.gpr[8];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_0 = ctx.fpr[0];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[7] = aot_gpr_7; ctx.gpr[6] = aot_gpr_6; ctx.gpr[8] = aot_gpr_8; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[0] = aot_fpr_0; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_7 = ctx.gpr[7]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_8 = ctx.gpr[8]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_0 = ctx.fpr[0]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A9C000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0166[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0166[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08A9C000;
    case 2u: goto L_08A9C0D4;
    case 3u: goto L_08A9C0D8;
    case 4u: goto L_08A9C104;
    case 5u: goto L_08A9C128;
    case 6u: goto L_08A9C140;
    case 7u: goto L_08A9C164;
    case 8u: goto L_08A9C170;
    case 9u: goto L_08A9C198;
    case 10u: goto L_08A9C2F8;
    case 11u: goto L_08A9C30C;
    case 12u: goto L_08A9C330;
    case 13u: goto L_08A9C34C;
    case 14u: goto L_08A9C36C;
    case 15u: goto L_08A9C394;
    case 16u: goto L_08A9C3BC;
    case 17u: goto L_08A9C3F4;
    case 18u: goto L_08A9C430;
    case 19u: goto L_08A9C45C;
    case 20u: goto L_08A9C4AC;
    case 21u: goto L_08A9C4D8;
    case 22u: goto L_08A9C4EC;
    case 23u: goto L_08A9C4F4;
    case 24u: goto L_08A9C504;
    case 25u: goto L_08A9C514;
    case 26u: goto L_08A9C534;
    case 27u: goto L_08A9C544;
    case 28u: goto L_08A9C574;
    case 29u: goto L_08A9C584;
    case 30u: goto L_08A9C594;
    case 31u: goto L_08A9C5A8;
    case 32u: goto L_08A9C5B4;
    case 33u: goto L_08A9C5BC;
    case 34u: goto L_08A9C5DC;
    case 35u: goto L_08A9C5E4;
    case 36u: goto L_08A9C5F0;
    case 37u: goto L_08A9C604;
    case 38u: goto L_08A9C610;
    case 39u: goto L_08A9C624;
    case 40u: goto L_08A9C630;
    case 41u: goto L_08A9C638;
    case 42u: goto L_08A9C664;
    case 43u: goto L_08A9C684;
    case 44u: goto L_08A9C6B0;
    case 45u: goto L_08A9C6E0;
    case 46u: goto L_08A9C6E8;
    case 47u: goto L_08A9C6FC;
    case 48u: goto L_08A9C73C;
    case 49u: goto L_08A9C76C;
    case 50u: goto L_08A9C77C;
    case 51u: goto L_08A9C7A0;
    case 52u: goto L_08A9C7D4;
    case 53u: goto L_08A9C7E8;
    case 54u: goto L_08A9C80C;
    case 55u: goto L_08A9C814;
    case 56u: goto L_08A9C81C;
    case 57u: goto L_08A9C820;
    case 58u: goto L_08A9C85C;
    case 59u: goto L_08A9C884;
    case 60u: goto L_08A9C88C;
    case 61u: goto L_08A9C894;
    case 62u: goto L_08A9C8A0;
    case 63u: goto L_08A9C8A4;
    case 64u: goto L_08A9C8E4;
    case 65u: goto L_08A9C980;
    case 66u: goto L_08A9C9A4;
    case 67u: goto L_08A9C9C4;
    case 68u: goto L_08A9C9FC;
    case 69u: goto L_08A9CA0C;
    case 70u: goto L_08A9CA2C;
    case 71u: goto L_08A9CA3C;
    case 72u: goto L_08A9CA40;
    case 73u: goto L_08A9CAD8;
    case 74u: goto L_08A9CAFC;
    case 75u: goto L_08A9CB1C;
    case 76u: goto L_08A9CB4C;
    case 77u: goto L_08A9CB54;
    case 78u: goto L_08A9CB5C;
    case 79u: goto L_08A9CB7C;
    case 80u: goto L_08A9CB9C;
    case 81u: goto L_08A9CBB0;
    case 82u: goto L_08A9CC44;
    case 83u: goto L_08A9CC4C;
    case 84u: goto L_08A9CC7C;
    case 85u: goto L_08A9CC80;
    case 86u: goto L_08A9CCAC;
    case 87u: goto L_08A9CCCC;
    case 88u: goto L_08A9CD24;
    case 89u: goto L_08A9CD44;
    case 90u: goto L_08A9CD58;
    case 91u: goto L_08A9CD60;
    case 92u: goto L_08A9CD84;
    case 93u: goto L_08A9CDA4;
    case 94u: goto L_08A9CDDC;
    case 95u: goto L_08A9CDE0;
    case 96u: goto L_08A9CE00;
    case 97u: goto L_08A9CE20;
    case 98u: goto L_08A9CE58;
    case 99u: goto L_08A9CE78;
    case 100u: goto L_08A9CE88;
    case 101u: goto L_08A9CE90;
    case 102u: goto L_08A9CE98;
    case 103u: goto L_08A9CEA0;
    case 104u: goto L_08A9CEBC;
    case 105u: goto L_08A9CF00;
    case 106u: goto L_08A9CF08;
    case 107u: goto L_08A9CF14;
    case 108u: goto L_08A9CF20;
    case 109u: goto L_08A9CF30;
    case 110u: goto L_08A9CF44;
    case 111u: goto L_08A9CF50;
    case 112u: goto L_08A9CF58;
    case 113u: goto L_08A9CF7C;
    case 114u: goto L_08A9CF88;
    case 115u: goto L_08A9CF9C;
    case 116u: goto L_08A9CFA8;
    case 117u: goto L_08A9CFBC;
    case 118u: goto L_08A9CFC8;
    case 119u: goto L_08A9CFD0;
    case 120u: goto L_08A9CFF4;
    case 121u: goto L_08A9D014;
    case 122u: goto L_08A9D040;
    case 123u: goto L_08A9D074;
    case 124u: goto L_08A9D07C;
    case 125u: goto L_08A9D09C;
    case 126u: goto L_08A9D0A0;
    case 127u: goto L_08A9D138;
    case 128u: goto L_08A9D14C;
    case 129u: goto L_08A9D170;
    case 130u: goto L_08A9D1C0;
    case 131u: goto L_08A9D1E0;
    case 132u: goto L_08A9D250;
    case 133u: goto L_08A9D270;
    case 134u: goto L_08A9D290;
    case 135u: goto L_08A9D298;
    case 136u: goto L_08A9D2C4;
    case 137u: goto L_08A9D2E4;
    case 138u: goto L_08A9D2E8;
    case 139u: goto L_08A9D300;
    case 140u: goto L_08A9D31C;
    case 141u: goto L_08A9D324;
    case 142u: goto L_08A9D340;
    case 143u: goto L_08A9D350;
    case 144u: goto L_08A9D358;
    case 145u: goto L_08A9D374;
    case 146u: goto L_08A9D38C;
    case 147u: goto L_08A9D3B4;
    case 148u: goto L_08A9D3CC;
    case 149u: goto L_08A9D3F8;
    case 150u: goto L_08A9D400;
    case 151u: goto L_08A9D40C;
    case 152u: goto L_08A9D414;
    case 153u: goto L_08A9D41C;
    case 154u: goto L_08A9D428;
    case 155u: goto L_08A9D438;
    case 156u: goto L_08A9D440;
    case 157u: goto L_08A9D450;
    case 158u: goto L_08A9D458;
    case 159u: goto L_08A9D460;
    case 160u: goto L_08A9D46C;
    case 161u: goto L_08A9D474;
    case 162u: goto L_08A9D47C;
    case 163u: goto L_08A9D484;
    case 164u: goto L_08A9D4A4;
    case 165u: goto L_08A9D4A8;
    case 166u: goto L_08A9D4C4;
    case 167u: goto L_08A9D4F4;
    case 168u: goto L_08A9D4FC;
    case 169u: goto L_08A9D508;
    case 170u: goto L_08A9D510;
    case 171u: goto L_08A9D51C;
    case 172u: goto L_08A9D524;
    case 173u: goto L_08A9D530;
    case 174u: goto L_08A9D53C;
    case 175u: goto L_08A9D548;
    case 176u: goto L_08A9D550;
    case 177u: goto L_08A9D55C;
    case 178u: goto L_08A9D564;
    case 179u: goto L_08A9D570;
    case 180u: goto L_08A9D578;
    case 181u: goto L_08A9D584;
    case 182u: goto L_08A9D58C;
    case 183u: goto L_08A9D598;
    case 184u: goto L_08A9D59C;
    case 185u: goto L_08A9D5B4;
    case 186u: goto L_08A9D5C4;
    case 187u: goto L_08A9D5D4;
    case 188u: goto L_08A9D5D8;
    case 189u: goto L_08A9D5E8;
    case 190u: goto L_08A9D5F0;
    case 191u: goto L_08A9D5FC;
    case 192u: goto L_08A9D60C;
    case 193u: goto L_08A9D614;
    case 194u: goto L_08A9D624;
    case 195u: goto L_08A9D62C;
    case 196u: goto L_08A9D63C;
    case 197u: goto L_08A9D644;
    case 198u: goto L_08A9D654;
    case 199u: goto L_08A9D65C;
    case 200u: goto L_08A9D668;
    case 201u: goto L_08A9D678;
    case 202u: goto L_08A9D680;
    case 203u: goto L_08A9D690;
    case 204u: goto L_08A9D698;
    case 205u: goto L_08A9D6A4;
    case 206u: goto L_08A9D6B4;
    case 207u: goto L_08A9D6BC;
    case 208u: goto L_08A9D6CC;
    case 209u: goto L_08A9D6D4;
    case 210u: goto L_08A9D6DC;
    case 211u: goto L_08A9D744;
    case 212u: goto L_08A9D7AC;
    case 213u: goto L_08A9D7B8;
    case 214u: goto L_08A9D820;
    case 215u: goto L_08A9D82C;
    case 216u: goto L_08A9D894;
    case 217u: goto L_08A9D8A0;
    case 218u: goto L_08A9D908;
    case 219u: goto L_08A9D914;
    case 220u: goto L_08A9D97C;
    case 221u: goto L_08A9D988;
    case 222u: goto L_08A9D9F0;
    case 223u: goto L_08A9D9FC;
    case 224u: goto L_08A9DA64;
    case 225u: goto L_08A9DA70;
    case 226u: goto L_08A9DAD8;
    case 227u: goto L_08A9DAE4;
    case 228u: goto L_08A9DB4C;
    case 229u: goto L_08A9DB58;
    case 230u: goto L_08A9DBC0;
    case 231u: goto L_08A9DBC8;
    case 232u: goto L_08A9DC04;
    case 233u: goto L_08A9DC30;
    case 234u: goto L_08A9DC3C;
    case 235u: goto L_08A9DC68;
    case 236u: goto L_08A9DC74;
    case 237u: goto L_08A9DCA0;
    case 238u: goto L_08A9DCAC;
    case 239u: goto L_08A9DCD8;
    case 240u: goto L_08A9DCE4;
    case 241u: goto L_08A9DD10;
    case 242u: goto L_08A9DD1C;
    case 243u: goto L_08A9DD48;
    case 244u: goto L_08A9DD54;
    case 245u: goto L_08A9DD80;
    case 246u: goto L_08A9DD8C;
    case 247u: goto L_08A9DDB8;
    case 248u: goto L_08A9DDC4;
    case 249u: goto L_08A9DDF0;
    case 250u: goto L_08A9DDFC;
    case 251u: goto L_08A9DE28;
    case 252u: goto L_08A9DE30;
    case 253u: goto L_08A9DE54;
    case 254u: goto L_08A9DE74;
    case 255u: goto L_08A9DEB4;
    case 256u: goto L_08A9DECC;
    case 257u: goto L_08A9DEE0;
    case 258u: goto L_08A9DEEC;
    case 259u: goto L_08A9DF00;
    case 260u: goto L_08A9DF04;
    case 261u: goto L_08A9DF10;
    case 262u: goto L_08A9DF28;
    case 263u: goto L_08A9DF3C;
    case 264u: goto L_08A9DF48;
    case 265u: goto L_08A9DF5C;
    case 266u: goto L_08A9DF68;
    case 267u: goto L_08A9DF88;
    case 268u: goto L_08A9DF9C;
    case 269u: goto L_08A9DFB0;
    case 270u: goto L_08A9DFB4;
    case 271u: goto L_08A9DFC0;
    case 272u: goto L_08A9DFD0;
    case 273u: goto L_08A9DFE0;
    case 274u: goto L_08A9E00C;
    case 275u: goto L_08A9E020;
    case 276u: goto L_08A9E02C;
    case 277u: goto L_08A9E040;
    case 278u: goto L_08A9E044;
    case 279u: goto L_08A9E050;
    case 280u: goto L_08A9E060;
    case 281u: goto L_08A9E068;
    case 282u: goto L_08A9E090;
    case 283u: goto L_08A9E0A0;
    case 284u: goto L_08A9E0AC;
    case 285u: goto L_08A9E0B4;
    case 286u: goto L_08A9E0BC;
    case 287u: goto L_08A9E0C4;
    case 288u: goto L_08A9E0D4;
    case 289u: goto L_08A9E0E8;
    case 290u: goto L_08A9E0F4;
    case 291u: goto L_08A9E154;
    case 292u: goto L_08A9E168;
    case 293u: goto L_08A9E174;
    case 294u: goto L_08A9E188;
    case 295u: goto L_08A9E190;
    case 296u: goto L_08A9E19C;
    case 297u: goto L_08A9E1B4;
    case 298u: goto L_08A9E1C8;
    case 299u: goto L_08A9E1D4;
    case 300u: goto L_08A9E1E8;
    case 301u: goto L_08A9E214;
    case 302u: goto L_08A9E244;
    case 303u: goto L_08A9E274;
    case 304u: goto L_08A9E2AC;
    case 305u: goto L_08A9E2D0;
    case 306u: goto L_08A9E2E4;
    case 307u: goto L_08A9E2F0;
    case 308u: goto L_08A9E2F4;
    case 309u: goto L_08A9E344;
    case 310u: goto L_08A9E34C;
    case 311u: goto L_08A9E354;
    case 312u: goto L_08A9E358;
    case 313u: goto L_08A9E37C;
    case 314u: goto L_08A9E384;
    case 315u: goto L_08A9E39C;
    case 316u: goto L_08A9E3B0;
    case 317u: goto L_08A9E3D0;
    case 318u: goto L_08A9E3D4;
    case 319u: goto L_08A9E3F8;
    case 320u: goto L_08A9E418;
    case 321u: goto L_08A9E434;
    case 322u: goto L_08A9E46C;
    case 323u: goto L_08A9E480;
    case 324u: goto L_08A9E498;
    case 325u: goto L_08A9E4B8;
    case 326u: goto L_08A9E500;
    case 327u: goto L_08A9E534;
    case 328u: goto L_08A9E53C;
    case 329u: goto L_08A9E54C;
    case 330u: goto L_08A9E554;
    case 331u: goto L_08A9E564;
    case 332u: goto L_08A9E56C;
    case 333u: goto L_08A9E57C;
    case 334u: goto L_08A9E5CC;
    case 335u: goto L_08A9E5D4;
    case 336u: goto L_08A9E5D8;
    case 337u: goto L_08A9E644;
    case 338u: goto L_08A9E650;
    case 339u: goto L_08A9E654;
    case 340u: goto L_08A9E678;
    case 341u: goto L_08A9E680;
    case 342u: goto L_08A9E6A0;
    case 343u: goto L_08A9E6AC;
    case 344u: goto L_08A9E6C4;
    case 345u: goto L_08A9E6C8;
    case 346u: goto L_08A9E6FC;
    case 347u: goto L_08A9E72C;
    case 348u: goto L_08A9E760;
    case 349u: goto L_08A9E768;
    case 350u: goto L_08A9E778;
    case 351u: goto L_08A9E780;
    case 352u: goto L_08A9E790;
    case 353u: goto L_08A9E79C;
    case 354u: goto L_08A9E7BC;
    case 355u: goto L_08A9E7C4;
    case 356u: goto L_08A9E7C8;
    case 357u: goto L_08A9E7EC;
    case 358u: goto L_08A9E7F4;
    case 359u: goto L_08A9E814;
    case 360u: goto L_08A9E820;
    case 361u: goto L_08A9E838;
    case 362u: goto L_08A9E83C;
    case 363u: goto L_08A9E858;
    case 364u: goto L_08A9E888;
    case 365u: goto L_08A9E8D4;
    case 366u: goto L_08A9E8DC;
    case 367u: goto L_08A9E8EC;
    case 368u: goto L_08A9E8F4;
    case 369u: goto L_08A9E904;
    case 370u: goto L_08A9E90C;
    case 371u: goto L_08A9E94C;
    case 372u: goto L_08A9E958;
    case 373u: goto L_08A9E95C;
    case 374u: goto L_08A9E980;
    case 375u: goto L_08A9E988;
    case 376u: goto L_08A9E9A8;
    case 377u: goto L_08A9E9B4;
    case 378u: goto L_08A9E9CC;
    case 379u: goto L_08A9E9D0;
    case 380u: goto L_08A9E9EC;
    case 381u: goto L_08A9EA1C;
    case 382u: goto L_08A9EA40;
    case 383u: goto L_08A9EA54;
    case 384u: goto L_08A9EA60;
    case 385u: goto L_08A9EA64;
    case 386u: goto L_08A9EA84;
    case 387u: goto L_08A9EAA4;
    case 388u: goto L_08A9EAD8;
    case 389u: goto L_08A9EAE4;
    case 390u: goto L_08A9EAF8;
    case 391u: goto L_08A9EB00;
    case 392u: goto L_08A9EB04;
    case 393u: goto L_08A9EB28;
    case 394u: goto L_08A9EB30;
    case 395u: goto L_08A9EB50;
    case 396u: goto L_08A9EB5C;
    case 397u: goto L_08A9EB74;
    case 398u: goto L_08A9EB78;
    case 399u: goto L_08A9EB98;
    case 400u: goto L_08A9EBB8;
    case 401u: goto L_08A9EBC4;
    case 402u: goto L_08A9EBCC;
    case 403u: goto L_08A9EBD4;
    case 404u: goto L_08A9EBDC;
    case 405u: goto L_08A9EBF0;
    case 406u: goto L_08A9EC10;
    case 407u: goto L_08A9EC1C;
    case 408u: goto L_08A9EC24;
    case 409u: goto L_08A9EC2C;
    case 410u: goto L_08A9EC40;
    case 411u: goto L_08A9EC74;
    case 412u: goto L_08A9EC88;
    case 413u: goto L_08A9EC9C;
    case 414u: goto L_08A9ECA4;
    case 415u: goto L_08A9ECC8;
    case 416u: goto L_08A9ECD8;
    case 417u: goto L_08A9ECDC;
    case 418u: goto L_08A9ED00;
    case 419u: goto L_08A9ED08;
    case 420u: goto L_08A9ED28;
    case 421u: goto L_08A9ED34;
    case 422u: goto L_08A9ED4C;
    case 423u: goto L_08A9ED50;
    case 424u: goto L_08A9ED58;
    case 425u: goto L_08A9ED68;
    case 426u: goto L_08A9ED6C;
    case 427u: goto L_08A9ED90;
    case 428u: goto L_08A9ED98;
    case 429u: goto L_08A9EDB8;
    case 430u: goto L_08A9EDC4;
    case 431u: goto L_08A9EDDC;
    case 432u: goto L_08A9EDE0;
    case 433u: goto L_08A9EDE8;
    case 434u: goto L_08A9EE00;
    case 435u: goto L_08A9EE08;
    case 436u: goto L_08A9EE28;
    case 437u: goto L_08A9EE34;
    case 438u: goto L_08A9EE4C;
    case 439u: goto L_08A9EE50;
    case 440u: goto L_08A9EE58;
    case 441u: goto L_08A9EE88;
    case 442u: goto L_08A9EE8C;
    case 443u: goto L_08A9EEB0;
    case 444u: goto L_08A9EEB8;
    case 445u: goto L_08A9EED8;
    case 446u: goto L_08A9EEE4;
    case 447u: goto L_08A9EEFC;
    case 448u: goto L_08A9EF00;
    case 449u: goto L_08A9EF08;
    case 450u: goto L_08A9EF20;
    case 451u: goto L_08A9EF2C;
    case 452u: goto L_08A9EF34;
    case 453u: goto L_08A9EF38;
    case 454u: goto L_08A9EF50;
    case 455u: goto L_08A9EF5C;
    case 456u: goto L_08A9EF64;
    case 457u: goto L_08A9EF6C;
    case 458u: goto L_08A9EF84;
    case 459u: goto L_08A9EF8C;
    case 460u: goto L_08A9EF9C;
    case 461u: goto L_08A9EFB0;
    case 462u: goto L_08A9EFB8;
    case 463u: goto L_08A9EFD8;
    case 464u: goto L_08A9EFE4;
    case 465u: goto L_08A9EFFC;
    case 466u: goto L_08A9F000;
    case 467u: goto L_08A9F008;
    case 468u: goto L_08A9F030;
    case 469u: goto L_08A9F050;
    case 470u: goto L_08A9F068;
    case 471u: goto L_08A9F07C;
    case 472u: goto L_08A9F084;
    case 473u: goto L_08A9F0A4;
    case 474u: goto L_08A9F0B0;
    case 475u: goto L_08A9F0C8;
    case 476u: goto L_08A9F0CC;
    case 477u: goto L_08A9F0D4;
    case 478u: goto L_08A9F0E8;
    case 479u: goto L_08A9F0F0;
    case 480u: goto L_08A9F110;
    case 481u: goto L_08A9F11C;
    case 482u: goto L_08A9F134;
    case 483u: goto L_08A9F138;
    case 484u: goto L_08A9F140;
    case 485u: goto L_08A9F154;
    case 486u: goto L_08A9F15C;
    case 487u: goto L_08A9F17C;
    case 488u: goto L_08A9F188;
    case 489u: goto L_08A9F1A0;
    case 490u: goto L_08A9F1A4;
    case 491u: goto L_08A9F1AC;
    case 492u: goto L_08A9F1C4;
    case 493u: goto L_08A9F1CC;
    case 494u: goto L_08A9F1EC;
    case 495u: goto L_08A9F1F8;
    case 496u: goto L_08A9F210;
    case 497u: goto L_08A9F214;
    case 498u: goto L_08A9F21C;
    case 499u: goto L_08A9F254;
    case 500u: goto L_08A9F284;
    case 501u: goto L_08A9F2B4;
    case 502u: goto L_08A9F2D4;
    case 503u: goto L_08A9F2E4;
    case 504u: goto L_08A9F2F4;
    case 505u: goto L_08A9F304;
    case 506u: goto L_08A9F314;
    case 507u: goto L_08A9F328;
    case 508u: goto L_08A9F354;
    case 509u: goto L_08A9F35C;
    case 510u: goto L_08A9F37C;
    case 511u: goto L_08A9F388;
    case 512u: goto L_08A9F3A0;
    case 513u: goto L_08A9F3A4;
    case 514u: goto L_08A9F3B4;
    case 515u: goto L_08A9F3E4;
    case 516u: goto L_08A9F3EC;
    case 517u: goto L_08A9F3F8;
    case 518u: goto L_08A9F400;
    case 519u: goto L_08A9F408;
    case 520u: goto L_08A9F410;
    case 521u: goto L_08A9F420;
    case 522u: goto L_08A9F43C;
    case 523u: goto L_08A9F454;
    case 524u: goto L_08A9F45C;
    case 525u: goto L_08A9F47C;
    case 526u: goto L_08A9F488;
    case 527u: goto L_08A9F4A0;
    case 528u: goto L_08A9F4A4;
    case 529u: goto L_08A9F4AC;
    case 530u: goto L_08A9F4DC;
    case 531u: goto L_08A9F4FC;
    case 532u: goto L_08A9F520;
    case 533u: goto L_08A9F528;
    case 534u: goto L_08A9F548;
    case 535u: goto L_08A9F554;
    case 536u: goto L_08A9F56C;
    case 537u: goto L_08A9F570;
    case 538u: goto L_08A9F58C;
    case 539u: goto L_08A9F5AC;
    case 540u: goto L_08A9F5BC;
    case 541u: goto L_08A9F5D0;
    case 542u: goto L_08A9F600;
    case 543u: goto L_08A9F6A0;
    case 544u: goto L_08A9F6B0;
    case 545u: goto L_08A9F6BC;
    case 546u: goto L_08A9F6C4;
    case 547u: goto L_08A9F6E4;
    case 548u: goto L_08A9F6F0;
    case 549u: goto L_08A9F708;
    case 550u: goto L_08A9F710;
    case 551u: goto L_08A9F718;
    case 552u: goto L_08A9F720;
    case 553u: goto L_08A9F740;
    case 554u: goto L_08A9F74C;
    case 555u: goto L_08A9F764;
    case 556u: goto L_08A9F768;
    case 557u: goto L_08A9F784;
    case 558u: goto L_08A9F8BC;
    case 559u: goto L_08A9F8D8;
    case 560u: goto L_08A9F8E0;
    case 561u: goto L_08A9F8EC;
    case 562u: goto L_08A9F8F4;
    case 563u: goto L_08A9F908;
    case 564u: goto L_08A9F93C;
    case 565u: goto L_08A9F948;
    case 566u: goto L_08A9F964;
    case 567u: goto L_08A9F9B8;
    case 568u: goto L_08A9F9C4;
    case 569u: goto L_08A9F9E4;
    case 570u: goto L_08A9F9F8;
    case 571u: goto L_08A9FA14;
    case 572u: goto L_08A9FA20;
    case 573u: goto L_08A9FA2C;
    case 574u: goto L_08A9FA38;
    case 575u: goto L_08A9FA40;
    case 576u: goto L_08A9FA44;
    case 577u: goto L_08A9FA5C;
    case 578u: goto L_08A9FA78;
    case 579u: goto L_08A9FA84;
    case 580u: goto L_08A9FAA0;
    case 581u: goto L_08A9FAB4;
    case 582u: goto L_08A9FAC0;
    case 583u: goto L_08A9FAD0;
    case 584u: goto L_08A9FAEC;
    case 585u: goto L_08A9FAF8;
    case 586u: goto L_08A9FB14;
    case 587u: goto L_08A9FB28;
    case 588u: goto L_08A9FB7C;
    case 589u: goto L_08A9FB88;
    case 590u: goto L_08A9FBA4;
    case 591u: goto L_08A9FBD0;
    case 592u: goto L_08A9FBE8;
    case 593u: goto L_08A9FBF0;
    case 594u: goto L_08A9FBF8;
    case 595u: goto L_08A9FC00;
    case 596u: goto L_08A9FC08;
    case 597u: goto L_08A9FC0C;
    case 598u: goto L_08A9FC1C;
    case 599u: goto L_08A9FC30;
    case 600u: goto L_08A9FC3C;
    case 601u: goto L_08A9FC48;
    case 602u: goto L_08A9FC58;
    case 603u: goto L_08A9FC80;
    case 604u: goto L_08A9FCAC;
    case 605u: goto L_08A9FCC0;
    case 606u: goto L_08A9FCC8;
    case 607u: goto L_08A9FCD0;
    case 608u: goto L_08A9FCD4;
    case 609u: goto L_08A9FCE0;
    case 610u: goto L_08A9FCF4;
    case 611u: goto L_08A9FCFC;
    case 612u: goto L_08A9FD04;
    case 613u: goto L_08A9FD08;
    case 614u: goto L_08A9FD14;
    case 615u: goto L_08A9FD28;
    case 616u: goto L_08A9FD34;
    case 617u: goto L_08A9FD4C;
    case 618u: goto L_08A9FD60;
    case 619u: goto L_08A9FD68;
    case 620u: goto L_08A9FD70;
    case 621u: goto L_08A9FD80;
    case 622u: goto L_08A9FD9C;
    case 623u: goto L_08A9FDA8;
    case 624u: goto L_08A9FDC4;
    case 625u: goto L_08A9FDD8;
    case 626u: goto L_08A9FE00;
    case 627u: goto L_08A9FE08;
    case 628u: goto L_08A9FE20;
    case 629u: goto L_08A9FE38;
    case 630u: goto L_08A9FE40;
    case 631u: goto L_08A9FE48;
    case 632u: goto L_08A9FE54;
    case 633u: goto L_08A9FE58;
    case 634u: goto L_08A9FE74;
    case 635u: goto L_08A9FE90;
    case 636u: goto L_08A9FE98;
    case 637u: goto L_08A9FEC4;
    case 638u: goto L_08A9FECC;
    case 639u: goto L_08A9FEDC;
    case 640u: goto L_08A9FEF4;
    case 641u: goto L_08A9FEFC;
    case 642u: goto L_08A9FF0C;
    case 643u: goto L_08A9FF14;
    case 644u: goto L_08A9FF20;
    case 645u: goto L_08A9FF24;
    case 646u: goto L_08A9FF2C;
    case 647u: goto L_08A9FF34;
    case 648u: goto L_08A9FF3C;
    case 649u: goto L_08A9FF44;
    case 650u: goto L_08A9FF4C;
    case 651u: goto L_08A9FF58;
    case 652u: goto L_08A9FF64;
    case 653u: goto L_08A9FF94;
    case 654u: goto L_08A9FFC4;
    case 655u: goto L_08A9FFD0;
    case 656u: goto L_08A9FFE4;
    case 657u: goto L_08A9FFF0;
    case 658u: goto L_08A9FFFC;
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
L_08A9C000:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(61))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_5);
    aot_gpr_8 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_gpr_5 >> 30u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[10]);
    aot_gpr_8 = (ctx.gpr[9] - aot_gpr_8);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 3u));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    aot_gpr_8 = (aot_gpr_8 + ctx.gpr[9]);
    aot_gpr_7 = (aot_gpr_7 << 4u);
    ctx.gpr[9] = (ctx.gpr[10] - ctx.gpr[11]);
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 3u));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    aot_gpr_7 = (aot_gpr_7 + aot_gpr_8);
    aot_gpr_8 = (ctx.gpr[10] >> 29u);
    aot_gpr_8 = (ctx.gpr[9] + aot_gpr_8);
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 3u));
    aot_gpr_7 = (aot_gpr_7 + aot_gpr_8);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) <= 0;
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A9C170;
      }
      goto L_08A9C0D4;
    }
L_08A9C0D4:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08A9C0D8;
L_08A9C0D8:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), aot_gpr_8);
    aot_gpr_8 = (aot_gpr_6 | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08A9C128;
      }
      goto L_08A9C104;
    }
L_08A9C104:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08A9C128;
L_08A9C128:
    aot_gpr_8 = (aot_gpr_5 | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08A9C164;
      }
      goto L_08A9C140;
    }
L_08A9C140:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08A9C164;
L_08A9C164:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    if (static_cast<std::int32_t>(aot_gpr_7) > 0) {
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
        goto L_08A9C0D8;
    }
    goto L_08A9C170;
L_08A9C170:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9C198:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_gpr_8 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_8 | 0u);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_8);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(61))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_7));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_8 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_5);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[11]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (ctx.gpr[10] >> 29u);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_8 = (ctx.gpr[11] - aot_gpr_8);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 3u));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] >> 29u);
    aot_gpr_8 = (aot_gpr_8 + ctx.gpr[9]);
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 3u));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_8);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A9C394;
      }
      goto L_08A9C2F8;
    }
L_08A9C2F8:
    ctx.gpr[9] = (aot_gpr_6 | 0u);
    aot_gpr_8 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    if (aot_gpr_8 != ctx.gpr[10]) {
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_08A9C330;
    }
    goto L_08A9C30C;
L_08A9C30C:
    aot_gpr_8 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(-4));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), aot_gpr_8);
    aot_gpr_8 = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), aot_gpr_8);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), aot_gpr_8);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_08A9C330;
L_08A9C330:
    aot_gpr_8 = (aot_gpr_7 | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A9C36C;
      }
      goto L_08A9C34C;
    }
L_08A9C34C:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-4));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08A9C36C;
L_08A9C36C:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), aot_gpr_8);
      if (branch_taken) {
          goto L_08A9C2F8;
      }
      goto L_08A9C394;
    }
L_08A9C394:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9C3BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    goto L_08A9C3F4;
L_08A9C3F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
        goto L_08A9C544;
    }
    goto L_08A9C430;
L_08A9C430:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A9C45Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 386u, 0x08A9B124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9C45Cu) goto L_08A9C45C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9C45C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(80))))));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_7);
    aot_gpr_6 = (aot_gpr_6 << 16u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 0 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A9C4EC;
      }
      goto L_08A9C4AC;
    }
L_08A9C4AC:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(82), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(82))))));
    aot_gpr_6 = (aot_gpr_7 - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 16u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 0 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08A9C4F4;
    }
    goto L_08A9C4D8;
L_08A9C4D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A9C4F4;
      }
      goto L_08A9C4EC;
    }
L_08A9C4EC:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A9C4F4;
L_08A9C4F4:
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
        goto L_08A9C544;
    }
    goto L_08A9C504;
L_08A9C504:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A9C534;
      }
      goto L_08A9C514;
    }
L_08A9C514:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    goto L_08A9C534;
L_08A9C534:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
      if (branch_taken) {
          goto L_08A9C3F4;
      }
      goto L_08A9C544;
    }
L_08A9C544:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08A9C5E4;
    }
    goto L_08A9C574;
L_08A9C574:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A9C5B4;
      }
      goto L_08A9C584;
    }
L_08A9C584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A9C5A8;
    }
    goto L_08A9C594;
L_08A9C594:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A9C5A8;
L_08A9C5A8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A9C5BC;
      }
      goto L_08A9C5B4;
    }
L_08A9C5B4:
    ctx.gpr[31] = (0x08A9C5BCu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 763u, 0x08B6FB14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9C5BCu) goto L_08A9C5BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9C5BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    goto L_08A9C5DC;
L_08A9C5DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A9C6E8;
      }
      goto L_08A9C5E4;
    }
L_08A9C5E4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08A9C6B0;
    }
    goto L_08A9C5F0;
L_08A9C5F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A9C630;
      }
      goto L_08A9C604;
    }
L_08A9C604:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08A9C624;
    }
    goto L_08A9C610;
L_08A9C610:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08A9C624;
L_08A9C624:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_08A9C638;
      }
      goto L_08A9C630;
    }
L_08A9C630:
    ctx.gpr[31] = (0x08A9C638u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 753u, 0x08B6FA30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9C638u) goto L_08A9C638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9C638:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_4);
      if (branch_taken) {
          goto L_08A9C684;
      }
      goto L_08A9C664;
    }
L_08A9C664:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_4);
    goto L_08A9C684;
L_08A9C684:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
      if (branch_taken) {
          goto L_08A9C5DC;
      }
      goto L_08A9C6B0;
    }
L_08A9C6B0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(100));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.gpr[31] = (0x08A9C6E0u);
    aot_gpr_7 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 777u, 0x08B6FC40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9C6E0u) goto L_08A9C6E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9C6E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A9C5DC;
      }
      goto L_08A9C6E8;
    }
L_08A9C6E8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9C6FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-576));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(576), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(548), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_7);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(552), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08A9C73C;
L_08A9C73C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_8 ^ aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_7);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
      if (branch_taken) {
          goto L_08A9C81C;
      }
      goto L_08A9C76C;
    }
L_08A9C76C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
        goto L_08A9C7A0;
    }
    goto L_08A9C77C;
L_08A9C77C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    goto L_08A9C7A0;
L_08A9C7A0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(576))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(112))))));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9C814;
      }
      goto L_08A9C7D4;
    }
L_08A9C7D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_08A9C80C;
      }
      goto L_08A9C7E8;
    }
L_08A9C7E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    goto L_08A9C80C;
L_08A9C80C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A9C820;
      }
      goto L_08A9C814;
    }
L_08A9C814:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08A9C73C;
      }
      goto L_08A9C81C;
    }
L_08A9C81C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08A9C820;
L_08A9C820:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_8 ^ aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_7);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
      if (branch_taken) {
          goto L_08A9C8A0;
      }
      goto L_08A9C85C;
    }
L_08A9C85C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(576))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(114), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(114))))));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A9C8A4;
    }
    goto L_08A9C884;
L_08A9C884:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A9C894;
      }
      goto L_08A9C88C;
    }
L_08A9C88C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A9C894;
L_08A9C894:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A9D2E8;
      }
      goto L_08A9C8A0;
    }
L_08A9C8A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A9C8A4;
L_08A9C8A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(116));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_4);
    goto L_08A9C8E4;
L_08A9C8E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(132));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_7);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_8);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_gpr_4);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_7 ^ aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_8);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_5);
      if (branch_taken) {
          goto L_08A9CA3C;
      }
      goto L_08A9C980;
    }
L_08A9C980:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_5);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_gpr_7);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_gpr_8);
      if (branch_taken) {
          goto L_08A9C9C4;
      }
      goto L_08A9C9A4;
    }
L_08A9C9A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_4);
    goto L_08A9C9C4;
L_08A9C9C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(180)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(576))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(196), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(196))))));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08A9CA40;
    }
    goto L_08A9C9FC;
L_08A9C9FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A9CA2C;
      }
      goto L_08A9CA0C;
    }
L_08A9CA0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_4);
    goto L_08A9CA2C;
L_08A9CA2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_4);
      if (branch_taken) {
          goto L_08A9C8E4;
      }
      goto L_08A9CA3C;
    }
L_08A9CA3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08A9CA40;
L_08A9CA40:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(200));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), aot_gpr_7);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), aot_gpr_8);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(232), aot_gpr_4);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_7 ^ aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(236), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), aot_gpr_8);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), aot_gpr_5);
      if (branch_taken) {
          goto L_08A9CE88;
      }
      goto L_08A9CAD8;
    }
L_08A9CAD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), aot_gpr_5);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), aot_gpr_7);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_8);
      if (branch_taken) {
          goto L_08A9CB1C;
      }
      goto L_08A9CAFC;
    }
L_08A9CAFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(260)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), aot_gpr_4);
    goto L_08A9CB1C;
L_08A9CB1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(248)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(576))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(264), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(264))))));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A9CBB0;
    }
    goto L_08A9CB4C;
L_08A9CB4C:
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
        goto L_08A9CB5C;
    }
    goto L_08A9CB54;
L_08A9CB54:
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    goto L_08A9CB5C;
L_08A9CB5C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(280), aot_gpr_7);
      if (branch_taken) {
          goto L_08A9CB9C;
      }
      goto L_08A9CB7C;
    }
L_08A9CB7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(280)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(280), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_4);
    goto L_08A9CB9C;
L_08A9CB9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(268)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A9D2E8;
      }
      goto L_08A9CBB0;
    }
L_08A9CBB0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(284), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(284));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(300), aot_gpr_7);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(304), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(308), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(312), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(316), aot_gpr_8);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(320), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(324), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_7 ^ aot_gpr_8);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9CD58;
      }
      goto L_08A9CC44;
    }
L_08A9CC44:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A9CC80;
      }
      goto L_08A9CC4C;
    }
L_08A9CC4C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(72))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(332), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(332))))));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9CD58;
      }
      goto L_08A9CC7C;
    }
L_08A9CC7C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_08A9CC80;
L_08A9CC80:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(352), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(340), aot_gpr_4);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(344), aot_gpr_7);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(348), aot_gpr_8);
      if (branch_taken) {
          goto L_08A9CCCC;
      }
      goto L_08A9CCAC;
    }
L_08A9CCAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(348)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(348), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(340), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(344), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_gpr_4);
    goto L_08A9CCCC;
L_08A9CCCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(336)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(352))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(354), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(354))))));
    aot_gpr_7 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(356), aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_4);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(364), aot_gpr_7);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_gpr_8);
      if (branch_taken) {
          goto L_08A9CD44;
      }
      goto L_08A9CD24;
    }
L_08A9CD24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(368)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(364), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(356), aot_gpr_4);
    goto L_08A9CD44;
L_08A9CD44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(356)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(356), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A9CE88;
      }
      goto L_08A9CD58;
    }
L_08A9CD58:
    if (ctx.gpr[18] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
        goto L_08A9CDE0;
    }
    goto L_08A9CD60;
L_08A9CD60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(372), aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(376), aot_gpr_5);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(380), aot_gpr_7);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(384), aot_gpr_8);
      if (branch_taken) {
          goto L_08A9CDA4;
      }
      goto L_08A9CD84;
    }
L_08A9CD84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(384)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(384), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(376), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(380), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(372), aot_gpr_4);
    goto L_08A9CDA4;
L_08A9CDA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(372)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(372), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(72))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(388), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(388))))));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9CE88;
      }
      goto L_08A9CDDC;
    }
L_08A9CDDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    goto L_08A9CDE0;
L_08A9CDE0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(392), aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(396), aot_gpr_5);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(400), aot_gpr_7);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(404), aot_gpr_8);
      if (branch_taken) {
          goto L_08A9CE20;
      }
      goto L_08A9CE00;
    }
L_08A9CE00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(404)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(404), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(396), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(400), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(392), aot_gpr_4);
    goto L_08A9CE20;
L_08A9CE20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(392)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(392), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(408), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(412), aot_gpr_7);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(416), aot_gpr_4);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_7;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(420), aot_gpr_8);
      if (branch_taken) {
          goto L_08A9CE78;
      }
      goto L_08A9CE58;
    }
L_08A9CE58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(420)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(420), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(412), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(416), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(408), aot_gpr_4);
    goto L_08A9CE78;
L_08A9CE78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(408)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(408), aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    goto L_08A9CE88;
L_08A9CE88:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A9CE98;
      }
      goto L_08A9CE90;
    }
L_08A9CE90:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A9CE98;
L_08A9CE98:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08A9CF08;
      }
      goto L_08A9CEA0;
    }
L_08A9CEA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_7;
    ctx.gpr[31] = (0x08A9CEBCu);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9CEBCu) goto L_08A9CEBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9CEBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(576))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_5);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (aot_gpr_5 == aot_gpr_6) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08A9CF14;
    }
    goto L_08A9CF00;
L_08A9CF00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A9CF7C;
      }
      goto L_08A9CF08;
    }
L_08A9CF08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A9D2E8;
      }
      goto L_08A9CF14;
    }
L_08A9CF14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08A9CF50;
      }
      goto L_08A9CF20;
    }
L_08A9CF20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08A9CF44;
    }
    goto L_08A9CF30;
L_08A9CF30:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08A9CF44;
L_08A9CF44:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_08A9CF58;
      }
      goto L_08A9CF50;
    }
L_08A9CF50:
    ctx.gpr[31] = (0x08A9CF58u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 763u, 0x08B6FB14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9CF58u) goto L_08A9CF58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9CF58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
      if (branch_taken) {
          goto L_08A9D074;
      }
      goto L_08A9CF7C;
    }
L_08A9CF7C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08A9D040;
    }
    goto L_08A9CF88;
L_08A9CF88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08A9CFC8;
      }
      goto L_08A9CF9C;
    }
L_08A9CF9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_08A9CFBC;
    }
    goto L_08A9CFA8;
L_08A9CFA8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08A9CFBC;
L_08A9CFBC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), aot_gpr_4);
      if (branch_taken) {
          goto L_08A9CFD0;
      }
      goto L_08A9CFC8;
    }
L_08A9CFC8:
    ctx.gpr[31] = (0x08A9CFD0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 753u, 0x08B6FA30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9CFD0u) goto L_08A9CFD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9CFD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(516), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(520), aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(524), aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(528), aot_gpr_7);
      if (branch_taken) {
          goto L_08A9D014;
      }
      goto L_08A9CFF4;
    }
L_08A9CFF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(528)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(528), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(520), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(524), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(516), aot_gpr_4);
    goto L_08A9D014;
L_08A9D014:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(516)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(520)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(516), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(524)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(528)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
      if (branch_taken) {
          goto L_08A9D074;
      }
      goto L_08A9D040;
    }
L_08A9D040:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(532), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_8 = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(532));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(544), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_8 | 0u);
    ctx.gpr[31] = (0x08A9D074u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 777u, 0x08B6FC40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9D074u) goto L_08A9D074;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9D074:
    if (ctx.gpr[17] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A9D0A0;
    }
    goto L_08A9D07C;
L_08A9D07C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_6);
    jump_target = aot_gpr_7;
    ctx.gpr[31] = (0x08A9D09Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9D09Cu) goto L_08A9D09C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9D09C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A9D0A0;
L_08A9D0A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(424), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(432), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(436), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(424));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(440), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(444), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(448), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(452), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_6 ^ aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(460), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_gpr_7);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(468), aot_gpr_5);
      if (branch_taken) {
          goto L_08A9D298;
      }
      goto L_08A9D138;
    }
L_08A9D138:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_4);
      if (branch_taken) {
          goto L_08A9D170;
      }
      goto L_08A9D14C;
    }
L_08A9D14C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_5);
    goto L_08A9D170;
L_08A9D170:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(576))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(72))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(472), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(474), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(472))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(474))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(476), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(480), aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(484), aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(488), aot_gpr_7);
      if (branch_taken) {
          goto L_08A9D1E0;
      }
      goto L_08A9D1C0;
    }
L_08A9D1C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(488)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(488), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(480), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(484), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(476), aot_gpr_4);
    goto L_08A9D1E0;
L_08A9D1E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(476)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(72))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(476), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(494), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(492), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(492))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(494))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(128));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (ctx.gpr[16] + aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(496), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(500), aot_gpr_5);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(504), aot_gpr_7);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(508), aot_gpr_8);
      if (branch_taken) {
          goto L_08A9D270;
      }
      goto L_08A9D250;
    }
L_08A9D250:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(508)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(508), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(500), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(504), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(496), aot_gpr_5);
    goto L_08A9D270;
L_08A9D270:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(496)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(496), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    jump_target = aot_gpr_7;
    ctx.gpr[31] = (0x08A9D290u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9D290u) goto L_08A9D290;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9D290:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A9D2E4;
      }
      goto L_08A9D298;
    }
L_08A9D298:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(576))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(72))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(512), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(514), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(512))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(514))))));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9D2E4;
      }
      goto L_08A9D2C4;
    }
L_08A9D2C4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(120));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_8;
    ctx.gpr[31] = (0x08A9D2E4u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_7);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9D2E4u) goto L_08A9D2E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9D2E4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A9D2E8;
L_08A9D2E8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(548), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9D300:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[10]) < 4 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A9D324;
      }
      goto L_08A9D31C;
    }
L_08A9D31C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 4u);
      if (branch_taken) {
          goto L_08A9D38C;
      }
      goto L_08A9D324;
    }
L_08A9D324:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 1u));
    ctx.gpr[2] = (ctx.gpr[2] >> 31u);
    ctx.gpr[2] = (aot_gpr_8 + ctx.gpr[2]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08A9D38C;
      }
      goto L_08A9D340;
    }
L_08A9D340:
    ctx.gpr[2] = (aot_gpr_8 + static_cast<std::uint32_t>(-4));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A9D358;
      }
      goto L_08A9D350;
    }
L_08A9D350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_gpr_8 | 0u);
      if (branch_taken) {
          goto L_08A9D38C;
      }
      goto L_08A9D358;
    }
L_08A9D358:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[31] = (0x08A9D374u);
    aot_gpr_5 = (ctx.gpr[9] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9D374u) goto L_08A9D374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9D374:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    goto L_08A9D38C;
L_08A9D38C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_7)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_6 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_7)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_7 = (ctx.lo);
    ctx.gpr[31] = (0x08A9D3B4u);
    goto L_08A9D3CC;
L_08A9D3B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9D3CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_7 != 0u;
    ctx.gpr[16] = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08A9D41C;
      }
      goto L_08A9D3F8;
    }
L_08A9D3F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08A9D414;
      }
      goto L_08A9D400;
    }
L_08A9D400:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9D40Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 37u, 0x088703A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9D40Cu) goto L_08A9D40C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9D40C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D47C;
      }
      goto L_08A9D414;
    }
L_08A9D414:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D4A8;
      }
      goto L_08A9D41C;
    }
L_08A9D41C:
    aot_gpr_4 = (ctx.gpr[16] < static_cast<std::uint32_t>(-3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A9D440;
      }
      goto L_08A9D428;
    }
L_08A9D428:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9D438u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(9568));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9D438u) goto L_08A9D438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9D438:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A9D47C;
      }
      goto L_08A9D440;
    }
L_08A9D440:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9D450u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 35u, 0x0887037Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9D450u) goto L_08A9D450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9D450:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A9D47C;
      }
      goto L_08A9D458;
    }
L_08A9D458:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08A9D474;
      }
      goto L_08A9D460;
    }
L_08A9D460:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9D46Cu);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 446u, 0x088719B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9D46Cu) goto L_08A9D46C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9D46C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A9D47C;
      }
      goto L_08A9D474;
    }
L_08A9D474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D4A8;
      }
      goto L_08A9D47C;
    }
L_08A9D47C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08A9D4A4;
      }
      goto L_08A9D484;
    }
L_08A9D484:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    goto L_08A9D4A4;
L_08A9D4A4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A9D4A8;
L_08A9D4A8:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9D4C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 & 32u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9D510;
      }
      goto L_08A9D4F4;
    }
L_08A9D4F4:
    ctx.gpr[31] = (0x08A9D4FCu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A9DE30;
L_08A9D4FC:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A9D508u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A9DE30;
L_08A9D508:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A9D510;
L_08A9D510:
    aot_gpr_5 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9D550;
      }
      goto L_08A9D51C;
    }
L_08A9D51C:
    ctx.gpr[31] = (0x08A9D524u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08A9DE30;
L_08A9D524:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A9D530u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A9DE30;
L_08A9D530:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A9D53Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_08A9DE30;
L_08A9D53C:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A9D548u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08A9DE30;
L_08A9D548:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A9D550;
L_08A9D550:
    aot_gpr_5 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9D578;
      }
      goto L_08A9D55C;
    }
L_08A9D55C:
    ctx.gpr[31] = (0x08A9D564u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A9DE30;
L_08A9D564:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A9D570u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08A9DE30;
L_08A9D570:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A9D578;
L_08A9D578:
    aot_gpr_4 = (aot_gpr_4 & 192u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9D59C;
      }
      goto L_08A9D584;
    }
L_08A9D584:
    ctx.gpr[31] = (0x08A9D58Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08A9DE30;
L_08A9D58C:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A9D598u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08A9DE30;
L_08A9D598:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08A9D59C;
L_08A9D59C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9D5B4:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_6 & 32u);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_7 = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D5F0;
      }
      goto L_08A9D5C4;
    }
L_08A9D5C4:
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr_8 == ctx.gpr[9];
      if (branch_taken) {
          goto L_08A9D5D8;
      }
      goto L_08A9D5D4;
    }
L_08A9D5D4:
    aot_gpr_7 = (0u | 1u);
    goto L_08A9D5D8;
L_08A9D5D8:
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = aot_gpr_8 == ctx.gpr[9];
      if (branch_taken) {
          goto L_08A9D5F0;
      }
      goto L_08A9D5E8;
    }
L_08A9D5E8:
    aot_gpr_7 = (aot_gpr_7 | 2u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    goto L_08A9D5F0;
L_08A9D5F0:
    aot_gpr_8 = (aot_gpr_6 & 16u);
    { const bool branch_taken = aot_gpr_8 == 0u;
      if (branch_taken) {
          goto L_08A9D65C;
      }
      goto L_08A9D5FC;
    }
L_08A9D5FC:
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(10))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_8 == ctx.gpr[9];
      if (branch_taken) {
          goto L_08A9D614;
      }
      goto L_08A9D60C;
    }
L_08A9D60C:
    aot_gpr_7 = (aot_gpr_7 | 16u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    goto L_08A9D614;
L_08A9D614:
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(12))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = aot_gpr_8 == ctx.gpr[9];
      if (branch_taken) {
          goto L_08A9D62C;
      }
      goto L_08A9D624;
    }
L_08A9D624:
    aot_gpr_7 = (aot_gpr_7 | 32u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    goto L_08A9D62C;
L_08A9D62C:
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_8 == ctx.gpr[9];
      if (branch_taken) {
          goto L_08A9D644;
      }
      goto L_08A9D63C;
    }
L_08A9D63C:
    aot_gpr_7 = (aot_gpr_7 | 512u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    goto L_08A9D644;
L_08A9D644:
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(20))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = aot_gpr_8 == ctx.gpr[9];
      if (branch_taken) {
          goto L_08A9D65C;
      }
      goto L_08A9D654;
    }
L_08A9D654:
    aot_gpr_7 = (aot_gpr_7 | 256u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    goto L_08A9D65C;
L_08A9D65C:
    aot_gpr_8 = (aot_gpr_6 & 8u);
    { const bool branch_taken = aot_gpr_8 == 0u;
      if (branch_taken) {
          goto L_08A9D698;
      }
      goto L_08A9D668;
    }
L_08A9D668:
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(14))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_8 == ctx.gpr[9];
      if (branch_taken) {
          goto L_08A9D680;
      }
      goto L_08A9D678;
    }
L_08A9D678:
    aot_gpr_7 = (aot_gpr_7 | 64u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    goto L_08A9D680;
L_08A9D680:
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr_8 == ctx.gpr[9];
      if (branch_taken) {
          goto L_08A9D698;
      }
      goto L_08A9D690;
    }
L_08A9D690:
    aot_gpr_7 = (aot_gpr_7 | 128u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    goto L_08A9D698;
L_08A9D698:
    aot_gpr_6 = (aot_gpr_6 & 128u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A9D6D4;
      }
      goto L_08A9D6A4;
    }
L_08A9D6A4:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6))))));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_8;
      if (branch_taken) {
          goto L_08A9D6BC;
      }
      goto L_08A9D6B4;
    }
L_08A9D6B4:
    aot_gpr_7 = (aot_gpr_7 | 4u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    goto L_08A9D6BC;
L_08A9D6BC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A9D6D4;
      }
      goto L_08A9D6CC;
    }
L_08A9D6CC:
    aot_gpr_7 = (aot_gpr_7 | 8u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    goto L_08A9D6D4;
L_08A9D6D4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_gpr_7 & 255u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9D6DC:
    aot_gpr_6 = (aot_gpr_7 & 65535u);
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_8 = (aot_gpr_7 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 8u));
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_8 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_8));
    aot_gpr_8 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_8));
    aot_gpr_8 = (aot_gpr_8 & 65535u);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_7 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9D7AC;
      }
      goto L_08A9D744;
    }
L_08A9D744:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2))))));
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_8 = (aot_gpr_7 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 8u));
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_8 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_8));
    aot_gpr_8 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_8));
    aot_gpr_8 = (aot_gpr_8 & 65535u);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    goto L_08A9D7AC;
L_08A9D7AC:
    aot_gpr_7 = (aot_gpr_6 & 2u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9D820;
      }
      goto L_08A9D7B8;
    }
L_08A9D7B8:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4))))));
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_8 = (aot_gpr_7 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 8u));
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_8 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_8));
    aot_gpr_8 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_8));
    aot_gpr_8 = (aot_gpr_8 & 65535u);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    goto L_08A9D820;
L_08A9D820:
    aot_gpr_7 = (aot_gpr_6 & 16u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9D894;
      }
      goto L_08A9D82C;
    }
L_08A9D82C:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(10))))));
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_8 = (aot_gpr_7 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 8u));
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_8 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_8));
    aot_gpr_8 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_8));
    aot_gpr_8 = (aot_gpr_8 & 65535u);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    goto L_08A9D894;
L_08A9D894:
    aot_gpr_7 = (aot_gpr_6 & 32u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9D908;
      }
      goto L_08A9D8A0;
    }
L_08A9D8A0:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(12))))));
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_8 = (aot_gpr_7 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 8u));
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_8 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_8));
    aot_gpr_8 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_8));
    aot_gpr_8 = (aot_gpr_8 & 65535u);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    goto L_08A9D908;
L_08A9D908:
    aot_gpr_7 = (aot_gpr_6 & 64u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9D97C;
      }
      goto L_08A9D914;
    }
L_08A9D914:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(14))))));
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_8 = (aot_gpr_7 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 8u));
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_8 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_8));
    aot_gpr_8 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_8));
    aot_gpr_8 = (aot_gpr_8 & 65535u);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    goto L_08A9D97C;
L_08A9D97C:
    aot_gpr_7 = (aot_gpr_6 & 128u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9D9F0;
      }
      goto L_08A9D988;
    }
L_08A9D988:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_8 = (aot_gpr_7 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 8u));
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_8 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_8));
    aot_gpr_8 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_8));
    aot_gpr_8 = (aot_gpr_8 & 65535u);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    goto L_08A9D9F0;
L_08A9D9F0:
    aot_gpr_7 = (aot_gpr_6 & 4u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9DA64;
      }
      goto L_08A9D9FC;
    }
L_08A9D9FC:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_8 = (aot_gpr_7 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 8u));
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_8 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_8));
    aot_gpr_8 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_8));
    aot_gpr_8 = (aot_gpr_8 & 65535u);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    goto L_08A9DA64;
L_08A9DA64:
    aot_gpr_7 = (aot_gpr_6 & 8u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9DAD8;
      }
      goto L_08A9DA70;
    }
L_08A9DA70:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(8))))));
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_8 = (aot_gpr_7 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 8u));
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_8 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_8));
    aot_gpr_8 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_8));
    aot_gpr_8 = (aot_gpr_8 & 65535u);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    goto L_08A9DAD8;
L_08A9DAD8:
    aot_gpr_7 = (aot_gpr_6 & 512u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9DB4C;
      }
      goto L_08A9DAE4;
    }
L_08A9DAE4:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18))))));
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_8 = (aot_gpr_7 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 8u));
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_8 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_8));
    aot_gpr_8 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_8));
    aot_gpr_8 = (aot_gpr_8 & 65535u);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    goto L_08A9DB4C;
L_08A9DB4C:
    aot_gpr_6 = (aot_gpr_6 & 256u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A9DBC0;
      }
      goto L_08A9DB58;
    }
L_08A9DB58:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(20))))));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_5 & 255u);
    aot_gpr_7 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_7));
    aot_gpr_7 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_7));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_8 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_8 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08A9DBC0;
L_08A9DBC0:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9DBC8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_7);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 << 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_7);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_7 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9DC30;
      }
      goto L_08A9DC04;
    }
L_08A9DC04:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_8 = (aot_mem.aot_direct_load8(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 << 8u);
    aot_gpr_7 = (aot_gpr_7 | aot_gpr_8);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_7));
    goto L_08A9DC30;
L_08A9DC30:
    aot_gpr_7 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9DC68;
      }
      goto L_08A9DC3C;
    }
L_08A9DC3C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_8 = (aot_mem.aot_direct_load8(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 << 8u);
    aot_gpr_7 = (aot_gpr_7 | aot_gpr_8);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_7));
    goto L_08A9DC68;
L_08A9DC68:
    aot_gpr_7 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9DCA0;
      }
      goto L_08A9DC74;
    }
L_08A9DC74:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_8 = (aot_mem.aot_direct_load8(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 << 8u);
    aot_gpr_7 = (aot_gpr_7 | aot_gpr_8);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_7));
    goto L_08A9DCA0;
L_08A9DCA0:
    aot_gpr_7 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9DCD8;
      }
      goto L_08A9DCAC;
    }
L_08A9DCAC:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_8 = (aot_mem.aot_direct_load8(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 << 8u);
    aot_gpr_7 = (aot_gpr_7 | aot_gpr_8);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_7));
    goto L_08A9DCD8;
L_08A9DCD8:
    aot_gpr_7 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9DD10;
      }
      goto L_08A9DCE4;
    }
L_08A9DCE4:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_8 = (aot_mem.aot_direct_load8(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 << 8u);
    aot_gpr_7 = (aot_gpr_7 | aot_gpr_8);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr_7));
    goto L_08A9DD10;
L_08A9DD10:
    aot_gpr_7 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9DD48;
      }
      goto L_08A9DD1C;
    }
L_08A9DD1C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_8 = (aot_mem.aot_direct_load8(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 << 8u);
    aot_gpr_7 = (aot_gpr_7 | aot_gpr_8);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_7));
    goto L_08A9DD48;
L_08A9DD48:
    aot_gpr_7 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9DD80;
      }
      goto L_08A9DD54;
    }
L_08A9DD54:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_8 = (aot_mem.aot_direct_load8(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 << 8u);
    aot_gpr_7 = (aot_gpr_7 | aot_gpr_8);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_7));
    goto L_08A9DD80;
L_08A9DD80:
    aot_gpr_7 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9DDB8;
      }
      goto L_08A9DD8C;
    }
L_08A9DD8C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_8 = (aot_mem.aot_direct_load8(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 << 8u);
    aot_gpr_7 = (aot_gpr_7 | aot_gpr_8);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_7));
    goto L_08A9DDB8;
L_08A9DDB8:
    aot_gpr_7 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08A9DDF0;
      }
      goto L_08A9DDC4;
    }
L_08A9DDC4:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_8 = (aot_mem.aot_direct_load8(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 << 8u);
    aot_gpr_7 = (aot_gpr_7 | aot_gpr_8);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr_7));
    goto L_08A9DDF0;
L_08A9DDF0:
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9DE28;
      }
      goto L_08A9DDFC;
    }
L_08A9DDFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_7);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 << 8u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08A9DE28;
L_08A9DE28:
    jump_target = ctx.gpr[31];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9DE30:
    aot_gpr_4 = (17826u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 63875u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (aot_gpr_4 << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9DE54:
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_0 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15412u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    jump_target = ctx.gpr[31];
    { const float fs = aot_fpr_0; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9DE74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[9]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 + static_cast<std::uint32_t>(140));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A9DF04;
      }
      goto L_08A9DEB4;
    }
L_08A9DEB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4744));
    ctx.gpr[31] = (0x08A9DECCu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    goto L_08A9DE54;
L_08A9DECC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.gpr[31] = (0x08A9DEE0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9DEE0u) goto L_08A9DEE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9DEE0:
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4768));
    ctx.gpr[31] = (0x08A9DEECu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    goto L_08A9DE54;
L_08A9DEEC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.gpr[31] = (0x08A9DF00u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9DF00u) goto L_08A9DF00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9DF00:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A9DF04;
L_08A9DF04:
    aot_gpr_5 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9DFB4;
      }
      goto L_08A9DF10;
    }
L_08A9DF10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4768));
    ctx.gpr[31] = (0x08A9DF28u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(18))))));
    goto L_08A9DE54;
L_08A9DF28:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.gpr[31] = (0x08A9DF3Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9DF3Cu) goto L_08A9DF3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9DF3C:
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4756));
    ctx.gpr[31] = (0x08A9DF48u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    goto L_08A9DE54;
L_08A9DF48:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0) ^ 0x80000000u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A9DF5Cu);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9DF5Cu) goto L_08A9DF5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9DF5C:
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4744));
    ctx.gpr[31] = (0x08A9DF68u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12))))));
    goto L_08A9DE54;
L_08A9DF68:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0) ^ 0x80000000u);
    aot_gpr_4 = (17076u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A9DF88u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9DF88u) goto L_08A9DF88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9DF88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A9DF9Cu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20))))));
    goto L_08A9DE54;
L_08A9DF9C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.gpr[31] = (0x08A9DFB0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9DFB0u) goto L_08A9DFB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9DFB0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A9DFB4;
L_08A9DFB4:
    aot_gpr_5 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9E044;
      }
      goto L_08A9DFC0;
    }
L_08A9DFC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A9DFD0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9DFD0u) goto L_08A9DFD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9DFD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A9DFE0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9DFE0u) goto L_08A9DFE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9DFE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[2] << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4744));
    ctx.gpr[31] = (0x08A9E00Cu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
    goto L_08A9DE54;
L_08A9E00C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0) ^ 0x80000000u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A9E020u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E020u) goto L_08A9E020;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E020:
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4768));
    ctx.gpr[31] = (0x08A9E02Cu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(14))))));
    goto L_08A9DE54;
L_08A9E02C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0) ^ 0x80000000u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A9E040u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E040u) goto L_08A9E040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E040:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A9E044;
L_08A9E044:
    aot_gpr_5 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9E190;
      }
      goto L_08A9E050;
    }
L_08A9E050:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A9E060u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E060u) goto L_08A9E060;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E060:
    ctx.gpr[31] = (0x08A9E068u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E068u) goto L_08A9E068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E068:
    aot_gpr_4 = (0u | 128u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[22])) && aot_fpr_12 == ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A9E0AC;
      }
      goto L_08A9E090;
    }
L_08A9E090:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_20) || std::isnan(ctx.fpr[22])) && aot_fpr_20 == ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A9E0AC;
      }
      goto L_08A9E0A0;
    }
L_08A9E0A0:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08A9E0BC;
      }
      goto L_08A9E0AC;
    }
L_08A9E0AC:
    ctx.gpr[31] = (0x08A9E0B4u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E0B4u) goto L_08A9E0B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E0B4:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A9E0BC;
L_08A9E0BC:
    if (aot_gpr_4 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(184)));
        goto L_08A9E0E8;
    }
    goto L_08A9E0C4;
L_08A9E0C4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08A9E0D4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A9C6FC;
L_08A9E0D4:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(184)));
    goto L_08A9E0E8;
L_08A9E0E8:
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    ctx.gpr[31] = (0x08A9E0F4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E0F4u) goto L_08A9E0F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E0F4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A9E154u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6))))));
    goto L_08A9DE54;
L_08A9E154:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.gpr[31] = (0x08A9E168u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E168u) goto L_08A9E168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E168:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4768));
    ctx.gpr[31] = (0x08A9E174u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    goto L_08A9DE54;
L_08A9E174:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.gpr[31] = (0x08A9E188u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E188u) goto L_08A9E188;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E188:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A9E1E8;
      }
      goto L_08A9E190;
    }
L_08A9E190:
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9E1E8;
      }
      goto L_08A9E19C;
    }
L_08A9E19C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4768));
    ctx.gpr[31] = (0x08A9E1B4u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    goto L_08A9DE54;
L_08A9E1B4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.gpr[31] = (0x08A9E1C8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E1C8u) goto L_08A9E1C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E1C8:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4744));
    ctx.gpr[31] = (0x08A9E1D4u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6))))));
    goto L_08A9DE54;
L_08A9E1D4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.gpr[31] = (0x08A9E1E8u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E1E8u) goto L_08A9E1E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E1E8:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[31] = aot_run_words[8];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9E214:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9E244u);
    aot_gpr_7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E244u) goto L_08A9E244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E244:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(523), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), aot_gpr_4);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9E274:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_6 = (0u | 4u);
    ctx.gpr[31] = (0x08A9E2ACu);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E2ACu) goto L_08A9E2AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E2AC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (50042u << 16u);
      if (branch_taken) {
          goto L_08A9E2E4;
      }
      goto L_08A9E2D0;
    }
L_08A9E2D0:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A9E2F4;
      }
      goto L_08A9E2E4;
    }
L_08A9E2E4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A9E2F0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E2F0u) goto L_08A9E2F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E2F0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08A9E2F4;
L_08A9E2F4:
    aot_gpr_4 = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    aot_gpr_5 = (2246u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1840));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    ctx.execute_vfpu_vtfm_ct<14u, 36u, 12u, 4u, 3u>();
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08A9E34C;
      }
      goto L_08A9E344;
    }
L_08A9E344:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08A9E34C;
L_08A9E34C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9E358;
      }
      goto L_08A9E354;
    }
L_08A9E354:
    aot_gpr_4 = (0u | 1u);
    goto L_08A9E358;
L_08A9E358:
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9E384;
      }
      goto L_08A9E37C;
    }
L_08A9E37C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A9E3D4;
      }
      goto L_08A9E384;
    }
L_08A9E384:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08A9E3B0;
      }
      goto L_08A9E39C;
    }
L_08A9E39C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A9E3D4;
      }
      goto L_08A9E3B0;
    }
L_08A9E3B0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9E3D4;
      }
      goto L_08A9E3D0;
    }
L_08A9E3D0:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9E3D4;
L_08A9E3D4:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9E3F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    aot_gpr_7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08A9E418u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E418u) goto L_08A9E418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E418:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9E434:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 3u);
    ctx.gpr[31] = (0x08A9E46Cu);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E46Cu) goto L_08A9E46C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E46C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A9E480u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E480u) goto L_08A9E480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E480:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9E498u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E498u) goto L_08A9E498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E498:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9E4B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-192));
    { const std::uint32_t aot_run_words[10]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_6 = (0u | 11u);
    ctx.gpr[31] = (0x08A9E500u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E500u) goto L_08A9E500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E500:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[2]);
    }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A9E53C;
      }
      goto L_08A9E534;
    }
L_08A9E534:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A9E53C;
L_08A9E53C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[28] < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A9E554;
      }
      goto L_08A9E54C;
    }
L_08A9E54C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08A9E554;
L_08A9E554:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[30] < ctx.fpr[14])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A9E56C;
      }
      goto L_08A9E564;
    }
L_08A9E564:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A9E56C;
L_08A9E56C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08A9E5D8;
      }
      goto L_08A9E57C;
    }
L_08A9E57C:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_8 = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A9E5CCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E5CCu) goto L_08A9E5CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E5CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A9E5D8;
      }
      goto L_08A9E5D4;
    }
L_08A9E5D4:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A9E5D8;
L_08A9E5D8:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (0u < aot_gpr_7 ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (0u < aot_gpr_7 ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    ctx.gpr[2] = (aot_gpr_7 & 255u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    ctx.gpr[3] = (aot_gpr_7 & 255u);
    aot_gpr_7 = (0u | 1u);
    aot_gpr_8 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A9E644u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 406u, 0x0889A478u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E644u) goto L_08A9E644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E644:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08A9E654;
      }
      goto L_08A9E650;
    }
L_08A9E650:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A9E654;
L_08A9E654:
    aot_gpr_4 = (0u < ctx.gpr[18] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[18] = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9E680;
      }
      goto L_08A9E678;
    }
L_08A9E678:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08A9E6C8;
      }
      goto L_08A9E680;
    }
L_08A9E680:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9E6AC;
      }
      goto L_08A9E6A0;
    }
L_08A9E6A0:
    aot_gpr_4 = (ctx.gpr[18] & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A9E6C8;
      }
      goto L_08A9E6AC;
    }
L_08A9E6AC:
    aot_gpr_4 = (ctx.gpr[18] | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9E6C8;
      }
      goto L_08A9E6C4;
    }
L_08A9E6C4:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9E6C8;
L_08A9E6C8:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      ctx.gpr[16] = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[31] = aot_run_words[9];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9E6FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_6 = (0u | 6u);
    ctx.gpr[31] = (0x08A9E72Cu);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E72Cu) goto L_08A9E72C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E72C:
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.fpr[14] = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[2]);
    }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[14] < ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A9E768;
      }
      goto L_08A9E760;
    }
L_08A9E760:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08A9E768;
L_08A9E768:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A9E780;
      }
      goto L_08A9E778;
    }
L_08A9E778:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08A9E780;
L_08A9E780:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[16])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08A9E79C;
    }
    goto L_08A9E790;
L_08A9E790:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08A9E79C;
L_08A9E79C:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x08A9E7BCu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 793u, 0x08ACE7C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E7BCu) goto L_08A9E7BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E7BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A9E7C8;
      }
      goto L_08A9E7C4;
    }
L_08A9E7C4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A9E7C8;
L_08A9E7C8:
    aot_gpr_4 = (0u < ctx.gpr[17] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9E7F4;
      }
      goto L_08A9E7EC;
    }
L_08A9E7EC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A9E83C;
      }
      goto L_08A9E7F4;
    }
L_08A9E7F4:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9E820;
      }
      goto L_08A9E814;
    }
L_08A9E814:
    aot_gpr_4 = (ctx.gpr[17] & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A9E83C;
      }
      goto L_08A9E820;
    }
L_08A9E820:
    aot_gpr_4 = (ctx.gpr[17] | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9E83C;
      }
      goto L_08A9E838;
    }
L_08A9E838:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9E83C;
L_08A9E83C:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9E858:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_6 = (0u | 6u);
    ctx.gpr[31] = (0x08A9E888u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E888u) goto L_08A9E888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E888:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[14] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[2] = std::bit_cast<float>(aot_run_words[4]);
    }
    aot_fpr_0 = ctx.fpr[18] - aot_fpr_13;
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.fpr[18] = ctx.fpr[18] + aot_fpr_13;
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = aot_fpr_12 - ctx.fpr[2];
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[2];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] < ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A9E8DC;
      }
      goto L_08A9E8D4;
    }
L_08A9E8D4:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08A9E8DC;
L_08A9E8DC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A9E8F4;
      }
      goto L_08A9E8EC;
    }
L_08A9E8EC:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_08A9E8F4;
L_08A9E8F4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[14])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A9E90C;
      }
      goto L_08A9E904;
    }
L_08A9E904:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A9E90C;
L_08A9E90C:
    ctx.gpr[17] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[19]), std::bit_cast<std::uint32_t>(ctx.fpr[16]), std::bit_cast<std::uint32_t>(aot_fpr_13)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[18]), std::bit_cast<std::uint32_t>(ctx.fpr[15]), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_7 = (0u | 2u);
    aot_gpr_8 = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A9E94Cu);
    ctx.gpr[11] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 457u, 0x08892E7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9E94Cu) goto L_08A9E94C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9E94C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08A9E95C;
      }
      goto L_08A9E958;
    }
L_08A9E958:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A9E95C;
L_08A9E95C:
    aot_gpr_4 = (0u < ctx.gpr[17] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9E988;
      }
      goto L_08A9E980;
    }
L_08A9E980:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A9E9D0;
      }
      goto L_08A9E988;
    }
L_08A9E988:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9E9B4;
      }
      goto L_08A9E9A8;
    }
L_08A9E9A8:
    aot_gpr_4 = (ctx.gpr[17] & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A9E9D0;
      }
      goto L_08A9E9B4;
    }
L_08A9E9B4:
    aot_gpr_4 = (ctx.gpr[17] | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9E9D0;
      }
      goto L_08A9E9CC;
    }
L_08A9E9CC:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9E9D0;
L_08A9E9D0:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9E9EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_6 = (0u | 5u);
    ctx.gpr[31] = (0x08A9EA1Cu);
    aot_gpr_7 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EA1Cu) goto L_08A9EA1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EA1C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (50042u << 16u);
      if (branch_taken) {
          goto L_08A9EA54;
      }
      goto L_08A9EA40;
    }
L_08A9EA40:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A9EA64;
      }
      goto L_08A9EA54;
    }
L_08A9EA54:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A9EA60u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EA60u) goto L_08A9EA60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EA60:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08A9EA64;
L_08A9EA64:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[31] = (0x08A9EA84u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 595u, 0x0889B6ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EA84u) goto L_08A9EA84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EA84:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9EAA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_6 = (0u | 3u);
    ctx.gpr[31] = (0x08A9EAD8u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EAD8u) goto L_08A9EAD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EAD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08A9EAE4u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EAE4u) goto L_08A9EAE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EAE4:
    ctx.gpr[17] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A9EAF8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 70u, 0x0897037Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EAF8u) goto L_08A9EAF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EAF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A9EB04;
      }
      goto L_08A9EB00;
    }
L_08A9EB00:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A9EB04;
L_08A9EB04:
    aot_gpr_4 = (0u < ctx.gpr[17] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9EB30;
      }
      goto L_08A9EB28;
    }
L_08A9EB28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A9EB78;
      }
      goto L_08A9EB30;
    }
L_08A9EB30:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9EB5C;
      }
      goto L_08A9EB50;
    }
L_08A9EB50:
    aot_gpr_4 = (ctx.gpr[17] & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A9EB78;
      }
      goto L_08A9EB5C;
    }
L_08A9EB5C:
    aot_gpr_4 = (ctx.gpr[17] | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9EB78;
      }
      goto L_08A9EB74;
    }
L_08A9EB74:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9EB78;
L_08A9EB78:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9EB98:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    aot_gpr_7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08A9EBB8u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EBB8u) goto L_08A9EBB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EBB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9EBD4;
      }
      goto L_08A9EBC4;
    }
L_08A9EBC4:
    ctx.gpr[31] = (0x08A9EBCCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 538u, 0x08AD31E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EBCCu) goto L_08A9EBCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EBCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A9EBDC;
      }
      goto L_08A9EBD4;
    }
L_08A9EBD4:
    ctx.gpr[31] = (0x08A9EBDCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 540u, 0x08AD3204u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EBDCu) goto L_08A9EBDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EBDC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9EBF0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    aot_gpr_7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08A9EC10u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EC10u) goto L_08A9EC10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EC10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9EC24;
      }
      goto L_08A9EC1C;
    }
L_08A9EC1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8424), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9EC2C;
      }
      goto L_08A9EC24;
    }
L_08A9EC24:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8424), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A9EC2C;
L_08A9EC2C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9EC40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    aot_gpr_6 = (0u | 3u);
    ctx.gpr[31] = (0x08A9EC74u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EC74u) goto L_08A9EC74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EC74:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A9EC88u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 127u, 0x08A11208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EC88u) goto L_08A9EC88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EC88:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A9EC9Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 587u, 0x08AD3578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EC9Cu) goto L_08A9EC9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EC9C:
    ctx.gpr[31] = (0x08A9ECA4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9ECA4u) goto L_08A9ECA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9ECA4:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9ECC8:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1039)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A9ECDC;
      }
      goto L_08A9ECD8;
    }
L_08A9ECD8:
    aot_gpr_5 = (0u | 1u);
    goto L_08A9ECDC;
L_08A9ECDC:
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9ED08;
      }
      goto L_08A9ED00;
    }
L_08A9ED00:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9ED50;
      }
      goto L_08A9ED08;
    }
L_08A9ED08:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_7) < 9 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9ED34;
      }
      goto L_08A9ED28;
    }
L_08A9ED28:
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9ED50;
      }
      goto L_08A9ED34;
    }
L_08A9ED34:
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9ED50;
      }
      goto L_08A9ED4C;
    }
L_08A9ED4C:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9ED50;
L_08A9ED50:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9ED58:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1038)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A9ED6C;
      }
      goto L_08A9ED68;
    }
L_08A9ED68:
    aot_gpr_5 = (0u | 1u);
    goto L_08A9ED6C;
L_08A9ED6C:
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9ED98;
      }
      goto L_08A9ED90;
    }
L_08A9ED90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9EDE0;
      }
      goto L_08A9ED98;
    }
L_08A9ED98:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_7) < 9 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9EDC4;
      }
      goto L_08A9EDB8;
    }
L_08A9EDB8:
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9EDE0;
      }
      goto L_08A9EDC4;
    }
L_08A9EDC4:
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9EDE0;
      }
      goto L_08A9EDDC;
    }
L_08A9EDDC:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9EDE0;
L_08A9EDE0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9EDE8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_5 ^ 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9EE08;
      }
      goto L_08A9EE00;
    }
L_08A9EE00:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08A9EE50;
      }
      goto L_08A9EE08;
    }
L_08A9EE08:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_7) < 9 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9EE34;
      }
      goto L_08A9EE28;
    }
L_08A9EE28:
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9EE50;
      }
      goto L_08A9EE34;
    }
L_08A9EE34:
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9EE50;
      }
      goto L_08A9EE4C;
    }
L_08A9EE4C:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9EE50;
L_08A9EE50:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9EE58:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1784)));
    aot_gpr_7 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1782)));
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1783)));
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1777)));
    aot_gpr_8 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1778)));
    aot_gpr_7 = (aot_gpr_7 | aot_gpr_8);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_7);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08A9EE8C;
      }
      goto L_08A9EE88;
    }
L_08A9EE88:
    aot_gpr_5 = (0u | 1u);
    goto L_08A9EE8C;
L_08A9EE8C:
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9EEB8;
      }
      goto L_08A9EEB0;
    }
L_08A9EEB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9EF00;
      }
      goto L_08A9EEB8;
    }
L_08A9EEB8:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_7) < 9 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9EEE4;
      }
      goto L_08A9EED8;
    }
L_08A9EED8:
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9EF00;
      }
      goto L_08A9EEE4;
    }
L_08A9EEE4:
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9EF00;
      }
      goto L_08A9EEFC;
    }
L_08A9EEFC:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9EF00;
L_08A9EF00:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9EF08:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[31] = (0x08A9EF20u);
    aot_gpr_7 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EF20u) goto L_08A9EF20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EF20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08A9EF34;
    }
    goto L_08A9EF2C;
L_08A9EF2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A9EF38;
      }
      goto L_08A9EF34;
    }
L_08A9EF34:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_08A9EF38;
L_08A9EF38:
    aot_gpr_8 = (aot_gpr_4 | 0u);
    aot_gpr_7 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_8 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9EF84;
      }
      goto L_08A9EF50;
    }
L_08A9EF50:
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < 91 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9EF6C;
      }
      goto L_08A9EF5C;
    }
L_08A9EF5C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08A9EF6C;
      }
      goto L_08A9EF64;
    }
L_08A9EF64:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08A9EF6C;
L_08A9EF6C:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A9EF50;
      }
      goto L_08A9EF84;
    }
L_08A9EF84:
    ctx.gpr[31] = (0x08A9EF8Cu);
    aot_gpr_4 = (aot_gpr_8 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 269u, 0x0893509Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9EF8Cu) goto L_08A9EF8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9EF8C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9EF9C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    aot_gpr_6 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9EFB8;
      }
      goto L_08A9EFB0;
    }
L_08A9EFB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08A9F000;
      }
      goto L_08A9EFB8;
    }
L_08A9EFB8:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_7) < 9 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9EFE4;
      }
      goto L_08A9EFD8;
    }
L_08A9EFD8:
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9F000;
      }
      goto L_08A9EFE4;
    }
L_08A9EFE4:
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9F000;
      }
      goto L_08A9EFFC;
    }
L_08A9EFFC:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9F000;
L_08A9F000:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F008:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[31] = (0x08A9F030u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F030u) goto L_08A9F030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F030:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x08A9F050u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 308u, 0x0880988Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F050u) goto L_08A9F050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F050:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F068:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    aot_gpr_6 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F084;
      }
      goto L_08A9F07C;
    }
L_08A9F07C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08A9F0CC;
      }
      goto L_08A9F084;
    }
L_08A9F084:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_7) < 9 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F0B0;
      }
      goto L_08A9F0A4;
    }
L_08A9F0A4:
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9F0CC;
      }
      goto L_08A9F0B0;
    }
L_08A9F0B0:
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9F0CC;
      }
      goto L_08A9F0C8;
    }
L_08A9F0C8:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9F0CC;
L_08A9F0CC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F0D4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    aot_gpr_6 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F0F0;
      }
      goto L_08A9F0E8;
    }
L_08A9F0E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08A9F138;
      }
      goto L_08A9F0F0;
    }
L_08A9F0F0:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_7) < 9 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F11C;
      }
      goto L_08A9F110;
    }
L_08A9F110:
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9F138;
      }
      goto L_08A9F11C;
    }
L_08A9F11C:
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9F138;
      }
      goto L_08A9F134;
    }
L_08A9F134:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9F138;
L_08A9F138:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F140:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    aot_gpr_6 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F15C;
      }
      goto L_08A9F154;
    }
L_08A9F154:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08A9F1A4;
      }
      goto L_08A9F15C;
    }
L_08A9F15C:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_7) < 9 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F188;
      }
      goto L_08A9F17C;
    }
L_08A9F17C:
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9F1A4;
      }
      goto L_08A9F188;
    }
L_08A9F188:
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9F1A4;
      }
      goto L_08A9F1A0;
    }
L_08A9F1A0:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9F1A4;
L_08A9F1A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F1AC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_5 ^ 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F1CC;
      }
      goto L_08A9F1C4;
    }
L_08A9F1C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08A9F214;
      }
      goto L_08A9F1CC;
    }
L_08A9F1CC:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_7) < 9 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F1F8;
      }
      goto L_08A9F1EC;
    }
L_08A9F1EC:
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9F214;
      }
      goto L_08A9F1F8;
    }
L_08A9F1F8:
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9F214;
      }
      goto L_08A9F210;
    }
L_08A9F210:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9F214;
L_08A9F214:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F21C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 3u);
    ctx.gpr[31] = (0x08A9F254u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F254u) goto L_08A9F254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F254:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.gpr[31] = (0x08A9F284u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F284u) goto L_08A9F284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F284:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9F2B4u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F2B4u) goto L_08A9F2B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F2B4:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F2D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9F2E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 521u, 0x0886A658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F2E4u) goto L_08A9F2E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F2E4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F2F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9F304u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 525u, 0x0886A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F304u) goto L_08A9F304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F304:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F314:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[31] = (0x08A9F328u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 526u, 0x0886A68Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F328u) goto L_08A9F328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F328:
    aot_gpr_4 = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08A9F35C;
      }
      goto L_08A9F354;
    }
L_08A9F354:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9F3A4;
      }
      goto L_08A9F35C;
    }
L_08A9F35C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_7) < 9 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F388;
      }
      goto L_08A9F37C;
    }
L_08A9F37C:
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9F3A4;
      }
      goto L_08A9F388;
    }
L_08A9F388:
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9F3A4;
      }
      goto L_08A9F3A0;
    }
L_08A9F3A0:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9F3A4;
L_08A9F3A4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F3B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9F3E4u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F3E4u) goto L_08A9F3E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F3E4:
    ctx.gpr[31] = (0x08A9F3ECu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 527u, 0x0886A69Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F3ECu) goto L_08A9F3EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F3EC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A9F408;
      }
      goto L_08A9F3F8;
    }
L_08A9F3F8:
    ctx.gpr[31] = (0x08A9F400u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 636u, 0x08B66A10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F400u) goto L_08A9F400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F400:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9F410;
      }
      goto L_08A9F408;
    }
L_08A9F408:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), aot_gpr_4);
    goto L_08A9F410;
L_08A9F410:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9F420u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F420u) goto L_08A9F420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F420:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F43C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_5 ^ 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F45C;
      }
      goto L_08A9F454;
    }
L_08A9F454:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08A9F4A4;
      }
      goto L_08A9F45C;
    }
L_08A9F45C:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_7) < 9 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F488;
      }
      goto L_08A9F47C;
    }
L_08A9F47C:
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9F4A4;
      }
      goto L_08A9F488;
    }
L_08A9F488:
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9F4A4;
      }
      goto L_08A9F4A0;
    }
L_08A9F4A0:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9F4A4;
L_08A9F4A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F4AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_6 = (0u | 3u);
    ctx.gpr[31] = (0x08A9F4DCu);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F4DCu) goto L_08A9F4DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F4DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x08A9F4FCu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 321u, 0x08809958u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F4FCu) goto L_08A9F4FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F4FC:
    aot_gpr_4 = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F528;
      }
      goto L_08A9F520;
    }
L_08A9F520:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A9F570;
      }
      goto L_08A9F528;
    }
L_08A9F528:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F554;
      }
      goto L_08A9F548;
    }
L_08A9F548:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A9F570;
      }
      goto L_08A9F554;
    }
L_08A9F554:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9F570;
      }
      goto L_08A9F56C;
    }
L_08A9F56C:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9F570;
L_08A9F570:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F58C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    aot_gpr_7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x08A9F5ACu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F5ACu) goto L_08A9F5AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F5AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    ctx.gpr[31] = (0x08A9F5BCu);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 698u, 0x08AD3C0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F5BCu) goto L_08A9F5BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F5BC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F5D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_6 = (0u | 12u);
    ctx.gpr[31] = (0x08A9F600u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F600u) goto L_08A9F600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F600:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(ctx.fpr[14])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[14] = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(ctx.fpr[14])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_8 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr_8 = (0u < aot_gpr_8 ? 1u : 0u);
    aot_gpr_8 = (aot_gpr_8 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[10] = (0u < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[11] = (0u < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[3] = (0u < ctx.gpr[3] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[2], ctx.gpr[3], 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A9F6A0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F6A0u) goto L_08A9F6A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F6A0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
      if (branch_taken) {
          goto L_08A9F710;
      }
      goto L_08A9F6B0;
    }
L_08A9F6B0:
    aot_gpr_5 = (aot_gpr_5 ^ 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F6C4;
      }
      goto L_08A9F6BC;
    }
L_08A9F6BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9F768;
      }
      goto L_08A9F6C4;
    }
L_08A9F6C4:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F6F0;
      }
      goto L_08A9F6E4;
    }
L_08A9F6E4:
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A9F768;
      }
      goto L_08A9F6F0;
    }
L_08A9F6F0:
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9F768;
      }
      goto L_08A9F708;
    }
L_08A9F708:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08A9F768;
      }
      goto L_08A9F710;
    }
L_08A9F710:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F720;
      }
      goto L_08A9F718;
    }
L_08A9F718:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A9F768;
      }
      goto L_08A9F720;
    }
L_08A9F720:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F74C;
      }
      goto L_08A9F740;
    }
L_08A9F740:
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A9F768;
      }
      goto L_08A9F74C;
    }
L_08A9F74C:
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9F768;
      }
      goto L_08A9F764;
    }
L_08A9F764:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A9F768;
L_08A9F768:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F784:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-31));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-481));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
    aot_gpr_6 = (0u | 65535u);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_7 = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_7);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_8 = (0u | 200u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_7 = (0u + static_cast<std::uint32_t>(-1025));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_8));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_7);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(19728));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(38))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
    aot_gpr_7 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_8 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_7);
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_8);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(38))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
    aot_gpr_7 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_8 = (0u + static_cast<std::uint32_t>(-24577));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_7);
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_8);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(38))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
    aot_gpr_7 = (0u + static_cast<std::uint32_t>(-25));
    aot_gpr_8 = (65535u << 16u);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(32767));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_7);
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_8);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(38))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(38))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr_5));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-4712)));
    aot_gpr_5 = (16512u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F8BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A9F8F4;
      }
      goto L_08A9F8D8;
    }
L_08A9F8D8:
    ctx.gpr[31] = (0x08A9F8E0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A9FEDC;
L_08A9F8E0:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A9F8F4;
      }
      goto L_08A9F8EC;
    }
L_08A9F8EC:
    ctx.gpr[31] = (0x08A9F8F4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F8F4u) goto L_08A9F8F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F8F4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F908:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(38))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 65535u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(38))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9F93Cu);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_08A9FEDC;
L_08A9F93C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F948:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9F964u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 131u, 0x0890482Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F964u) goto L_08A9F964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F964:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[31] = (0x08A9F9B8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 165u, 0x08904AA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F9B8u) goto L_08A9F9B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F9B8:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.gpr[31] = (0x08A9F9C4u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0138_entry, 138u, 577u, 0x08A2F94Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F9C4u) goto L_08A9F9C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F9C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x08A9F9E4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_7);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9F9E4u) goto L_08A9F9E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9F9E4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9F9F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9FA14u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 131u, 0x0890482Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FA14u) goto L_08A9FA14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FA14:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A9FA20u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 165u, 0x08904AA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FA20u) goto L_08A9FA20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FA20:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A9FA2Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 53u, 0x08B246F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FA2Cu) goto L_08A9FA2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FA2C:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A9FA40;
      }
      goto L_08A9FA38;
    }
L_08A9FA38:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[16];
      if (branch_taken) {
          goto L_08A9FA44;
      }
      goto L_08A9FA40;
    }
L_08A9FA40:
    aot_gpr_4 = (0u | 1u);
    goto L_08A9FA44;
L_08A9FA44:
    ctx.gpr[2] = (aot_gpr_4 & 255u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FA5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9FA78u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 131u, 0x0890482Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FA78u) goto L_08A9FA78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FA78:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A9FA84u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 165u, 0x08904AA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FA84u) goto L_08A9FA84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FA84:
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FAA0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9FAB4u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 131u, 0x0890482Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FAB4u) goto L_08A9FAB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FAB4:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A9FAC0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 165u, 0x08904AA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FAC0u) goto L_08A9FAC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FAC0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FAD0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9FAECu);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 131u, 0x0890482Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FAECu) goto L_08A9FAEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FAEC:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[31] = (0x08A9FAF8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 165u, 0x08904AA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FAF8u) goto L_08A9FAF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FAF8:
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FB14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9FB28u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 131u, 0x0890482Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FB28u) goto L_08A9FB28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FB28:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[31] = (0x08A9FB7Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 165u, 0x08904AA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FB7Cu) goto L_08A9FB7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FB7C:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.gpr[31] = (0x08A9FB88u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0138_entry, 138u, 577u, 0x08A2F94Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FB88u) goto L_08A9FB88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FB88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    ctx.gpr[31] = (0x08A9FBA4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FBA4u) goto L_08A9FBA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FBA4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_5 = (aot_gpr_5 & 2u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A9FC00;
      }
      goto L_08A9FBD0;
    }
L_08A9FBD0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    aot_gpr_5 = (aot_gpr_5 & 480u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A9FBF8;
      }
      goto L_08A9FBE8;
    }
L_08A9FBE8:
    ctx.gpr[31] = (0x08A9FBF0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A9F9F8;
L_08A9FBF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08A9FC08;
      }
      goto L_08A9FBF8;
    }
L_08A9FBF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9FC0C;
      }
      goto L_08A9FC00;
    }
L_08A9FC00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9FC0C;
      }
      goto L_08A9FC08;
    }
L_08A9FC08:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A9FC0C;
L_08A9FC0C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FC1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9FC30u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 131u, 0x0890482Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FC30u) goto L_08A9FC30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FC30:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A9FC3Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 165u, 0x08904AA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FC3Cu) goto L_08A9FC3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FC3C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9FC48u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_08A9FC58;
L_08A9FC48:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FC58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    jump_target = aot_gpr_7;
    ctx.gpr[31] = (0x08A9FC80u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FC80u) goto L_08A9FC80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FC80:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(27)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (16000u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FCAC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9FCC0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 17u, 0x08AA0134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FCC0u) goto L_08A9FCC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FCC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08A9FCD0;
      }
      goto L_08A9FCC8;
    }
L_08A9FCC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9FCD4;
      }
      goto L_08A9FCD0;
    }
L_08A9FCD0:
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_08A9FCD4;
L_08A9FCD4:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FCE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9FCF4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 17u, 0x08AA0134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FCF4u) goto L_08A9FCF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FCF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08A9FD04;
      }
      goto L_08A9FCFC;
    }
L_08A9FCFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9FD08;
      }
      goto L_08A9FD04;
    }
L_08A9FD04:
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1)));
    goto L_08A9FD08;
L_08A9FD08:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FD14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9FD28u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 131u, 0x0890482Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FD28u) goto L_08A9FD28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FD28:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[31] = (0x08A9FD34u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 165u, 0x08904AA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FD34u) goto L_08A9FD34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FD34:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_6 = (0u | 192u);
    aot_gpr_5 = (aot_gpr_5 & 192u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08A9FD68;
      }
      goto L_08A9FD4C;
    }
L_08A9FD4C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A9FD70;
      }
      goto L_08A9FD60;
    }
L_08A9FD60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9FD70;
      }
      goto L_08A9FD68;
    }
L_08A9FD68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9FD70;
      }
      goto L_08A9FD70;
    }
L_08A9FD70:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FD80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9FD9Cu);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 131u, 0x0890482Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FD9Cu) goto L_08A9FD9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FD9C:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[31] = (0x08A9FDA8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 165u, 0x08904AA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FDA8u) goto L_08A9FDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FDA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    jump_target = aot_gpr_7;
    ctx.gpr[31] = (0x08A9FDC4u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FDC4u) goto L_08A9FDC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FDC4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FDD8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(39))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[18];
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A9FE58;
      }
      goto L_08A9FE00;
    }
L_08A9FE00:
    ctx.gpr[31] = (0x08A9FE08u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 736u, 0x0887347Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FE08u) goto L_08A9FE08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FE08:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(39))))));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[18];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A9FE38;
      }
      goto L_08A9FE20;
    }
L_08A9FE20:
    aot_gpr_4 = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_08A9FE38;
L_08A9FE38:
    ctx.gpr[31] = (0x08A9FE40u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 384u, 0x0881A06Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FE40u) goto L_08A9FE40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FE40:
    ctx.gpr[31] = (0x08A9FE48u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 364u, 0x08819EE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FE48u) goto L_08A9FE48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FE48:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(39))))));
    ctx.gpr[31] = (0x08A9FE54u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 739u, 0x088734BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FE54u) goto L_08A9FE54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FE54:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08A9FE58;
L_08A9FE58:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FE74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(32))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A9FECC;
      }
      goto L_08A9FE90;
    }
L_08A9FE90:
    ctx.gpr[31] = (0x08A9FE98u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 355u, 0x08A01434u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FE98u) goto L_08A9FE98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FE98:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(32))))));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 9u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[2] + aot_gpr_5);
    ctx.gpr[31] = (0x08A9FEC4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 358u, 0x08A01474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FEC4u) goto L_08A9FEC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FEC4:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08A9FECC;
L_08A9FECC:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FEDC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A9FEF4u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    goto L_08A9FDD8;
L_08A9FEF4:
    ctx.gpr[31] = (0x08A9FEFCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A9FE74;
L_08A9FEFC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 65535u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
        goto L_08A9FF64;
    }
    goto L_08A9FF0C;
L_08A9FF0C:
    ctx.gpr[31] = (0x08A9FF14u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 131u, 0x0890482Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FF14u) goto L_08A9FF14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FF14:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A9FF20u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 165u, 0x08904AA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FF20u) goto L_08A9FF20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FF20:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A9FF24;
L_08A9FF24:
    ctx.gpr[31] = (0x08A9FF2Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 56u, 0x08B24720u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FF2Cu) goto L_08A9FF2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FF2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08A9FF44;
      }
      goto L_08A9FF34;
    }
L_08A9FF34:
    ctx.gpr[31] = (0x08A9FF3Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 56u, 0x08B24720u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FF3Cu) goto L_08A9FF3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FF3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A9FF24;
      }
      goto L_08A9FF44;
    }
L_08A9FF44:
    ctx.gpr[31] = (0x08A9FF4Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 131u, 0x0890482Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FF4Cu) goto L_08A9FF4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FF4C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A9FF58u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 134u, 0x0890486Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FF58u) goto L_08A9FF58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FF58:
    aot_gpr_4 = (0u | 65535u);
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    goto L_08A9FF64;
L_08A9FF64:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-481));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-31));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A9FF94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9FFC4u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 56u, 0x08B24720u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FFC4u) goto L_08A9FFC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FFC4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 5u, 0x08AA0024u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A9FFD0;
    }
L_08A9FFD0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[19] = (0u | 128u);
    aot_gpr_5 = (aot_gpr_5 & 192u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[19];
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 4u, 0x08AA001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A9FFE4;
    }
L_08A9FFE4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[31] = (0x08A9FFF0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 53u, 0x08B246F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A9FFF0u) goto L_08A9FFF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A9FFF0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 3u, 0x08AA0014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A9FFFC;
    }
L_08A9FFFC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    ctx.pc = 0x08AA0000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0166(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0166_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_166(Runtime &runtime) {
    runtime.register_generated_unit(166u, 0x08A9C000u, 16384u, &recomp_unit_0166, &recomp_unit_0166_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08A9C000u, &recomp_unit_0166, "recomp_unit_0166",
                                          kEntryMasks_recomp_unit_0166, 64u);
}
} // namespace psprecomp
