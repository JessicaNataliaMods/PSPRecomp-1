#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0172[64] = {
    0x04800050AD552289ull, 0x929050C0046010A9ull, 0x122802C028948B54ull, 0x02A0800080860C24ull,
    0x0C00124924B428A0ull, 0x885444444D0A2821ull, 0x454200040030C000ull, 0x00200400A0488011ull,
    0x0080100200400801ull, 0x0200400801002004ull, 0x0050A92004008010ull, 0x1408104A00A00401ull,
    0x850108000844A851ull, 0x8A0000101002CA10ull, 0x01140280A0082A40ull, 0x26A0824400000015ull,
    0xA2A8802122210012ull, 0x95554AA95480A110ull, 0xAAAA954AAA2802AAull, 0x821A5A4B4A8AAAAAull,
    0x5551284205214428ull, 0xAAAAAAAA80888084ull, 0x1012909A69A69A12ull, 0x5A29A25514AA8A89ull,
    0xA248A24514945125ull, 0x4922929296969248ull, 0x15752105A25A4A8Aull, 0x1001491292A48085ull,
    0x102215A262525449ull, 0x0400040500204081ull, 0x69A69A5548120002ull, 0x480812AA92401009ull,
    0x8A4145149222152Aull, 0x084400206A952214ull, 0x4002006AA94A2A49ull, 0xA0A9555108000108ull,
    0x51556A2890A92A54ull, 0x4A550A2024A82008ull, 0x0000002400208351ull, 0x2A2A2A2A00000000ull,
    0x42A2A004A8A8A8A8ull, 0x0D01A03454540A85ull, 0x6800000000000010ull, 0x5A5A5A4A2691A469ull,
    0xD2A92015A41A4002ull, 0x4AD2D2B4B4AA4B4Aull, 0x50000004001A5A5Aull, 0x4500444400448912ull,
    0x4A95008010E92054ull, 0x048749245A4921D2ull, 0x922D258B4951692Aull, 0x54004140020548B4ull,
    0x9488A95550401000ull, 0x24A5114A22492120ull, 0x142492A408248C15ull, 0x4952DA2014568805ull,
    0x81AAAA9122000805ull, 0x22222002090A1000ull, 0x0A14050108884002ull, 0x50028012169250A9ull,
    0x142801400942A428ull, 0x50A90A140A04A152ull, 0x00002854850A0502ull, 0x2100088888800A00ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0172[64] = {
    1u, 19u, 36u, 55u, 67u, 84u, 103u, 113u, 122u, 128u, 134u, 144u, 155u, 169u, 180u, 192u,
    204u, 219u, 242u, 268u, 295u, 314u, 336u, 359u, 385u, 407u, 431u, 456u, 473u, 494u, 502u, 523u,
    539u, 560u, 576u, 595u, 611u, 636u, 653u, 662u, 674u, 694u, 714u, 718u, 746u, 766u, 796u, 810u,
    824u, 842u, 865u, 892u, 907u, 924u, 943u, 962u, 984u, 1002u, 1013u, 1025u, 1043u, 1058u, 1077u, 1090u,
};
void recomp_unit_0172_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,29,16,2 fprs=12,13,20,14 gpr_occ=3867 fpr_occ=393 gpr_total=5875 fpr_total=394
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.gpr[16] = aot_gpr_16; ctx.gpr[2] = aot_gpr_2; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_2 = ctx.gpr[2]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AB4000u;
        entry_id = 0u;
        if (entry_delta < 16376u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0172[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0172[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08AB4000;
    case 2u: goto L_08AB400C;
    case 3u: goto L_08AB401C;
    case 4u: goto L_08AB4024;
    case 5u: goto L_08AB4034;
    case 6u: goto L_08AB4040;
    case 7u: goto L_08AB4048;
    case 8u: goto L_08AB4050;
    case 9u: goto L_08AB4058;
    case 10u: goto L_08AB4060;
    case 11u: goto L_08AB4068;
    case 12u: goto L_08AB406C;
    case 13u: goto L_08AB4074;
    case 14u: goto L_08AB407C;
    case 15u: goto L_08AB4090;
    case 16u: goto L_08AB4098;
    case 17u: goto L_08AB40DC;
    case 18u: goto L_08AB40E8;
    case 19u: goto L_08AB4100;
    case 20u: goto L_08AB410C;
    case 21u: goto L_08AB4114;
    case 22u: goto L_08AB411C;
    case 23u: goto L_08AB4130;
    case 24u: goto L_08AB4154;
    case 25u: goto L_08AB4158;
    case 26u: goto L_08AB4168;
    case 27u: goto L_08AB4198;
    case 28u: goto L_08AB419C;
    case 29u: goto L_08AB41B0;
    case 30u: goto L_08AB41B8;
    case 31u: goto L_08AB41D0;
    case 32u: goto L_08AB41DC;
    case 33u: goto L_08AB41E4;
    case 34u: goto L_08AB41F0;
    case 35u: goto L_08AB41FC;
    case 36u: goto L_08AB4208;
    case 37u: goto L_08AB4210;
    case 38u: goto L_08AB4218;
    case 39u: goto L_08AB4220;
    case 40u: goto L_08AB4224;
    case 41u: goto L_08AB422C;
    case 42u: goto L_08AB423C;
    case 43u: goto L_08AB4248;
    case 44u: goto L_08AB4250;
    case 45u: goto L_08AB425C;
    case 46u: goto L_08AB426C;
    case 47u: goto L_08AB4274;
    case 48u: goto L_08AB4298;
    case 49u: goto L_08AB429C;
    case 50u: goto L_08AB42A4;
    case 51u: goto L_08AB42CC;
    case 52u: goto L_08AB42D4;
    case 53u: goto L_08AB42E4;
    case 54u: goto L_08AB42F0;
    case 55u: goto L_08AB4308;
    case 56u: goto L_08AB4314;
    case 57u: goto L_08AB4328;
    case 58u: goto L_08AB432C;
    case 59u: goto L_08AB4344;
    case 60u: goto L_08AB4348;
    case 61u: goto L_08AB435C;
    case 62u: goto L_08AB437C;
    case 63u: goto L_08AB43BC;
    case 64u: goto L_08AB43D4;
    case 65u: goto L_08AB43DC;
    case 66u: goto L_08AB43E4;
    case 67u: goto L_08AB4414;
    case 68u: goto L_08AB441C;
    case 69u: goto L_08AB442C;
    case 70u: goto L_08AB4434;
    case 71u: goto L_08AB4448;
    case 72u: goto L_08AB4450;
    case 73u: goto L_08AB4454;
    case 74u: goto L_08AB445C;
    case 75u: goto L_08AB4468;
    case 76u: goto L_08AB4474;
    case 77u: goto L_08AB4480;
    case 78u: goto L_08AB448C;
    case 79u: goto L_08AB4498;
    case 80u: goto L_08AB44A4;
    case 81u: goto L_08AB44B0;
    case 82u: goto L_08AB44E8;
    case 83u: goto L_08AB44EC;
    case 84u: goto L_08AB4500;
    case 85u: goto L_08AB4514;
    case 86u: goto L_08AB452C;
    case 87u: goto L_08AB4534;
    case 88u: goto L_08AB4544;
    case 89u: goto L_08AB454C;
    case 90u: goto L_08AB4560;
    case 91u: goto L_08AB4568;
    case 92u: goto L_08AB456C;
    case 93u: goto L_08AB4578;
    case 94u: goto L_08AB4588;
    case 95u: goto L_08AB4598;
    case 96u: goto L_08AB45A8;
    case 97u: goto L_08AB45B8;
    case 98u: goto L_08AB45C8;
    case 99u: goto L_08AB45D0;
    case 100u: goto L_08AB45D8;
    case 101u: goto L_08AB45EC;
    case 102u: goto L_08AB45FC;
    case 103u: goto L_08AB4638;
    case 104u: goto L_08AB463C;
    case 105u: goto L_08AB4650;
    case 106u: goto L_08AB4654;
    case 107u: goto L_08AB4688;
    case 108u: goto L_08AB46C4;
    case 109u: goto L_08AB46D8;
    case 110u: goto L_08AB46E0;
    case 111u: goto L_08AB46E8;
    case 112u: goto L_08AB46F8;
    case 113u: goto L_08AB4700;
    case 114u: goto L_08AB4710;
    case 115u: goto L_08AB473C;
    case 116u: goto L_08AB474C;
    case 117u: goto L_08AB4758;
    case 118u: goto L_08AB4774;
    case 119u: goto L_08AB477C;
    case 120u: goto L_08AB47A8;
    case 121u: goto L_08AB47D4;
    case 122u: goto L_08AB4800;
    case 123u: goto L_08AB482C;
    case 124u: goto L_08AB4858;
    case 125u: goto L_08AB4884;
    case 126u: goto L_08AB48B0;
    case 127u: goto L_08AB48DC;
    case 128u: goto L_08AB4908;
    case 129u: goto L_08AB4934;
    case 130u: goto L_08AB4960;
    case 131u: goto L_08AB498C;
    case 132u: goto L_08AB49B8;
    case 133u: goto L_08AB49E4;
    case 134u: goto L_08AB4A10;
    case 135u: goto L_08AB4A3C;
    case 136u: goto L_08AB4A68;
    case 137u: goto L_08AB4A94;
    case 138u: goto L_08AB4AA0;
    case 139u: goto L_08AB4AAC;
    case 140u: goto L_08AB4AB4;
    case 141u: goto L_08AB4ABC;
    case 142u: goto L_08AB4AD0;
    case 143u: goto L_08AB4AD8;
    case 144u: goto L_08AB4B00;
    case 145u: goto L_08AB4B28;
    case 146u: goto L_08AB4B54;
    case 147u: goto L_08AB4B5C;
    case 148u: goto L_08AB4B84;
    case 149u: goto L_08AB4B8C;
    case 150u: goto L_08AB4B98;
    case 151u: goto L_08AB4BB0;
    case 152u: goto L_08AB4BCC;
    case 153u: goto L_08AB4BE8;
    case 154u: goto L_08AB4BF0;
    case 155u: goto L_08AB4C00;
    case 156u: goto L_08AB4C10;
    case 157u: goto L_08AB4C18;
    case 158u: goto L_08AB4C2C;
    case 159u: goto L_08AB4C34;
    case 160u: goto L_08AB4C3C;
    case 161u: goto L_08AB4C48;
    case 162u: goto L_08AB4C58;
    case 163u: goto L_08AB4C6C;
    case 164u: goto L_08AB4CAC;
    case 165u: goto L_08AB4CC0;
    case 166u: goto L_08AB4CE0;
    case 167u: goto L_08AB4CE8;
    case 168u: goto L_08AB4CFC;
    case 169u: goto L_08AB4D10;
    case 170u: goto L_08AB4D24;
    case 171u: goto L_08AB4D2C;
    case 172u: goto L_08AB4D38;
    case 173u: goto L_08AB4D3C;
    case 174u: goto L_08AB4D44;
    case 175u: goto L_08AB4D70;
    case 176u: goto L_08AB4D90;
    case 177u: goto L_08AB4DE4;
    case 178u: goto L_08AB4DEC;
    case 179u: goto L_08AB4DFC;
    case 180u: goto L_08AB4E18;
    case 181u: goto L_08AB4E24;
    case 182u: goto L_08AB4E2C;
    case 183u: goto L_08AB4E34;
    case 184u: goto L_08AB4E4C;
    case 185u: goto L_08AB4E74;
    case 186u: goto L_08AB4E7C;
    case 187u: goto L_08AB4E9C;
    case 188u: goto L_08AB4EA4;
    case 189u: goto L_08AB4EC8;
    case 190u: goto L_08AB4ED0;
    case 191u: goto L_08AB4EE0;
    case 192u: goto L_08AB4F00;
    case 193u: goto L_08AB4F08;
    case 194u: goto L_08AB4F10;
    case 195u: goto L_08AB4F88;
    case 196u: goto L_08AB4F98;
    case 197u: goto L_08AB4FA4;
    case 198u: goto L_08AB4FBC;
    case 199u: goto L_08AB4FD4;
    case 200u: goto L_08AB4FDC;
    case 201u: goto L_08AB4FE4;
    case 202u: goto L_08AB4FE8;
    case 203u: goto L_08AB4FF4;
    case 204u: goto L_08AB5004;
    case 205u: goto L_08AB5010;
    case 206u: goto L_08AB5040;
    case 207u: goto L_08AB5054;
    case 208u: goto L_08AB5064;
    case 209u: goto L_08AB5074;
    case 210u: goto L_08AB5080;
    case 211u: goto L_08AB5094;
    case 212u: goto L_08AB50BC;
    case 213u: goto L_08AB50CC;
    case 214u: goto L_08AB50D4;
    case 215u: goto L_08AB50DC;
    case 216u: goto L_08AB50E4;
    case 217u: goto L_08AB50F4;
    case 218u: goto L_08AB50FC;
    case 219u: goto L_08AB5110;
    case 220u: goto L_08AB5120;
    case 221u: goto L_08AB5134;
    case 222u: goto L_08AB513C;
    case 223u: goto L_08AB515C;
    case 224u: goto L_08AB5168;
    case 225u: goto L_08AB5170;
    case 226u: goto L_08AB5178;
    case 227u: goto L_08AB5180;
    case 228u: goto L_08AB518C;
    case 229u: goto L_08AB5194;
    case 230u: goto L_08AB519C;
    case 231u: goto L_08AB51A4;
    case 232u: goto L_08AB51AC;
    case 233u: goto L_08AB51B8;
    case 234u: goto L_08AB51C0;
    case 235u: goto L_08AB51C8;
    case 236u: goto L_08AB51D0;
    case 237u: goto L_08AB51D8;
    case 238u: goto L_08AB51E0;
    case 239u: goto L_08AB51E8;
    case 240u: goto L_08AB51F0;
    case 241u: goto L_08AB51FC;
    case 242u: goto L_08AB5204;
    case 243u: goto L_08AB520C;
    case 244u: goto L_08AB5214;
    case 245u: goto L_08AB521C;
    case 246u: goto L_08AB5224;
    case 247u: goto L_08AB524C;
    case 248u: goto L_08AB5254;
    case 249u: goto L_08AB5264;
    case 250u: goto L_08AB526C;
    case 251u: goto L_08AB5274;
    case 252u: goto L_08AB527C;
    case 253u: goto L_08AB5284;
    case 254u: goto L_08AB528C;
    case 255u: goto L_08AB5298;
    case 256u: goto L_08AB52A0;
    case 257u: goto L_08AB52A8;
    case 258u: goto L_08AB52B0;
    case 259u: goto L_08AB52BC;
    case 260u: goto L_08AB52C4;
    case 261u: goto L_08AB52CC;
    case 262u: goto L_08AB52D4;
    case 263u: goto L_08AB52DC;
    case 264u: goto L_08AB52E4;
    case 265u: goto L_08AB52EC;
    case 266u: goto L_08AB52F4;
    case 267u: goto L_08AB52FC;
    case 268u: goto L_08AB5304;
    case 269u: goto L_08AB530C;
    case 270u: goto L_08AB5314;
    case 271u: goto L_08AB531C;
    case 272u: goto L_08AB5324;
    case 273u: goto L_08AB532C;
    case 274u: goto L_08AB5334;
    case 275u: goto L_08AB533C;
    case 276u: goto L_08AB5344;
    case 277u: goto L_08AB534C;
    case 278u: goto L_08AB535C;
    case 279u: goto L_08AB5364;
    case 280u: goto L_08AB536C;
    case 281u: goto L_08AB5378;
    case 282u: goto L_08AB5380;
    case 283u: goto L_08AB5384;
    case 284u: goto L_08AB538C;
    case 285u: goto L_08AB5398;
    case 286u: goto L_08AB53A4;
    case 287u: goto L_08AB53AC;
    case 288u: goto L_08AB53B0;
    case 289u: goto L_08AB53B8;
    case 290u: goto L_08AB53C4;
    case 291u: goto L_08AB53CC;
    case 292u: goto L_08AB53D0;
    case 293u: goto L_08AB53E4;
    case 294u: goto L_08AB53FC;
    case 295u: goto L_08AB540C;
    case 296u: goto L_08AB5414;
    case 297u: goto L_08AB5428;
    case 298u: goto L_08AB5438;
    case 299u: goto L_08AB5440;
    case 300u: goto L_08AB5454;
    case 301u: goto L_08AB5460;
    case 302u: goto L_08AB5468;
    case 303u: goto L_08AB5484;
    case 304u: goto L_08AB5498;
    case 305u: goto L_08AB54AC;
    case 306u: goto L_08AB54B4;
    case 307u: goto L_08AB54C0;
    case 308u: goto L_08AB54D0;
    case 309u: goto L_08AB54D8;
    case 310u: goto L_08AB54E0;
    case 311u: goto L_08AB54E8;
    case 312u: goto L_08AB54F0;
    case 313u: goto L_08AB54F8;
    case 314u: goto L_08AB5508;
    case 315u: goto L_08AB551C;
    case 316u: goto L_08AB553C;
    case 317u: goto L_08AB554C;
    case 318u: goto L_08AB555C;
    case 319u: goto L_08AB557C;
    case 320u: goto L_08AB5584;
    case 321u: goto L_08AB558C;
    case 322u: goto L_08AB5594;
    case 323u: goto L_08AB559C;
    case 324u: goto L_08AB55A4;
    case 325u: goto L_08AB55AC;
    case 326u: goto L_08AB55B4;
    case 327u: goto L_08AB55BC;
    case 328u: goto L_08AB55C4;
    case 329u: goto L_08AB55CC;
    case 330u: goto L_08AB55D4;
    case 331u: goto L_08AB55DC;
    case 332u: goto L_08AB55E4;
    case 333u: goto L_08AB55EC;
    case 334u: goto L_08AB55F4;
    case 335u: goto L_08AB55FC;
    case 336u: goto L_08AB5604;
    case 337u: goto L_08AB5610;
    case 338u: goto L_08AB5624;
    case 339u: goto L_08AB562C;
    case 340u: goto L_08AB5630;
    case 341u: goto L_08AB563C;
    case 342u: goto L_08AB5644;
    case 343u: goto L_08AB5648;
    case 344u: goto L_08AB5654;
    case 345u: goto L_08AB565C;
    case 346u: goto L_08AB5660;
    case 347u: goto L_08AB566C;
    case 348u: goto L_08AB5674;
    case 349u: goto L_08AB5678;
    case 350u: goto L_08AB5684;
    case 351u: goto L_08AB568C;
    case 352u: goto L_08AB5690;
    case 353u: goto L_08AB569C;
    case 354u: goto L_08AB56B0;
    case 355u: goto L_08AB56BC;
    case 356u: goto L_08AB56C4;
    case 357u: goto L_08AB56D0;
    case 358u: goto L_08AB56F0;
    case 359u: goto L_08AB5700;
    case 360u: goto L_08AB570C;
    case 361u: goto L_08AB571C;
    case 362u: goto L_08AB5724;
    case 363u: goto L_08AB572C;
    case 364u: goto L_08AB573C;
    case 365u: goto L_08AB5744;
    case 366u: goto L_08AB574C;
    case 367u: goto L_08AB5754;
    case 368u: goto L_08AB575C;
    case 369u: goto L_08AB5768;
    case 370u: goto L_08AB5770;
    case 371u: goto L_08AB5780;
    case 372u: goto L_08AB5788;
    case 373u: goto L_08AB5790;
    case 374u: goto L_08AB5798;
    case 375u: goto L_08AB57A4;
    case 376u: goto L_08AB57B4;
    case 377u: goto L_08AB57BC;
    case 378u: goto L_08AB57C0;
    case 379u: goto L_08AB57CC;
    case 380u: goto L_08AB57D4;
    case 381u: goto L_08AB57E4;
    case 382u: goto L_08AB57EC;
    case 383u: goto L_08AB57F0;
    case 384u: goto L_08AB57F8;
    case 385u: goto L_08AB5800;
    case 386u: goto L_08AB5808;
    case 387u: goto L_08AB5814;
    case 388u: goto L_08AB5820;
    case 389u: goto L_08AB5830;
    case 390u: goto L_08AB5838;
    case 391u: goto L_08AB5848;
    case 392u: goto L_08AB5850;
    case 393u: goto L_08AB585C;
    case 394u: goto L_08AB5868;
    case 395u: goto L_08AB5870;
    case 396u: goto L_08AB5880;
    case 397u: goto L_08AB5888;
    case 398u: goto L_08AB5898;
    case 399u: goto L_08AB58A4;
    case 400u: goto L_08AB58B4;
    case 401u: goto L_08AB58BC;
    case 402u: goto L_08AB58CC;
    case 403u: goto L_08AB58D8;
    case 404u: goto L_08AB58E4;
    case 405u: goto L_08AB58F4;
    case 406u: goto L_08AB58FC;
    case 407u: goto L_08AB590C;
    case 408u: goto L_08AB5918;
    case 409u: goto L_08AB5924;
    case 410u: goto L_08AB5930;
    case 411u: goto L_08AB593C;
    case 412u: goto L_08AB5944;
    case 413u: goto L_08AB5948;
    case 414u: goto L_08AB5950;
    case 415u: goto L_08AB595C;
    case 416u: goto L_08AB5964;
    case 417u: goto L_08AB5968;
    case 418u: goto L_08AB5970;
    case 419u: goto L_08AB597C;
    case 420u: goto L_08AB5984;
    case 421u: goto L_08AB5990;
    case 422u: goto L_08AB599C;
    case 423u: goto L_08AB59A4;
    case 424u: goto L_08AB59B0;
    case 425u: goto L_08AB59BC;
    case 426u: goto L_08AB59C4;
    case 427u: goto L_08AB59D4;
    case 428u: goto L_08AB59E0;
    case 429u: goto L_08AB59EC;
    case 430u: goto L_08AB59F8;
    case 431u: goto L_08AB5A04;
    case 432u: goto L_08AB5A0C;
    case 433u: goto L_08AB5A1C;
    case 434u: goto L_08AB5A24;
    case 435u: goto L_08AB5A2C;
    case 436u: goto L_08AB5A38;
    case 437u: goto L_08AB5A44;
    case 438u: goto L_08AB5A4C;
    case 439u: goto L_08AB5A50;
    case 440u: goto L_08AB5A58;
    case 441u: goto L_08AB5A64;
    case 442u: goto L_08AB5A74;
    case 443u: goto L_08AB5A7C;
    case 444u: goto L_08AB5A80;
    case 445u: goto L_08AB5A88;
    case 446u: goto L_08AB5AA0;
    case 447u: goto L_08AB5AB4;
    case 448u: goto L_08AB5AC0;
    case 449u: goto L_08AB5AC8;
    case 450u: goto L_08AB5AD0;
    case 451u: goto L_08AB5AD4;
    case 452u: goto L_08AB5AD8;
    case 453u: goto L_08AB5AE0;
    case 454u: goto L_08AB5AE8;
    case 455u: goto L_08AB5AF0;
    case 456u: goto L_08AB5B00;
    case 457u: goto L_08AB5B08;
    case 458u: goto L_08AB5B1C;
    case 459u: goto L_08AB5B3C;
    case 460u: goto L_08AB5B48;
    case 461u: goto L_08AB5B54;
    case 462u: goto L_08AB5B5C;
    case 463u: goto L_08AB5B64;
    case 464u: goto L_08AB5B70;
    case 465u: goto L_08AB5B7C;
    case 466u: goto L_08AB5B84;
    case 467u: goto L_08AB5B90;
    case 468u: goto L_08AB5BA0;
    case 469u: goto L_08AB5BAC;
    case 470u: goto L_08AB5BB8;
    case 471u: goto L_08AB5BC0;
    case 472u: goto L_08AB5BF0;
    case 473u: goto L_08AB5C00;
    case 474u: goto L_08AB5C0C;
    case 475u: goto L_08AB5C18;
    case 476u: goto L_08AB5C28;
    case 477u: goto L_08AB5C30;
    case 478u: goto L_08AB5C38;
    case 479u: goto L_08AB5C44;
    case 480u: goto L_08AB5C50;
    case 481u: goto L_08AB5C58;
    case 482u: goto L_08AB5C64;
    case 483u: goto L_08AB5C74;
    case 484u: goto L_08AB5C78;
    case 485u: goto L_08AB5C84;
    case 486u: goto L_08AB5C94;
    case 487u: goto L_08AB5C9C;
    case 488u: goto L_08AB5CA0;
    case 489u: goto L_08AB5CA8;
    case 490u: goto L_08AB5CB0;
    case 491u: goto L_08AB5CC4;
    case 492u: goto L_08AB5CD4;
    case 493u: goto L_08AB5CF0;
    case 494u: goto L_08AB5D00;
    case 495u: goto L_08AB5D1C;
    case 496u: goto L_08AB5D38;
    case 497u: goto L_08AB5D54;
    case 498u: goto L_08AB5D80;
    case 499u: goto L_08AB5D88;
    case 500u: goto L_08AB5DA8;
    case 501u: goto L_08AB5DE8;
    case 502u: goto L_08AB5E04;
    case 503u: goto L_08AB5E44;
    case 504u: goto L_08AB5E50;
    case 505u: goto L_08AB5E6C;
    case 506u: goto L_08AB5E78;
    case 507u: goto L_08AB5E80;
    case 508u: goto L_08AB5E88;
    case 509u: goto L_08AB5E90;
    case 510u: goto L_08AB5E98;
    case 511u: goto L_08AB5EA4;
    case 512u: goto L_08AB5EAC;
    case 513u: goto L_08AB5EB0;
    case 514u: goto L_08AB5EBC;
    case 515u: goto L_08AB5EC4;
    case 516u: goto L_08AB5EC8;
    case 517u: goto L_08AB5ED4;
    case 518u: goto L_08AB5EDC;
    case 519u: goto L_08AB5EE0;
    case 520u: goto L_08AB5EEC;
    case 521u: goto L_08AB5EF4;
    case 522u: goto L_08AB5EF8;
    case 523u: goto L_08AB5F00;
    case 524u: goto L_08AB5F0C;
    case 525u: goto L_08AB5F30;
    case 526u: goto L_08AB5F58;
    case 527u: goto L_08AB5F64;
    case 528u: goto L_08AB5F70;
    case 529u: goto L_08AB5F7C;
    case 530u: goto L_08AB5F84;
    case 531u: goto L_08AB5F8C;
    case 532u: goto L_08AB5F94;
    case 533u: goto L_08AB5F9C;
    case 534u: goto L_08AB5FA4;
    case 535u: goto L_08AB5FB0;
    case 536u: goto L_08AB5FCC;
    case 537u: goto L_08AB5FEC;
    case 538u: goto L_08AB5FF8;
    case 539u: goto L_08AB6004;
    case 540u: goto L_08AB600C;
    case 541u: goto L_08AB6014;
    case 542u: goto L_08AB6020;
    case 543u: goto L_08AB6028;
    case 544u: goto L_08AB6030;
    case 545u: goto L_08AB6044;
    case 546u: goto L_08AB6054;
    case 547u: goto L_08AB6064;
    case 548u: goto L_08AB6070;
    case 549u: goto L_08AB607C;
    case 550u: goto L_08AB6088;
    case 551u: goto L_08AB6090;
    case 552u: goto L_08AB60A0;
    case 553u: goto L_08AB60A8;
    case 554u: goto L_08AB60B8;
    case 555u: goto L_08AB60C0;
    case 556u: goto L_08AB60D8;
    case 557u: goto L_08AB60E4;
    case 558u: goto L_08AB60EC;
    case 559u: goto L_08AB60FC;
    case 560u: goto L_08AB6108;
    case 561u: goto L_08AB6110;
    case 562u: goto L_08AB6124;
    case 563u: goto L_08AB6134;
    case 564u: goto L_08AB6140;
    case 565u: goto L_08AB6148;
    case 566u: goto L_08AB6150;
    case 567u: goto L_08AB615C;
    case 568u: goto L_08AB6164;
    case 569u: goto L_08AB616C;
    case 570u: goto L_08AB6174;
    case 571u: goto L_08AB6178;
    case 572u: goto L_08AB6194;
    case 573u: goto L_08AB61C8;
    case 574u: goto L_08AB61D8;
    case 575u: goto L_08AB61EC;
    case 576u: goto L_08AB6200;
    case 577u: goto L_08AB620C;
    case 578u: goto L_08AB6218;
    case 579u: goto L_08AB6224;
    case 580u: goto L_08AB622C;
    case 581u: goto L_08AB6234;
    case 582u: goto L_08AB6244;
    case 583u: goto L_08AB624C;
    case 584u: goto L_08AB6258;
    case 585u: goto L_08AB6260;
    case 586u: goto L_08AB626C;
    case 587u: goto L_08AB6274;
    case 588u: goto L_08AB627C;
    case 589u: goto L_08AB6284;
    case 590u: goto L_08AB628C;
    case 591u: goto L_08AB6294;
    case 592u: goto L_08AB6298;
    case 593u: goto L_08AB62C4;
    case 594u: goto L_08AB62F8;
    case 595u: goto L_08AB630C;
    case 596u: goto L_08AB6320;
    case 597u: goto L_08AB636C;
    case 598u: goto L_08AB6380;
    case 599u: goto L_08AB6390;
    case 600u: goto L_08AB6398;
    case 601u: goto L_08AB63A0;
    case 602u: goto L_08AB63A8;
    case 603u: goto L_08AB63B0;
    case 604u: goto L_08AB63B8;
    case 605u: goto L_08AB63C0;
    case 606u: goto L_08AB63CC;
    case 607u: goto L_08AB63D4;
    case 608u: goto L_08AB63DC;
    case 609u: goto L_08AB63F4;
    case 610u: goto L_08AB63FC;
    case 611u: goto L_08AB6408;
    case 612u: goto L_08AB6410;
    case 613u: goto L_08AB6418;
    case 614u: goto L_08AB6424;
    case 615u: goto L_08AB642C;
    case 616u: goto L_08AB6434;
    case 617u: goto L_08AB6440;
    case 618u: goto L_08AB644C;
    case 619u: goto L_08AB6454;
    case 620u: goto L_08AB645C;
    case 621u: goto L_08AB6470;
    case 622u: goto L_08AB647C;
    case 623u: goto L_08AB648C;
    case 624u: goto L_08AB6494;
    case 625u: goto L_08AB64A4;
    case 626u: goto L_08AB64AC;
    case 627u: goto L_08AB64B4;
    case 628u: goto L_08AB64B8;
    case 629u: goto L_08AB64C0;
    case 630u: goto L_08AB64C8;
    case 631u: goto L_08AB64D0;
    case 632u: goto L_08AB64D8;
    case 633u: goto L_08AB64E0;
    case 634u: goto L_08AB64F0;
    case 635u: goto L_08AB64F8;
    case 636u: goto L_08AB650C;
    case 637u: goto L_08AB6534;
    case 638u: goto L_08AB654C;
    case 639u: goto L_08AB6554;
    case 640u: goto L_08AB655C;
    case 641u: goto L_08AB6568;
    case 642u: goto L_08AB6574;
    case 643u: goto L_08AB6594;
    case 644u: goto L_08AB65A4;
    case 645u: goto L_08AB65AC;
    case 646u: goto L_08AB65C0;
    case 647u: goto L_08AB65C8;
    case 648u: goto L_08AB65D0;
    case 649u: goto L_08AB65D8;
    case 650u: goto L_08AB65E4;
    case 651u: goto L_08AB65EC;
    case 652u: goto L_08AB65F8;
    case 653u: goto L_08AB6600;
    case 654u: goto L_08AB6610;
    case 655u: goto L_08AB6618;
    case 656u: goto L_08AB6620;
    case 657u: goto L_08AB6624;
    case 658u: goto L_08AB663C;
    case 659u: goto L_08AB6654;
    case 660u: goto L_08AB6688;
    case 661u: goto L_08AB6694;
    case 662u: goto L_08AB6784;
    case 663u: goto L_08AB678C;
    case 664u: goto L_08AB6794;
    case 665u: goto L_08AB67A4;
    case 666u: goto L_08AB67AC;
    case 667u: goto L_08AB67B4;
    case 668u: goto L_08AB67C4;
    case 669u: goto L_08AB67CC;
    case 670u: goto L_08AB67D4;
    case 671u: goto L_08AB67E4;
    case 672u: goto L_08AB67EC;
    case 673u: goto L_08AB67F4;
    case 674u: goto L_08AB680C;
    case 675u: goto L_08AB6814;
    case 676u: goto L_08AB681C;
    case 677u: goto L_08AB682C;
    case 678u: goto L_08AB6834;
    case 679u: goto L_08AB683C;
    case 680u: goto L_08AB684C;
    case 681u: goto L_08AB6854;
    case 682u: goto L_08AB685C;
    case 683u: goto L_08AB686C;
    case 684u: goto L_08AB6874;
    case 685u: goto L_08AB687C;
    case 686u: goto L_08AB6888;
    case 687u: goto L_08AB68B4;
    case 688u: goto L_08AB68BC;
    case 689u: goto L_08AB68C4;
    case 690u: goto L_08AB68D4;
    case 691u: goto L_08AB68DC;
    case 692u: goto L_08AB68E4;
    case 693u: goto L_08AB68F8;
    case 694u: goto L_08AB6900;
    case 695u: goto L_08AB6908;
    case 696u: goto L_08AB691C;
    case 697u: goto L_08AB6924;
    case 698u: goto L_08AB692C;
    case 699u: goto L_08AB6948;
    case 700u: goto L_08AB6950;
    case 701u: goto L_08AB6958;
    case 702u: goto L_08AB6968;
    case 703u: goto L_08AB6970;
    case 704u: goto L_08AB6978;
    case 705u: goto L_08AB6988;
    case 706u: goto L_08AB6990;
    case 707u: goto L_08AB6994;
    case 708u: goto L_08AB69B4;
    case 709u: goto L_08AB69BC;
    case 710u: goto L_08AB69C0;
    case 711u: goto L_08AB69E0;
    case 712u: goto L_08AB69E8;
    case 713u: goto L_08AB69EC;
    case 714u: goto L_08AB6A10;
    case 715u: goto L_08AB6AEC;
    case 716u: goto L_08AB6AF4;
    case 717u: goto L_08AB6AF8;
    case 718u: goto L_08AB6B00;
    case 719u: goto L_08AB6B0C;
    case 720u: goto L_08AB6B14;
    case 721u: goto L_08AB6B18;
    case 722u: goto L_08AB6B28;
    case 723u: goto L_08AB6B34;
    case 724u: goto L_08AB6B3C;
    case 725u: goto L_08AB6B40;
    case 726u: goto L_08AB6B50;
    case 727u: goto L_08AB6B5C;
    case 728u: goto L_08AB6B64;
    case 729u: goto L_08AB6B68;
    case 730u: goto L_08AB6B74;
    case 731u: goto L_08AB6B84;
    case 732u: goto L_08AB6B8C;
    case 733u: goto L_08AB6B98;
    case 734u: goto L_08AB6BA4;
    case 735u: goto L_08AB6BAC;
    case 736u: goto L_08AB6BB0;
    case 737u: goto L_08AB6BB8;
    case 738u: goto L_08AB6BC4;
    case 739u: goto L_08AB6BCC;
    case 740u: goto L_08AB6BD0;
    case 741u: goto L_08AB6BD8;
    case 742u: goto L_08AB6BE4;
    case 743u: goto L_08AB6BEC;
    case 744u: goto L_08AB6BF0;
    case 745u: goto L_08AB6BF8;
    case 746u: goto L_08AB6C04;
    case 747u: goto L_08AB6C38;
    case 748u: goto L_08AB6C44;
    case 749u: goto L_08AB6C4C;
    case 750u: goto L_08AB6C50;
    case 751u: goto L_08AB6C68;
    case 752u: goto L_08AB6C74;
    case 753u: goto L_08AB6C7C;
    case 754u: goto L_08AB6C80;
    case 755u: goto L_08AB6C88;
    case 756u: goto L_08AB6C90;
    case 757u: goto L_08AB6CB4;
    case 758u: goto L_08AB6CC0;
    case 759u: goto L_08AB6CCC;
    case 760u: goto L_08AB6CD4;
    case 761u: goto L_08AB6CDC;
    case 762u: goto L_08AB6CE4;
    case 763u: goto L_08AB6CF0;
    case 764u: goto L_08AB6CF8;
    case 765u: goto L_08AB6CFC;
    case 766u: goto L_08AB6D04;
    case 767u: goto L_08AB6D0C;
    case 768u: goto L_08AB6D18;
    case 769u: goto L_08AB6D20;
    case 770u: goto L_08AB6D24;
    case 771u: goto L_08AB6D2C;
    case 772u: goto L_08AB6D38;
    case 773u: goto L_08AB6D44;
    case 774u: goto L_08AB6D4C;
    case 775u: goto L_08AB6D54;
    case 776u: goto L_08AB6D5C;
    case 777u: goto L_08AB6D68;
    case 778u: goto L_08AB6D70;
    case 779u: goto L_08AB6D74;
    case 780u: goto L_08AB6D7C;
    case 781u: goto L_08AB6D88;
    case 782u: goto L_08AB6D90;
    case 783u: goto L_08AB6D94;
    case 784u: goto L_08AB6D9C;
    case 785u: goto L_08AB6DA4;
    case 786u: goto L_08AB6DB0;
    case 787u: goto L_08AB6DB8;
    case 788u: goto L_08AB6DBC;
    case 789u: goto L_08AB6DC4;
    case 790u: goto L_08AB6DD0;
    case 791u: goto L_08AB6DD8;
    case 792u: goto L_08AB6DDC;
    case 793u: goto L_08AB6DE4;
    case 794u: goto L_08AB6DEC;
    case 795u: goto L_08AB6DF8;
    case 796u: goto L_08AB6E04;
    case 797u: goto L_08AB6E0C;
    case 798u: goto L_08AB6E10;
    case 799u: goto L_08AB6E18;
    case 800u: goto L_08AB6E24;
    case 801u: goto L_08AB6E2C;
    case 802u: goto L_08AB6E30;
    case 803u: goto L_08AB6E38;
    case 804u: goto L_08AB6E44;
    case 805u: goto L_08AB6E4C;
    case 806u: goto L_08AB6E50;
    case 807u: goto L_08AB6E88;
    case 808u: goto L_08AB6EF0;
    case 809u: goto L_08AB6EF8;
    case 810u: goto L_08AB6F04;
    case 811u: goto L_08AB6F10;
    case 812u: goto L_08AB6F20;
    case 813u: goto L_08AB6F2C;
    case 814u: goto L_08AB6F3C;
    case 815u: goto L_08AB6F48;
    case 816u: goto L_08AB6F58;
    case 817u: goto L_08AB6F88;
    case 818u: goto L_08AB6F98;
    case 819u: goto L_08AB6FA8;
    case 820u: goto L_08AB6FB8;
    case 821u: goto L_08AB6FE0;
    case 822u: goto L_08AB6FE8;
    case 823u: goto L_08AB6FF8;
    case 824u: goto L_08AB7008;
    case 825u: goto L_08AB7010;
    case 826u: goto L_08AB7018;
    case 827u: goto L_08AB7034;
    case 828u: goto L_08AB7040;
    case 829u: goto L_08AB704C;
    case 830u: goto L_08AB7054;
    case 831u: goto L_08AB7058;
    case 832u: goto L_08AB705C;
    case 833u: goto L_08AB7070;
    case 834u: goto L_08AB709C;
    case 835u: goto L_08AB70C0;
    case 836u: goto L_08AB70C8;
    case 837u: goto L_08AB70D0;
    case 838u: goto L_08AB70DC;
    case 839u: goto L_08AB70E4;
    case 840u: goto L_08AB70EC;
    case 841u: goto L_08AB70F8;
    case 842u: goto L_08AB7104;
    case 843u: goto L_08AB7110;
    case 844u: goto L_08AB7118;
    case 845u: goto L_08AB711C;
    case 846u: goto L_08AB7120;
    case 847u: goto L_08AB7134;
    case 848u: goto L_08AB7140;
    case 849u: goto L_08AB714C;
    case 850u: goto L_08AB7158;
    case 851u: goto L_08AB7164;
    case 852u: goto L_08AB716C;
    case 853u: goto L_08AB7170;
    case 854u: goto L_08AB7178;
    case 855u: goto L_08AB7188;
    case 856u: goto L_08AB7194;
    case 857u: goto L_08AB71A0;
    case 858u: goto L_08AB71AC;
    case 859u: goto L_08AB71B8;
    case 860u: goto L_08AB71C0;
    case 861u: goto L_08AB71C4;
    case 862u: goto L_08AB71C8;
    case 863u: goto L_08AB71DC;
    case 864u: goto L_08AB71E8;
    case 865u: goto L_08AB7204;
    case 866u: goto L_08AB720C;
    case 867u: goto L_08AB7214;
    case 868u: goto L_08AB7220;
    case 869u: goto L_08AB722C;
    case 870u: goto L_08AB7234;
    case 871u: goto L_08AB7238;
    case 872u: goto L_08AB7240;
    case 873u: goto L_08AB7250;
    case 874u: goto L_08AB7258;
    case 875u: goto L_08AB7260;
    case 876u: goto L_08AB726C;
    case 877u: goto L_08AB7278;
    case 878u: goto L_08AB7280;
    case 879u: goto L_08AB7284;
    case 880u: goto L_08AB728C;
    case 881u: goto L_08AB729C;
    case 882u: goto L_08AB72A0;
    case 883u: goto L_08AB72A8;
    case 884u: goto L_08AB72B4;
    case 885u: goto L_08AB72C0;
    case 886u: goto L_08AB72C8;
    case 887u: goto L_08AB72CC;
    case 888u: goto L_08AB72D4;
    case 889u: goto L_08AB72E4;
    case 890u: goto L_08AB72F0;
    case 891u: goto L_08AB72FC;
    case 892u: goto L_08AB7308;
    case 893u: goto L_08AB7310;
    case 894u: goto L_08AB7314;
    case 895u: goto L_08AB731C;
    case 896u: goto L_08AB732C;
    case 897u: goto L_08AB7338;
    case 898u: goto L_08AB7340;
    case 899u: goto L_08AB7348;
    case 900u: goto L_08AB7364;
    case 901u: goto L_08AB7398;
    case 902u: goto L_08AB73A0;
    case 903u: goto L_08AB73B8;
    case 904u: goto L_08AB73E8;
    case 905u: goto L_08AB73F0;
    case 906u: goto L_08AB73F8;
    case 907u: goto L_08AB7430;
    case 908u: goto L_08AB7458;
    case 909u: goto L_08AB7470;
    case 910u: goto L_08AB7478;
    case 911u: goto L_08AB7480;
    case 912u: goto L_08AB7488;
    case 913u: goto L_08AB7490;
    case 914u: goto L_08AB7498;
    case 915u: goto L_08AB74A0;
    case 916u: goto L_08AB74AC;
    case 917u: goto L_08AB74B4;
    case 918u: goto L_08AB74BC;
    case 919u: goto L_08AB74CC;
    case 920u: goto L_08AB74DC;
    case 921u: goto L_08AB74E8;
    case 922u: goto L_08AB74F0;
    case 923u: goto L_08AB74FC;
    case 924u: goto L_08AB7514;
    case 925u: goto L_08AB7520;
    case 926u: goto L_08AB7534;
    case 927u: goto L_08AB7540;
    case 928u: goto L_08AB754C;
    case 929u: goto L_08AB7558;
    case 930u: goto L_08AB7564;
    case 931u: goto L_08AB7574;
    case 932u: goto L_08AB7584;
    case 933u: goto L_08AB758C;
    case 934u: goto L_08AB7598;
    case 935u: goto L_08AB75A0;
    case 936u: goto L_08AB75B0;
    case 937u: goto L_08AB75C0;
    case 938u: goto L_08AB75C8;
    case 939u: goto L_08AB75D4;
    case 940u: goto L_08AB75DC;
    case 941u: goto L_08AB75E8;
    case 942u: goto L_08AB75F4;
    case 943u: goto L_08AB7600;
    case 944u: goto L_08AB7608;
    case 945u: goto L_08AB7610;
    case 946u: goto L_08AB7628;
    case 947u: goto L_08AB762C;
    case 948u: goto L_08AB763C;
    case 949u: goto L_08AB7648;
    case 950u: goto L_08AB7654;
    case 951u: goto L_08AB766C;
    case 952u: goto L_08AB7688;
    case 953u: goto L_08AB7694;
    case 954u: goto L_08AB769C;
    case 955u: goto L_08AB76A4;
    case 956u: goto L_08AB76B0;
    case 957u: goto L_08AB76BC;
    case 958u: goto L_08AB76C8;
    case 959u: goto L_08AB76D4;
    case 960u: goto L_08AB76E8;
    case 961u: goto L_08AB76F0;
    case 962u: goto L_08AB7700;
    case 963u: goto L_08AB7708;
    case 964u: goto L_08AB772C;
    case 965u: goto L_08AB773C;
    case 966u: goto L_08AB7744;
    case 967u: goto L_08AB7748;
    case 968u: goto L_08AB7750;
    case 969u: goto L_08AB7758;
    case 970u: goto L_08AB7768;
    case 971u: goto L_08AB7770;
    case 972u: goto L_08AB7794;
    case 973u: goto L_08AB77A4;
    case 974u: goto L_08AB77AC;
    case 975u: goto L_08AB77B0;
    case 976u: goto L_08AB77B8;
    case 977u: goto L_08AB77BC;
    case 978u: goto L_08AB77C4;
    case 979u: goto L_08AB77D0;
    case 980u: goto L_08AB77D8;
    case 981u: goto L_08AB77E0;
    case 982u: goto L_08AB77EC;
    case 983u: goto L_08AB77F8;
    case 984u: goto L_08AB7800;
    case 985u: goto L_08AB7808;
    case 986u: goto L_08AB782C;
    case 987u: goto L_08AB7864;
    case 988u: goto L_08AB7874;
    case 989u: goto L_08AB7880;
    case 990u: goto L_08AB7890;
    case 991u: goto L_08AB789C;
    case 992u: goto L_08AB78A4;
    case 993u: goto L_08AB78AC;
    case 994u: goto L_08AB78B4;
    case 995u: goto L_08AB78BC;
    case 996u: goto L_08AB78C4;
    case 997u: goto L_08AB78CC;
    case 998u: goto L_08AB78D4;
    case 999u: goto L_08AB78DC;
    case 1000u: goto L_08AB78E0;
    case 1001u: goto L_08AB78FC;
    case 1002u: goto L_08AB7930;
    case 1003u: goto L_08AB7944;
    case 1004u: goto L_08AB794C;
    case 1005u: goto L_08AB7960;
    case 1006u: goto L_08AB796C;
    case 1007u: goto L_08AB7984;
    case 1008u: goto L_08AB79B4;
    case 1009u: goto L_08AB79C4;
    case 1010u: goto L_08AB79D4;
    case 1011u: goto L_08AB79E4;
    case 1012u: goto L_08AB79F4;
    case 1013u: goto L_08AB7A04;
    case 1014u: goto L_08AB7A38;
    case 1015u: goto L_08AB7A4C;
    case 1016u: goto L_08AB7A5C;
    case 1017u: goto L_08AB7A6C;
    case 1018u: goto L_08AB7A80;
    case 1019u: goto L_08AB7AA0;
    case 1020u: goto L_08AB7AA8;
    case 1021u: goto L_08AB7AC8;
    case 1022u: goto L_08AB7AD0;
    case 1023u: goto L_08AB7AE4;
    case 1024u: goto L_08AB7AEC;
    case 1025u: goto L_08AB7B00;
    case 1026u: goto L_08AB7B0C;
    case 1027u: goto L_08AB7B14;
    case 1028u: goto L_08AB7B1C;
    case 1029u: goto L_08AB7B30;
    case 1030u: goto L_08AB7B38;
    case 1031u: goto L_08AB7B44;
    case 1032u: goto L_08AB7B50;
    case 1033u: goto L_08AB7B5C;
    case 1034u: goto L_08AB7B64;
    case 1035u: goto L_08AB7B68;
    case 1036u: goto L_08AB7B70;
    case 1037u: goto L_08AB7B84;
    case 1038u: goto L_08AB7B90;
    case 1039u: goto L_08AB7BBC;
    case 1040u: goto L_08AB7BC4;
    case 1041u: goto L_08AB7BF0;
    case 1042u: goto L_08AB7BF8;
    case 1043u: goto L_08AB7C0C;
    case 1044u: goto L_08AB7C14;
    case 1045u: goto L_08AB7C28;
    case 1046u: goto L_08AB7C34;
    case 1047u: goto L_08AB7C3C;
    case 1048u: goto L_08AB7C44;
    case 1049u: goto L_08AB7C58;
    case 1050u: goto L_08AB7C60;
    case 1051u: goto L_08AB7C6C;
    case 1052u: goto L_08AB7C98;
    case 1053u: goto L_08AB7CA0;
    case 1054u: goto L_08AB7CCC;
    case 1055u: goto L_08AB7CD4;
    case 1056u: goto L_08AB7CE8;
    case 1057u: goto L_08AB7CF0;
    case 1058u: goto L_08AB7D04;
    case 1059u: goto L_08AB7D10;
    case 1060u: goto L_08AB7D18;
    case 1061u: goto L_08AB7D20;
    case 1062u: goto L_08AB7D34;
    case 1063u: goto L_08AB7D3C;
    case 1064u: goto L_08AB7D48;
    case 1065u: goto L_08AB7D64;
    case 1066u: goto L_08AB7D6C;
    case 1067u: goto L_08AB7D88;
    case 1068u: goto L_08AB7D90;
    case 1069u: goto L_08AB7DA4;
    case 1070u: goto L_08AB7DAC;
    case 1071u: goto L_08AB7DC0;
    case 1072u: goto L_08AB7DCC;
    case 1073u: goto L_08AB7DD4;
    case 1074u: goto L_08AB7DDC;
    case 1075u: goto L_08AB7DF0;
    case 1076u: goto L_08AB7DF8;
    case 1077u: goto L_08AB7E04;
    case 1078u: goto L_08AB7E20;
    case 1079u: goto L_08AB7E28;
    case 1080u: goto L_08AB7E44;
    case 1081u: goto L_08AB7E4C;
    case 1082u: goto L_08AB7E60;
    case 1083u: goto L_08AB7E68;
    case 1084u: goto L_08AB7E7C;
    case 1085u: goto L_08AB7E88;
    case 1086u: goto L_08AB7E90;
    case 1087u: goto L_08AB7E98;
    case 1088u: goto L_08AB7EAC;
    case 1089u: goto L_08AB7EB4;
    case 1090u: goto L_08AB7F24;
    case 1091u: goto L_08AB7F2C;
    case 1092u: goto L_08AB7F5C;
    case 1093u: goto L_08AB7F6C;
    case 1094u: goto L_08AB7F7C;
    case 1095u: goto L_08AB7F8C;
    case 1096u: goto L_08AB7F9C;
    case 1097u: goto L_08AB7FAC;
    case 1098u: goto L_08AB7FE0;
    case 1099u: goto L_08AB7FF4;
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
L_08AB4000:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB4050;
      }
      goto L_08AB400C;
    }
L_08AB400C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (aot_gpr_5 & 2u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (aot_gpr_5 & 1u);
      if (branch_taken) {
          goto L_08AB4048;
      }
      goto L_08AB401C;
    }
L_08AB401C:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB4048;
      }
      goto L_08AB4024;
    }
L_08AB4024:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
        goto L_08AB4058;
    }
    goto L_08AB4034;
L_08AB4034:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB4068;
      }
      goto L_08AB4040;
    }
L_08AB4040:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB406C;
      }
      goto L_08AB4048;
    }
L_08AB4048:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB406C;
      }
      goto L_08AB4050;
    }
L_08AB4050:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB406C;
      }
      goto L_08AB4058;
    }
L_08AB4058:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB4040;
      }
      goto L_08AB4060;
    }
L_08AB4060:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB406C;
      }
      goto L_08AB4068;
    }
L_08AB4068:
    aot_gpr_2 = (0u | 1u);
    goto L_08AB406C;
L_08AB406C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4074:
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    goto L_08AB407C;
L_08AB407C:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(816), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB407C;
      }
      goto L_08AB4090;
    }
L_08AB4090:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4098:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[8]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2316)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[22] = (0u | 58u);
    ctx.gpr[23] = (0u | 57u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2320)));
    ctx.gpr[18] = (aot_gpr_16 | 0u);
    goto L_08AB40DC;
L_08AB40DC:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08AB4158;
      }
      goto L_08AB40E8;
    }
L_08AB40E8:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2296), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2196), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(640), 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB4100u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4100u) goto L_08AB4100;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4100:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_08AB4154;
      }
      goto L_08AB410C;
    }
L_08AB410C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[23];
      if (branch_taken) {
          goto L_08AB4154;
      }
      goto L_08AB4114;
    }
L_08AB4114:
    aot_gpr_31 = (0x08AB411Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB411Cu) goto L_08AB411C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB411C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AB4130u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4130u) goto L_08AB4130;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4130:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_gpr_31 = (0x08AB4154u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4154u) goto L_08AB4154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4154:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(816), 0u);
    goto L_08AB4158;
L_08AB4158:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB40DC;
      }
      goto L_08AB4168;
    }
L_08AB4168:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4198:
    aot_gpr_5 = (0u | 0u);
    goto L_08AB419C;
L_08AB419C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AB419C;
      }
      goto L_08AB41B0;
    }
L_08AB41B0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB41B8:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
      if (branch_taken) {
          goto L_08AB41DC;
      }
      goto L_08AB41D0;
    }
L_08AB41D0:
    ctx.gpr[11] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AB41E4;
      }
      goto L_08AB41DC;
    }
L_08AB41DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB429C;
      }
      goto L_08AB41E4;
    }
L_08AB41E4:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AB422C;
      }
      goto L_08AB41F0;
    }
L_08AB41F0:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[6];
      if (branch_taken) {
          goto L_08AB422C;
      }
      goto L_08AB41FC;
    }
L_08AB41FC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB4218;
      }
      goto L_08AB4208;
    }
L_08AB4208:
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08AB4220;
      }
      goto L_08AB4210;
    }
L_08AB4210:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB4224;
      }
      goto L_08AB4218;
    }
L_08AB4218:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB429C;
      }
      goto L_08AB4220;
    }
L_08AB4220:
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_08AB4224;
L_08AB4224:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB429C;
      }
      goto L_08AB422C;
    }
L_08AB422C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr_2 = (static_cast<std::int32_t>(ctx.gpr[11]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AB41E4;
      }
      goto L_08AB423C;
    }
L_08AB423C:
    ctx.gpr[10] = (aot_gpr_4 | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_4 = (0u | 1u);
    goto L_08AB4248;
L_08AB4248:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB426C;
      }
      goto L_08AB4250;
    }
L_08AB4250:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB426C;
      }
      goto L_08AB425C;
    }
L_08AB425C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[11]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4248;
      }
      goto L_08AB426C;
    }
L_08AB426C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB4298;
      }
      goto L_08AB4274;
    }
L_08AB4274:
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_gpr_4 = (ctx.gpr[10] + static_cast<std::uint32_t>(64));
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08AB4298;
L_08AB4298:
    aot_gpr_2 = (0u | 0u);
    goto L_08AB429C;
L_08AB429C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB42A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AB42D4;
      }
      goto L_08AB42CC;
    }
L_08AB42CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB435C;
      }
      goto L_08AB42D4;
    }
L_08AB42D4:
    ctx.gpr[19] = (aot_gpr_16 | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    goto L_08AB42E4;
L_08AB42E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB4348;
      }
      goto L_08AB42F0;
    }
L_08AB42F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(500));
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB432C;
      }
      goto L_08AB4308;
    }
L_08AB4308:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB432C;
      }
      goto L_08AB4314;
    }
L_08AB4314:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(81)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB4328u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AB4688;
L_08AB4328:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08AB432C;
L_08AB432C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(10000));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB4348;
      }
      goto L_08AB4344;
    }
L_08AB4344:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), 0u);
    goto L_08AB4348;
L_08AB4348:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AB42E4;
      }
      goto L_08AB435C;
    }
L_08AB435C:
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
L_08AB437C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t aot_run_words[10]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB43DC;
      }
      goto L_08AB43BC;
    }
L_08AB43BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[13] = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[14] = (ctx.gpr[13] | 0u);
      if (branch_taken) {
          goto L_08AB43E4;
      }
      goto L_08AB43D4;
    }
L_08AB43D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB4500;
      }
      goto L_08AB43DC;
    }
L_08AB43DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB4654;
      }
      goto L_08AB43E4;
    }
L_08AB43E4:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[8] = (0u | 9u);
    ctx.gpr[9] = (0u | 10u);
    ctx.gpr[10] = (0u | 11u);
    ctx.gpr[11] = (0u | 117u);
    aot_gpr_2 = (0u | 118u);
    ctx.gpr[3] = (0u | 119u);
    ctx.gpr[12] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.lo);
    goto L_08AB4414;
L_08AB4414:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) < 0;
      if (branch_taken) {
          goto L_08AB442C;
      }
      goto L_08AB441C;
    }
L_08AB441C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
        goto L_08AB4434;
    }
    goto L_08AB442C;
L_08AB442C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB4454;
      }
      goto L_08AB4434;
    }
L_08AB4434:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[13]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08AB4450;
    }
    goto L_08AB4448;
L_08AB4448:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB4454;
      }
      goto L_08AB4450;
    }
L_08AB4450:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    goto L_08AB4454;
L_08AB4454:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB44EC;
      }
      goto L_08AB445C;
    }
L_08AB445C:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[7];
      if (branch_taken) {
          goto L_08AB44B0;
      }
      goto L_08AB4468;
    }
L_08AB4468:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[8];
      if (branch_taken) {
          goto L_08AB44B0;
      }
      goto L_08AB4474;
    }
L_08AB4474:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[9];
      if (branch_taken) {
          goto L_08AB44B0;
      }
      goto L_08AB4480;
    }
L_08AB4480:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[10];
      if (branch_taken) {
          goto L_08AB44B0;
      }
      goto L_08AB448C;
    }
L_08AB448C:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[11];
      if (branch_taken) {
          goto L_08AB44B0;
      }
      goto L_08AB4498;
    }
L_08AB4498:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] == aot_gpr_2;
      if (branch_taken) {
          goto L_08AB44B0;
      }
      goto L_08AB44A4;
    }
L_08AB44A4:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[24] != ctx.gpr[3];
      if (branch_taken) {
          goto L_08AB44EC;
      }
      goto L_08AB44B0;
    }
L_08AB44B0:
    { const std::uint32_t vfpu_address = ctx.gpr[15] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
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
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AB44EC;
      }
      goto L_08AB44E8;
    }
L_08AB44E8:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08AB44EC;
L_08AB44EC:
    aot_gpr_5 = (ctx.gpr[13] | 0u);
    ctx.gpr[13] = (ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[13] | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08AB4414;
      }
      goto L_08AB4500;
    }
L_08AB4500:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AB4650;
      }
      goto L_08AB4514;
    }
L_08AB4514:
    aot_gpr_4 = (ctx.gpr[18] << 5u);
    ctx.gpr[19] = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    ctx.gpr[30] = (0u | 80u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    goto L_08AB452C;
L_08AB452C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
      if (branch_taken) {
          goto L_08AB4544;
      }
      goto L_08AB4534;
    }
L_08AB4534:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08AB454C;
    }
    goto L_08AB4544;
L_08AB4544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB456C;
      }
      goto L_08AB454C;
    }
L_08AB454C:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08AB4568;
    }
    goto L_08AB4560;
L_08AB4560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB456C;
      }
      goto L_08AB4568;
    }
L_08AB4568:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08AB456C;
L_08AB456C:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AB463C;
      }
      goto L_08AB4578;
    }
L_08AB4578:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB45C8;
      }
      goto L_08AB4588;
    }
L_08AB4588:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 261u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AB45C8;
      }
      goto L_08AB4598;
    }
L_08AB4598:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 219u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AB45C8;
      }
      goto L_08AB45A8;
    }
L_08AB45A8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 207u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AB45C8;
      }
      goto L_08AB45B8;
    }
L_08AB45B8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 234u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AB463C;
      }
      goto L_08AB45C8;
    }
L_08AB45C8:
    aot_gpr_31 = (0x08AB45D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB45D0u) goto L_08AB45D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB45D0:
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_2;
      if (branch_taken) {
          goto L_08AB463C;
      }
      goto L_08AB45D8;
    }
L_08AB45D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 64u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AB463C;
      }
      goto L_08AB45EC;
    }
L_08AB45EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[30];
      if (branch_taken) {
          goto L_08AB463C;
      }
      goto L_08AB45FC;
    }
L_08AB45FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AB463C;
      }
      goto L_08AB4638;
    }
L_08AB4638:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08AB463C;
L_08AB463C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08AB452C;
      }
      goto L_08AB4650;
    }
L_08AB4650:
    aot_gpr_2 = (ctx.gpr[23] | 0u);
    goto L_08AB4654;
L_08AB4654:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4688:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AB46E0;
      }
      goto L_08AB46C4;
    }
L_08AB46C4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9892)));
    aot_gpr_5 = (0u | 1u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB46E8;
      }
      goto L_08AB46D8;
    }
L_08AB46D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB46F8;
      }
      goto L_08AB46E0;
    }
L_08AB46E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB4AD8;
      }
      goto L_08AB46E8;
    }
L_08AB46E8:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08AB46F8;
L_08AB46F8:
    aot_gpr_31 = (0x08AB4700u);
    ctx.gpr[21] = (0u | 100u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 546u, 0x08AAEA0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4700u) goto L_08AB4700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4700:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 100u);
        goto L_08AB4710;
    }
    goto L_08AB4710;
L_08AB4710:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    { const bool branch_taken = ctx.gpr[19] == 0u;
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
      if (branch_taken) {
          goto L_08AB474C;
      }
      goto L_08AB473C;
    }
L_08AB473C:
    aot_gpr_4 = (16042u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32506u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08AB474C;
L_08AB474C:
    aot_gpr_4 = (ctx.gpr[20] < static_cast<std::uint32_t>(19) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB4A94;
      }
      goto L_08AB4758;
    }
L_08AB4758:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[20]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11720)));
    jump_target = ctx.gpr[1];
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB477C;
    }
L_08AB477C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB47A8;
    }
L_08AB47A8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16948u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB47D4;
    }
L_08AB47D4:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16908u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4800;
    }
L_08AB4800:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB482C;
    }
L_08AB482C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4858;
    }
L_08AB4858:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4884;
    }
L_08AB4884:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB48B0;
    }
L_08AB48B0:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB48DC;
    }
L_08AB48DC:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4908;
    }
L_08AB4908:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4934;
    }
L_08AB4934:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16784u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4960;
    }
L_08AB4960:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB498C;
    }
L_08AB498C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17352u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB49B8;
    }
L_08AB49B8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB49E4;
    }
L_08AB49E4:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4A10;
    }
L_08AB4A10:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4A3C;
    }
L_08AB4A3C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17402u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4A68;
    }
L_08AB4A68:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16840u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4AAC;
      }
      goto L_08AB4A94;
    }
L_08AB4A94:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_31 = (0x08AB4AA0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(11608));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 889u, 0x08AB36B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4AA0u) goto L_08AB4AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4AA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    goto L_08AB4AAC;
L_08AB4AAC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_08AB4ABC;
      }
      goto L_08AB4AB4;
    }
L_08AB4AB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AB4ABC;
      }
      goto L_08AB4ABC;
    }
L_08AB4ABC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB4AD0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 536u, 0x08A0618Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4AD0u) goto L_08AB4AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4AD0:
    aot_gpr_31 = (0x08AB4AD8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 931u, 0x08AB3994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4AD8u) goto L_08AB4AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4AD8:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4B00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8672));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    goto L_08AB4B28;
L_08AB4B28:
    ctx.gpr[8] = (ctx.gpr[7] << 5u);
    ctx.gpr[9] = (ctx.gpr[8] + aot_gpr_5);
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_4);
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
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08AB4B28;
      }
      goto L_08AB4B54;
    }
L_08AB4B54:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4B5C:
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[11] = (aot_gpr_4 << 16u);
    ctx.gpr[10] = (aot_gpr_5 | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8672));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[6] | 0u);
    goto L_08AB4B84;
L_08AB4B84:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08AB4BB0;
      }
      goto L_08AB4B8C;
    }
L_08AB4B8C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_4;
      if (branch_taken) {
          goto L_08AB4BB0;
      }
      goto L_08AB4B98;
    }
L_08AB4B98:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[7] = (ctx.gpr[9] << 5u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 200 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AB4B84;
      }
      goto L_08AB4BB0;
    }
L_08AB4BB0:
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_gpr_4 = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4BCC:
    ctx.gpr[8] = (aot_gpr_4 << 16u);
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (0u | 200u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8672));
    goto L_08AB4BE8;
L_08AB4BE8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (aot_gpr_5 << 5u);
      if (branch_taken) {
          goto L_08AB4C10;
      }
      goto L_08AB4BF0;
    }
L_08AB4BF0:
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_4);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
      if (branch_taken) {
          goto L_08AB4C10;
      }
      goto L_08AB4C00;
    }
L_08AB4C00:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 200 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4BE8;
      }
      goto L_08AB4C10;
    }
L_08AB4C10:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[6];
      if (branch_taken) {
          goto L_08AB4C2C;
      }
      goto L_08AB4C18;
    }
L_08AB4C18:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    ctx.gpr[10] = (ctx.gpr[7] << 5u);
    ctx.gpr[10] = (ctx.gpr[10] + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 200 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4C34;
      }
      goto L_08AB4C2C;
    }
L_08AB4C2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB4CE0;
      }
      goto L_08AB4C34;
    }
L_08AB4C34:
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08AB4C58;
      }
      goto L_08AB4C3C;
    }
L_08AB4C3C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
      if (branch_taken) {
          goto L_08AB4C58;
      }
      goto L_08AB4C48;
    }
L_08AB4C48:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 200 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB4C34;
      }
      goto L_08AB4C58;
    }
L_08AB4C58:
    ctx.gpr[9] = (ctx.gpr[7] - aot_gpr_5);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
      if (branch_taken) {
          goto L_08AB4CAC;
      }
      goto L_08AB4C6C;
    }
L_08AB4C6C:
    ctx.gpr[10] = (aot_gpr_5 << 5u);
    ctx.gpr[10] = (ctx.gpr[10] + aot_gpr_4);
    ctx.gpr[11] = (ctx.gpr[7] << 5u);
    ctx.gpr[11] = (ctx.gpr[11] + aot_gpr_4);
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_2));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
      if (branch_taken) {
          goto L_08AB4C6C;
      }
      goto L_08AB4CAC;
    }
L_08AB4CAC:
    aot_gpr_5 = (ctx.gpr[6] - ctx.gpr[9]);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB4CE0;
      }
      goto L_08AB4CC0;
    }
L_08AB4CC0:
    ctx.gpr[7] = (aot_gpr_5 << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08AB4CC0;
      }
      goto L_08AB4CE0;
    }
L_08AB4CE0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4CE8:
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (2236u << 16u);
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8672));
    goto L_08AB4CFC;
L_08AB4CFC:
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_5);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_4;
      if (branch_taken) {
          goto L_08AB4D2C;
      }
      goto L_08AB4D10;
    }
L_08AB4D10:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08AB4CFC;
      }
      goto L_08AB4D24;
    }
L_08AB4D24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB4D38;
      }
      goto L_08AB4D2C;
    }
L_08AB4D2C:
    aot_gpr_2 = (ctx.gpr[6] << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_08AB4D3C;
      }
      goto L_08AB4D38;
    }
L_08AB4D38:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AB4D3C;
L_08AB4D3C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4D44:
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8672));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
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
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4D70:
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8672));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4D90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_2 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_gpr_4 = (0u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[6] = (aot_gpr_29 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(29832));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AB4DE4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 897u, 0x08B57578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4DE4u) goto L_08AB4DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4DE4:
    aot_gpr_31 = (0x08AB4DECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4DECu) goto L_08AB4DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4DEC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4DFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB4E4C;
      }
      goto L_08AB4E18;
    }
L_08AB4E18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB4E2C;
      }
      goto L_08AB4E24;
    }
L_08AB4E24:
    aot_gpr_31 = (0x08AB4E2Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4E2Cu) goto L_08AB4E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4E2C:
    aot_gpr_31 = (0x08AB4E34u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0084_entry, 84u, 206u, 0x08954E4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4E34u) goto L_08AB4E34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4E34:
    aot_gpr_5 = (12u << 16u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-12432));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2260), aot_gpr_2);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2256), aot_gpr_5);
    goto L_08AB4E4C;
L_08AB4E4C:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(63));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-64));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2260), aot_gpr_5);
    aot_gpr_2 = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4E74:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4E7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2292)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AB4EA4;
      }
      goto L_08AB4E9C;
    }
L_08AB4E9C:
    aot_gpr_31 = (0x08AB4EA4u);
    goto L_08AB4E74;
L_08AB4EA4:
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[17], ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(-2292), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2272), aot_gpr_16);
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
L_08AB4EC8:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2292)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4ED0:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2292)));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_2 - aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4EE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AB4F08;
      }
      goto L_08AB4F00;
    }
L_08AB4F00:
    if (aot_gpr_16 != 0u) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
        goto L_08AB4F10;
    }
    goto L_08AB4F08;
L_08AB4F08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB4FA4;
      }
      goto L_08AB4F10;
    }
L_08AB4F10:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    aot_mem.aot_direct_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), aot_gpr_5);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(3));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), aot_gpr_5);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    ctx.gpr[18] = (ctx.gpr[7] & aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08AB4F88u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4F88u) goto L_08AB4F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4F88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB4F98u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4F98u) goto L_08AB4F98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4F98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2288), aot_gpr_4);
    goto L_08AB4FA4;
L_08AB4FA4:
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
L_08AB4FBC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB4FD4u);
    ctx.gpr[6] = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB4FD4u) goto L_08AB4FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB4FD4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB4FE4;
      }
      goto L_08AB4FDC;
    }
L_08AB4FDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB4FE8;
      }
      goto L_08AB4FE4;
    }
L_08AB4FE4:
    aot_gpr_2 = (0u | 1u);
    goto L_08AB4FE8;
L_08AB4FE8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB4FF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5004:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5010:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[7] < aot_gpr_16 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_4 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AB5064;
      }
      goto L_08AB5040;
    }
L_08AB5040:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[6] | 0u);
    aot_gpr_31 = (0x08AB5054u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5054u) goto L_08AB5054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5054:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AB5080;
      }
      goto L_08AB5064;
    }
L_08AB5064:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[6] | 0u);
    aot_gpr_31 = (0x08AB5074u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5074u) goto L_08AB5074;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5074:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    goto L_08AB5080;
L_08AB5080:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284), aot_gpr_5);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5094:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    aot_gpr_5 = (ctx.gpr[6] & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2284), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB50BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB50CCu);
    goto L_08AB4EC8;
L_08AB50CC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB50F4;
      }
      goto L_08AB50D4;
    }
L_08AB50D4:
    aot_gpr_31 = (0x08AB50DCu);
    goto L_08AB4EC8;
L_08AB50DC:
    aot_gpr_31 = (0x08AB50E4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_08AB4E74;
L_08AB50E4:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(-2292), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2272), 0u);
    goto L_08AB50F4;
L_08AB50F4:
    aot_gpr_31 = (0x08AB50FCu);
    goto L_08AB5610;
L_08AB50FC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2256), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2260), 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5110:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2272));
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AB5120;
L_08AB5120:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB5120;
      }
      goto L_08AB5134;
    }
L_08AB5134:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB513C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-224));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7876), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB5168;
      }
      goto L_08AB515C;
    }
L_08AB515C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), aot_gpr_4);
    aot_gpr_31 = (0x08AB5168u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5168u) goto L_08AB5168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5168:
    aot_gpr_31 = (0x08AB5170u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 888u, 0x0898B7D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5170u) goto L_08AB5170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5170:
    aot_gpr_31 = (0x08AB5178u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2168));
    goto L_08AB4FBC;
L_08AB5178:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB5324;
      }
      goto L_08AB5180;
    }
L_08AB5180:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB518Cu);
    aot_gpr_5 = (0u | 200u);
    goto L_08AB5010;
L_08AB518C:
    aot_gpr_31 = (0x08AB5194u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2160));
    goto L_08AB4FBC;
L_08AB5194:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB5314;
      }
      goto L_08AB519C;
    }
L_08AB519C:
    aot_gpr_31 = (0x08AB51A4u);
    goto L_08AB5004;
L_08AB51A4:
    aot_gpr_31 = (0x08AB51ACu);
    aot_gpr_16 = (aot_gpr_2 | 0u);
    goto L_08AB4FF4;
L_08AB51AC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB51B8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 646u, 0x088636C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB51B8u) goto L_08AB51B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB51B8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB5304;
      }
      goto L_08AB51C0;
    }
L_08AB51C0:
    aot_gpr_31 = (0x08AB51C8u);
    goto L_08AB5094;
L_08AB51C8:
    aot_gpr_31 = (0x08AB51D0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB6A10;
L_08AB51D0:
    aot_gpr_31 = (0x08AB51D8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2152));
    goto L_08AB4FBC;
L_08AB51D8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB52F4;
      }
      goto L_08AB51E0;
    }
L_08AB51E0:
    aot_gpr_31 = (0x08AB51E8u);
    goto L_08AB5004;
L_08AB51E8:
    aot_gpr_31 = (0x08AB51F0u);
    aot_gpr_16 = (aot_gpr_2 | 0u);
    goto L_08AB4FF4;
L_08AB51F0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB51FCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 490u, 0x0896DF60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB51FCu) goto L_08AB51FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB51FC:
    aot_gpr_31 = (0x08AB5204u);
    goto L_08AB5094;
L_08AB5204:
    aot_gpr_31 = (0x08AB520Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0031_entry, 31u, 66u, 0x088807A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB520Cu) goto L_08AB520C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB520C:
    aot_gpr_31 = (0x08AB5214u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 62u, 0x0882C3C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5214u) goto L_08AB5214;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5214:
    aot_gpr_31 = (0x08AB521Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2144));
    goto L_08AB4FBC;
L_08AB521C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB52E4;
      }
      goto L_08AB5224;
    }
L_08AB5224:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_31 = (0x08AB524Cu);
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_5);
    goto L_08AB5004;
L_08AB524C:
    aot_gpr_31 = (0x08AB5254u);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    goto L_08AB4FF4;
L_08AB5254:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB5264u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 204u, 0x08961158u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5264u) goto L_08AB5264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5264:
    aot_gpr_31 = (0x08AB526Cu);
    goto L_08AB5094;
L_08AB526C:
    aot_gpr_31 = (0x08AB5274u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2136));
    goto L_08AB4FBC;
L_08AB5274:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB52D4;
      }
      goto L_08AB527C;
    }
L_08AB527C:
    aot_gpr_31 = (0x08AB5284u);
    goto L_08AB5004;
L_08AB5284:
    aot_gpr_31 = (0x08AB528Cu);
    aot_gpr_16 = (aot_gpr_2 | 0u);
    goto L_08AB4FF4;
L_08AB528C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB5298u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 723u, 0x08992FD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5298u) goto L_08AB5298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5298:
    aot_gpr_31 = (0x08AB52A0u);
    goto L_08AB5094;
L_08AB52A0:
    aot_gpr_31 = (0x08AB52A8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2128));
    goto L_08AB4FBC;
L_08AB52A8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB52C4;
      }
      goto L_08AB52B0;
    }
L_08AB52B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5334;
      }
      goto L_08AB52BC;
    }
L_08AB52BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB533C;
      }
      goto L_08AB52C4;
    }
L_08AB52C4:
    aot_gpr_31 = (0x08AB52CCu);
    goto L_08AB50BC;
L_08AB52CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB52D4;
    }
L_08AB52D4:
    aot_gpr_31 = (0x08AB52DCu);
    goto L_08AB50BC;
L_08AB52DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB52E4;
    }
L_08AB52E4:
    aot_gpr_31 = (0x08AB52ECu);
    goto L_08AB50BC;
L_08AB52EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB52F4;
    }
L_08AB52F4:
    aot_gpr_31 = (0x08AB52FCu);
    goto L_08AB50BC;
L_08AB52FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB5304;
    }
L_08AB5304:
    aot_gpr_31 = (0x08AB530Cu);
    goto L_08AB50BC;
L_08AB530C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB5314;
    }
L_08AB5314:
    aot_gpr_31 = (0x08AB531Cu);
    goto L_08AB50BC;
L_08AB531C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB5324;
    }
L_08AB5324:
    aot_gpr_31 = (0x08AB532Cu);
    goto L_08AB50BC;
L_08AB532C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53D0;
      }
      goto L_08AB5334;
    }
L_08AB5334:
    aot_gpr_31 = (0x08AB533Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB533Cu) goto L_08AB533C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB533C:
    aot_gpr_31 = (0x08AB5344u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AB5004;
L_08AB5344:
    aot_gpr_31 = (0x08AB534Cu);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    goto L_08AB4FF4;
L_08AB534C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB535Cu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 408u, 0x0880DBC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB535Cu) goto L_08AB535C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB535C:
    aot_gpr_31 = (0x08AB5364u);
    goto L_08AB5094;
L_08AB5364:
    aot_gpr_31 = (0x08AB536Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 526u, 0x08AD3110u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB536Cu) goto L_08AB536C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB536C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08AB5384;
      }
      goto L_08AB5378;
    }
L_08AB5378:
    aot_gpr_31 = (0x08AB5380u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5380u) goto L_08AB5380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5380:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB5384;
L_08AB5384:
    aot_gpr_31 = (0x08AB538Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 708u, 0x089C70A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB538Cu) goto L_08AB538C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB538C:
    aot_gpr_5 = (aot_gpr_2 & 255u);
    aot_gpr_31 = (0x08AB5398u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A060BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5398u) goto L_08AB5398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5398:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08AB53B0;
      }
      goto L_08AB53A4;
    }
L_08AB53A4:
    aot_gpr_31 = (0x08AB53ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB53ACu) goto L_08AB53AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB53AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB53B0;
L_08AB53B0:
    aot_gpr_31 = (0x08AB53B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 710u, 0x089C70B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB53B8u) goto L_08AB53B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB53B8:
    aot_gpr_5 = (aot_gpr_2 & 255u);
    aot_gpr_31 = (0x08AB53C4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A0605Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB53C4u) goto L_08AB53C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB53C4:
    aot_gpr_31 = (0x08AB53CCu);
    goto L_08AB50BC;
L_08AB53CC:
    aot_gpr_2 = (0u | 1u);
    goto L_08AB53D0;
L_08AB53D0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB53E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2280u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AB53FCu);
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(2288));
    goto L_08AB4EC8;
L_08AB53FC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AB540Cu);
    ctx.gpr[6] = (0u | 28u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB540Cu) goto L_08AB540C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB540C:
    aot_gpr_31 = (0x08AB5414u);
    goto L_08AB50BC;
L_08AB5414:
    aot_gpr_2 = (0u | 1u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5428:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB5438u);
    aot_gpr_4 = (0u | 360u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 463u, 0x08966E58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5438u) goto L_08AB5438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5438:
    aot_gpr_31 = (0x08AB5440u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5440u) goto L_08AB5440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5440:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(3160)));
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08AB5454u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1008));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 725u, 0x0888A9E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5454u) goto L_08AB5454;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5454:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5460:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5468:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (32785u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (32785u << 16u);
      if (branch_taken) {
          goto L_08AB54F8;
      }
      goto L_08AB5484;
    }
L_08AB5484:
    aot_gpr_5 = (32770u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(403));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (32785u << 16u);
      if (branch_taken) {
          goto L_08AB54B4;
      }
      goto L_08AB5498;
    }
L_08AB5498:
    aot_gpr_5 = (32770u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(402));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB54AC;
    }
L_08AB54AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB54B4;
    }
L_08AB54B4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (32751u << 16u);
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB54C0;
    }
L_08AB54C0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB557C;
      }
      goto L_08AB54D0;
    }
L_08AB54D0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB5584;
      }
      goto L_08AB54D8;
    }
L_08AB54D8:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AB558C;
      }
      goto L_08AB54E0;
    }
L_08AB54E0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB5594;
      }
      goto L_08AB54E8;
    }
L_08AB54E8:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08AB559C;
      }
      goto L_08AB54F0;
    }
L_08AB54F0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08AB55A4;
      }
      goto L_08AB54F8;
    }
L_08AB54F8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(779));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (32785u << 16u);
      if (branch_taken) {
          goto L_08AB553C;
      }
      goto L_08AB5508;
    }
L_08AB5508:
    aot_gpr_5 = (32785u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(767));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (32751u << 16u);
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB551C;
    }
L_08AB551C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-768));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12008)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB553C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(896));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (32785u << 16u);
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB554C;
    }
L_08AB554C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(907));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (32751u << 16u);
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB555C;
    }
L_08AB555C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-897));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12056)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB557C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB5584;
    }
L_08AB5584:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB558C;
    }
L_08AB558C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB5594;
    }
L_08AB5594:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB559C;
    }
L_08AB559C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55A4;
    }
L_08AB55A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55AC;
    }
L_08AB55AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55B4;
    }
L_08AB55B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55BC;
    }
L_08AB55BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55C4;
    }
L_08AB55C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55CC;
    }
L_08AB55CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55D4;
    }
L_08AB55D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55DC;
    }
L_08AB55DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55E4;
    }
L_08AB55E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55EC;
    }
L_08AB55EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55F4;
    }
L_08AB55F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB55FC;
    }
L_08AB55FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB55FC;
      }
      goto L_08AB5604;
    }
L_08AB5604:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5610:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5630;
      }
      goto L_08AB5624;
    }
L_08AB5624:
    aot_gpr_31 = (0x08AB562Cu);
    goto L_08AB4E74;
L_08AB562C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216), 0u);
    goto L_08AB5630;
L_08AB5630:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5648;
      }
      goto L_08AB563C;
    }
L_08AB563C:
    aot_gpr_31 = (0x08AB5644u);
    goto L_08AB4E74;
L_08AB5644:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212), 0u);
    goto L_08AB5648;
L_08AB5648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5660;
      }
      goto L_08AB5654;
    }
L_08AB5654:
    aot_gpr_31 = (0x08AB565Cu);
    goto L_08AB4E74;
L_08AB565C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204), 0u);
    goto L_08AB5660;
L_08AB5660:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5678;
      }
      goto L_08AB566C;
    }
L_08AB566C:
    aot_gpr_31 = (0x08AB5674u);
    goto L_08AB4E74;
L_08AB5674:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208), 0u);
    goto L_08AB5678;
L_08AB5678:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5690;
      }
      goto L_08AB5684;
    }
L_08AB5684:
    aot_gpr_31 = (0x08AB568Cu);
    goto L_08AB4E74;
L_08AB568C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200), 0u);
    goto L_08AB5690;
L_08AB5690:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB569C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB56B0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2108));
    ctx.pc = 0x08B730ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB56B0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08AB56C4;
      }
      goto L_08AB56BC;
    }
L_08AB56BC:
    aot_gpr_31 = (0x08AB56C4u);
    goto L_08AB5468;
L_08AB56C4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB56D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7364)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AB5700;
      }
      goto L_08AB56F0;
    }
L_08AB56F0:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(29232));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AB5700;
L_08AB5700:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
      if (branch_taken) {
          goto L_08AB5724;
      }
      goto L_08AB570C;
    }
L_08AB570C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_gpr_16 = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AB572C;
      }
      goto L_08AB571C;
    }
L_08AB571C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB5744;
      }
      goto L_08AB5724;
    }
L_08AB5724:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB5A88;
      }
      goto L_08AB572C;
    }
L_08AB572C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB573Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB573Cu) goto L_08AB573C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB573C:
    aot_gpr_31 = (0x08AB5744u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5744u) goto L_08AB5744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5744:
    aot_gpr_31 = (0x08AB574Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB574Cu) goto L_08AB574C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB574C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB5754;
    }
L_08AB5754:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08AB5808;
      }
      goto L_08AB575C;
    }
L_08AB575C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2264)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
      if (branch_taken) {
          goto L_08AB5798;
      }
      goto L_08AB5768;
    }
L_08AB5768:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB5790;
      }
      goto L_08AB5770;
    }
L_08AB5770:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB5780u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5780u) goto L_08AB5780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5780:
    aot_gpr_31 = (0x08AB5788u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5788u) goto L_08AB5788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5788:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_gpr_5 = (0u | 1u);
    goto L_08AB5790;
L_08AB5790:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08AB57CC;
      }
      goto L_08AB5798;
    }
L_08AB5798:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(11800));
      if (branch_taken) {
          goto L_08AB57C0;
      }
      goto L_08AB57A4;
    }
L_08AB57A4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB57B4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB57B4u) goto L_08AB57B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB57B4:
    aot_gpr_31 = (0x08AB57BCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB57BCu) goto L_08AB57BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB57BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    goto L_08AB57C0;
L_08AB57C0:
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    goto L_08AB57CC;
L_08AB57CC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08AB57F0;
      }
      goto L_08AB57D4;
    }
L_08AB57D4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB57E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB57E4u) goto L_08AB57E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB57E4:
    aot_gpr_31 = (0x08AB57ECu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB57ECu) goto L_08AB57EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB57EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AB57F0;
L_08AB57F0:
    aot_gpr_31 = (0x08AB57F8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 610u, 0x0882E9ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB57F8u) goto L_08AB57F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB57F8:
    aot_gpr_31 = (0x08AB5800u);
    goto L_08AB50BC;
L_08AB5800:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB5808;
    }
L_08AB5808:
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AB5850;
      }
      goto L_08AB5814;
    }
L_08AB5814:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2120));
      if (branch_taken) {
          goto L_08AB5838;
      }
      goto L_08AB5820;
    }
L_08AB5820:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB5830u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5830u) goto L_08AB5830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5830:
    aot_gpr_31 = (0x08AB5838u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5838u) goto L_08AB5838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5838:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08AB5848u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    goto L_08AB50BC;
L_08AB5848:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB5850;
    }
L_08AB5850:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AB58CC;
      }
      goto L_08AB585C;
    }
L_08AB585C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2264)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
      if (branch_taken) {
          goto L_08AB5898;
      }
      goto L_08AB5868;
    }
L_08AB5868:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2108));
      if (branch_taken) {
          goto L_08AB5888;
      }
      goto L_08AB5870;
    }
L_08AB5870:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB5880u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5880u) goto L_08AB5880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5880:
    aot_gpr_31 = (0x08AB5888u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5888u) goto L_08AB5888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5888:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB5898;
    }
L_08AB5898:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(11800));
      if (branch_taken) {
          goto L_08AB58BC;
      }
      goto L_08AB58A4;
    }
L_08AB58A4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB58B4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB58B4u) goto L_08AB58B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB58B4:
    aot_gpr_31 = (0x08AB58BCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB58BCu) goto L_08AB58BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB58BC:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB58CC;
    }
L_08AB58CC:
    aot_gpr_4 = (0u | 8u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AB590C;
      }
      goto L_08AB58D8;
    }
L_08AB58D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2120));
      if (branch_taken) {
          goto L_08AB58FC;
      }
      goto L_08AB58E4;
    }
L_08AB58E4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB58F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB58F4u) goto L_08AB58F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB58F4:
    aot_gpr_31 = (0x08AB58FCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB58FCu) goto L_08AB58FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB58FC:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB590C;
    }
L_08AB590C:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
      if (branch_taken) {
          goto L_08AB59D4;
      }
      goto L_08AB5918;
    }
L_08AB5918:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB599C;
      }
      goto L_08AB5924;
    }
L_08AB5924:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB5948;
      }
      goto L_08AB5930;
    }
L_08AB5930:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    aot_gpr_31 = (0x08AB593Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB593Cu) goto L_08AB593C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB593C:
    aot_gpr_31 = (0x08AB5944u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5944u) goto L_08AB5944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5944:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    goto L_08AB5948;
L_08AB5948:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08AB5968;
      }
      goto L_08AB5950;
    }
L_08AB5950:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    aot_gpr_31 = (0x08AB595Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB595Cu) goto L_08AB595C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB595C:
    aot_gpr_31 = (0x08AB5964u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5964u) goto L_08AB5964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5964:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    goto L_08AB5968;
L_08AB5968:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08AB5984;
      }
      goto L_08AB5970;
    }
L_08AB5970:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    aot_gpr_31 = (0x08AB597Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB597Cu) goto L_08AB597C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB597C:
    aot_gpr_31 = (0x08AB5984u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5984u) goto L_08AB5984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5984:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB5990u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 610u, 0x0882E9ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5990u) goto L_08AB5990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5990:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19683), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB599C;
    }
L_08AB599C:
    aot_gpr_31 = (0x08AB59A4u);
    goto L_08AB50BC;
L_08AB59A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2108));
      if (branch_taken) {
          goto L_08AB59C4;
      }
      goto L_08AB59B0;
    }
L_08AB59B0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    aot_gpr_31 = (0x08AB59BCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB59BCu) goto L_08AB59BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB59BC:
    aot_gpr_31 = (0x08AB59C4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB59C4u) goto L_08AB59C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB59C4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB59D4;
    }
L_08AB59D4:
    aot_gpr_4 = (0u | 7u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB59E0;
    }
L_08AB59E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2120));
      if (branch_taken) {
          goto L_08AB5A24;
      }
      goto L_08AB59EC;
    }
L_08AB59EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB5A0C;
      }
      goto L_08AB59F8;
    }
L_08AB59F8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    aot_gpr_31 = (0x08AB5A04u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5A04u) goto L_08AB5A04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5A04:
    aot_gpr_31 = (0x08AB5A0Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5A0Cu) goto L_08AB5A0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5A0C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08AB5A1Cu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    goto L_08AB53E4;
L_08AB5A1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB5A58;
      }
      goto L_08AB5A24;
    }
L_08AB5A24:
    aot_gpr_31 = (0x08AB5A2Cu);
    goto L_08AB50BC;
L_08AB5A2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB5A50;
      }
      goto L_08AB5A38;
    }
L_08AB5A38:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[17]);
    aot_gpr_31 = (0x08AB5A44u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5A44u) goto L_08AB5A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5A44:
    aot_gpr_31 = (0x08AB5A4Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5A4Cu) goto L_08AB5A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5A4C:
    aot_gpr_4 = (0u | 1u);
    goto L_08AB5A50;
L_08AB5A50:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    goto L_08AB5A58;
L_08AB5A58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08AB5A80;
      }
      goto L_08AB5A64;
    }
L_08AB5A64:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB5A74u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5A74u) goto L_08AB5A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5A74:
    aot_gpr_31 = (0x08AB5A7Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5A7Cu) goto L_08AB5A7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5A7C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AB5A80;
L_08AB5A80:
    aot_gpr_31 = (0x08AB5A88u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 619u, 0x0882EA18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5A88u) goto L_08AB5A88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5A88:
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
L_08AB5AA0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB5AD0;
      }
      goto L_08AB5AB4;
    }
L_08AB5AB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-27191)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5AC8;
      }
      goto L_08AB5AC0;
    }
L_08AB5AC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 7u);
      if (branch_taken) {
          goto L_08AB5AD4;
      }
      goto L_08AB5AC8;
    }
L_08AB5AC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB5AD4;
      }
      goto L_08AB5AD0;
    }
L_08AB5AD0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_08AB5AD4;
L_08AB5AD4:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196), static_cast<std::uint8_t>(0u));
    goto L_08AB5AD8;
L_08AB5AD8:
    aot_gpr_31 = (0x08AB5AE0u);
    ctx.pc = 0x08B7350Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5AE0:
    aot_gpr_31 = (0x08AB5AE8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AB7430;
L_08AB5AE8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AB5AD8;
      }
      goto L_08AB5AF0;
    }
L_08AB5AF0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236), aot_gpr_4);
    aot_gpr_31 = (0x08AB5B00u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AB56D0;
L_08AB5B00:
    aot_gpr_31 = (0x08AB5B08u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B734F4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5B08:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5B1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[6];
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AB5B5C;
      }
      goto L_08AB5B3C;
    }
L_08AB5B3C:
    ctx.gpr[17] = (2236u << 16u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29232));
      if (branch_taken) {
          goto L_08AB5B64;
      }
      goto L_08AB5B48;
    }
L_08AB5B48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AB5B54u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08AB782C;
L_08AB5B54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB5B90;
      }
      goto L_08AB5B5C;
    }
L_08AB5B5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB5CB0;
      }
      goto L_08AB5B64;
    }
L_08AB5B64:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-27191)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5B84;
      }
      goto L_08AB5B70;
    }
L_08AB5B70:
    aot_gpr_4 = (0u | 7u);
    aot_gpr_31 = (0x08AB5B7Cu);
    aot_gpr_5 = (0u | 0u);
    goto L_08AB782C;
L_08AB5B7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB5B90;
      }
      goto L_08AB5B84;
    }
L_08AB5B84:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08AB5B90u);
    aot_gpr_5 = (0u | 0u);
    goto L_08AB782C;
L_08AB5B90:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(301)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7364), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5BB8;
      }
      goto L_08AB5BA0;
    }
L_08AB5BA0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB5BACu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5BACu) goto L_08AB5BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5BAC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB5BA0;
      }
      goto L_08AB5BB8;
    }
L_08AB5BB8:
    aot_gpr_31 = (0x08AB5BC0u);
    aot_gpr_4 = (0u | 10u);
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5BC0:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2096));
    aot_gpr_5 = (2219u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23200));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[7] = (0u | 8192u);
    ctx.gpr[8] = (0u | 16384u);
    aot_gpr_31 = (0x08AB5BF0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08B734B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5BF0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08AB5C30;
      }
      goto L_08AB5C00;
    }
L_08AB5C00:
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AB5C38;
      }
      goto L_08AB5C0C;
    }
L_08AB5C0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AB5C18u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08AB569C;
L_08AB5C18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    aot_gpr_5 = (0u | 1200u);
    aot_gpr_31 = (0x08AB5C28u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    ctx.pc = 0x08B73464u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5C28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08AB5C78;
      }
      goto L_08AB5C30;
    }
L_08AB5C30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB5CB0;
      }
      goto L_08AB5C38;
    }
L_08AB5C38:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-27191)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5C58;
      }
      goto L_08AB5C44;
    }
L_08AB5C44:
    aot_gpr_4 = (0u | 7u);
    aot_gpr_31 = (0x08AB5C50u);
    aot_gpr_5 = (0u | 0u);
    goto L_08AB569C;
L_08AB5C50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB5C64;
      }
      goto L_08AB5C58;
    }
L_08AB5C58:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08AB5C64u);
    aot_gpr_5 = (0u | 0u);
    goto L_08AB569C;
L_08AB5C64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB5C74u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B73464u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5C74:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    goto L_08AB5C78;
L_08AB5C78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB5CA0;
      }
      goto L_08AB5C84;
    }
L_08AB5C84:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB5C94u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5C94u) goto L_08AB5C94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5C94:
    aot_gpr_31 = (0x08AB5C9Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5C9Cu) goto L_08AB5C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5C9C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AB5CA0;
L_08AB5CA0:
    aot_gpr_31 = (0x08AB5CA8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 615u, 0x0882E9D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5CA8u) goto L_08AB5CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5CA8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
      if (branch_taken) {
          goto L_08AB5CB0;
      }
      goto L_08AB5CB0;
    }
L_08AB5CB0:
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
L_08AB5CC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB5CD4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    goto L_08AB5B1C;
L_08AB5CD4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2296), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2294), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5CF0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB5D00u);
    aot_gpr_4 = (0u | 0u);
    goto L_08AB5B1C;
L_08AB5D00:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2296), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2294), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5D1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (0u | 3u);
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1360), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB5D38u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1360));
    goto L_08AB5B1C;
L_08AB5D38:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2296), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2294), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5D54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 2u);
    ctx.gpr[6] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2560), aot_gpr_4);
    aot_gpr_16 = (ctx.gpr[6] + static_cast<std::uint32_t>(2560));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(28));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AB5D80u);
    ctx.gpr[6] = (0u | 19u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5D80u) goto L_08AB5D80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5D80:
    aot_gpr_31 = (0x08AB5D88u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AB5B1C;
L_08AB5D88:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2296), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2294), static_cast<std::uint8_t>(0u));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5DA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (2236u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(3760), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(3760));
    ctx.gpr[8] = (16384u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4040));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, ctx.gpr[6]};
      aot_mem.aot_direct_store32_block(ctx.gpr[7] + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB5DE8u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    goto L_08AB5B1C;
L_08AB5DE8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2296), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2294), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5E04:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29232));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(301)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2293), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AB5E50;
      }
      goto L_08AB5E44;
    }
L_08AB5E44:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB5E50u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5E50u) goto L_08AB5E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5E50:
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB5E6Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AB5DA8;
L_08AB5E6C:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    goto L_08AB5E78;
L_08AB5E78:
    aot_gpr_31 = (0x08AB5E80u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 658u, 0x08A06984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5E80u) goto L_08AB5E80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5E80:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB5E98;
      }
      goto L_08AB5E88;
    }
L_08AB5E88:
    aot_gpr_31 = (0x08AB5E90u);
    aot_gpr_4 = (0u | 10u);
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5E90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08AB5E78;
      }
      goto L_08AB5E98;
    }
L_08AB5E98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5EB0;
      }
      goto L_08AB5EA4;
    }
L_08AB5EA4:
    aot_gpr_31 = (0x08AB5EACu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5EACu) goto L_08AB5EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5EAC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216), 0u);
    goto L_08AB5EB0;
L_08AB5EB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5EC8;
      }
      goto L_08AB5EBC;
    }
L_08AB5EBC:
    aot_gpr_31 = (0x08AB5EC4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5EC4u) goto L_08AB5EC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5EC4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212), 0u);
    goto L_08AB5EC8;
L_08AB5EC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5EE0;
      }
      goto L_08AB5ED4;
    }
L_08AB5ED4:
    aot_gpr_31 = (0x08AB5EDCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5EDCu) goto L_08AB5EDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5EDC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204), 0u);
    goto L_08AB5EE0;
L_08AB5EE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB5EF8;
      }
      goto L_08AB5EEC;
    }
L_08AB5EEC:
    aot_gpr_31 = (0x08AB5EF4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5EF4u) goto L_08AB5EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5EF4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200), 0u);
    goto L_08AB5EF8;
L_08AB5EF8:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AB5F0C;
      }
      goto L_08AB5F00;
    }
L_08AB5F00:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB5F0Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5F0Cu) goto L_08AB5F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5F0C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB5F30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29232));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(301)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AB5F64;
      }
      goto L_08AB5F58;
    }
L_08AB5F58:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB5F64u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5F64u) goto L_08AB5F64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5F64:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08AB5F70u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(760));
    goto L_08AB5D54;
L_08AB5F70:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    goto L_08AB5F7C;
L_08AB5F7C:
    aot_gpr_31 = (0x08AB5F84u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 658u, 0x08A06984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5F84u) goto L_08AB5F84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5F84:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB5F9C;
      }
      goto L_08AB5F8C;
    }
L_08AB5F8C:
    aot_gpr_31 = (0x08AB5F94u);
    aot_gpr_4 = (0u | 10u);
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5F94:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08AB5F7C;
      }
      goto L_08AB5F9C;
    }
L_08AB5F9C:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AB5FB0;
      }
      goto L_08AB5FA4;
    }
L_08AB5FA4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB5FB0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5FB0u) goto L_08AB5FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5FB0:
    aot_gpr_2 = (0u | 1u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
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
L_08AB5FCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-736));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(712), aot_run_words); }
    aot_gpr_31 = (0x08AB5FECu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5FECu) goto L_08AB5FEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5FEC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AB5FF8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2072));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB5FF8u) goto L_08AB5FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB5FF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08AB600C;
      }
      goto L_08AB6004;
    }
L_08AB6004:
    aot_gpr_31 = (0x08AB600Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB600Cu) goto L_08AB600C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB600C:
    aot_gpr_31 = (0x08AB6014u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 251u, 0x088B5A54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6014u) goto L_08AB6014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6014:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB6028;
      }
      goto L_08AB6020;
    }
L_08AB6020:
    aot_gpr_31 = (0x08AB6028u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6028u) goto L_08AB6028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6028:
    aot_gpr_31 = (0x08AB6030u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6030u) goto L_08AB6030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6030:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 20u);
    aot_gpr_31 = (0x08AB6044u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(760));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6044u) goto L_08AB6044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6044:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(264));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB6054u);
    ctx.gpr[6] = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6054u) goto L_08AB6054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6054:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB6064u);
    ctx.gpr[6] = (0u | 352u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6064u) goto L_08AB6064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6064:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_31 = (0x08AB6070u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(11820));
    ctx.pc = 0x08B7366Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6070:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08AB6174;
      }
      goto L_08AB607C;
    }
L_08AB607C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    aot_gpr_31 = (0x08AB6088u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.pc = 0x08B7367Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6088:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
      if (branch_taken) {
          goto L_08AB6148;
      }
      goto L_08AB6090;
    }
L_08AB6090:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(360));
    aot_gpr_31 = (0x08AB60A0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB60A0u) goto L_08AB60A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB60A0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_5 = (aot_gpr_29 + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB6134;
      }
      goto L_08AB60A8;
    }
L_08AB60A8:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2072));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(360));
    aot_gpr_31 = (0x08AB60B8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB60B8u) goto L_08AB60B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB60B8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AB6134;
      }
      goto L_08AB60C0;
    }
L_08AB60C0:
    ctx.gpr[6] = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2064));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(360));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB60D8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11820));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB60D8u) goto L_08AB60D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB60D8:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(624));
    aot_gpr_31 = (0x08AB60E4u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.pc = 0x08B7365Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB60E4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AB6134;
      }
      goto L_08AB60EC;
    }
L_08AB60EC:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(672));
    aot_gpr_31 = (0x08AB60FCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B72F44u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB60FC:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(264));
    aot_gpr_31 = (0x08AB6108u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B72F4Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6108:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
      if (branch_taken) {
          goto L_08AB6134;
      }
      goto L_08AB6110;
    }
L_08AB6110:
    aot_gpr_5 = (aot_gpr_29 + ctx.gpr[18]);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(360));
    aot_gpr_31 = (0x08AB6124u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(760));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6124u) goto L_08AB6124;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6124:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_5);
    goto L_08AB6134;
L_08AB6134:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    aot_gpr_31 = (0x08AB6140u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.pc = 0x08B7367Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6140:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
      if (branch_taken) {
          goto L_08AB6090;
      }
      goto L_08AB6148;
    }
L_08AB6148:
    aot_gpr_31 = (0x08AB6150u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.pc = 0x08B73684u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6150:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08AB615Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(760));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB615Cu) goto L_08AB615C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB615C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB616C;
      }
      goto L_08AB6164;
    }
L_08AB6164:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB6178;
      }
      goto L_08AB616C;
    }
L_08AB616C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB6178;
      }
      goto L_08AB6174;
    }
L_08AB6174:
    aot_gpr_2 = (0u | 0u);
    goto L_08AB6178;
L_08AB6178:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(712), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(736));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB6194:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-416));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(404), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    { const std::uint32_t aot_run_words[7]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(376), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(408), aot_gpr_31);
    aot_gpr_31 = (0x08AB61C8u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB61C8u) goto L_08AB61C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB61C8:
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2072));
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AB61D8u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB61D8u) goto L_08AB61D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB61D8:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB61ECu);
    ctx.gpr[6] = (0u | 20u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB61ECu) goto L_08AB61EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB61EC:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB6200u);
    ctx.gpr[6] = (0u | 352u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6200u) goto L_08AB6200;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6200:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_31 = (0x08AB620Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(11820));
    ctx.pc = 0x08B7366Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB620C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
      if (branch_taken) {
          goto L_08AB6294;
      }
      goto L_08AB6218;
    }
L_08AB6218:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB6224u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B7367Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6224:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
    aot_gpr_16 = (aot_gpr_29 + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AB628C;
      }
      goto L_08AB622C;
    }
L_08AB622C:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(112));
    goto L_08AB6234;
L_08AB6234:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB6244u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6244u) goto L_08AB6244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6244:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AB6260;
      }
      goto L_08AB624C;
    }
L_08AB624C:
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB6258u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6258u) goto L_08AB6258;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6258:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB627C;
      }
      goto L_08AB6260;
    }
L_08AB6260:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB626Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B7367Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB626C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
      if (branch_taken) {
          goto L_08AB6234;
      }
      goto L_08AB6274;
    }
L_08AB6274:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB628C;
      }
      goto L_08AB627C;
    }
L_08AB627C:
    aot_gpr_31 = (0x08AB6284u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B73684u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6284:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB6298;
      }
      goto L_08AB628C;
    }
L_08AB628C:
    aot_gpr_31 = (0x08AB6294u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B73684u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6294:
    aot_gpr_2 = (0u | 0u);
    goto L_08AB6298;
L_08AB6298:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(376), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB62C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(780));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 580u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08AB62F8u);
    ctx.gpr[6] = (0u | 580u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB62F8u) goto L_08AB62F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB62F8:
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x08AB630Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.pc = 0x08B730E4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB630C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 580u);
    aot_gpr_31 = (0x08AB6320u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2108));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6320u) goto L_08AB6320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6320:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(780), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_gpr_4 = (0u | 17u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (0u | 19u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (0u | 18u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (0u | 16u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), aot_gpr_4);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB636C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AB6380u);
    aot_gpr_16 = (0u | 1u);
    ctx.pc = 0x08B730DCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6380:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB644C;
      }
      goto L_08AB6390;
    }
L_08AB6390:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB6440;
      }
      goto L_08AB6398;
    }
L_08AB6398:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AB63B8;
      }
      goto L_08AB63A0;
    }
L_08AB63A0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB63DC;
      }
      goto L_08AB63A8;
    }
L_08AB63A8:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08AB6434;
      }
      goto L_08AB63B0;
    }
L_08AB63B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB6454;
      }
      goto L_08AB63B8;
    }
L_08AB63B8:
    aot_gpr_31 = (0x08AB63C0u);
    aot_gpr_4 = (0u | 1u);
    ctx.pc = 0x08B730CCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB63C0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB63D4;
      }
      goto L_08AB63CC;
    }
L_08AB63CC:
    aot_gpr_31 = (0x08AB63D4u);
    goto L_08AB5468;
L_08AB63D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB6454;
      }
      goto L_08AB63DC;
    }
L_08AB63DC:
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2108));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08AB6408;
      }
      goto L_08AB63F4;
    }
L_08AB63F4:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[6];
      if (branch_taken) {
          goto L_08AB6410;
      }
      goto L_08AB63FC;
    }
L_08AB63FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1484)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB6410;
      }
      goto L_08AB6408;
    }
L_08AB6408:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AB6410;
L_08AB6410:
    aot_gpr_31 = (0x08AB6418u);
    ctx.pc = 0x08B730BCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6418:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB642C;
      }
      goto L_08AB6424;
    }
L_08AB6424:
    aot_gpr_31 = (0x08AB642Cu);
    goto L_08AB5468;
L_08AB642C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB6454;
      }
      goto L_08AB6434;
    }
L_08AB6434:
    aot_gpr_16 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7713), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB6454;
      }
      goto L_08AB6440;
    }
L_08AB6440:
    aot_gpr_16 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7713), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB6454;
      }
      goto L_08AB644C;
    }
L_08AB644C:
    aot_gpr_31 = (0x08AB6454u);
    goto L_08AB5468;
L_08AB6454:
    aot_gpr_31 = (0x08AB645Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8872)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 808u, 0x08A07608u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB645Cu) goto L_08AB645C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB645C:
    aot_gpr_2 = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB6470:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7364)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB648C;
      }
      goto L_08AB647C;
    }
L_08AB647C:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(29232));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AB648C;
L_08AB648C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB6494:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    goto L_08AB64A4;
L_08AB64A4:
    aot_gpr_31 = (0x08AB64ACu);
    ctx.pc = 0x08B7350Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB64AC:
    aot_gpr_31 = (0x08AB64B4u);
    goto L_08AB636C;
L_08AB64B4:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    goto L_08AB64B8;
L_08AB64B8:
    aot_gpr_31 = (0x08AB64C0u);
    aot_gpr_4 = (0u | 1u);
    ctx.pc = 0x08B73264u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB64C0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB64D8;
      }
      goto L_08AB64C8;
    }
L_08AB64C8:
    aot_gpr_31 = (0x08AB64D0u);
    aot_gpr_4 = (0u | 100u);
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB64D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB64B8;
      }
      goto L_08AB64D8;
    }
L_08AB64D8:
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_08AB64A4;
      }
      goto L_08AB64E0;
    }
L_08AB64E0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236), aot_gpr_4);
    aot_gpr_31 = (0x08AB64F0u);
    goto L_08AB6470;
L_08AB64F0:
    aot_gpr_31 = (0x08AB64F8u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B734F4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB64F8:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB650C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AB6554;
      }
      goto L_08AB6534;
    }
L_08AB6534:
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(29232));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(301)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7364), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB655C;
      }
      goto L_08AB654C;
    }
L_08AB654C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB6574;
      }
      goto L_08AB6554;
    }
L_08AB6554:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB6624;
      }
      goto L_08AB655C;
    }
L_08AB655C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB6568u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6568u) goto L_08AB6568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6568:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB655C;
      }
      goto L_08AB6574;
    }
L_08AB6574:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2056));
    aot_gpr_5 = (2219u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(25748));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[7] = (0u | 8192u);
    ctx.gpr[8] = (0u | 16384u);
    aot_gpr_31 = (0x08AB6594u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08B734B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6594:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08AB65C8;
      }
      goto L_08AB65A4;
    }
L_08AB65A4:
    aot_gpr_31 = (0x08AB65ACu);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AB62C4;
L_08AB65AC:
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(780));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB65D0;
      }
      goto L_08AB65C0;
    }
L_08AB65C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(572), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB65D8;
      }
      goto L_08AB65C8;
    }
L_08AB65C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB6624;
      }
      goto L_08AB65D0;
    }
L_08AB65D0:
    aot_gpr_4 = (0u | 273u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(572), aot_gpr_4);
    goto L_08AB65D8;
L_08AB65D8:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    aot_gpr_31 = (0x08AB65E4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB65E4u) goto L_08AB65E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB65E4:
    aot_gpr_31 = (0x08AB65ECu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B7309Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB65EC:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
      if (branch_taken) {
          goto L_08AB6600;
      }
      goto L_08AB65F8;
    }
L_08AB65F8:
    aot_gpr_31 = (0x08AB6600u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AB5468;
L_08AB6600:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB6610u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B73464u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6610:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08AB6620;
      }
      goto L_08AB6618;
    }
L_08AB6618:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB6624;
      }
      goto L_08AB6620;
    }
L_08AB6620:
    aot_gpr_2 = (0u | 1u);
    goto L_08AB6624;
L_08AB6624:
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
L_08AB663C:
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7344));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2280), static_cast<std::uint8_t>(aot_gpr_5));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2276), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB6654:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB6694;
      }
      goto L_08AB6688;
    }
L_08AB6688:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), aot_gpr_4);
    aot_gpr_31 = (0x08AB6694u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6694u) goto L_08AB6694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6694:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7644)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8900)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7650)));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8140)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7672)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7684)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2340)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10284))))));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10288)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1944)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1972)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11232)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11236)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11240)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB678C;
      }
      goto L_08AB6784;
    }
L_08AB6784:
    aot_gpr_31 = (0x08AB678Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB678Cu) goto L_08AB678C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB678C:
    aot_gpr_31 = (0x08AB6794u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6794u) goto L_08AB6794;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6794:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(104), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB67AC;
      }
      goto L_08AB67A4;
    }
L_08AB67A4:
    aot_gpr_31 = (0x08AB67ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB67ACu) goto L_08AB67AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB67AC:
    aot_gpr_31 = (0x08AB67B4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 638u, 0x089C6DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB67B4u) goto L_08AB67B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB67B4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB67CC;
      }
      goto L_08AB67C4;
    }
L_08AB67C4:
    aot_gpr_31 = (0x08AB67CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB67CCu) goto L_08AB67CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB67CC:
    aot_gpr_31 = (0x08AB67D4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 629u, 0x089C6D68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB67D4u) goto L_08AB67D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB67D4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB67EC;
      }
      goto L_08AB67E4;
    }
L_08AB67E4:
    aot_gpr_31 = (0x08AB67ECu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB67ECu) goto L_08AB67EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB67EC:
    aot_gpr_31 = (0x08AB67F4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 633u, 0x089C6D88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB67F4u) goto L_08AB67F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB67F4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(112), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24162)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB6814;
      }
      goto L_08AB680C;
    }
L_08AB680C:
    aot_gpr_31 = (0x08AB6814u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6814u) goto L_08AB6814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6814:
    aot_gpr_31 = (0x08AB681Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 708u, 0x089C70A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB681Cu) goto L_08AB681C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB681C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(120), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB6834;
      }
      goto L_08AB682C;
    }
L_08AB682C:
    aot_gpr_31 = (0x08AB6834u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6834u) goto L_08AB6834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6834:
    aot_gpr_31 = (0x08AB683Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 710u, 0x089C70B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB683Cu) goto L_08AB683C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB683C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(124), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB6854;
      }
      goto L_08AB684C;
    }
L_08AB684C:
    aot_gpr_31 = (0x08AB6854u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6854u) goto L_08AB6854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6854:
    aot_gpr_31 = (0x08AB685Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB685Cu) goto L_08AB685C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB685C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB6874;
      }
      goto L_08AB686C;
    }
L_08AB686C:
    aot_gpr_31 = (0x08AB6874u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6874u) goto L_08AB6874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6874:
    aot_gpr_31 = (0x08AB687Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 726u, 0x089C7174u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB687Cu) goto L_08AB687C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB687C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_31 = (0x08AB6888u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6888u) goto L_08AB6888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6888:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(150)));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(168), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16129)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(171), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1781)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(173), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB68BC;
      }
      goto L_08AB68B4;
    }
L_08AB68B4:
    aot_gpr_31 = (0x08AB68BCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB68BCu) goto L_08AB68BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB68BC:
    aot_gpr_31 = (0x08AB68C4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 644u, 0x089C6DECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB68C4u) goto L_08AB68C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB68C4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(174), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB68DC;
      }
      goto L_08AB68D4;
    }
L_08AB68D4:
    aot_gpr_31 = (0x08AB68DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB68DCu) goto L_08AB68DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB68DC:
    aot_gpr_31 = (0x08AB68E4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 722u, 0x089C7148u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB68E4u) goto L_08AB68E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB68E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB6900;
      }
      goto L_08AB68F8;
    }
L_08AB68F8:
    aot_gpr_31 = (0x08AB6900u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6900u) goto L_08AB6900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6900:
    aot_gpr_31 = (0x08AB6908u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 722u, 0x089C7148u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6908u) goto L_08AB6908;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6908:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB6924;
      }
      goto L_08AB691C;
    }
L_08AB691C:
    aot_gpr_31 = (0x08AB6924u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6924u) goto L_08AB6924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6924:
    aot_gpr_31 = (0x08AB692Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 712u, 0x089C70C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB692Cu) goto L_08AB692C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB692C:
    aot_gpr_4 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB6950;
      }
      goto L_08AB6948;
    }
L_08AB6948:
    aot_gpr_31 = (0x08AB6950u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6950u) goto L_08AB6950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6950:
    aot_gpr_31 = (0x08AB6958u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 732u, 0x089C71A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6958u) goto L_08AB6958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6958:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB6970;
      }
      goto L_08AB6968;
    }
L_08AB6968:
    aot_gpr_31 = (0x08AB6970u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6970u) goto L_08AB6970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6970:
    aot_gpr_31 = (0x08AB6978u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 730u, 0x089C7194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6978u) goto L_08AB6978;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6978:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(185), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08AB6994;
    }
    goto L_08AB6988;
L_08AB6988:
    aot_gpr_31 = (0x08AB6990u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6990u) goto L_08AB6990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6990:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AB6994;
L_08AB6994:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6864));
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08AB69C0;
    }
    goto L_08AB69B4;
L_08AB69B4:
    aot_gpr_31 = (0x08AB69BCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB69BCu) goto L_08AB69BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB69BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AB69C0;
L_08AB69C0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6864));
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08AB69EC;
    }
    goto L_08AB69E0;
L_08AB69E0:
    aot_gpr_31 = (0x08AB69E8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB69E8u) goto L_08AB69E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB69E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AB69EC;
L_08AB69EC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6864));
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB6A10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7652), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8140), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7676), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7684), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2340), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7764), aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(58))))));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(60))))));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10284), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10288), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8664), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (2236u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1972), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(11232), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(11236), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_31);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6AF8;
    }
    goto L_08AB6AEC;
L_08AB6AEC:
    aot_gpr_31 = (0x08AB6AF4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6AF4u) goto L_08AB6AF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6AF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6AF8;
L_08AB6AF8:
    aot_gpr_31 = (0x08AB6B00u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 632u, 0x089C6D80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6B00u) goto L_08AB6B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6B00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(108)));
        goto L_08AB6B18;
    }
    goto L_08AB6B0C;
L_08AB6B0C:
    aot_gpr_31 = (0x08AB6B14u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6B14u) goto L_08AB6B14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6B14:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    goto L_08AB6B18;
L_08AB6B18:
    aot_gpr_5 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_gpr_31 = (0x08AB6B28u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 639u, 0x089C6DC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6B28u) goto L_08AB6B28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6B28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(109)));
        goto L_08AB6B40;
    }
    goto L_08AB6B34;
L_08AB6B34:
    aot_gpr_31 = (0x08AB6B3Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6B3Cu) goto L_08AB6B3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6B3C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(109)));
    goto L_08AB6B40;
L_08AB6B40:
    aot_gpr_5 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_gpr_31 = (0x08AB6B50u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 630u, 0x089C6D70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6B50u) goto L_08AB6B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6B50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6B68;
    }
    goto L_08AB6B5C;
L_08AB6B5C:
    aot_gpr_31 = (0x08AB6B64u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6B64u) goto L_08AB6B64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6B64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6B68;
L_08AB6B68:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_31 = (0x08AB6B74u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 637u, 0x089C6DB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6B74u) goto L_08AB6B74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6B74:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(116)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24162), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AB6B8C;
      }
      goto L_08AB6B84;
    }
L_08AB6B84:
    aot_gpr_31 = (0x08AB6B8Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6B8Cu) goto L_08AB6B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6B8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_gpr_31 = (0x08AB6B98u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(120)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 709u, 0x089C70B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6B98u) goto L_08AB6B98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6B98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6BB0;
    }
    goto L_08AB6BA4;
L_08AB6BA4:
    aot_gpr_31 = (0x08AB6BACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6BACu) goto L_08AB6BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6BAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6BB0;
L_08AB6BB0:
    aot_gpr_31 = (0x08AB6BB8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(124)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 711u, 0x089C70C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6BB8u) goto L_08AB6BB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6BB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6BD0;
    }
    goto L_08AB6BC4;
L_08AB6BC4:
    aot_gpr_31 = (0x08AB6BCCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6BCCu) goto L_08AB6BCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6BCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6BD0;
L_08AB6BD0:
    aot_gpr_31 = (0x08AB6BD8u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(128))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 680u, 0x089C6F68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6BD8u) goto L_08AB6BD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6BD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6BF0;
    }
    goto L_08AB6BE4;
L_08AB6BE4:
    aot_gpr_31 = (0x08AB6BECu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6BECu) goto L_08AB6BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6BEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6BF0;
L_08AB6BF0:
    aot_gpr_31 = (0x08AB6BF8u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(129)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 727u, 0x089C717Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6BF8u) goto L_08AB6BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6BF8:
    ctx.gpr[17] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(168)));
    aot_gpr_31 = (0x08AB6C04u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6C04u) goto L_08AB6C04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6C04:
    aot_mem.aot_direct_store16(aot_gpr_2 + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(170)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16129), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(171)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(173)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1781), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(172)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(174)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB6D0C;
      }
      goto L_08AB6C38;
    }
L_08AB6C38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6C50;
    }
    goto L_08AB6C44;
L_08AB6C44:
    aot_gpr_31 = (0x08AB6C4Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6C4Cu) goto L_08AB6C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6C4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6C50;
L_08AB6C50:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(176)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x08AB6C68u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 723u, 0x089C7150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6C68u) goto L_08AB6C68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6C68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08AB6C80;
    }
    goto L_08AB6C74;
L_08AB6C74:
    aot_gpr_31 = (0x08AB6C7Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6C7Cu) goto L_08AB6C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6C7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AB6C80;
L_08AB6C80:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
      if (branch_taken) {
          goto L_08AB6C90;
      }
      goto L_08AB6C88;
    }
L_08AB6C88:
    aot_gpr_31 = (0x08AB6C90u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6C90u) goto L_08AB6C90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6C90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(176)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(180)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_31 = (0x08AB6CB4u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 429u, 0x0880DE38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6CB4u) goto L_08AB6CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6CB4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB6CC0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 725u, 0x089C716Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6CC0u) goto L_08AB6CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6CC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB6CD4;
      }
      goto L_08AB6CCC;
    }
L_08AB6CCC:
    aot_gpr_31 = (0x08AB6CD4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6CD4u) goto L_08AB6CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6CD4:
    aot_gpr_31 = (0x08AB6CDCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 724u, 0x089C7164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6CDCu) goto L_08AB6CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6CDC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB6D04;
      }
      goto L_08AB6CE4;
    }
L_08AB6CE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6CFC;
    }
    goto L_08AB6CF0;
L_08AB6CF0:
    aot_gpr_31 = (0x08AB6CF8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6CF8u) goto L_08AB6CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6CF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6CFC;
L_08AB6CFC:
    aot_gpr_31 = (0x08AB6D04u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 645u, 0x089C6DF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6D04u) goto L_08AB6D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6D04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB6D2C;
      }
      goto L_08AB6D0C;
    }
L_08AB6D0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6D24;
    }
    goto L_08AB6D18;
L_08AB6D18:
    aot_gpr_31 = (0x08AB6D20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6D20u) goto L_08AB6D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6D20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6D24;
L_08AB6D24:
    aot_gpr_31 = (0x08AB6D2Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 645u, 0x089C6DF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6D2Cu) goto L_08AB6D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6D2C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB6DA4;
      }
      goto L_08AB6D38;
    }
L_08AB6D38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB6D4C;
      }
      goto L_08AB6D44;
    }
L_08AB6D44:
    aot_gpr_31 = (0x08AB6D4Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6D4Cu) goto L_08AB6D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6D4C:
    aot_gpr_31 = (0x08AB6D54u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 472u, 0x088B6860u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6D54u) goto L_08AB6D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6D54:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB6DA4;
      }
      goto L_08AB6D5C;
    }
L_08AB6D5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6D74;
    }
    goto L_08AB6D68;
L_08AB6D68:
    aot_gpr_31 = (0x08AB6D70u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6D70u) goto L_08AB6D70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6D70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6D74;
L_08AB6D74:
    aot_gpr_31 = (0x08AB6D7Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 713u, 0x089C70D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6D7Cu) goto L_08AB6D7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6D7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
        goto L_08AB6D94;
    }
    goto L_08AB6D88;
L_08AB6D88:
    aot_gpr_31 = (0x08AB6D90u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6D90u) goto L_08AB6D90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6D90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08AB6D94;
L_08AB6D94:
    aot_gpr_31 = (0x08AB6D9Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 277u, 0x088B5BCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6D9Cu) goto L_08AB6D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6D9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB6DE4;
      }
      goto L_08AB6DA4;
    }
L_08AB6DA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6DBC;
    }
    goto L_08AB6DB0;
L_08AB6DB0:
    aot_gpr_31 = (0x08AB6DB8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6DB8u) goto L_08AB6DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6DB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6DBC;
L_08AB6DBC:
    aot_gpr_31 = (0x08AB6DC4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 713u, 0x089C70D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6DC4u) goto L_08AB6DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6DC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
        goto L_08AB6DDC;
    }
    goto L_08AB6DD0;
L_08AB6DD0:
    aot_gpr_31 = (0x08AB6DD8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6DD8u) goto L_08AB6DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6DD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08AB6DDC;
L_08AB6DDC:
    aot_gpr_31 = (0x08AB6DE4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 277u, 0x088B5BCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6DE4u) goto L_08AB6DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6DE4:
    aot_gpr_31 = (0x08AB6DECu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 224u, 0x08941918u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6DECu) goto L_08AB6DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6DEC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x08AB6DF8u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(29)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 225u, 0x08941948u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6DF8u) goto L_08AB6DF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6DF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6E10;
    }
    goto L_08AB6E04;
L_08AB6E04:
    aot_gpr_31 = (0x08AB6E0Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6E0Cu) goto L_08AB6E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6E0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6E10;
L_08AB6E10:
    aot_gpr_31 = (0x08AB6E18u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(184))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 733u, 0x089C71B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6E18u) goto L_08AB6E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6E18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AB6E30;
    }
    goto L_08AB6E24;
L_08AB6E24:
    aot_gpr_31 = (0x08AB6E2Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6E2Cu) goto L_08AB6E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6E2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AB6E30;
L_08AB6E30:
    aot_gpr_31 = (0x08AB6E38u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(185)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 731u, 0x089C71A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6E38u) goto L_08AB6E38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6E38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_08AB6E50;
    }
    goto L_08AB6E44;
L_08AB6E44:
    aot_gpr_31 = (0x08AB6E4Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6E4Cu) goto L_08AB6E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6E4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AB6E50;
L_08AB6E50:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_16 + static_cast<std::uint32_t>(188), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
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
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6864));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB6E88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-752));
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29552));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(704), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32768));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(700), aot_gpr_16);
    aot_gpr_16 = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 & aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[8]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(708), aot_run_words); }
    aot_gpr_31 = (0x08AB6EF0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_16);
    goto L_08AB50BC;
L_08AB6EF0:
    aot_gpr_31 = (0x08AB6EF8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AB4DFC;
L_08AB6EF8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AB6F04u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AB4E7C;
L_08AB6F04:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08AB6F10u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AB6654;
L_08AB6F10:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2168));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB6F20u);
    ctx.gpr[6] = (0u | 200u);
    goto L_08AB4EE0;
L_08AB6F20:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08AB6F2Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 387u, 0x08869C6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6F2Cu) goto L_08AB6F2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6F2C:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2160));
    aot_gpr_31 = (0x08AB6F3Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08AB4EE0;
L_08AB6F3C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_31 = (0x08AB6F48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 475u, 0x0896DD60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6F48u) goto L_08AB6F48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6F48:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2152));
    aot_gpr_31 = (0x08AB6F58u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08AB4EE0;
L_08AB6F58:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x08AB6F88u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 186u, 0x08960DF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6F88u) goto L_08AB6F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6F88:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2028));
    aot_gpr_31 = (0x08AB6F98u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08AB4EE0;
L_08AB6F98:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB6FA8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 600u, 0x0899253Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6FA8u) goto L_08AB6FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6FA8:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2020));
    aot_gpr_31 = (0x08AB6FB8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08AB4EE0;
L_08AB6FB8:
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(4960));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(176));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(232));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(488));
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(552));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(616));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(692), aot_gpr_5);
      if (branch_taken) {
          goto L_08AB6FE8;
      }
      goto L_08AB6FE0;
    }
L_08AB6FE0:
    aot_gpr_31 = (0x08AB6FE8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6FE8u) goto L_08AB6FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6FE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB6FF8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 404u, 0x0880DB5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB6FF8u) goto L_08AB6FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB6FF8:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2012));
    aot_gpr_31 = (0x08AB7008u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08AB4EE0;
L_08AB7008:
    aot_gpr_31 = (0x08AB7010u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4960), 0u);
    goto L_08AB4EC8;
L_08AB7010:
    aot_gpr_31 = (0x08AB7018u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), aot_gpr_2);
    goto L_08AB4ED0;
L_08AB7018:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(8128));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB705C;
      }
      goto L_08AB7034;
    }
L_08AB7034:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AB7040u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7040u) goto L_08AB7040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7040:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AB7058;
      }
      goto L_08AB704C;
    }
L_08AB704C:
    aot_gpr_31 = (0x08AB7054u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7054u) goto L_08AB7054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7054:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AB7058;
L_08AB7058:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AB705C;
L_08AB705C:
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB7070u);
    ctx.gpr[7] = (0u | 127u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7070u) goto L_08AB7070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7070:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8912)));
    aot_gpr_31 = (0x08AB709Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(688), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 223u, 0x0899103Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB709Cu) goto L_08AB709C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB709C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(684), aot_gpr_4);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(680), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB70D0;
      }
      goto L_08AB70C0;
    }
L_08AB70C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    aot_gpr_4 = (28267u << 16u);
      if (branch_taken) {
          goto L_08AB71E8;
      }
      goto L_08AB70C8;
    }
L_08AB70C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB70EC;
      }
      goto L_08AB70D0;
    }
L_08AB70D0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB7140;
      }
      goto L_08AB70DC;
    }
L_08AB70DC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB7194;
      }
      goto L_08AB70E4;
    }
L_08AB70E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (28267u << 16u);
      if (branch_taken) {
          goto L_08AB71E8;
      }
      goto L_08AB70EC;
    }
L_08AB70EC:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2004));
      if (branch_taken) {
          goto L_08AB7120;
      }
      goto L_08AB70F8;
    }
L_08AB70F8:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AB7104u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7104u) goto L_08AB7104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7104:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AB711C;
      }
      goto L_08AB7110;
    }
L_08AB7110:
    aot_gpr_31 = (0x08AB7118u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7118u) goto L_08AB7118;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7118:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AB711C;
L_08AB711C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AB7120;
L_08AB7120:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AB7134u);
    ctx.gpr[7] = (0u | 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7134u) goto L_08AB7134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7134:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2280)));
      if (branch_taken) {
          goto L_08AB7204;
      }
      goto L_08AB7140;
    }
L_08AB7140:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1996));
      if (branch_taken) {
          goto L_08AB7178;
      }
      goto L_08AB714C;
    }
L_08AB714C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AB7158u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7158u) goto L_08AB7158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7158:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AB7170;
      }
      goto L_08AB7164;
    }
L_08AB7164:
    aot_gpr_31 = (0x08AB716Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB716Cu) goto L_08AB716C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB716C:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AB7170;
L_08AB7170:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1996));
    goto L_08AB7178;
L_08AB7178:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AB7188u);
    ctx.gpr[7] = (0u | 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7188u) goto L_08AB7188;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7188:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2280)));
      if (branch_taken) {
          goto L_08AB7204;
      }
      goto L_08AB7194;
    }
L_08AB7194:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2004));
      if (branch_taken) {
          goto L_08AB71C8;
      }
      goto L_08AB71A0;
    }
L_08AB71A0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AB71ACu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB71ACu) goto L_08AB71AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB71AC:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AB71C4;
      }
      goto L_08AB71B8;
    }
L_08AB71B8:
    aot_gpr_31 = (0x08AB71C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB71C0u) goto L_08AB71C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB71C0:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AB71C4;
L_08AB71C4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AB71C8;
L_08AB71C8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AB71DCu);
    ctx.gpr[7] = (0u | 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB71DCu) goto L_08AB71DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB71DC:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2280)));
      if (branch_taken) {
          goto L_08AB7204;
      }
      goto L_08AB71E8;
    }
L_08AB71E8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28245));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (110u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30575));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2280)));
    goto L_08AB7204;
L_08AB7204:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08AB7258;
      }
      goto L_08AB720C;
    }
L_08AB720C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1988));
      if (branch_taken) {
          goto L_08AB7240;
      }
      goto L_08AB7214;
    }
L_08AB7214:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AB7220u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7220u) goto L_08AB7220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7220:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AB7238;
      }
      goto L_08AB722C;
    }
L_08AB722C:
    aot_gpr_31 = (0x08AB7234u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7234u) goto L_08AB7234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7234:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AB7238;
L_08AB7238:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1988));
    goto L_08AB7240;
L_08AB7240:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AB7250u);
    ctx.gpr[7] = (0u | 63u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7250u) goto L_08AB7250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7250:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_08AB72A0;
      }
      goto L_08AB7258;
    }
L_08AB7258:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1980));
      if (branch_taken) {
          goto L_08AB728C;
      }
      goto L_08AB7260;
    }
L_08AB7260:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AB726Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB726Cu) goto L_08AB726C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB726C:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AB7284;
      }
      goto L_08AB7278;
    }
L_08AB7278:
    aot_gpr_31 = (0x08AB7280u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7280u) goto L_08AB7280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7280:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AB7284;
L_08AB7284:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1980));
    goto L_08AB728C;
L_08AB728C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AB729Cu);
    ctx.gpr[7] = (0u | 63u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB729Cu) goto L_08AB729C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB729C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08AB72A0;
L_08AB72A0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1972));
      if (branch_taken) {
          goto L_08AB72D4;
      }
      goto L_08AB72A8;
    }
L_08AB72A8:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AB72B4u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB72B4u) goto L_08AB72B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB72B4:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AB72CC;
      }
      goto L_08AB72C0;
    }
L_08AB72C0:
    aot_gpr_31 = (0x08AB72C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB72C8u) goto L_08AB72C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB72C8:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AB72CC;
L_08AB72CC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1972));
    goto L_08AB72D4;
L_08AB72D4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08AB72E4u);
    ctx.gpr[7] = (0u | 63u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB72E4u) goto L_08AB72E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB72E4:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1964));
      if (branch_taken) {
          goto L_08AB731C;
      }
      goto L_08AB72F0;
    }
L_08AB72F0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AB72FCu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB72FCu) goto L_08AB72FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB72FC:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AB7314;
      }
      goto L_08AB7308;
    }
L_08AB7308:
    aot_gpr_31 = (0x08AB7310u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7310u) goto L_08AB7310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7310:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AB7314;
L_08AB7314:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1964));
    goto L_08AB731C;
L_08AB731C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08AB732Cu);
    ctx.gpr[7] = (0u | 63u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB732Cu) goto L_08AB732C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB732C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_31 = (0x08AB7338u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7344));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 421u, 0x08A8E188u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7338u) goto L_08AB7338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7338:
    aot_gpr_31 = (0x08AB7340u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 292u, 0x08A8D904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7340u) goto L_08AB7340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7340:
    aot_gpr_31 = (0x08AB7348u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 315u, 0x089F5B0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7348u) goto L_08AB7348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7348:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(680)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_20) || std::isnan(aot_fpr_12)) && aot_fpr_20 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08AB73A0;
      }
      goto L_08AB7364;
    }
L_08AB7364:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(692)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(684)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(688)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_gpr_31 = (0x08AB7398u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(11840));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7398u) goto L_08AB7398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7398:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB73E8;
      }
      goto L_08AB73A0;
    }
L_08AB73A0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(692)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(684)));
    aot_gpr_31 = (0x08AB73B8u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(11872));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB73B8u) goto L_08AB73B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB73B8:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(688)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_2);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    ctx.gpr[10] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB73E8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB73E8u) goto L_08AB73E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB73E8:
    aot_gpr_31 = (0x08AB73F0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_08AB5CC4;
L_08AB73F0:
    aot_gpr_31 = (0x08AB73F8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 839u, 0x0898B4B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB73F8u) goto L_08AB73F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB73F8:
    aot_gpr_2 = (0u | 1u);
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(696), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(752));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB7430:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x08AB7458u);
    aot_gpr_16 = (0u | 1u);
    ctx.pc = 0x08B730C4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7458:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2108));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AB77F8;
      }
      goto L_08AB7470;
    }
L_08AB7470:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB77EC;
      }
      goto L_08AB7478;
    }
L_08AB7478:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AB7498;
      }
      goto L_08AB7480;
    }
L_08AB7480:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB74BC;
      }
      goto L_08AB7488;
    }
L_08AB7488:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
      if (branch_taken) {
          goto L_08AB77E0;
      }
      goto L_08AB7490;
    }
L_08AB7490:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB7800;
      }
      goto L_08AB7498;
    }
L_08AB7498:
    aot_gpr_31 = (0x08AB74A0u);
    aot_gpr_4 = (0u | 2u);
    ctx.pc = 0x08B730F4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB74A0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB74B4;
      }
      goto L_08AB74AC;
    }
L_08AB74AC:
    aot_gpr_31 = (0x08AB74B4u);
    goto L_08AB5468;
L_08AB74B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB7800;
      }
      goto L_08AB74BC;
    }
L_08AB74BC:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_08AB74E8;
      }
      goto L_08AB74CC;
    }
L_08AB74CC:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
      if (branch_taken) {
          goto L_08AB74F0;
      }
      goto L_08AB74DC;
    }
L_08AB74DC:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1484)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
      if (branch_taken) {
          goto L_08AB74F0;
      }
      goto L_08AB74E8;
    }
L_08AB74E8:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08AB74F0;
L_08AB74F0:
    ctx.gpr[6] = (ctx.gpr[17] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB74FC;
    }
L_08AB74FC:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12104)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB7514:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB754C;
      }
      goto L_08AB7520;
    }
L_08AB7520:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (32785u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(899));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AB7540;
      }
      goto L_08AB7534;
    }
L_08AB7534:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2264), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB754C;
      }
      goto L_08AB7540;
    }
L_08AB7540:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2264), 0u);
    aot_gpr_31 = (0x08AB754Cu);
    aot_gpr_4 = (0u | 360u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 472u, 0x08966EE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB754Cu) goto L_08AB754C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB754C:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2268), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB7558;
    }
L_08AB7558:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2268), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB7564;
    }
L_08AB7564:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AB758C;
      }
      goto L_08AB7574;
    }
L_08AB7574:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB7584u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7584u) goto L_08AB7584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7584:
    aot_gpr_31 = (0x08AB758Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB758Cu) goto L_08AB758C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB758C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB7598u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 608u, 0x0882E99Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7598u) goto L_08AB7598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7598:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB75A0;
    }
L_08AB75A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AB75C8;
      }
      goto L_08AB75B0;
    }
L_08AB75B0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB75C0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB75C0u) goto L_08AB75C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB75C0:
    aot_gpr_31 = (0x08AB75C8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB75C8u) goto L_08AB75C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB75C8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB75D4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 608u, 0x0882E99Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB75D4u) goto L_08AB75D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB75D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB75DC;
    }
L_08AB75DC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2196)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB7600;
      }
      goto L_08AB75E8;
    }
L_08AB75E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB7600;
      }
      goto L_08AB75F4;
    }
L_08AB75F4:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AB7608;
      }
      goto L_08AB7600;
    }
L_08AB7600:
    aot_gpr_31 = (0x08AB7608u);
    goto L_08AB50BC;
L_08AB7608:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB7610;
    }
L_08AB7610:
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-440));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[17];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-468));
      if (branch_taken) {
          goto L_08AB762C;
      }
      goto L_08AB7628;
    }
L_08AB7628:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1484)));
    goto L_08AB762C;
L_08AB762C:
    aot_gpr_4 = (32785u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(961));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_4 = (32785u << 16u);
      if (branch_taken) {
          goto L_08AB7648;
      }
      goto L_08AB763C;
    }
L_08AB763C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(962));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08AB766C;
      }
      goto L_08AB7648;
    }
L_08AB7648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08AB7654u);
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7654u) goto L_08AB7654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7654:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08AB76E8;
      }
      goto L_08AB766C;
    }
L_08AB766C:
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-552));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_08AB76D4;
    }
    goto L_08AB7688;
L_08AB7688:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2293)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB76B0;
      }
      goto L_08AB7694;
    }
L_08AB7694:
    aot_gpr_31 = (0x08AB769Cu);
    goto L_08AB6194;
L_08AB769C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AB76B0;
      }
      goto L_08AB76A4;
    }
L_08AB76A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08AB76E8;
      }
      goto L_08AB76B0;
    }
L_08AB76B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08AB76BCu);
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB76BCu) goto L_08AB76BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB76BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08AB76C8u);
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB76C8u) goto L_08AB76C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB76C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AB76E8;
      }
      goto L_08AB76D4;
    }
L_08AB76D4:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    goto L_08AB76E8;
L_08AB76E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB76F0;
    }
L_08AB76F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AB7708;
      }
      goto L_08AB7700;
    }
L_08AB7700:
    aot_gpr_31 = (0x08AB7708u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7708u) goto L_08AB7708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7708:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (ctx.gpr[6] & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB7748;
      }
      goto L_08AB772C;
    }
L_08AB772C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB773Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB773Cu) goto L_08AB773C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB773C:
    aot_gpr_31 = (0x08AB7744u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7744u) goto L_08AB7744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7744:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AB7748;
L_08AB7748:
    aot_gpr_31 = (0x08AB7750u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 608u, 0x0882E99Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7750u) goto L_08AB7750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7750:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB77BC;
      }
      goto L_08AB7758;
    }
L_08AB7758:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AB7770;
      }
      goto L_08AB7768;
    }
L_08AB7768:
    aot_gpr_31 = (0x08AB7770u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7770u) goto L_08AB7770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7770:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (ctx.gpr[6] & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB77B0;
      }
      goto L_08AB7794;
    }
L_08AB7794:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AB77A4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB77A4u) goto L_08AB77A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB77A4:
    aot_gpr_31 = (0x08AB77ACu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2192));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB77ACu) goto L_08AB77AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB77AC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AB77B0;
L_08AB77B0:
    aot_gpr_31 = (0x08AB77B8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 608u, 0x0882E99Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB77B8u) goto L_08AB77B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB77B8:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2295), static_cast<std::uint8_t>(0u));
    goto L_08AB77BC;
L_08AB77BC:
    aot_gpr_31 = (0x08AB77C4u);
    ctx.pc = 0x08B730D4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB77C4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB77D8;
      }
      goto L_08AB77D0;
    }
L_08AB77D0:
    aot_gpr_31 = (0x08AB77D8u);
    goto L_08AB5468;
L_08AB77D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB7800;
      }
      goto L_08AB77E0;
    }
L_08AB77E0:
    aot_gpr_16 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7713), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB7800;
      }
      goto L_08AB77EC;
    }
L_08AB77EC:
    aot_gpr_16 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7713), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB7800;
      }
      goto L_08AB77F8;
    }
L_08AB77F8:
    aot_gpr_31 = (0x08AB7800u);
    aot_gpr_4 = (ctx.gpr[6] | 0u);
    goto L_08AB5468;
L_08AB7800:
    aot_gpr_31 = (0x08AB7808u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8872)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 808u, 0x08A07608u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7808u) goto L_08AB7808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7808:
    aot_gpr_2 = (aot_gpr_16 | 0u);
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
L_08AB782C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-288));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(264), aot_run_words); }
    aot_gpr_31 = (0x08AB7864u);
    ctx.gpr[6] = (0u | 256u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7864u) goto L_08AB7864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7864:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2268), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB7880;
      }
      goto L_08AB7874;
    }
L_08AB7874:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), aot_gpr_4);
    aot_gpr_31 = (0x08AB7880u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7880u) goto L_08AB7880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7880:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB78DC;
      }
      goto L_08AB7890;
    }
L_08AB7890:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB78BC;
      }
      goto L_08AB789C;
    }
L_08AB789C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AB78C4;
      }
      goto L_08AB78A4;
    }
L_08AB78A4:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB78CC;
      }
      goto L_08AB78AC;
    }
L_08AB78AC:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08AB78D4;
      }
      goto L_08AB78B4;
    }
L_08AB78B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB78E0;
      }
      goto L_08AB78BC;
    }
L_08AB78BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08AB78E0;
      }
      goto L_08AB78C4;
    }
L_08AB78C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 4u);
      if (branch_taken) {
          goto L_08AB78E0;
      }
      goto L_08AB78CC;
    }
L_08AB78CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_08AB78E0;
      }
      goto L_08AB78D4;
    }
L_08AB78D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 3u);
      if (branch_taken) {
          goto L_08AB78E0;
      }
      goto L_08AB78DC;
    }
L_08AB78DC:
    ctx.gpr[18] = (0u | 1u);
    goto L_08AB78E0;
L_08AB78E0:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2108));
    ctx.gpr[21] = (0u | 1536u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB78FCu);
    ctx.gpr[6] = (0u | 1536u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB78FCu) goto L_08AB78FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB78FC:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-2108), ctx.gpr[21]);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (0u | 17u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (0u | 19u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (0u | 18u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (0u | 16u);
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB794C;
      }
      goto L_08AB7930;
    }
L_08AB7930:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 1200u);
    aot_gpr_31 = (0x08AB7944u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-440));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7944u) goto L_08AB7944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7944:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB7960;
      }
      goto L_08AB794C;
    }
L_08AB794C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[6] = (0u | 1200u);
    aot_gpr_31 = (0x08AB7960u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-440));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7960u) goto L_08AB7960;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7960:
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB7F24;
      }
      goto L_08AB796C;
    }
L_08AB796C:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12144)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB7984:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (0u | 5u);
    ctx.gpr[17] = (aot_gpr_5 + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 7u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1480), aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    aot_gpr_31 = (0x08AB79B4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB79B4u) goto L_08AB79B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB79B4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB79C4u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB79C4u) goto L_08AB79C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB79C4:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1956));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    aot_gpr_31 = (0x08AB79D4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB79D4u) goto L_08AB79D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB79D4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB79E4u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB79E4u) goto L_08AB79E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB79E4:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1948));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    aot_gpr_31 = (0x08AB79F4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB79F4u) goto L_08AB79F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB79F4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB7A04u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7A04u) goto L_08AB7A04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7A04:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12504));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1516), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1500));
    aot_gpr_31 = (0x08AB7A38u);
    ctx.gpr[6] = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7A38u) goto L_08AB7A38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7A38:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (0u | 127u);
    aot_gpr_31 = (0x08AB7A4Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(11904));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7A4Cu) goto L_08AB7A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7A4C:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(256));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08AB7A5Cu);
    ctx.gpr[6] = (0u | 127u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7A5Cu) goto L_08AB7A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7A5C:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(384));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(176));
    aot_gpr_31 = (0x08AB7A6Cu);
    ctx.gpr[6] = (0u | 1023u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7A6Cu) goto L_08AB7A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7A6C:
    aot_gpr_4 = (0u | 9u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB7AA8;
      }
      goto L_08AB7A80;
    }
L_08AB7A80:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (2234u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    aot_gpr_31 = (0x08AB7AA0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7AA0u) goto L_08AB7AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7AA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB7AC8;
      }
      goto L_08AB7AA8;
    }
L_08AB7AA8:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (2234u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    aot_gpr_31 = (0x08AB7AC8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7AC8u) goto L_08AB7AC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7AC8:
    aot_gpr_31 = (0x08AB7AD0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7AD0u) goto L_08AB7AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7AD0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB7AE4u);
    ctx.gpr[6] = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7AE4u) goto L_08AB7AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7AE4:
    aot_gpr_31 = (0x08AB7AECu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7AECu) goto L_08AB7AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7AEC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB7B00u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7B00u) goto L_08AB7B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7B00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB7B14;
      }
      goto L_08AB7B0C;
    }
L_08AB7B0C:
    aot_gpr_31 = (0x08AB7B14u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    goto L_08AB4E74;
L_08AB7B14:
    aot_gpr_31 = (0x08AB7B1Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08AB4DFC;
L_08AB7B1C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208), aot_gpr_2);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AB7B30u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7B30u) goto L_08AB7B30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7B30:
    aot_gpr_31 = (0x08AB7B38u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7B38u) goto L_08AB7B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7B38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[6] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AB7B70;
      }
      goto L_08AB7B44;
    }
L_08AB7B44:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AB7B50u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7B50u) goto L_08AB7B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7B50:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08AB7B68;
      }
      goto L_08AB7B5C;
    }
L_08AB7B5C:
    aot_gpr_31 = (0x08AB7B64u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7B64u) goto L_08AB7B64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7B64:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08AB7B68;
L_08AB7B68:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[6] = (2236u << 16u);
    goto L_08AB7B70;
L_08AB7B70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1920));
    ctx.gpr[7] = (0u | 127u);
    aot_gpr_31 = (0x08AB7B84u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2236));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7B84u) goto L_08AB7B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7B84:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB7BC4;
      }
      goto L_08AB7B90;
    }
L_08AB7B90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (aot_gpr_4 << 5u);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12864));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB7BBCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7BBCu) goto L_08AB7BBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7BBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB7BF0;
      }
      goto L_08AB7BC4;
    }
L_08AB7BC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (aot_gpr_4 << 5u);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12864));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB7BF0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7BF0u) goto L_08AB7BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7BF0:
    aot_gpr_31 = (0x08AB7BF8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7BF8u) goto L_08AB7BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7BF8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB7C0Cu);
    ctx.gpr[6] = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7C0Cu) goto L_08AB7C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7C0C:
    aot_gpr_31 = (0x08AB7C14u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7C14u) goto L_08AB7C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7C14:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB7C28u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7C28u) goto L_08AB7C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7C28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB7C3C;
      }
      goto L_08AB7C34;
    }
L_08AB7C34:
    aot_gpr_31 = (0x08AB7C3Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    goto L_08AB4E74;
L_08AB7C3C:
    aot_gpr_31 = (0x08AB7C44u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    goto L_08AB4DFC;
L_08AB7C44:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216), aot_gpr_2);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AB7C58u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7C58u) goto L_08AB7C58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7C58:
    aot_gpr_31 = (0x08AB7C60u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7C60u) goto L_08AB7C60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7C60:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB7CA0;
      }
      goto L_08AB7C6C;
    }
L_08AB7C6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (aot_gpr_4 << 5u);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12864));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1912));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB7C98u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7C98u) goto L_08AB7C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7C98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB7CCC;
      }
      goto L_08AB7CA0;
    }
L_08AB7CA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (aot_gpr_4 << 5u);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12864));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1912));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB7CCCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7CCCu) goto L_08AB7CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7CCC:
    aot_gpr_31 = (0x08AB7CD4u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7CD4u) goto L_08AB7CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7CD4:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB7CE8u);
    ctx.gpr[6] = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7CE8u) goto L_08AB7CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7CE8:
    aot_gpr_31 = (0x08AB7CF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7CF0u) goto L_08AB7CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7CF0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB7D04u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7D04u) goto L_08AB7D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7D04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB7D18;
      }
      goto L_08AB7D10;
    }
L_08AB7D10:
    aot_gpr_31 = (0x08AB7D18u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    goto L_08AB4E74;
L_08AB7D18:
    aot_gpr_31 = (0x08AB7D20u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_08AB4DFC;
L_08AB7D20:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AB7D34u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7D34u) goto L_08AB7D34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7D34:
    aot_gpr_31 = (0x08AB7D3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7D3Cu) goto L_08AB7D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7D3C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB7D6C;
      }
      goto L_08AB7D48;
    }
L_08AB7D48:
    ctx.gpr[6] = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1904));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB7D64u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7D64u) goto L_08AB7D64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7D64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB7D88;
      }
      goto L_08AB7D6C;
    }
L_08AB7D6C:
    ctx.gpr[6] = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1904));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB7D88u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7D88u) goto L_08AB7D88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7D88:
    aot_gpr_31 = (0x08AB7D90u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7D90u) goto L_08AB7D90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7D90:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB7DA4u);
    ctx.gpr[6] = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7DA4u) goto L_08AB7DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7DA4:
    aot_gpr_31 = (0x08AB7DACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7DACu) goto L_08AB7DAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7DAC:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB7DC0u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7DC0u) goto L_08AB7DC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7DC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB7DD4;
      }
      goto L_08AB7DCC;
    }
L_08AB7DCC:
    aot_gpr_31 = (0x08AB7DD4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    goto L_08AB4E74;
L_08AB7DD4:
    aot_gpr_31 = (0x08AB7DDCu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_08AB4DFC;
L_08AB7DDC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AB7DF0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7DF0u) goto L_08AB7DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7DF0:
    aot_gpr_31 = (0x08AB7DF8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7DF8u) goto L_08AB7DF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7DF8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB7E28;
      }
      goto L_08AB7E04;
    }
L_08AB7E04:
    ctx.gpr[6] = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1896));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1888));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB7E20u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11928));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7E20u) goto L_08AB7E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7E20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB7E44;
      }
      goto L_08AB7E28;
    }
L_08AB7E28:
    ctx.gpr[6] = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1896));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1888));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB7E44u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11972));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7E44u) goto L_08AB7E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7E44:
    aot_gpr_31 = (0x08AB7E4Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7E4Cu) goto L_08AB7E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7E4C:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB7E60u);
    ctx.gpr[6] = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7E60u) goto L_08AB7E60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7E60:
    aot_gpr_31 = (0x08AB7E68u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7E68u) goto L_08AB7E68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7E68:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB7E7Cu);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7E7Cu) goto L_08AB7E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7E7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB7E90;
      }
      goto L_08AB7E88;
    }
L_08AB7E88:
    aot_gpr_31 = (0x08AB7E90u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    goto L_08AB4E74;
L_08AB7E90:
    aot_gpr_31 = (0x08AB7E98u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AB4DFC;
L_08AB7E98:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AB7EACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7EACu) goto L_08AB7EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7EAC:
    aot_gpr_31 = (0x08AB7EB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7EB4u) goto L_08AB7EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7EB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1412), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1416), ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1420), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1428), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1432), ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1436), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1444), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1448), ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1452), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, ctx.gpr[17], ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(1460), aot_run_words); }
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[8] = (2236u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-572));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-2236));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-572), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1476), ctx.gpr[7]);
    goto L_08AB7F24;
L_08AB7F24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 133u, 0x08AB8924u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AB7F2C;
    }
L_08AB7F2C:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (0u | 5u);
    ctx.gpr[17] = (aot_gpr_5 + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 7u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1480), aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    aot_gpr_31 = (0x08AB7F5Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7F5Cu) goto L_08AB7F5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7F5C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB7F6Cu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7F6Cu) goto L_08AB7F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7F6C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1880));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    aot_gpr_31 = (0x08AB7F7Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7F7Cu) goto L_08AB7F7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7F7C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB7F8Cu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7F8Cu) goto L_08AB7F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7F8C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1876));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    aot_gpr_31 = (0x08AB7F9Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7F9Cu) goto L_08AB7F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7F9C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB7FACu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7FACu) goto L_08AB7FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7FAC:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12684));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1516), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1500));
    aot_gpr_31 = (0x08AB7FE0u);
    ctx.gpr[6] = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7FE0u) goto L_08AB7FE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7FE0:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (0u | 127u);
    aot_gpr_31 = (0x08AB7FF4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(11904));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB7FF4u) goto L_08AB7FF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB7FF4:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(256));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08AB8004u);
    ctx.gpr[6] = (0u | 127u);
    (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }());
    AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0172(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0172_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_172(Runtime &runtime) {
    runtime.register_generated_unit(172u, 0x08AB4000u, 16384u, &recomp_unit_0172, &recomp_unit_0172_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08AB4000u, &recomp_unit_0172, "recomp_unit_0172",
                                          kEntryMasks_recomp_unit_0172, 64u);
}
} // namespace psprecomp
