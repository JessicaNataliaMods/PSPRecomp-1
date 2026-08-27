#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0052[64] = {
    0x5081102840441003ull, 0x0228404521028404ull, 0x200AA422020420A1ull, 0x2410909020060200ull,
    0x2101020842042112ull, 0x1000080004000002ull, 0x0000800040002000ull, 0x0008000400020001ull,
    0x0684084489100010ull, 0x440111090A24A000ull, 0x1000128110400049ull, 0x0000000010000000ull,
    0x00A0410000200000ull, 0x0000080000224000ull, 0x5480210414282400ull, 0x0100001084104105ull,
    0x0400000001000001ull, 0x4420000104000020ull, 0x0000008800008888ull, 0x106448104400A080ull,
    0x4101200414100004ull, 0x2840450811028404ull, 0x8141040284045210ull, 0x02080100A9002040ull,
    0x84100524A8222420ull, 0x0802000012484210ull, 0x1001042800400001ull, 0x2000008400140002ull,
    0x0000401000004200ull, 0x4200080004200200ull, 0x0008000080080000ull, 0x2000010800400002ull,
    0x0008400100000800ull, 0x0080000244200100ull, 0x0002100080000210ull, 0x0012880104448280ull,
    0x1480090020040080ull, 0x204A40A800001080ull, 0x0000401002448281ull, 0x0000081240948150ull,
    0x409204A408102A00ull, 0x4482112420000000ull, 0x4420204108408422ull, 0x8888888888800000ull,
    0x8000001210112448ull, 0x0408204102081040ull, 0x0810408204102081ull, 0x1020810408204102ull,
    0x1002080104008204ull, 0x0020801040082004ull, 0x1208010400820041ull, 0x0420801208012080ull,
    0x2000010140000080ull, 0x2048008401904444ull, 0x211028A241502204ull, 0x4A04420002452012ull,
    0x8A90008000200010ull, 0x2000540004854110ull, 0xA00120221A800114ull, 0x2A5442254400804Cull,
    0x545441545444448Aull, 0x9028A28A28A20AA2ull, 0x8A29524A28A28A2Aull, 0xA4A28A5494514A92ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0052[64] = {
    1u, 14u, 27u, 41u, 52u, 64u, 68u, 71u, 75u, 87u, 100u, 110u, 111u, 116u, 120u, 133u,
    142u, 145u, 151u, 157u, 169u, 178u, 191u, 204u, 213u, 228u, 237u, 244u, 250u, 254u, 260u, 263u,
    268u, 272u, 278u, 283u, 294u, 302u, 312u, 321u, 332u, 345u, 354u, 366u, 377u, 387u, 396u, 406u,
    416u, 424u, 431u, 440u, 449u, 454u, 466u, 481u, 494u, 502u, 513u, 526u, 543u, 564u, 584u, 607u,
};
void recomp_unit_0052_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,16,2,31,28 fprs=14,12,15,20 gpr_occ=4076 fpr_occ=609 gpr_total=6177 fpr_total=771
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_28 = ctx.gpr[28];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_15 = ctx.fpr[15];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[16] = aot_gpr_16; ctx.gpr[2] = aot_gpr_2; ctx.gpr[31] = aot_gpr_31; ctx.gpr[28] = aot_gpr_28; ctx.fpr[14] = aot_fpr_14; ctx.fpr[12] = aot_fpr_12; ctx.fpr[15] = aot_fpr_15; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_28 = ctx.gpr[28]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_15 = ctx.fpr[15]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088D4000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0052[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0052[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088D4000;
    case 2u: goto L_088D4004;
    case 3u: goto L_088D4030;
    case 4u: goto L_088D4048;
    case 5u: goto L_088D4058;
    case 6u: goto L_088D4078;
    case 7u: goto L_088D408C;
    case 8u: goto L_088D4094;
    case 9u: goto L_088D40B0;
    case 10u: goto L_088D40C0;
    case 11u: goto L_088D40DC;
    case 12u: goto L_088D40F0;
    case 13u: goto L_088D40F8;
    case 14u: goto L_088D4108;
    case 15u: goto L_088D4128;
    case 16u: goto L_088D413C;
    case 17u: goto L_088D4144;
    case 18u: goto L_088D4160;
    case 19u: goto L_088D4174;
    case 20u: goto L_088D4180;
    case 21u: goto L_088D4188;
    case 22u: goto L_088D4198;
    case 23u: goto L_088D41B8;
    case 24u: goto L_088D41CC;
    case 25u: goto L_088D41D4;
    case 26u: goto L_088D41E4;
    case 27u: goto L_088D4200;
    case 28u: goto L_088D4214;
    case 29u: goto L_088D421C;
    case 30u: goto L_088D4234;
    case 31u: goto L_088D4248;
    case 32u: goto L_088D4264;
    case 33u: goto L_088D4284;
    case 34u: goto L_088D4294;
    case 35u: goto L_088D42A8;
    case 36u: goto L_088D42B4;
    case 37u: goto L_088D42BC;
    case 38u: goto L_088D42C4;
    case 39u: goto L_088D42CC;
    case 40u: goto L_088D42F4;
    case 41u: goto L_088D4324;
    case 42u: goto L_088D4344;
    case 43u: goto L_088D4348;
    case 44u: goto L_088D4374;
    case 45u: goto L_088D4390;
    case 46u: goto L_088D439C;
    case 47u: goto L_088D43B0;
    case 48u: goto L_088D43BC;
    case 49u: goto L_088D43D0;
    case 50u: goto L_088D43E8;
    case 51u: goto L_088D43F4;
    case 52u: goto L_088D4404;
    case 53u: goto L_088D4410;
    case 54u: goto L_088D4420;
    case 55u: goto L_088D4434;
    case 56u: goto L_088D4448;
    case 57u: goto L_088D4464;
    case 58u: goto L_088D4478;
    case 59u: goto L_088D448C;
    case 60u: goto L_088D44A4;
    case 61u: goto L_088D44C0;
    case 62u: goto L_088D44E0;
    case 63u: goto L_088D44F4;
    case 64u: goto L_088D4504;
    case 65u: goto L_088D4568;
    case 66u: goto L_088D45AC;
    case 67u: goto L_088D45F0;
    case 68u: goto L_088D4634;
    case 69u: goto L_088D4678;
    case 70u: goto L_088D46BC;
    case 71u: goto L_088D4700;
    case 72u: goto L_088D4744;
    case 73u: goto L_088D4788;
    case 74u: goto L_088D47CC;
    case 75u: goto L_088D4810;
    case 76u: goto L_088D4850;
    case 77u: goto L_088D4860;
    case 78u: goto L_088D486C;
    case 79u: goto L_088D487C;
    case 80u: goto L_088D4888;
    case 81u: goto L_088D4898;
    case 82u: goto L_088D48AC;
    case 83u: goto L_088D48C8;
    case 84u: goto L_088D48DC;
    case 85u: goto L_088D48E4;
    case 86u: goto L_088D48E8;
    case 87u: goto L_088D4934;
    case 88u: goto L_088D493C;
    case 89u: goto L_088D4948;
    case 90u: goto L_088D4954;
    case 91u: goto L_088D4964;
    case 92u: goto L_088D496C;
    case 93u: goto L_088D4980;
    case 94u: goto L_088D498C;
    case 95u: goto L_088D49A0;
    case 96u: goto L_088D49B0;
    case 97u: goto L_088D49C0;
    case 98u: goto L_088D49E8;
    case 99u: goto L_088D49F8;
    case 100u: goto L_088D4A00;
    case 101u: goto L_088D4A0C;
    case 102u: goto L_088D4A18;
    case 103u: goto L_088D4A58;
    case 104u: goto L_088D4A70;
    case 105u: goto L_088D4A80;
    case 106u: goto L_088D4A9C;
    case 107u: goto L_088D4AA4;
    case 108u: goto L_088D4AB0;
    case 109u: goto L_088D4AF0;
    case 110u: goto L_088D4B70;
    case 111u: goto L_088D4C54;
    case 112u: goto L_088D4CA0;
    case 113u: goto L_088D4CB8;
    case 114u: goto L_088D4CD4;
    case 115u: goto L_088D4CDC;
    case 116u: goto L_088D4D38;
    case 117u: goto L_088D4D44;
    case 118u: goto L_088D4D54;
    case 119u: goto L_088D4DAC;
    case 120u: goto L_088D4E28;
    case 121u: goto L_088D4E34;
    case 122u: goto L_088D4E4C;
    case 123u: goto L_088D4E54;
    case 124u: goto L_088D4E68;
    case 125u: goto L_088D4E70;
    case 126u: goto L_088D4E88;
    case 127u: goto L_088D4EA0;
    case 128u: goto L_088D4EB4;
    case 129u: goto L_088D4EDC;
    case 130u: goto L_088D4EE8;
    case 131u: goto L_088D4EF0;
    case 132u: goto L_088D4EF8;
    case 133u: goto L_088D4F00;
    case 134u: goto L_088D4F08;
    case 135u: goto L_088D4F20;
    case 136u: goto L_088D4F38;
    case 137u: goto L_088D4F50;
    case 138u: goto L_088D4F68;
    case 139u: goto L_088D4F7C;
    case 140u: goto L_088D4F90;
    case 141u: goto L_088D4FE0;
    case 142u: goto L_088D5000;
    case 143u: goto L_088D5060;
    case 144u: goto L_088D50E8;
    case 145u: goto L_088D5114;
    case 146u: goto L_088D5168;
    case 147u: goto L_088D5180;
    case 148u: goto L_088D51D4;
    case 149u: goto L_088D51E8;
    case 150u: goto L_088D51F8;
    case 151u: goto L_088D520C;
    case 152u: goto L_088D521C;
    case 153u: goto L_088D522C;
    case 154u: goto L_088D523C;
    case 155u: goto L_088D528C;
    case 156u: goto L_088D529C;
    case 157u: goto L_088D531C;
    case 158u: goto L_088D5334;
    case 159u: goto L_088D533C;
    case 160u: goto L_088D5368;
    case 161u: goto L_088D5378;
    case 162u: goto L_088D5390;
    case 163u: goto L_088D53AC;
    case 164u: goto L_088D53B8;
    case 165u: goto L_088D53C8;
    case 166u: goto L_088D53D4;
    case 167u: goto L_088D53D8;
    case 168u: goto L_088D53F0;
    case 169u: goto L_088D5408;
    case 170u: goto L_088D5450;
    case 171u: goto L_088D5468;
    case 172u: goto L_088D5470;
    case 173u: goto L_088D5488;
    case 174u: goto L_088D54B4;
    case 175u: goto L_088D54C0;
    case 176u: goto L_088D54E0;
    case 177u: goto L_088D54F8;
    case 178u: goto L_088D5508;
    case 179u: goto L_088D5528;
    case 180u: goto L_088D553C;
    case 181u: goto L_088D5544;
    case 182u: goto L_088D5560;
    case 183u: goto L_088D5570;
    case 184u: goto L_088D558C;
    case 185u: goto L_088D55A0;
    case 186u: goto L_088D55A8;
    case 187u: goto L_088D55B8;
    case 188u: goto L_088D55D8;
    case 189u: goto L_088D55EC;
    case 190u: goto L_088D55F4;
    case 191u: goto L_088D5610;
    case 192u: goto L_088D5624;
    case 193u: goto L_088D5630;
    case 194u: goto L_088D5638;
    case 195u: goto L_088D5648;
    case 196u: goto L_088D5668;
    case 197u: goto L_088D567C;
    case 198u: goto L_088D5684;
    case 199u: goto L_088D56A8;
    case 200u: goto L_088D56C0;
    case 201u: goto L_088D56D8;
    case 202u: goto L_088D56E0;
    case 203u: goto L_088D56FC;
    case 204u: goto L_088D5718;
    case 205u: goto L_088D5734;
    case 206u: goto L_088D5760;
    case 207u: goto L_088D576C;
    case 208u: goto L_088D5774;
    case 209u: goto L_088D577C;
    case 210u: goto L_088D57A0;
    case 211u: goto L_088D57CC;
    case 212u: goto L_088D57E4;
    case 213u: goto L_088D5814;
    case 214u: goto L_088D5828;
    case 215u: goto L_088D5834;
    case 216u: goto L_088D5844;
    case 217u: goto L_088D5854;
    case 218u: goto L_088D586C;
    case 219u: goto L_088D5874;
    case 220u: goto L_088D587C;
    case 221u: goto L_088D5888;
    case 222u: goto L_088D5894;
    case 223u: goto L_088D58A0;
    case 224u: goto L_088D58A8;
    case 225u: goto L_088D58D0;
    case 226u: goto L_088D58E8;
    case 227u: goto L_088D58FC;
    case 228u: goto L_088D5910;
    case 229u: goto L_088D5924;
    case 230u: goto L_088D5938;
    case 231u: goto L_088D594C;
    case 232u: goto L_088D5958;
    case 233u: goto L_088D5964;
    case 234u: goto L_088D5970;
    case 235u: goto L_088D59C4;
    case 236u: goto L_088D59EC;
    case 237u: goto L_088D5A00;
    case 238u: goto L_088D5A58;
    case 239u: goto L_088D5A8C;
    case 240u: goto L_088D5A94;
    case 241u: goto L_088D5AA8;
    case 242u: goto L_088D5AC0;
    case 243u: goto L_088D5AF0;
    case 244u: goto L_088D5B04;
    case 245u: goto L_088D5B48;
    case 246u: goto L_088D5B50;
    case 247u: goto L_088D5B88;
    case 248u: goto L_088D5B9C;
    case 249u: goto L_088D5BF4;
    case 250u: goto L_088D5C24;
    case 251u: goto L_088D5C38;
    case 252u: goto L_088D5C90;
    case 253u: goto L_088D5CB8;
    case 254u: goto L_088D5D24;
    case 255u: goto L_088D5D54;
    case 256u: goto L_088D5D68;
    case 257u: goto L_088D5DAC;
    case 258u: goto L_088D5DE4;
    case 259u: goto L_088D5DF8;
    case 260u: goto L_088D5E4C;
    case 261u: goto L_088D5E7C;
    case 262u: goto L_088D5ECC;
    case 263u: goto L_088D5F04;
    case 264u: goto L_088D5F58;
    case 265u: goto L_088D5F8C;
    case 266u: goto L_088D5FA0;
    case 267u: goto L_088D5FF4;
    case 268u: goto L_088D602C;
    case 269u: goto L_088D6080;
    case 270u: goto L_088D60B8;
    case 271u: goto L_088D60CC;
    case 272u: goto L_088D6120;
    case 273u: goto L_088D6154;
    case 274u: goto L_088D6168;
    case 275u: goto L_088D6178;
    case 276u: goto L_088D6184;
    case 277u: goto L_088D61DC;
    case 278u: goto L_088D6210;
    case 279u: goto L_088D6224;
    case 280u: goto L_088D627C;
    case 281u: goto L_088D62B0;
    case 282u: goto L_088D62C4;
    case 283u: goto L_088D631C;
    case 284u: goto L_088D6324;
    case 285u: goto L_088D633C;
    case 286u: goto L_088D6348;
    case 287u: goto L_088D6358;
    case 288u: goto L_088D6368;
    case 289u: goto L_088D6380;
    case 290u: goto L_088D63AC;
    case 291u: goto L_088D63BC;
    case 292u: goto L_088D63C4;
    case 293u: goto L_088D63D0;
    case 294u: goto L_088D641C;
    case 295u: goto L_088D6448;
    case 296u: goto L_088D6474;
    case 297u: goto L_088D64A0;
    case 298u: goto L_088D64AC;
    case 299u: goto L_088D64DC;
    case 300u: goto L_088D64E8;
    case 301u: goto L_088D64F0;
    case 302u: goto L_088D651C;
    case 303u: goto L_088D6530;
    case 304u: goto L_088D658C;
    case 305u: goto L_088D6594;
    case 306u: goto L_088D659C;
    case 307u: goto L_088D65B8;
    case 308u: goto L_088D65C4;
    case 309u: goto L_088D65CC;
    case 310u: goto L_088D65D8;
    case 311u: goto L_088D65F4;
    case 312u: goto L_088D6600;
    case 313u: goto L_088D661C;
    case 314u: goto L_088D6624;
    case 315u: goto L_088D663C;
    case 316u: goto L_088D6648;
    case 317u: goto L_088D6658;
    case 318u: goto L_088D6664;
    case 319u: goto L_088D6690;
    case 320u: goto L_088D66B8;
    case 321u: goto L_088D6710;
    case 322u: goto L_088D6718;
    case 323u: goto L_088D6720;
    case 324u: goto L_088D673C;
    case 325u: goto L_088D6748;
    case 326u: goto L_088D6750;
    case 327u: goto L_088D675C;
    case 328u: goto L_088D6778;
    case 329u: goto L_088D6784;
    case 330u: goto L_088D6790;
    case 331u: goto L_088D67AC;
    case 332u: goto L_088D6824;
    case 333u: goto L_088D682C;
    case 334u: goto L_088D6834;
    case 335u: goto L_088D6850;
    case 336u: goto L_088D686C;
    case 337u: goto L_088D6888;
    case 338u: goto L_088D6894;
    case 339u: goto L_088D689C;
    case 340u: goto L_088D68A8;
    case 341u: goto L_088D68C4;
    case 342u: goto L_088D68D0;
    case 343u: goto L_088D68DC;
    case 344u: goto L_088D68F8;
    case 345u: goto L_088D6974;
    case 346u: goto L_088D6988;
    case 347u: goto L_088D6994;
    case 348u: goto L_088D69A0;
    case 349u: goto L_088D69B0;
    case 350u: goto L_088D69C4;
    case 351u: goto L_088D69DC;
    case 352u: goto L_088D69E8;
    case 353u: goto L_088D69F8;
    case 354u: goto L_088D6A04;
    case 355u: goto L_088D6A14;
    case 356u: goto L_088D6A28;
    case 357u: goto L_088D6A3C;
    case 358u: goto L_088D6A58;
    case 359u: goto L_088D6A6C;
    case 360u: goto L_088D6A80;
    case 361u: goto L_088D6A98;
    case 362u: goto L_088D6AB4;
    case 363u: goto L_088D6AD4;
    case 364u: goto L_088D6AE8;
    case 365u: goto L_088D6AF8;
    case 366u: goto L_088D6B5C;
    case 367u: goto L_088D6B6C;
    case 368u: goto L_088D6B7C;
    case 369u: goto L_088D6B8C;
    case 370u: goto L_088D6B9C;
    case 371u: goto L_088D6BAC;
    case 372u: goto L_088D6BBC;
    case 373u: goto L_088D6BCC;
    case 374u: goto L_088D6BDC;
    case 375u: goto L_088D6BEC;
    case 376u: goto L_088D6BFC;
    case 377u: goto L_088D6C0C;
    case 378u: goto L_088D6C18;
    case 379u: goto L_088D6C28;
    case 380u: goto L_088D6C34;
    case 381u: goto L_088D6C40;
    case 382u: goto L_088D6C50;
    case 383u: goto L_088D6C70;
    case 384u: goto L_088D6C84;
    case 385u: goto L_088D6C90;
    case 386u: goto L_088D6CFC;
    case 387u: goto L_088D6D18;
    case 388u: goto L_088D6D30;
    case 389u: goto L_088D6D4C;
    case 390u: goto L_088D6D64;
    case 391u: goto L_088D6D80;
    case 392u: goto L_088D6D98;
    case 393u: goto L_088D6DB4;
    case 394u: goto L_088D6DCC;
    case 395u: goto L_088D6DE8;
    case 396u: goto L_088D6E00;
    case 397u: goto L_088D6E1C;
    case 398u: goto L_088D6E34;
    case 399u: goto L_088D6E50;
    case 400u: goto L_088D6E68;
    case 401u: goto L_088D6E84;
    case 402u: goto L_088D6E9C;
    case 403u: goto L_088D6EB8;
    case 404u: goto L_088D6ED0;
    case 405u: goto L_088D6EEC;
    case 406u: goto L_088D6F04;
    case 407u: goto L_088D6F20;
    case 408u: goto L_088D6F38;
    case 409u: goto L_088D6F54;
    case 410u: goto L_088D6F6C;
    case 411u: goto L_088D6F88;
    case 412u: goto L_088D6FA0;
    case 413u: goto L_088D6FBC;
    case 414u: goto L_088D6FD4;
    case 415u: goto L_088D6FF0;
    case 416u: goto L_088D7008;
    case 417u: goto L_088D7024;
    case 418u: goto L_088D703C;
    case 419u: goto L_088D7068;
    case 420u: goto L_088D7080;
    case 421u: goto L_088D70AC;
    case 422u: goto L_088D70C4;
    case 423u: goto L_088D70F0;
    case 424u: goto L_088D7108;
    case 425u: goto L_088D7134;
    case 426u: goto L_088D714C;
    case 427u: goto L_088D7178;
    case 428u: goto L_088D7190;
    case 429u: goto L_088D71BC;
    case 430u: goto L_088D71D4;
    case 431u: goto L_088D7200;
    case 432u: goto L_088D7218;
    case 433u: goto L_088D7244;
    case 434u: goto L_088D725C;
    case 435u: goto L_088D7288;
    case 436u: goto L_088D72A0;
    case 437u: goto L_088D72CC;
    case 438u: goto L_088D72E4;
    case 439u: goto L_088D72F0;
    case 440u: goto L_088D731C;
    case 441u: goto L_088D7334;
    case 442u: goto L_088D7340;
    case 443u: goto L_088D736C;
    case 444u: goto L_088D7384;
    case 445u: goto L_088D7390;
    case 446u: goto L_088D73BC;
    case 447u: goto L_088D73D4;
    case 448u: goto L_088D73E8;
    case 449u: goto L_088D741C;
    case 450u: goto L_088D7478;
    case 451u: goto L_088D7480;
    case 452u: goto L_088D74A0;
    case 453u: goto L_088D74F4;
    case 454u: goto L_088D7508;
    case 455u: goto L_088D7518;
    case 456u: goto L_088D7528;
    case 457u: goto L_088D7538;
    case 458u: goto L_088D7550;
    case 459u: goto L_088D755C;
    case 460u: goto L_088D7560;
    case 461u: goto L_088D7588;
    case 462u: goto L_088D759C;
    case 463u: goto L_088D75CC;
    case 464u: goto L_088D75D8;
    case 465u: goto L_088D75F4;
    case 466u: goto L_088D7608;
    case 467u: goto L_088D7624;
    case 468u: goto L_088D7634;
    case 469u: goto L_088D7650;
    case 470u: goto L_088D7658;
    case 471u: goto L_088D7660;
    case 472u: goto L_088D7678;
    case 473u: goto L_088D7684;
    case 474u: goto L_088D7694;
    case 475u: goto L_088D769C;
    case 476u: goto L_088D76AC;
    case 477u: goto L_088D76B4;
    case 478u: goto L_088D76D0;
    case 479u: goto L_088D76E0;
    case 480u: goto L_088D76F4;
    case 481u: goto L_088D7704;
    case 482u: goto L_088D7710;
    case 483u: goto L_088D7734;
    case 484u: goto L_088D7740;
    case 485u: goto L_088D7748;
    case 486u: goto L_088D7758;
    case 487u: goto L_088D7764;
    case 488u: goto L_088D77A4;
    case 489u: goto L_088D77B8;
    case 490u: goto L_088D77C8;
    case 491u: goto L_088D77E4;
    case 492u: goto L_088D77EC;
    case 493u: goto L_088D77F8;
    case 494u: goto L_088D7810;
    case 495u: goto L_088D7854;
    case 496u: goto L_088D789C;
    case 497u: goto L_088D78D0;
    case 498u: goto L_088D78DC;
    case 499u: goto L_088D78E4;
    case 500u: goto L_088D78EC;
    case 501u: goto L_088D78FC;
    case 502u: goto L_088D7910;
    case 503u: goto L_088D7920;
    case 504u: goto L_088D7938;
    case 505u: goto L_088D7940;
    case 506u: goto L_088D7948;
    case 507u: goto L_088D795C;
    case 508u: goto L_088D7968;
    case 509u: goto L_088D79A8;
    case 510u: goto L_088D79B0;
    case 511u: goto L_088D79B8;
    case 512u: goto L_088D79F4;
    case 513u: goto L_088D7A08;
    case 514u: goto L_088D7A10;
    case 515u: goto L_088D7A20;
    case 516u: goto L_088D7A5C;
    case 517u: goto L_088D7A64;
    case 518u: goto L_088D7A6C;
    case 519u: goto L_088D7A70;
    case 520u: goto L_088D7A84;
    case 521u: goto L_088D7A94;
    case 522u: goto L_088D7AB4;
    case 523u: goto L_088D7AC0;
    case 524u: goto L_088D7AF4;
    case 525u: goto L_088D7AFC;
    case 526u: goto L_088D7B08;
    case 527u: goto L_088D7B0C;
    case 528u: goto L_088D7B18;
    case 529u: goto L_088D7B3C;
    case 530u: goto L_088D7B68;
    case 531u: goto L_088D7B78;
    case 532u: goto L_088D7B80;
    case 533u: goto L_088D7B88;
    case 534u: goto L_088D7B94;
    case 535u: goto L_088D7BA4;
    case 536u: goto L_088D7BB8;
    case 537u: goto L_088D7BC8;
    case 538u: goto L_088D7BD0;
    case 539u: goto L_088D7BD8;
    case 540u: goto L_088D7BE4;
    case 541u: goto L_088D7BEC;
    case 542u: goto L_088D7BF4;
    case 543u: goto L_088D7C04;
    case 544u: goto L_088D7C0C;
    case 545u: goto L_088D7C1C;
    case 546u: goto L_088D7C28;
    case 547u: goto L_088D7C38;
    case 548u: goto L_088D7C48;
    case 549u: goto L_088D7C58;
    case 550u: goto L_088D7C68;
    case 551u: goto L_088D7C70;
    case 552u: goto L_088D7C78;
    case 553u: goto L_088D7C88;
    case 554u: goto L_088D7C90;
    case 555u: goto L_088D7C98;
    case 556u: goto L_088D7CA0;
    case 557u: goto L_088D7CB8;
    case 558u: goto L_088D7CC8;
    case 559u: goto L_088D7CD0;
    case 560u: goto L_088D7CD8;
    case 561u: goto L_088D7CE8;
    case 562u: goto L_088D7CF0;
    case 563u: goto L_088D7CF8;
    case 564u: goto L_088D7D04;
    case 565u: goto L_088D7D14;
    case 566u: goto L_088D7D1C;
    case 567u: goto L_088D7D24;
    case 568u: goto L_088D7D2C;
    case 569u: goto L_088D7D44;
    case 570u: goto L_088D7D54;
    case 571u: goto L_088D7D5C;
    case 572u: goto L_088D7D6C;
    case 573u: goto L_088D7D74;
    case 574u: goto L_088D7D84;
    case 575u: goto L_088D7D8C;
    case 576u: goto L_088D7D9C;
    case 577u: goto L_088D7DA4;
    case 578u: goto L_088D7DB4;
    case 579u: goto L_088D7DBC;
    case 580u: goto L_088D7DCC;
    case 581u: goto L_088D7DD4;
    case 582u: goto L_088D7DF0;
    case 583u: goto L_088D7DFC;
    case 584u: goto L_088D7E04;
    case 585u: goto L_088D7E0C;
    case 586u: goto L_088D7E14;
    case 587u: goto L_088D7E24;
    case 588u: goto L_088D7E2C;
    case 589u: goto L_088D7E3C;
    case 590u: goto L_088D7E44;
    case 591u: goto L_088D7E54;
    case 592u: goto L_088D7E5C;
    case 593u: goto L_088D7E6C;
    case 594u: goto L_088D7E74;
    case 595u: goto L_088D7E84;
    case 596u: goto L_088D7E8C;
    case 597u: goto L_088D7E98;
    case 598u: goto L_088D7EA4;
    case 599u: goto L_088D7EB0;
    case 600u: goto L_088D7EB8;
    case 601u: goto L_088D7EC0;
    case 602u: goto L_088D7ECC;
    case 603u: goto L_088D7ED4;
    case 604u: goto L_088D7EE4;
    case 605u: goto L_088D7EEC;
    case 606u: goto L_088D7EFC;
    case 607u: goto L_088D7F04;
    case 608u: goto L_088D7F10;
    case 609u: goto L_088D7F1C;
    case 610u: goto L_088D7F24;
    case 611u: goto L_088D7F2C;
    case 612u: goto L_088D7F38;
    case 613u: goto L_088D7F40;
    case 614u: goto L_088D7F50;
    case 615u: goto L_088D7F58;
    case 616u: goto L_088D7F68;
    case 617u: goto L_088D7F70;
    case 618u: goto L_088D7F7C;
    case 619u: goto L_088D7F88;
    case 620u: goto L_088D7F90;
    case 621u: goto L_088D7F98;
    case 622u: goto L_088D7FA4;
    case 623u: goto L_088D7FAC;
    case 624u: goto L_088D7FBC;
    case 625u: goto L_088D7FC4;
    case 626u: goto L_088D7FD4;
    case 627u: goto L_088D7FDC;
    case 628u: goto L_088D7FE8;
    case 629u: goto L_088D7FF4;
    case 630u: goto L_088D7FFC;
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
L_088D4000:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_088D4004;
L_088D4004:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(342)));
    ctx.gpr[6] = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (ctx.gpr[6] - aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    ctx.gpr[18] = (aot_gpr_5 + ctx.gpr[18]);
    ctx.gpr[6] = (aot_gpr_4 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6266)));
      if (branch_taken) {
          goto L_088D421C;
      }
      goto L_088D4030;
    }
L_088D4030:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19520)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D4048:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    aot_gpr_5 = (0u | 61u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
        goto L_088D4078;
    }
    goto L_088D4058;
L_088D4058:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26324)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (0u | 61u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(5999));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D408C;
      }
      goto L_088D4078;
    }
L_088D4078:
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    goto L_088D408C;
L_088D408C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D4094;
    }
L_088D4094:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(150));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D40B0;
    }
L_088D40B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    aot_gpr_5 = (0u | 66u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
        goto L_088D40DC;
    }
    goto L_088D40C0;
L_088D40C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26336)));
    aot_gpr_5 = (0u | 66u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6023));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D40F0;
      }
      goto L_088D40DC;
    }
L_088D40DC:
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    goto L_088D40F0;
L_088D40F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D40F8;
    }
L_088D40F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    aot_gpr_5 = (0u | 62u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
        goto L_088D4128;
    }
    goto L_088D4108;
L_088D4108:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26336)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (0u | 62u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6004));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D413C;
      }
      goto L_088D4128;
    }
L_088D4128:
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    goto L_088D413C;
L_088D413C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D4144;
    }
L_088D4144:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    ctx.gpr[6] = (0u | 63u);
    aot_gpr_4 = (ctx.hi);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[6];
      if (branch_taken) {
          goto L_088D4174;
      }
      goto L_088D4160;
    }
L_088D4160:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6009));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_5 = (0u | 63u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D4180;
      }
      goto L_088D4174;
    }
L_088D4174:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088D4180;
L_088D4180:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D4188;
    }
L_088D4188:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    aot_gpr_5 = (0u | 64u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
        goto L_088D41B8;
    }
    goto L_088D4198;
L_088D4198:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (0u | 64u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6014));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D41CC;
      }
      goto L_088D41B8;
    }
L_088D41B8:
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    goto L_088D41CC;
L_088D41CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D41D4;
    }
L_088D41D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    aot_gpr_5 = (0u | 65u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
        goto L_088D4200;
    }
    goto L_088D41E4;
L_088D41E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
    aot_gpr_5 = (0u | 65u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6019));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D4214;
      }
      goto L_088D4200;
    }
L_088D4200:
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    goto L_088D4214;
L_088D4214:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D4234;
      }
      goto L_088D421C;
    }
L_088D421C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    goto L_088D4234;
L_088D4234:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_31 = (0x088D4248u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D4248u) goto L_088D4248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D4248:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    aot_gpr_4 = (0u | 17u);
    { const std::uint32_t dividend = aot_gpr_16; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_31 = (0x088D4264u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D4264u) goto L_088D4264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D4264:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_2);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(352)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(344)));
        goto L_088D42A8;
    }
    goto L_088D4284;
L_088D4284:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    aot_gpr_31 = (0x088D4294u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D4294u) goto L_088D4294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D4294:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(344)));
    goto L_088D42A8;
L_088D42A8:
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    aot_gpr_4 = (0u | 5u);
      if (branch_taken) {
          goto L_088D42CC;
      }
      goto L_088D42B4;
    }
L_088D42B4:
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    aot_gpr_4 = (0u | 4u);
      if (branch_taken) {
          goto L_088D4324;
      }
      goto L_088D42BC;
    }
L_088D42BC:
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_088D42F4;
      }
      goto L_088D42C4;
    }
L_088D42C4:
    if (ctx.gpr[18] != aot_gpr_4) {
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
        goto L_088D4348;
    }
    goto L_088D42CC;
L_088D42CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (0u | 10u);
    ctx.gpr[6] = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    aot_gpr_4 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088D4344;
      }
      goto L_088D42F4;
    }
L_088D42F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (0u | 10u);
    ctx.gpr[6] = (aot_gpr_4 << 3u);
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 1u));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    aot_gpr_4 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088D4344;
      }
      goto L_088D4324;
    }
L_088D4324:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (0u | 10u);
    ctx.gpr[6] = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088D4344;
L_088D4344:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    goto L_088D4348;
L_088D4348:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 547u, 0x088D3298u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D4374;
    }
L_088D4374:
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 3u);
      if (branch_taken) {
          goto L_088D439C;
      }
      goto L_088D4390;
    }
L_088D4390:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088D43B0;
      }
      goto L_088D439C;
    }
L_088D439C:
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[26];
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    goto L_088D43B0;
L_088D43B0:
    ctx.gpr[7] = (aot_gpr_5 & 255u);
    if (ctx.gpr[7] != aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26336)));
        goto L_088D44C0;
    }
    goto L_088D43BC;
L_088D43BC:
    aot_gpr_5 = (aot_gpr_5 >> 8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D448C;
      }
      goto L_088D43D0;
    }
L_088D43D0:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19392)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D43E8:
    aot_gpr_4 = (0u | 51u);
    { const bool branch_taken = ctx.gpr[6] != aot_gpr_4;
      if (branch_taken) {
          goto L_088D4404;
      }
      goto L_088D43F4;
    }
L_088D43F4:
    aot_gpr_4 = (0u | 232u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 232u);
      if (branch_taken) {
          goto L_088D4410;
      }
      goto L_088D4404;
    }
L_088D4404:
    aot_gpr_4 = (0u | 233u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 233u);
    goto L_088D4410;
L_088D4410:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x088D4420u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D4420u) goto L_088D4420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D4420:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (aot_gpr_16 >> 5u);
    aot_gpr_31 = (0x088D4434u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D4434u) goto L_088D4434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D4434:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_2);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_4);
    ctx.gpr[19] = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23679)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D4504;
      }
      goto L_088D4448;
    }
L_088D4448:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_4 & 1u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(214));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_31 = (0x088D4464u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D4464u) goto L_088D4464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D4464:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (aot_gpr_16 >> 5u);
    aot_gpr_31 = (0x088D4478u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D4478u) goto L_088D4478;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D4478:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_2);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_4);
    ctx.gpr[19] = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23679)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D4504;
      }
      goto L_088D448C;
    }
L_088D448C:
    aot_gpr_4 = (0u | 14u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D44A4u);
    aot_gpr_5 = (0u | 2000u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D44A4u) goto L_088D44A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D44A4:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(22000));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[19] = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23679)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D4504;
      }
      goto L_088D44C0;
    }
L_088D44C0:
    aot_gpr_5 = (0u | 6u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(119));
    aot_gpr_31 = (0x088D44E0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D44E0u) goto L_088D44E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D44E0:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (aot_gpr_16 >> 4u);
    aot_gpr_31 = (0x088D44F4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D44F4u) goto L_088D44F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D44F4:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_2);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_4);
    ctx.gpr[19] = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23679)));
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088D4504;
L_088D4504:
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26328)));
    aot_gpr_5 = (0u | 20u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17505u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 547u, 0x088D3298u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D4568;
    }
L_088D4568:
    aot_gpr_5 = (0u | 186u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    aot_gpr_5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D45AC;
    }
L_088D45AC:
    aot_gpr_5 = (0u | 186u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    aot_gpr_5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D45F0;
    }
L_088D45F0:
    aot_gpr_5 = (0u | 186u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    aot_gpr_5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D4634;
    }
L_088D4634:
    aot_gpr_5 = (0u | 187u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    aot_gpr_5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D4678;
    }
L_088D4678:
    aot_gpr_5 = (0u | 187u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    aot_gpr_5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D46BC;
    }
L_088D46BC:
    aot_gpr_5 = (0u | 187u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    aot_gpr_5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D4700;
    }
L_088D4700:
    aot_gpr_5 = (0u | 188u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    aot_gpr_5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D4744;
    }
L_088D4744:
    aot_gpr_5 = (0u | 188u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    aot_gpr_5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D4788;
    }
L_088D4788:
    aot_gpr_5 = (0u | 188u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    aot_gpr_5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D47CC;
    }
L_088D47CC:
    aot_gpr_5 = (0u | 189u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    aot_gpr_5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088D4850;
      }
      goto L_088D4810;
    }
L_088D4810:
    aot_gpr_5 = (0u | 189u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    aot_gpr_5 = (17505u << 16u);
    ctx.gpr[21] = (0u | 3u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (0u | 3u);
    ctx.gpr[18] = (0u | 26u);
    goto L_088D4850;
L_088D4850:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[26];
        goto L_088D486C;
    }
    goto L_088D4860;
L_088D4860:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088D487C;
      }
      goto L_088D486C;
    }
L_088D486C:
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[6] + aot_gpr_5);
    goto L_088D487C;
L_088D487C:
    ctx.gpr[6] = (aot_gpr_5 & 255u);
    if (ctx.gpr[6] != aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26336)));
        goto L_088D48AC;
    }
    goto L_088D4888;
L_088D4888:
    aot_gpr_4 = (aot_gpr_5 >> 8u);
    aot_gpr_5 = (0u | 1u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
        goto L_088D48E8;
    }
    goto L_088D4898;
L_088D4898:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(214));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D48E4;
      }
      goto L_088D48AC;
    }
L_088D48AC:
    aot_gpr_5 = (0u | 6u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(119));
    aot_gpr_31 = (0x088D48C8u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D48C8u) goto L_088D48C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D48C8:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[19] >> 4u);
    aot_gpr_31 = (0x088D48DCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D48DCu) goto L_088D48DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D48DC:
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_2);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088D48E4;
L_088D48E4:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088D48E8;
L_088D48E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23679)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), aot_gpr_16);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(aot_gpr_16));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_4 = (ctx.hi);
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 547u, 0x088D3298u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D4934;
    }
L_088D4934:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    goto L_088D493C;
L_088D493C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0051_entry, 51u, 533u, 0x088D3118u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D4948;
    }
L_088D4948:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088D496C;
      }
      goto L_088D4954;
    }
L_088D4954:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23679)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 61 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088D496C;
      }
      goto L_088D4964;
    }
L_088D4964:
    aot_gpr_5 = (0u | 21u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_088D496C;
L_088D496C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088D4AB0;
      }
      goto L_088D4980;
    }
L_088D4980:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088D498Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D498Cu) goto L_088D498C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D498C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D49A0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D49A0u) goto L_088D49A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D49A0:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088D4AB0;
      }
      goto L_088D49B0;
    }
L_088D49B0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr_16 = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088D4A00;
      }
      goto L_088D49C0;
    }
L_088D49C0:
    aot_gpr_4 = (15948u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088D49F8;
      }
      goto L_088D49E8;
    }
L_088D49E8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D4A00;
      }
      goto L_088D49F8;
    }
L_088D49F8:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088D4A00;
L_088D4A00:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D4A0Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D4A0Cu) goto L_088D4A0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D4A0C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D4AB0;
      }
      goto L_088D4A18;
    }
L_088D4A18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u | 127u);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (aot_gpr_4 << 6u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[7] - aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[20] + ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6266)));
    aot_gpr_5 = (0u | 55u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23679)));
        goto L_088D4A80;
    }
    goto L_088D4A58;
L_088D4A58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 33u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(368)));
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23679)));
        goto L_088D4A80;
    }
    goto L_088D4A70;
L_088D4A70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_4);
      if (branch_taken) {
          goto L_088D4AA4;
      }
      goto L_088D4A80;
    }
L_088D4A80:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23679)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 61 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088D4AA4;
      }
      goto L_088D4A9C;
    }
L_088D4A9C:
    aot_gpr_4 = (0u | 21u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23679), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088D4AA4;
L_088D4AA4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D4AB0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D4AB0u) goto L_088D4AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D4AB0:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
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
      ctx.gpr[30] = aot_run_words[12];
      aot_gpr_31 = aot_run_words[13];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D4AF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (ctx.gpr[6] << 6u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[8] = (aot_gpr_4 + ctx.gpr[8]);
    aot_mem.aot_direct_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(116), aot_run_words); }
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(136), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), aot_gpr_5);
      if (branch_taken) {
          goto L_088D7854;
      }
      goto L_088D4B70;
    }
L_088D4B70:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-23664));
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-23656));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_28 + static_cast<std::uint32_t>(-23648));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-23640));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-23632));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_28 + static_cast<std::uint32_t>(-23624));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-23616));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-23608));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_28 + static_cast<std::uint32_t>(-23600));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-23592));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-23584));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_28 + static_cast<std::uint32_t>(-23576));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-23568));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (20224u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17174u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_4 = (17761u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
    aot_gpr_4 = (17505u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_28 + static_cast<std::uint32_t>(7696));
    aot_gpr_4 = (17136u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (18017u << 16u);
    ctx.gpr[30] = (0u | 3u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[24] = (0u | 209u);
    ctx.gpr[15] = (0u | 186u);
    ctx.gpr[3] = (0u | 18000u);
    aot_gpr_2 = (0u | 16500u);
    ctx.gpr[11] = (0u | 20000u);
    ctx.gpr[14] = (0u | 187u);
    ctx.gpr[13] = (0u | 188u);
    ctx.gpr[12] = (0u | 189u);
    ctx.gpr[23] = (aot_gpr_28 + static_cast<std::uint32_t>(-23672));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), aot_gpr_5);
    ctx.gpr[25] = (32768u << 16u);
    goto L_088D4C54;
L_088D4C54:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (16256u << 16u);
    ctx.gpr[17] = (aot_gpr_4 << 2u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6292)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[13];
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), aot_gpr_4);
    ctx.gpr[10] = (ctx.gpr[8] + aot_gpr_4);
    ctx.gpr[10] = (aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(6266)));
    aot_gpr_4 = (ctx.gpr[10] + static_cast<std::uint32_t>(-24));
    ctx.gpr[6] = (aot_gpr_4 < static_cast<std::uint32_t>(213) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088D7624;
      }
      goto L_088D4CA0;
    }
L_088D4CA0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19352)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D4CB8:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
    aot_gpr_4 = (17480u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17442u << 16u);
      if (branch_taken) {
          goto L_088D4CDC;
      }
      goto L_088D4CD4;
    }
L_088D4CD4:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6276), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
    goto L_088D4CDC;
L_088D4CDC:
    aot_fpr_15 = aot_fpr_14 - ctx.fpr[16];
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = aot_fpr_15 / aot_fpr_12;
    aot_gpr_4 = (0u | 320u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_gpr_5 = (17786u << 16u);
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (18076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = aot_fpr_12 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088D4D44;
      }
      goto L_088D4D38;
    }
L_088D4D38:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088D4D54;
      }
      goto L_088D4D44;
    }
L_088D4D44:
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[24];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[25]);
    goto L_088D4D54;
L_088D4D54:
    aot_gpr_5 = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 5u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_5);
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D4DAC;
    }
L_088D4DAC:
    aot_gpr_4 = (0u | 174u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_gpr_5 = (0u | 14000u);
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (0u | 60u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (18010u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), 0u);
    aot_gpr_5 = (aot_gpr_5 | 49152u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 14000u);
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D4E28;
    }
L_088D4E28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x088D4E34u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D4E34u) goto L_088D4E34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D4E34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[8] = (aot_gpr_5 - aot_gpr_4);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
      if (branch_taken) {
          goto L_088D4E54;
      }
      goto L_088D4E4C;
    }
L_088D4E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D4E54;
    }
L_088D4E54:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088D4E70;
      }
      goto L_088D4E68;
    }
L_088D4E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D4E70;
    }
L_088D4E70:
    aot_gpr_4 = (ctx.gpr[8] + ctx.gpr[17]);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088D4EF0;
      }
      goto L_088D4E88;
    }
L_088D4E88:
    ctx.gpr[6] = (16256u << 16u);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_15)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (17076u << 16u);
        goto L_088D4EB4;
    }
    goto L_088D4EA0;
L_088D4EA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6276), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (17076u << 16u);
    goto L_088D4EB4;
L_088D4EB4:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < -967 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 205 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D4EF8;
      }
      goto L_088D4EDC;
    }
L_088D4EDC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < -969 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D4F68;
      }
      goto L_088D4EE8;
    }
L_088D4EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D4EF0;
    }
L_088D4EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D4EF8;
    }
L_088D4EF8:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 233 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D4EE8;
      }
      goto L_088D4F00;
    }
L_088D4F00:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-205));
      if (branch_taken) {
          goto L_088D4EE8;
      }
      goto L_088D4F08;
    }
L_088D4F08:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-18496)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D4F20:
    aot_gpr_4 = (0u | 5932u);
    aot_gpr_5 = (0u | 20u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 5932u);
      if (branch_taken) {
          goto L_088D4F7C;
      }
      goto L_088D4F38;
    }
L_088D4F38:
    aot_gpr_4 = (0u | 5944u);
    aot_gpr_5 = (0u | 23u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 5944u);
      if (branch_taken) {
          goto L_088D4F7C;
      }
      goto L_088D4F50;
    }
L_088D4F50:
    aot_gpr_4 = (0u | 5940u);
    aot_gpr_5 = (0u | 22u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 5940u);
      if (branch_taken) {
          goto L_088D4F7C;
      }
      goto L_088D4F68;
    }
L_088D4F68:
    aot_gpr_4 = (0u | 5936u);
    aot_gpr_5 = (0u | 21u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (0u | 5936u);
    goto L_088D4F7C;
L_088D4F7C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 71u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_31 = (0x088D4F90u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D4F90u) goto L_088D4F90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D4F90:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17249u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D4FE0;
    }
L_088D4FE0:
    aot_gpr_4 = (0u | 247u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 68u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D5000u);
    aot_gpr_5 = (0u | 247u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5000u) goto L_088D5000;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5000:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (17174u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (18095u << 16u);
    aot_gpr_4 = (0u | 127u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | 51200u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D5060;
    }
L_088D5060:
    aot_gpr_4 = (0u | 246u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 69u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (17150u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[6] = (0u | 18569u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_gpr_5 = (16448u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (18095u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (aot_gpr_4 | 51200u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (18065u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_gpr_5 = (aot_gpr_5 | 4608u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 18569u);
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D50E8;
    }
L_088D50E8:
    aot_gpr_4 = (0u | 248u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D5114u);
    aot_gpr_5 = (0u | 248u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5114u) goto L_088D5114;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5114:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_gpr_4 = (17174u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (18095u << 16u);
    aot_gpr_4 = (0u | 127u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | 51200u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D5168;
    }
L_088D5168:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[24]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (0u | 209u);
    aot_gpr_31 = (0x088D5180u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5180u) goto L_088D5180;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5180:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_4 = (17096u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (17948u << 16u);
    aot_gpr_4 = (0u | 127u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D51D4;
    }
L_088D51D4:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26332)));
      if (branch_taken) {
          goto L_088D51F8;
      }
      goto L_088D51E8;
    }
L_088D51E8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
      if (branch_taken) {
          goto L_088D520C;
      }
      goto L_088D51F8;
    }
L_088D51F8:
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[24];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (aot_gpr_4 + ctx.gpr[25]);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    goto L_088D520C;
L_088D520C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[24];
        goto L_088D522C;
    }
    goto L_088D521C;
L_088D521C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 >> 8u);
      if (branch_taken) {
          goto L_088D523C;
      }
      goto L_088D522C;
    }
L_088D522C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[25]);
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    goto L_088D523C;
L_088D523C:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(311));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26324)));
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_5);
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
    ctx.gpr[7] = (0u | 2u);
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17000));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088D529C;
      }
      goto L_088D528C;
    }
L_088D528C:
    ctx.gpr[6] = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 >> 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088D529C;
L_088D529C:
    ctx.gpr[6] = (0u | 20u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[7] = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[6] = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[6] = (17352u << 16u);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (0u | 127u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(70));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D531C;
    }
L_088D531C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (aot_gpr_5 & 4096u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088D533C;
      }
      goto L_088D5334;
    }
L_088D5334:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D533C;
    }
L_088D533C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26332)));
    ctx.gpr[6] = (0u | 20u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (0u | 19u);
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(311)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[6];
      if (branch_taken) {
          goto L_088D53AC;
      }
      goto L_088D5368;
    }
L_088D5368:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(27028)));
    ctx.gpr[6] = (0u | 65u);
    if (aot_gpr_5 != ctx.gpr[6]) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
        goto L_088D5390;
    }
    goto L_088D5378;
L_088D5378:
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6019));
    aot_gpr_5 = (0u | 65u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D53D8;
      }
      goto L_088D5390;
    }
L_088D5390:
    aot_gpr_4 = (0u | 5u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D53D8;
      }
      goto L_088D53AC;
    }
L_088D53AC:
    aot_gpr_4 = (0u | 35u);
    { const bool branch_taken = ctx.gpr[10] != aot_gpr_4;
      if (branch_taken) {
          goto L_088D53C8;
      }
      goto L_088D53B8;
    }
L_088D53B8:
    aot_gpr_4 = (0u | 26u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 26u);
      if (branch_taken) {
          goto L_088D53D4;
      }
      goto L_088D53C8;
    }
L_088D53C8:
    aot_gpr_4 = (0u | 27u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 27u);
    goto L_088D53D4;
L_088D53D4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088D53D8;
L_088D53D8:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 17u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_gpr_31 = (0x088D53F0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D53F0u) goto L_088D53F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D53F0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const std::uint32_t dividend = ctx.gpr[20]; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_31 = (0x088D5408u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5408u) goto L_088D5408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5408:
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_2);
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D5450;
    }
L_088D5450:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26332)));
        goto L_088D5470;
    }
    goto L_088D5468;
L_088D5468:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D5470;
    }
L_088D5470:
    aot_gpr_4 = (0u | 15u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x088D5488u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5488u) goto L_088D5488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5488:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[6] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6260)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6266)));
    { const bool branch_taken = aot_gpr_2 == ctx.gpr[6];
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088D54C0;
      }
      goto L_088D54B4;
    }
L_088D54B4:
    ctx.gpr[6] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088D54C0;
L_088D54C0:
    ctx.gpr[6] = (17352u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(311)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (aot_gpr_4 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[9] = (0u | 5u);
      if (branch_taken) {
          goto L_088D56E0;
      }
      goto L_088D54E0;
    }
L_088D54E0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-18384)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D54F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(27028)));
    ctx.gpr[6] = (0u | 61u);
    if (aot_gpr_4 != ctx.gpr[6]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
        goto L_088D5528;
    }
    goto L_088D5508;
L_088D5508:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26324)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (0u | 61u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(5999));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D553C;
      }
      goto L_088D5528;
    }
L_088D5528:
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    goto L_088D553C;
L_088D553C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D5544;
    }
L_088D5544:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(150));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D5560;
    }
L_088D5560:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(27028)));
    ctx.gpr[6] = (0u | 66u);
    if (aot_gpr_4 != ctx.gpr[6]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
        goto L_088D558C;
    }
    goto L_088D5570;
L_088D5570:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26336)));
    ctx.gpr[6] = (0u | 66u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6023));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088D55A0;
      }
      goto L_088D558C;
    }
L_088D558C:
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    goto L_088D55A0;
L_088D55A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D55A8;
    }
L_088D55A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(27028)));
    ctx.gpr[6] = (0u | 62u);
    if (aot_gpr_4 != ctx.gpr[6]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
        goto L_088D55D8;
    }
    goto L_088D55B8;
L_088D55B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26336)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (0u | 62u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6004));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D55EC;
      }
      goto L_088D55D8;
    }
L_088D55D8:
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    goto L_088D55EC;
L_088D55EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D55F4;
    }
L_088D55F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(27028)));
    ctx.gpr[7] = (0u | 63u);
    aot_gpr_4 = (ctx.hi);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
      if (branch_taken) {
          goto L_088D5624;
      }
      goto L_088D5610;
    }
L_088D5610:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6009));
    ctx.gpr[6] = (0u | 63u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088D5630;
      }
      goto L_088D5624;
    }
L_088D5624:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088D5630;
L_088D5630:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D5638;
    }
L_088D5638:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(27028)));
    ctx.gpr[6] = (0u | 64u);
    if (aot_gpr_4 != ctx.gpr[6]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
        goto L_088D5668;
    }
    goto L_088D5648;
L_088D5648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (0u | 64u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6014));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D567C;
      }
      goto L_088D5668;
    }
L_088D5668:
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    goto L_088D567C;
L_088D567C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D5684;
    }
L_088D5684:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26332)));
    ctx.gpr[6] = (0u | 15u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(27028)));
    ctx.gpr[7] = (0u | 65u);
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(30));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_088D56C0;
      }
      goto L_088D56A8;
    }
L_088D56A8:
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6019));
    ctx.gpr[6] = (0u | 65u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088D56D8;
      }
      goto L_088D56C0;
    }
L_088D56C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    goto L_088D56D8;
L_088D56D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D56FC;
      }
      goto L_088D56E0;
    }
L_088D56E0:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
    aot_gpr_4 = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(195));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    goto L_088D56FC;
L_088D56FC:
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D5718u);
    aot_gpr_5 = (ctx.gpr[6] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5718u) goto L_088D5718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5718:
    aot_gpr_4 = (0u | 17u);
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const std::uint32_t dividend = ctx.gpr[20]; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_31 = (0x088D5734u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5734u) goto L_088D5734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5734:
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2244)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[9] = (0u | 5u);
    ctx.gpr[10] = (0u | 10u);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[6];
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088D577C;
      }
      goto L_088D5760;
    }
L_088D5760:
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_088D57CC;
      }
      goto L_088D576C;
    }
L_088D576C:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[6];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_088D57A0;
      }
      goto L_088D5774;
    }
L_088D5774:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[6];
      if (branch_taken) {
          goto L_088D57E4;
      }
      goto L_088D577C;
    }
L_088D577C:
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[10]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088D57E4;
      }
      goto L_088D57A0;
    }
L_088D57A0:
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[10]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088D57E4;
      }
      goto L_088D57CC;
    }
L_088D57CC:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[10]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_088D57E4;
L_088D57E4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (16800u << 16u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D5814;
    }
L_088D5814:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[10] = (0u | 319u);
      if (branch_taken) {
          goto L_088D5834;
      }
      goto L_088D5828;
    }
L_088D5828:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088D5844;
      }
      goto L_088D5834;
    }
L_088D5834:
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[24];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[25]);
    goto L_088D5844;
L_088D5844:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-22));
    ctx.gpr[6] = (aot_gpr_4 < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_088D58A0;
      }
      goto L_088D5854;
    }
L_088D5854:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-18256)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D586C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088D58A8;
      }
      goto L_088D5874;
    }
L_088D5874:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088D58A8;
      }
      goto L_088D587C;
    }
L_088D587C:
    aot_gpr_4 = (0u | 339u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D58A8;
      }
      goto L_088D5888;
    }
L_088D5888:
    aot_gpr_4 = (0u | 329u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D58A8;
      }
      goto L_088D5894;
    }
L_088D5894:
    aot_gpr_4 = (0u | 303u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D58A8;
      }
      goto L_088D58A0;
    }
L_088D58A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D58A8;
    }
L_088D58A8:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-24));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088D594C;
      }
      goto L_088D58D0;
    }
L_088D58D0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-18192)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D58E8:
    aot_gpr_4 = (0u | 26000u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    ctx.gpr[17] = (0u | 26000u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1625u);
      if (branch_taken) {
          goto L_088D5964;
      }
      goto L_088D58FC;
    }
L_088D58FC:
    aot_gpr_4 = (0u | 13000u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    ctx.gpr[17] = (0u | 13000u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 812u);
      if (branch_taken) {
          goto L_088D5964;
      }
      goto L_088D5910;
    }
L_088D5910:
    aot_gpr_4 = (0u | 15600u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    ctx.gpr[17] = (0u | 15600u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 975u);
      if (branch_taken) {
          goto L_088D5964;
      }
      goto L_088D5924;
    }
L_088D5924:
    aot_gpr_4 = (0u | 7904u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    ctx.gpr[17] = (0u | 7904u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 494u);
      if (branch_taken) {
          goto L_088D5964;
      }
      goto L_088D5938;
    }
L_088D5938:
    aot_gpr_4 = (0u | 9959u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    ctx.gpr[17] = (0u | 9959u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 622u);
      if (branch_taken) {
          goto L_088D5964;
      }
      goto L_088D594C;
    }
L_088D594C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_gpr_31 = (0x088D5958u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5958u) goto L_088D5958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5958:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_4 = (ctx.gpr[17] >> 4u);
    goto L_088D5964;
L_088D5964:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088D5970u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5970u) goto L_088D5970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5970:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26336)));
    aot_gpr_4 = (0u | 10u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D59C4;
    }
L_088D59C4:
    aot_gpr_4 = (0u | 193u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_31 = (0x088D59ECu);
    aot_gpr_5 = (0u | 193u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D59ECu) goto L_088D59EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D59EC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[17] >> 4u);
    aot_gpr_31 = (0x088D5A00u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5A00u) goto L_088D5A00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5A00:
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_2);
    aot_gpr_5 = (16512u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_gpr_5 = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (0u | 85u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D5A58;
    }
L_088D5A58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (0u | 10u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[11] = (0u | 15u);
    ctx.gpr[6] = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[6] - aot_gpr_5);
    ctx.gpr[12] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1396));
    aot_gpr_2 = (0u | 301u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[3] = (0u | 327u);
      if (branch_taken) {
          goto L_088D5A94;
      }
      goto L_088D5A8C;
    }
L_088D5A8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D5A94;
    }
L_088D5A94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-18));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
      if (branch_taken) {
          goto L_088D631C;
      }
      goto L_088D5AA8;
    }
L_088D5AA8:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-18160)));
    jump_target = ctx.gpr[1];
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D5AC0:
    aot_gpr_4 = (0u | 284u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D5AF0u);
    aot_gpr_5 = (0u | 284u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5AF0u) goto L_088D5AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5AF0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[17] >> 5u);
    aot_gpr_31 = (0x088D5B04u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5B04u) goto L_088D5B04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5B04:
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 127u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088D5B48;
L_088D5B48:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D5B50;
    }
L_088D5B50:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_gpr_4 = (0u | 110u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D5B88u);
    aot_gpr_5 = (0u | 110u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5B88u) goto L_088D5B88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5B88:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[20] >> 5u);
    aot_gpr_31 = (0x088D5B9Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5B9Cu) goto L_088D5B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5B9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26324)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(105));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5BF4;
    }
L_088D5BF4:
    aot_gpr_4 = (0u | 298u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D5C24u);
    aot_gpr_5 = (0u | 298u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5C24u) goto L_088D5C24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5C24:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[17] >> 5u);
    aot_gpr_31 = (0x088D5C38u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5C38u) goto L_088D5C38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5C38:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26320)));
    aot_gpr_4 = (0u | 20u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5C90;
    }
L_088D5C90:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_gpr_4 = (0u | 191u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 9u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[17] = (0u | 105u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D5CB8u);
    aot_gpr_5 = (0u | 191u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5CB8u) goto L_088D5CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5CB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 2047u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    aot_gpr_5 = (16512u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_gpr_5 = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 6u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5D24;
    }
L_088D5D24:
    aot_gpr_4 = (0u | 236u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D5D54u);
    aot_gpr_5 = (0u | 236u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5D54u) goto L_088D5D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5D54:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[17] >> 5u);
    aot_gpr_31 = (0x088D5D68u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5D68u) goto L_088D5D68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5D68:
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (0u | 127u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5DAC;
    }
L_088D5DAC:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_gpr_4 = (0u | 253u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[11] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D5DE4u);
    aot_gpr_5 = (0u | 253u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5DE4u) goto L_088D5DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5DE4:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[20] >> 5u);
    aot_gpr_31 = (0x088D5DF8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5DF8u) goto L_088D5DF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5DF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(113));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5E4C;
    }
L_088D5E4C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[11] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D5E7Cu);
    aot_gpr_5 = (0u | 500u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5E7Cu) goto L_088D5E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5E7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(17000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(85));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5ECC;
    }
L_088D5ECC:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[17] = (0u | 34000u);
    ctx.gpr[20] = (ctx.gpr[11] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D5F04u);
    aot_gpr_5 = (0u | 1000u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5F04u) goto L_088D5F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5F04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (aot_gpr_2 + ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(85));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5F58;
    }
L_088D5F58:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_2);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[11] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D5F8Cu);
    aot_gpr_5 = (0u | 301u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5F8Cu) goto L_088D5F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5F8C:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[20] >> 5u);
    aot_gpr_31 = (0x088D5FA0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D5FA0u) goto L_088D5FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D5FA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(105));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D5FF4;
    }
L_088D5FF4:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_2);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[17] = (0u | 43150u);
    ctx.gpr[20] = (ctx.gpr[11] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D602Cu);
    aot_gpr_5 = (0u | 1000u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D602Cu) goto L_088D602C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D602C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (aot_gpr_2 + ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(105));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D6080;
    }
L_088D6080:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_gpr_4 = (0u | 340u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[11] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D60B8u);
    aot_gpr_5 = (0u | 340u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D60B8u) goto L_088D60B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D60B8:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[20] >> 5u);
    aot_gpr_31 = (0x088D60CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D60CCu) goto L_088D60CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D60CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26332)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(113));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D6120;
    }
L_088D6120:
    aot_gpr_4 = (0u | 314u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 30u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088D6168;
      }
      goto L_088D6154;
    }
L_088D6154:
    aot_gpr_4 = (0u | 25472u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    ctx.gpr[17] = (0u | 25472u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 796u);
      if (branch_taken) {
          goto L_088D6178;
      }
      goto L_088D6168;
    }
L_088D6168:
    aot_gpr_4 = (0u | 20182u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    ctx.gpr[17] = (0u | 20182u);
    aot_gpr_4 = (0u | 630u);
    goto L_088D6178;
L_088D6178:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088D6184u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6184u) goto L_088D6184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6184:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26336)));
    aot_gpr_4 = (0u | 10u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D61DC;
    }
L_088D61DC:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_gpr_4 = (0u | 317u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D6210u);
    aot_gpr_5 = (0u | 317u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6210u) goto L_088D6210;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6210:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[20] >> 5u);
    aot_gpr_31 = (0x088D6224u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6224u) goto L_088D6224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6224:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(115));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D627C;
    }
L_088D627C:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_gpr_4 = (0u | 308u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D62B0u);
    aot_gpr_5 = (0u | 308u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D62B0u) goto L_088D62B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D62B0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[20] >> 5u);
    aot_gpr_31 = (0x088D62C4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D62C4u) goto L_088D62C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D62C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(115));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088D5B48;
      }
      goto L_088D631C;
    }
L_088D631C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D6324;
    }
L_088D6324:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
    ctx.gpr[10] = (0u | 75u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[11] = (0u | 2u);
      if (branch_taken) {
          goto L_088D6348;
      }
      goto L_088D633C;
    }
L_088D633C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088D6358;
      }
      goto L_088D6348;
    }
L_088D6348:
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[24];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[25]);
    goto L_088D6358;
L_088D6358:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-18));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088D64E8;
      }
      goto L_088D6368;
    }
L_088D6368:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-18080)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D6380:
    aot_gpr_4 = (0u | 269u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D63ACu);
    aot_gpr_5 = (0u | 269u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D63ACu) goto L_088D63AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D63AC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D63BCu);
    aot_gpr_5 = (0u | 300u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D63BCu) goto L_088D63BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D63BC:
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    goto L_088D63C4;
L_088D63C4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D63D0u);
    aot_gpr_5 = (0u | 300u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D63D0u) goto L_088D63D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D63D0:
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_5 = (0u | 5u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D641C;
    }
L_088D641C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[11]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 39243u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 39243u);
      if (branch_taken) {
          goto L_088D63C4;
      }
      goto L_088D6448;
    }
L_088D6448:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[11]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 30290u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 30290u);
      if (branch_taken) {
          goto L_088D63C4;
      }
      goto L_088D6474;
    }
L_088D6474:
    aot_gpr_4 = (0u | 299u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D64A0u);
    aot_gpr_5 = (0u | 299u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D64A0u) goto L_088D64A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D64A0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088D63C4;
      }
      goto L_088D64AC;
    }
L_088D64AC:
    aot_gpr_4 = (0u | 295u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_gpr_5 = (0u | 75u);
    ctx.gpr[6] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D64DCu);
    aot_gpr_5 = (0u | 295u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D64DCu) goto L_088D64DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D64DC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088D63C4;
      }
      goto L_088D64E8;
    }
L_088D64E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D64F0;
    }
L_088D64F0:
    aot_gpr_4 = (0u | 36u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D651Cu);
    aot_gpr_5 = (0u | 36u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D651Cu) goto L_088D651C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D651C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[17] >> 3u);
    aot_gpr_31 = (0x088D6530u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6530u) goto L_088D6530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6530:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26320)));
    aot_gpr_4 = (0u | 20u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_2);
    aot_gpr_5 = (0u | 7u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_gpr_5 = (16880u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(90));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D658C;
    }
L_088D658C:
    aot_gpr_31 = (0x088D6594u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6594u) goto L_088D6594;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6594:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088D65B8;
      }
      goto L_088D659C;
    }
L_088D659C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[8] = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D65B8;
    }
L_088D65B8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D65C4u);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D65C4u) goto L_088D65C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D65C4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088D65F4;
      }
      goto L_088D65CC;
    }
L_088D65CC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D65D8u);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D65D8u) goto L_088D65D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D65D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[8] = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D65F4;
    }
L_088D65F4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D6600u);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6600u) goto L_088D6600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6600:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u | 2u);
    ctx.gpr[6] = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[8] = (ctx.gpr[6] - aot_gpr_4);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_5;
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
      if (branch_taken) {
          goto L_088D6624;
      }
      goto L_088D661C;
    }
L_088D661C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D6624;
    }
L_088D6624:
    aot_gpr_4 = (ctx.gpr[8] + ctx.gpr[17]);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6276)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[24];
        goto L_088D6648;
    }
    goto L_088D663C;
L_088D663C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088D6658;
      }
      goto L_088D6648;
    }
L_088D6648:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088D6658;
L_088D6658:
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088D6690;
      }
      goto L_088D6664;
    }
L_088D6664:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (15800u << 16u);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] | 20972u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[7] = (0u | 6u);
    aot_gpr_5 = (ctx.gpr[6] | 0u);
    aot_gpr_31 = (0x088D6690u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0130_entry, 130u, 413u, 0x08A0E6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6690u) goto L_088D6690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6690:
    aot_gpr_4 = (0u | 5921u);
    aot_gpr_5 = (0u | 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 68u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[17] = (0u | 100u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D66B8u);
    aot_gpr_5 = (0u | 500u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D66B8u) goto L_088D66B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D66B8:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(22000));
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_gpr_5 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 5u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6710;
    }
L_088D6710:
    aot_gpr_31 = (0x088D6718u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6718u) goto L_088D6718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6718:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088D673C;
      }
      goto L_088D6720;
    }
L_088D6720:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[8] = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D673C;
    }
L_088D673C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D6748u);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6748u) goto L_088D6748;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6748:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088D6778;
      }
      goto L_088D6750;
    }
L_088D6750:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D675Cu);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D675Cu) goto L_088D675C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D675C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[8] = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D6778;
    }
L_088D6778:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D6784u);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6784u) goto L_088D6784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6784:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (0u | 5921u);
      if (branch_taken) {
          goto L_088D67AC;
      }
      goto L_088D6790;
    }
L_088D6790:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[8] = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D67AC;
    }
L_088D67AC:
    aot_gpr_5 = (0u | 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 68u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 27000u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (0u | 100u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (18130u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 | 61440u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 27000u);
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6824;
    }
L_088D6824:
    aot_gpr_31 = (0x088D682Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D682Cu) goto L_088D682C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D682C:
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_088D6850;
    }
    goto L_088D6834;
L_088D6834:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[8] = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D6850;
    }
L_088D6850:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D6888;
      }
      goto L_088D686C;
    }
L_088D686C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[8] = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D6888;
    }
L_088D6888:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D6894u);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6894u) goto L_088D6894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6894:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088D68C4;
      }
      goto L_088D689C;
    }
L_088D689C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D68A8u);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D68A8u) goto L_088D68A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D68A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[8] = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D68C4;
    }
L_088D68C4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D68D0u);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D68D0u) goto L_088D68D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D68D0:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (0u | 5920u);
      if (branch_taken) {
          goto L_088D68F8;
      }
      goto L_088D68DC;
    }
L_088D68DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[8] = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D68F8;
    }
L_088D68F8:
    aot_gpr_5 = (0u | 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 70u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 27000u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (17692u << 16u);
    aot_gpr_4 = (0u | 100u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (18130u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 | 61440u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 27000u);
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6974;
    }
L_088D6974:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[24];
        goto L_088D6994;
    }
    goto L_088D6988;
L_088D6988:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088D69A0;
      }
      goto L_088D6994;
    }
L_088D6994:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[25]);
    goto L_088D69A0;
L_088D69A0:
    aot_gpr_5 = (aot_gpr_4 & 255u);
    ctx.gpr[6] = (0u | 3u);
    if (aot_gpr_5 != ctx.gpr[6]) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26336)));
        goto L_088D6AB4;
    }
    goto L_088D69B0;
L_088D69B0:
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088D6A80;
      }
      goto L_088D69C4;
    }
L_088D69C4:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-18000)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D69DC:
    aot_gpr_4 = (0u | 51u);
    { const bool branch_taken = ctx.gpr[10] != aot_gpr_4;
      if (branch_taken) {
          goto L_088D69F8;
      }
      goto L_088D69E8;
    }
L_088D69E8:
    aot_gpr_4 = (0u | 232u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 232u);
      if (branch_taken) {
          goto L_088D6A04;
      }
      goto L_088D69F8;
    }
L_088D69F8:
    aot_gpr_4 = (0u | 233u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 233u);
    goto L_088D6A04;
L_088D6A04:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x088D6A14u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6A14u) goto L_088D6A14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6A14:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[17] >> 5u);
    aot_gpr_31 = (0x088D6A28u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6A28u) goto L_088D6A28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6A28:
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D6AF8;
      }
      goto L_088D6A3C;
    }
L_088D6A3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26332)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_4 & 1u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(214));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_31 = (0x088D6A58u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6A58u) goto L_088D6A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6A58:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[17] >> 5u);
    aot_gpr_31 = (0x088D6A6Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6A6Cu) goto L_088D6A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6A6C:
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D6AF8;
      }
      goto L_088D6A80;
    }
L_088D6A80:
    aot_gpr_4 = (0u | 14u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D6A98u);
    aot_gpr_5 = (0u | 2000u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6A98u) goto L_088D6A98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6A98:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(22000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D6AF8;
      }
      goto L_088D6AB4;
    }
L_088D6AB4:
    aot_gpr_4 = (0u | 6u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(119));
    aot_gpr_31 = (0x088D6AD4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6AD4u) goto L_088D6AD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6AD4:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[17] >> 4u);
    aot_gpr_31 = (0x088D6AE8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6AE8u) goto L_088D6AE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6AE8:
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_088D6AF8;
L_088D6AF8:
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
    aot_gpr_5 = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6B5C;
    }
L_088D6B5C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[15]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6B6C;
    }
L_088D6B6C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[15]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6B7C;
    }
L_088D6B7C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[15]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6B8C;
    }
L_088D6B8C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[14]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6B9C;
    }
L_088D6B9C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[14]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6BAC;
    }
L_088D6BAC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[14]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6BBC;
    }
L_088D6BBC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[13]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6BCC;
    }
L_088D6BCC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[13]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6BDC;
    }
L_088D6BDC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[13]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6BEC;
    }
L_088D6BEC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[12]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6BFC;
    }
L_088D6BFC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[12]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
      if (branch_taken) {
          goto L_088D6C18;
      }
      goto L_088D6C0C;
    }
L_088D6C0C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[12]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
    goto L_088D6C18;
L_088D6C18:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[24];
        goto L_088D6C34;
    }
    goto L_088D6C28;
L_088D6C28:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088D6C40;
      }
      goto L_088D6C34;
    }
L_088D6C34:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[25]);
    goto L_088D6C40;
L_088D6C40:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u | 3u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
        goto L_088D6C90;
    }
    goto L_088D6C50;
L_088D6C50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26336)));
    aot_gpr_4 = (0u | 6u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(119));
    aot_gpr_31 = (0x088D6C70u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6C70u) goto L_088D6C70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6C70:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[17] >> 4u);
    aot_gpr_31 = (0x088D6C84u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6C84u) goto L_088D6C84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6C84:
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088D6C90;
L_088D6C90:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26332)));
    aot_gpr_5 = (0u | 26u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6CFC;
    }
L_088D6CFC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 238u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6D18u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6D18u) goto L_088D6D18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6D18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6D30;
    }
L_088D6D30:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 239u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6D4Cu);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6D4Cu) goto L_088D6D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6D4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6D64;
    }
L_088D6D64:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 240u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6D80u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6D80u) goto L_088D6D80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6D80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6D98;
    }
L_088D6D98:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 241u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6DB4u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6DB4u) goto L_088D6DB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6DB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6DCC;
    }
L_088D6DCC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 242u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6DE8u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6DE8u) goto L_088D6DE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6DE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6E00;
    }
L_088D6E00:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 243u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6E1Cu);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6E1Cu) goto L_088D6E1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6E1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6E34;
    }
L_088D6E34:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 244u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6E50u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6E50u) goto L_088D6E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6E50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6E68;
    }
L_088D6E68:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 245u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6E84u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6E84u) goto L_088D6E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6E84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6E9C;
    }
L_088D6E9C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 178u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6EB8u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6EB8u) goto L_088D6EB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6EB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6ED0;
    }
L_088D6ED0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 179u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6EECu);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6EECu) goto L_088D6EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6EEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6F04;
    }
L_088D6F04:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 180u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6F20u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6F20u) goto L_088D6F20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6F20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6F38;
    }
L_088D6F38:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 181u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6F54u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6F54u) goto L_088D6F54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6F54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6F6C;
    }
L_088D6F6C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 182u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6F88u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6F88u) goto L_088D6F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6F88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6FA0;
    }
L_088D6FA0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 183u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6FBCu);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6FBCu) goto L_088D6FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6FBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D6FD4;
    }
L_088D6FD4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 184u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D6FF0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D6FF0u) goto L_088D6FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D6FF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7008;
    }
L_088D7008:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 185u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088D7024u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 392u, 0x088C5F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7024u) goto L_088D7024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7024:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D703C;
    }
L_088D703C:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 12u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 16500u);
    ctx.gpr[11] = (0u | 127u);
    aot_gpr_31 = (0x088D7068u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7068u) goto L_088D7068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7068:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7080;
    }
L_088D7080:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 13u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 16500u);
    ctx.gpr[11] = (0u | 127u);
    aot_gpr_31 = (0x088D70ACu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D70ACu) goto L_088D70AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D70AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D70C4;
    }
L_088D70C4:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 167u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 22000u);
    ctx.gpr[11] = (0u | 127u);
    aot_gpr_31 = (0x088D70F0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D70F0u) goto L_088D70F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D70F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7108;
    }
L_088D7108:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 230u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 22000u);
    ctx.gpr[11] = (0u | 127u);
    aot_gpr_31 = (0x088D7134u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7134u) goto L_088D7134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7134:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D714C;
    }
L_088D714C:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 231u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 22000u);
    ctx.gpr[11] = (0u | 127u);
    aot_gpr_31 = (0x088D7178u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7178u) goto L_088D7178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7178:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7190;
    }
L_088D7190:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 282u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 22000u);
    ctx.gpr[11] = (0u | 127u);
    aot_gpr_31 = (0x088D71BCu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D71BCu) goto L_088D71BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D71BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D71D4;
    }
L_088D71D4:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 283u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 20000u);
    ctx.gpr[11] = (0u | 127u);
    aot_gpr_31 = (0x088D7200u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7200u) goto L_088D7200;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7200:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7218;
    }
L_088D7218:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 323u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 22000u);
    ctx.gpr[11] = (0u | 127u);
    aot_gpr_31 = (0x088D7244u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7244u) goto L_088D7244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7244:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D725C;
    }
L_088D725C:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 342u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 18500u);
    ctx.gpr[11] = (0u | 127u);
    aot_gpr_31 = (0x088D7288u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7288u) goto L_088D7288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7288:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D72A0;
    }
L_088D72A0:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 255u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 22050u);
    ctx.gpr[11] = (0u | 127u);
    aot_gpr_31 = (0x088D72CCu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D72CCu) goto L_088D72CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D72CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D72E4;
    }
L_088D72E4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D72F0u);
    aot_gpr_5 = (0u | 233u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D72F0u) goto L_088D72F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D72F0:
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 233u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (aot_gpr_2 | 0u);
    ctx.gpr[11] = (0u | 127u);
    aot_gpr_31 = (0x088D731Cu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D731Cu) goto L_088D731C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D731C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7334;
    }
L_088D7334:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D7340u);
    aot_gpr_5 = (0u | 234u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7340u) goto L_088D7340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7340:
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 234u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (aot_gpr_2 | 0u);
    ctx.gpr[11] = (0u | 127u);
    aot_gpr_31 = (0x088D736Cu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D736Cu) goto L_088D736C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D736C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7384;
    }
L_088D7384:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088D7390u);
    aot_gpr_5 = (0u | 232u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7390u) goto L_088D7390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7390:
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 232u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (aot_gpr_2 | 0u);
    ctx.gpr[11] = (0u | 127u);
    aot_gpr_31 = (0x088D73BCu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 393u, 0x088C6004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D73BCu) goto L_088D73BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D73BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D73D4;
    }
L_088D73D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26344)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-23668)));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_088D7478;
      }
      goto L_088D73E8;
    }
L_088D73E8:
    aot_gpr_5 = (0u | 321u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-23668), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[17] = (0u | 30u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D741Cu);
    aot_gpr_5 = (0u | 1400u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D741Cu) goto L_088D741C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D741C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(20000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_gpr_5 = (16928u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (17608u << 16u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(70));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7478;
    }
L_088D7478:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D7480;
    }
L_088D7480:
    aot_gpr_4 = (0u | 266u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 48u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D74A0u);
    aot_gpr_5 = (0u | 6000u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D74A0u) goto L_088D74A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D74A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26336)));
    aot_gpr_4 = (0u | 20u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(16000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_5 = (16928u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (17608u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D74F4;
    }
L_088D74F4:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6276)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[24];
        goto L_088D7518;
    }
    goto L_088D7508;
L_088D7508:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] >> 8u);
      if (branch_taken) {
          goto L_088D7528;
      }
      goto L_088D7518;
    }
L_088D7518:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[25]);
    ctx.gpr[17] = (ctx.gpr[17] >> 8u);
    goto L_088D7528;
L_088D7528:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088D755C;
      }
      goto L_088D7538;
    }
L_088D7538:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17960)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D7550:
    aot_gpr_4 = (0u | 234u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088D7560;
      }
      goto L_088D755C;
    }
L_088D755C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[24]);
    goto L_088D7560;
L_088D7560:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_31 = (0x088D7588u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7588u) goto L_088D7588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7588:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[20] >> 4u);
    aot_gpr_31 = (0x088D759Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D759Cu) goto L_088D759C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D759C:
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_5 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088D75D8;
      }
      goto L_088D75CC;
    }
L_088D75CC:
    aot_gpr_5 = (0u | 1u);
    if (ctx.gpr[17] != aot_gpr_5) {
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26328)));
        goto L_088D75F4;
    }
    goto L_088D75D8;
L_088D75D8:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26324)));
    aot_gpr_5 = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(35));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088D7608;
      }
      goto L_088D75F4;
    }
L_088D75F4:
    aot_gpr_5 = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(70));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_088D7608;
L_088D7608:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088D7650;
      }
      goto L_088D7624;
    }
L_088D7624:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D7634u);
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    goto L_088D789C;
L_088D7634:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[8] = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088D7810;
      }
      goto L_088D7650;
    }
L_088D7650:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (20352u << 16u);
      if (branch_taken) {
          goto L_088D7660;
      }
      goto L_088D7658;
    }
L_088D7658:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + aot_fpr_12;
    goto L_088D7660;
L_088D7660:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr_14 = aot_fpr_14 / aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[24];
        goto L_088D7684;
    }
    goto L_088D7678;
L_088D7678:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088D7694;
      }
      goto L_088D7684;
    }
L_088D7684:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088D7694;
L_088D7694:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_088D76B4;
      }
      goto L_088D769C;
    }
L_088D769C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 61 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088D76B4;
      }
      goto L_088D76AC;
    }
L_088D76AC:
    aot_gpr_4 = (0u | 21u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088D76B4;
L_088D76B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088D77F8;
      }
      goto L_088D76D0;
    }
L_088D76D0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_31 = (0x088D76E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D76E0u) goto L_088D76E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D76E0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_31 = (0x088D76F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D76F4u) goto L_088D76F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D76F4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088D77F8;
      }
      goto L_088D7704;
    }
L_088D7704:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_088D7748;
      }
      goto L_088D7710;
    }
L_088D7710:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088D7740;
      }
      goto L_088D7734;
    }
L_088D7734:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D7748;
      }
      goto L_088D7740;
    }
L_088D7740:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088D7748;
L_088D7748:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088D7758u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7758u) goto L_088D7758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7758:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D77F8;
      }
      goto L_088D7764;
    }
L_088D7764:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u | 127u);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6266)));
    aot_gpr_5 = (0u | 55u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
        goto L_088D77C8;
    }
    goto L_088D77A4;
L_088D77A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (0u | 33u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
        goto L_088D77C8;
    }
    goto L_088D77B8;
L_088D77B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
      if (branch_taken) {
          goto L_088D77EC;
      }
      goto L_088D77C8;
    }
L_088D77C8:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-23672)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 61 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088D77EC;
      }
      goto L_088D77E4;
    }
L_088D77E4:
    aot_gpr_4 = (0u | 21u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-23672), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088D77EC;
L_088D77EC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D77F8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D77F8u) goto L_088D77F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D77F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[8] = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6308)));
    goto L_088D7810;
L_088D7810:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (0u | 20000u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    aot_mem.aot_direct_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (17174u << 16u);
    aot_gpr_2 = (0u | 16500u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[3] = (0u | 18000u);
    ctx.gpr[12] = (0u | 189u);
    ctx.gpr[13] = (0u | 188u);
    ctx.gpr[14] = (0u | 187u);
    ctx.gpr[15] = (0u | 186u);
    ctx.gpr[24] = (0u | 209u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[25] = (32768u << 16u);
      if (branch_taken) {
          goto L_088D4C54;
      }
      goto L_088D7854;
    }
L_088D7854:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(108), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
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
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D789C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(72), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088D78E4;
      }
      goto L_088D78D0;
    }
L_088D78D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088D78EC;
      }
      goto L_088D78DC;
    }
L_088D78DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D7948;
      }
      goto L_088D78E4;
    }
L_088D78E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D7B18;
      }
      goto L_088D78EC;
    }
L_088D78EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1972)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D7940;
      }
      goto L_088D78FC;
    }
L_088D78FC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(21540), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D7910u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_088D7B3C;
L_088D7910:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-16352)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6028));
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_gpr_2);
      if (branch_taken) {
          goto L_088D7938;
      }
      goto L_088D7920;
    }
L_088D7920:
    aot_gpr_4 = (17608u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 158u);
    aot_gpr_4 = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088D79F4;
      }
      goto L_088D7938;
    }
L_088D7938:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D7B18;
      }
      goto L_088D7940;
    }
L_088D7940:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D7B18;
      }
      goto L_088D7948;
    }
L_088D7948:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(21540), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 202 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 203 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D79B0;
      }
      goto L_088D795C;
    }
L_088D795C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 201 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088D79A8;
      }
      goto L_088D7968;
    }
L_088D7968:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u | 51u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (17608u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 158u);
    aot_gpr_4 = (16928u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2601));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_088D79F4;
      }
      goto L_088D79A8;
    }
L_088D79A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D7B18;
      }
      goto L_088D79B0;
    }
L_088D79B0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D79A8;
      }
      goto L_088D79B8;
    }
L_088D79B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u | 34u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (17608u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 158u);
    aot_gpr_4 = (16928u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1574));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_gpr_4);
    goto L_088D79F4;
L_088D79F4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[13] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088D7A10;
      }
      goto L_088D7A08;
    }
L_088D7A08:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
      if (branch_taken) {
          goto L_088D7B18;
      }
      goto L_088D7A10;
    }
L_088D7A10:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088D7A20u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7A20u) goto L_088D7A20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7A20:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(96));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x088D7A5Cu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7A5Cu) goto L_088D7A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7A5C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088D7A6C;
      }
      goto L_088D7A64;
    }
L_088D7A64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 127u);
      if (branch_taken) {
          goto L_088D7A70;
      }
      goto L_088D7A6C;
    }
L_088D7A6C:
    aot_gpr_4 = (0u | 31u);
    goto L_088D7A70;
L_088D7A70:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_31 = (0x088D7A84u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7A84u) goto L_088D7A84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7A84:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_4 = (0u | 10u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088D7AB4;
      }
      goto L_088D7A94;
    }
L_088D7A94:
    aot_gpr_4 = (0u | 127u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_088D7AB4;
L_088D7AB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088D7B18;
      }
      goto L_088D7AC0;
    }
L_088D7AC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 103 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 106 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7B08;
      }
      goto L_088D7AF4;
    }
L_088D7AF4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D7B08;
      }
      goto L_088D7AFC;
    }
L_088D7AFC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088D7B0C;
      }
      goto L_088D7B08;
    }
L_088D7B08:
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    goto L_088D7B0C;
L_088D7B0C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(21552));
    aot_gpr_31 = (0x088D7B18u);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 364u, 0x088C5CF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7B18u) goto L_088D7B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7B18:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(64), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D7B3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    ctx.gpr[7] = (0u | 45u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088D7B94;
      }
      goto L_088D7B68;
    }
L_088D7B68:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 103 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 106 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7B88;
      }
      goto L_088D7B78;
    }
L_088D7B78:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D7B88;
      }
      goto L_088D7B80;
    }
L_088D7B80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D7B94;
      }
      goto L_088D7B88;
    }
L_088D7B88:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7B94;
    }
L_088D7B94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1732)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088D7BB8;
      }
      goto L_088D7BA4;
    }
L_088D7BA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1732)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D7BE4;
      }
      goto L_088D7BB8;
    }
L_088D7BB8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 103 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 106 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7BD8;
      }
      goto L_088D7BC8;
    }
L_088D7BC8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D7BD8;
      }
      goto L_088D7BD0;
    }
L_088D7BD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088D7BE4;
      }
      goto L_088D7BD8;
    }
L_088D7BD8:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7BE4;
    }
L_088D7BE4:
    aot_gpr_31 = (0x088D7BECu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7BECu) goto L_088D7BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7BEC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088D7C0C;
      }
      goto L_088D7BF4;
    }
L_088D7BF4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7C04u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 25u, 0x088D8114u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7C04u) goto L_088D7C04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7C04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7C0C;
    }
L_088D7C0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2280)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088D7C38;
      }
      goto L_088D7C1C;
    }
L_088D7C1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2280)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D7C38;
      }
      goto L_088D7C28;
    }
L_088D7C28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088D7C78;
      }
      goto L_088D7C38;
    }
L_088D7C38:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7C48u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 572u, 0x0885E4C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7C48u) goto L_088D7C48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7C48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-16352)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6028));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_088D7C70;
      }
      goto L_088D7C58;
    }
L_088D7C58:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 95 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7C90;
      }
      goto L_088D7C68;
    }
L_088D7C68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 97 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7CF0;
      }
      goto L_088D7C70;
    }
L_088D7C70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7C78;
    }
L_088D7C78:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7C88u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 223u, 0x088C9358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7C88u) goto L_088D7C88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7C88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7C90;
    }
L_088D7C90:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 76u);
      if (branch_taken) {
          goto L_088D7CD0;
      }
      goto L_088D7C98;
    }
L_088D7C98:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088D7CB8;
      }
      goto L_088D7CA0;
    }
L_088D7CA0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17920)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D7CB8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7CC8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7CC8u) goto L_088D7CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7CC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7CD0;
    }
L_088D7CD0:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088D7CB8;
      }
      goto L_088D7CD8;
    }
L_088D7CD8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7CE8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7CE8u) goto L_088D7CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7CE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7CF0;
    }
L_088D7CF0:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 125 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7D1C;
      }
      goto L_088D7CF8;
    }
L_088D7CF8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 96 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D7D5C;
      }
      goto L_088D7D04;
    }
L_088D7D04:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7D14u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 207u, 0x08858C88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7D14u) goto L_088D7D14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7D14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7D1C;
    }
L_088D7D1C:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 153 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7CB8;
      }
      goto L_088D7D24;
    }
L_088D7D24:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-125));
      if (branch_taken) {
          goto L_088D7CB8;
      }
      goto L_088D7D2C;
    }
L_088D7D2C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17864)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088D7D44:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7D54u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 25u, 0x088D8114u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7D54u) goto L_088D7D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7D54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7D5C;
    }
L_088D7D5C:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7D6Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 222u, 0x08858D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7D6Cu) goto L_088D7D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7D6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7D74;
    }
L_088D7D74:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7D84u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 297u, 0x088591B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7D84u) goto L_088D7D84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7D84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7D8C;
    }
L_088D7D8C:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7D9Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 312u, 0x0885928Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7D9Cu) goto L_088D7D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7D9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7DA4;
    }
L_088D7DA4:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7DB4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 838u, 0x08857520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7DB4u) goto L_088D7DB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7DB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7DBC;
    }
L_088D7DBC:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7DCCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 30u, 0x088541C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7DCCu) goto L_088D7DCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7DCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7DD4;
    }
L_088D7DD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u | 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_16 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_16 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D7E8C;
      }
      goto L_088D7DF0;
    }
L_088D7DF0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088D7E2C;
      }
      goto L_088D7DFC;
    }
L_088D7DFC:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088D7E44;
      }
      goto L_088D7E04;
    }
L_088D7E04:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D7E5C;
      }
      goto L_088D7E0C;
    }
L_088D7E0C:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
      if (branch_taken) {
          goto L_088D7E74;
      }
      goto L_088D7E14;
    }
L_088D7E14:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7E24u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 729u, 0x08852DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7E24u) goto L_088D7E24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7E24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7E2C;
    }
L_088D7E2C:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7E3Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 748u, 0x08852F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7E3Cu) goto L_088D7E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7E3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7E44;
    }
L_088D7E44:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7E54u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 767u, 0x08853064u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7E54u) goto L_088D7E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7E54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7E5C;
    }
L_088D7E5C:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7E6Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 786u, 0x088531A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7E6Cu) goto L_088D7E6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7E6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7E74;
    }
L_088D7E74:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7E84u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 805u, 0x088532E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7E84u) goto L_088D7E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7E84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7E8C;
    }
L_088D7E8C:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7E98;
    }
L_088D7E98:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    if (static_cast<std::int32_t>(aot_gpr_16) >= 0) {
    aot_gpr_16 = (aot_gpr_16 & 1u);
        goto L_088D7EB0;
    }
    goto L_088D7EA4;
L_088D7EA4:
    aot_gpr_16 = (aot_gpr_16 & 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u - aot_gpr_16);
      if (branch_taken) {
          goto L_088D7EB0;
      }
      goto L_088D7EB0;
    }
L_088D7EB0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7ECC;
      }
      goto L_088D7EB8;
    }
L_088D7EB8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
      if (branch_taken) {
          goto L_088D7EEC;
      }
      goto L_088D7EC0;
    }
L_088D7EC0:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7ECC;
    }
L_088D7ECC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D7EC0;
      }
      goto L_088D7ED4;
    }
L_088D7ED4:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7EE4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 369u, 0x088595D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7EE4u) goto L_088D7EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7EE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7EEC;
    }
L_088D7EEC:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7EFCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 357u, 0x08859520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7EFCu) goto L_088D7EFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7EFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7F04;
    }
L_088D7F04:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    if (static_cast<std::int32_t>(aot_gpr_16) >= 0) {
    aot_gpr_16 = (aot_gpr_16 & 1u);
        goto L_088D7F1C;
    }
    goto L_088D7F10;
L_088D7F10:
    aot_gpr_16 = (aot_gpr_16 & 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u - aot_gpr_16);
      if (branch_taken) {
          goto L_088D7F1C;
      }
      goto L_088D7F1C;
    }
L_088D7F1C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7F38;
      }
      goto L_088D7F24;
    }
L_088D7F24:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
      if (branch_taken) {
          goto L_088D7F58;
      }
      goto L_088D7F2C;
    }
L_088D7F2C:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7F38;
    }
L_088D7F38:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D7F2C;
      }
      goto L_088D7F40;
    }
L_088D7F40:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7F50u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 37u, 0x08858218u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7F50u) goto L_088D7F50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7F50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7F58;
    }
L_088D7F58:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7F68u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 24u, 0x08858154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7F68u) goto L_088D7F68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7F68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7F70;
    }
L_088D7F70:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    if (static_cast<std::int32_t>(aot_gpr_16) >= 0) {
    aot_gpr_16 = (aot_gpr_16 & 1u);
        goto L_088D7F88;
    }
    goto L_088D7F7C;
L_088D7F7C:
    aot_gpr_16 = (aot_gpr_16 & 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u - aot_gpr_16);
      if (branch_taken) {
          goto L_088D7F88;
      }
      goto L_088D7F88;
    }
L_088D7F88:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7FA4;
      }
      goto L_088D7F90;
    }
L_088D7F90:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
      if (branch_taken) {
          goto L_088D7FC4;
      }
      goto L_088D7F98;
    }
L_088D7F98:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7FA4;
    }
L_088D7FA4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088D7F98;
      }
      goto L_088D7FAC;
    }
L_088D7FAC:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7FBCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 490u, 0x08855F14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7FBCu) goto L_088D7FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7FBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7FC4;
    }
L_088D7FC4:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(8629));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088D7FD4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 475u, 0x08855E38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088D7FD4u) goto L_088D7FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088D7FD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 24u, 0x088D80FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7FDC;
    }
L_088D7FDC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    if (static_cast<std::int32_t>(aot_gpr_16) >= 0) {
    aot_gpr_16 = (aot_gpr_16 & 1u);
        goto L_088D7FF4;
    }
    goto L_088D7FE8;
L_088D7FE8:
    aot_gpr_16 = (aot_gpr_16 & 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u - aot_gpr_16);
      if (branch_taken) {
          goto L_088D7FF4;
      }
      goto L_088D7FF4;
    }
L_088D7FF4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 2 ? 1u : 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 2u, 0x088D8010u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088D7FFC;
    }
L_088D7FFC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 5u, 0x088D8030u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 1u, 0x088D8004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0052(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0052_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_52(Runtime &runtime) {
    runtime.register_generated_unit(52u, 0x088D4000u, 16384u, &recomp_unit_0052, &recomp_unit_0052_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x088D4000u, &recomp_unit_0052, "recomp_unit_0052",
                                          kEntryMasks_recomp_unit_0052, 64u);
}
} // namespace psprecomp
