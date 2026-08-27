#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0045[64] = {
    0x4801000001100005ull, 0x4020500002244488ull, 0x40A9004004802002ull, 0x0000000000024001ull,
    0x12A4000000000000ull, 0x20408004950092A0ull, 0xD502818102040810ull, 0xA88480D04040010Aull,
    0x428850C14A110034ull, 0x81B8554048900101ull, 0xA000000002401000ull, 0x4914028111232248ull,
    0x4644914028111464ull, 0x1114644914028111ull, 0x0902228C89228048ull, 0x8A01204451912450ull,
    0x44914024088A3224ull, 0x28C8922804811146ull, 0x4046420400211022ull, 0x040882A54800A852ull,
    0x0110A15000002000ull, 0x0828255013515488ull, 0x458040A408108909ull, 0x004901442140AAAAull,
    0x0814811000855015ull, 0x08A4244491001200ull, 0x0024900040929113ull, 0x00A0515540A04081ull,
    0x08081009228008A0ull, 0x010000000000AA00ull, 0x2000420010008200ull, 0x0008015040850420ull,
    0x8010429084081109ull, 0xCA844B2911246500ull, 0x024201048404010Aull, 0x4002020CA50052D4ull,
    0x001082080010104Aull, 0x4952A84300095010ull, 0x11940A4442940840ull, 0x084B162004010508ull,
    0x000C445084210842ull, 0x802502A040000000ull, 0x0851400A00080852ull, 0x80802000010A0008ull,
    0x22AA555615558420ull, 0x00000000000000A8ull, 0x4056A56023040106ull, 0x04011000160A0900ull,
    0x5429488A44005280ull, 0x41054800008090A4ull, 0x4245A12912284888ull, 0x0484800001001563ull,
    0x24008141144CA424ull, 0x9800004010008830ull, 0x00000000000002A0ull, 0x002160040C100418ull,
    0x0004280602990040ull, 0x0000001020001015ull, 0x0000000000002000ull, 0x4410084010960000ull,
    0x0048884101520000ull, 0x9290001009140001ull, 0x0010091680001000ull, 0x00000000005411D0ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0045[64] = {
    1u, 8u, 19u, 29u, 32u, 37u, 50u, 64u, 78u, 95u, 112u, 117u, 134u, 152u, 169u, 185u,
    202u, 219u, 237u, 249u, 265u, 273u, 292u, 307u, 324u, 338u, 351u, 365u, 380u, 391u, 396u, 402u,
    412u, 425u, 446u, 457u, 473u, 482u, 499u, 515u, 529u, 542u, 550u, 562u, 569u, 593u, 596u, 614u,
    624u, 641u, 653u, 672u, 684u, 700u, 709u, 712u, 723u, 734u, 740u, 741u, 751u, 761u, 772u, 780u,
};
void recomp_unit_0045_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,6,31,7 fprs=12,13,22,14 gpr_occ=4418 fpr_occ=533 gpr_total=6594 fpr_total=698
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_22 = ctx.fpr[22];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[31] = aot_gpr_31; ctx.gpr[7] = aot_gpr_7; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[22] = aot_fpr_22; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_7 = ctx.gpr[7]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_22 = ctx.fpr[22]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B8000u;
        entry_id = 0u;
        if (entry_delta < 16220u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0045[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0045[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088B8000;
    case 2u: goto L_088B8008;
    case 3u: goto L_088B8050;
    case 4u: goto L_088B8060;
    case 5u: goto L_088B80C0;
    case 6u: goto L_088B80EC;
    case 7u: goto L_088B80F8;
    case 8u: goto L_088B810C;
    case 9u: goto L_088B811C;
    case 10u: goto L_088B8128;
    case 11u: goto L_088B8138;
    case 12u: goto L_088B8148;
    case 13u: goto L_088B8154;
    case 14u: goto L_088B8164;
    case 15u: goto L_088B81B0;
    case 16u: goto L_088B81B8;
    case 17u: goto L_088B81D4;
    case 18u: goto L_088B81F8;
    case 19u: goto L_088B8204;
    case 20u: goto L_088B8234;
    case 21u: goto L_088B825C;
    case 22u: goto L_088B8268;
    case 23u: goto L_088B8298;
    case 24u: goto L_088B82C0;
    case 25u: goto L_088B82CC;
    case 26u: goto L_088B82D4;
    case 27u: goto L_088B82DC;
    case 28u: goto L_088B82F8;
    case 29u: goto L_088B8300;
    case 30u: goto L_088B8338;
    case 31u: goto L_088B8344;
    case 32u: goto L_088B84C8;
    case 33u: goto L_088B84D4;
    case 34u: goto L_088B84DC;
    case 35u: goto L_088B84E4;
    case 36u: goto L_088B84F0;
    case 37u: goto L_088B8514;
    case 38u: goto L_088B851C;
    case 39u: goto L_088B8524;
    case 40u: goto L_088B8530;
    case 41u: goto L_088B853C;
    case 42u: goto L_088B8560;
    case 43u: goto L_088B8568;
    case 44u: goto L_088B8570;
    case 45u: goto L_088B857C;
    case 46u: goto L_088B8588;
    case 47u: goto L_088B85BC;
    case 48u: goto L_088B85D8;
    case 49u: goto L_088B85F4;
    case 50u: goto L_088B8610;
    case 51u: goto L_088B862C;
    case 52u: goto L_088B8648;
    case 53u: goto L_088B8664;
    case 54u: goto L_088B8680;
    case 55u: goto L_088B869C;
    case 56u: goto L_088B86A0;
    case 57u: goto L_088B86BC;
    case 58u: goto L_088B86C4;
    case 59u: goto L_088B86E0;
    case 60u: goto L_088B86E8;
    case 61u: goto L_088B86F0;
    case 62u: goto L_088B86F8;
    case 63u: goto L_088B86FC;
    case 64u: goto L_088B8704;
    case 65u: goto L_088B870C;
    case 66u: goto L_088B8720;
    case 67u: goto L_088B8758;
    case 68u: goto L_088B8778;
    case 69u: goto L_088B8790;
    case 70u: goto L_088B8798;
    case 71u: goto L_088B879C;
    case 72u: goto L_088B87BC;
    case 73u: goto L_088B87C8;
    case 74u: goto L_088B87DC;
    case 75u: goto L_088B87EC;
    case 76u: goto L_088B87F4;
    case 77u: goto L_088B87FC;
    case 78u: goto L_088B8808;
    case 79u: goto L_088B8810;
    case 80u: goto L_088B8814;
    case 81u: goto L_088B8840;
    case 82u: goto L_088B8850;
    case 83u: goto L_088B8864;
    case 84u: goto L_088B886C;
    case 85u: goto L_088B8878;
    case 86u: goto L_088B8880;
    case 87u: goto L_088B8898;
    case 88u: goto L_088B889C;
    case 89u: goto L_088B88B0;
    case 90u: goto L_088B88B8;
    case 91u: goto L_088B88CC;
    case 92u: goto L_088B88DC;
    case 93u: goto L_088B88E4;
    case 94u: goto L_088B88F8;
    case 95u: goto L_088B8900;
    case 96u: goto L_088B8920;
    case 97u: goto L_088B8950;
    case 98u: goto L_088B895C;
    case 99u: goto L_088B896C;
    case 100u: goto L_088B8978;
    case 101u: goto L_088B8998;
    case 102u: goto L_088B89A0;
    case 103u: goto L_088B89A8;
    case 104u: goto L_088B89B0;
    case 105u: goto L_088B89B8;
    case 106u: goto L_088B89CC;
    case 107u: goto L_088B89D0;
    case 108u: goto L_088B89D4;
    case 109u: goto L_088B89DC;
    case 110u: goto L_088B89E0;
    case 111u: goto L_088B89FC;
    case 112u: goto L_088B8A30;
    case 113u: goto L_088B8A58;
    case 114u: goto L_088B8A64;
    case 115u: goto L_088B8AF4;
    case 116u: goto L_088B8AFC;
    case 117u: goto L_088B8B0C;
    case 118u: goto L_088B8B18;
    case 119u: goto L_088B8B24;
    case 120u: goto L_088B8B34;
    case 121u: goto L_088B8B40;
    case 122u: goto L_088B8B44;
    case 123u: goto L_088B8B54;
    case 124u: goto L_088B8B60;
    case 125u: goto L_088B8B70;
    case 126u: goto L_088B8B80;
    case 127u: goto L_088B8B9C;
    case 128u: goto L_088B8BA4;
    case 129u: goto L_088B8BC8;
    case 130u: goto L_088B8BD0;
    case 131u: goto L_088B8BE0;
    case 132u: goto L_088B8BEC;
    case 133u: goto L_088B8BF8;
    case 134u: goto L_088B8C08;
    case 135u: goto L_088B8C14;
    case 136u: goto L_088B8C18;
    case 137u: goto L_088B8C28;
    case 138u: goto L_088B8C30;
    case 139u: goto L_088B8C40;
    case 140u: goto L_088B8C50;
    case 141u: goto L_088B8C6C;
    case 142u: goto L_088B8C74;
    case 143u: goto L_088B8C98;
    case 144u: goto L_088B8CA0;
    case 145u: goto L_088B8CB0;
    case 146u: goto L_088B8CBC;
    case 147u: goto L_088B8CC8;
    case 148u: goto L_088B8CD8;
    case 149u: goto L_088B8CE4;
    case 150u: goto L_088B8CE8;
    case 151u: goto L_088B8CF8;
    case 152u: goto L_088B8D00;
    case 153u: goto L_088B8D10;
    case 154u: goto L_088B8D20;
    case 155u: goto L_088B8D3C;
    case 156u: goto L_088B8D44;
    case 157u: goto L_088B8D68;
    case 158u: goto L_088B8D70;
    case 159u: goto L_088B8D80;
    case 160u: goto L_088B8D8C;
    case 161u: goto L_088B8D98;
    case 162u: goto L_088B8DA8;
    case 163u: goto L_088B8DB4;
    case 164u: goto L_088B8DB8;
    case 165u: goto L_088B8DC8;
    case 166u: goto L_088B8DD0;
    case 167u: goto L_088B8DE0;
    case 168u: goto L_088B8DF0;
    case 169u: goto L_088B8E0C;
    case 170u: goto L_088B8E18;
    case 171u: goto L_088B8E3C;
    case 172u: goto L_088B8E44;
    case 173u: goto L_088B8E54;
    case 174u: goto L_088B8E60;
    case 175u: goto L_088B8E6C;
    case 176u: goto L_088B8E7C;
    case 177u: goto L_088B8E88;
    case 178u: goto L_088B8E8C;
    case 179u: goto L_088B8E9C;
    case 180u: goto L_088B8EA4;
    case 181u: goto L_088B8EB4;
    case 182u: goto L_088B8EC4;
    case 183u: goto L_088B8EE0;
    case 184u: goto L_088B8EEC;
    case 185u: goto L_088B8F10;
    case 186u: goto L_088B8F18;
    case 187u: goto L_088B8F28;
    case 188u: goto L_088B8F34;
    case 189u: goto L_088B8F40;
    case 190u: goto L_088B8F50;
    case 191u: goto L_088B8F5C;
    case 192u: goto L_088B8F60;
    case 193u: goto L_088B8F70;
    case 194u: goto L_088B8F78;
    case 195u: goto L_088B8F88;
    case 196u: goto L_088B8F98;
    case 197u: goto L_088B8FB4;
    case 198u: goto L_088B8FC0;
    case 199u: goto L_088B8FE4;
    case 200u: goto L_088B8FEC;
    case 201u: goto L_088B8FFC;
    case 202u: goto L_088B9008;
    case 203u: goto L_088B9014;
    case 204u: goto L_088B9024;
    case 205u: goto L_088B9030;
    case 206u: goto L_088B9034;
    case 207u: goto L_088B9044;
    case 208u: goto L_088B904C;
    case 209u: goto L_088B905C;
    case 210u: goto L_088B906C;
    case 211u: goto L_088B9088;
    case 212u: goto L_088B9094;
    case 213u: goto L_088B90B8;
    case 214u: goto L_088B90C0;
    case 215u: goto L_088B90D0;
    case 216u: goto L_088B90DC;
    case 217u: goto L_088B90E8;
    case 218u: goto L_088B90F8;
    case 219u: goto L_088B9104;
    case 220u: goto L_088B9108;
    case 221u: goto L_088B9118;
    case 222u: goto L_088B9120;
    case 223u: goto L_088B9130;
    case 224u: goto L_088B9140;
    case 225u: goto L_088B915C;
    case 226u: goto L_088B9168;
    case 227u: goto L_088B918C;
    case 228u: goto L_088B9194;
    case 229u: goto L_088B91A4;
    case 230u: goto L_088B91B0;
    case 231u: goto L_088B91BC;
    case 232u: goto L_088B91CC;
    case 233u: goto L_088B91D8;
    case 234u: goto L_088B91DC;
    case 235u: goto L_088B91EC;
    case 236u: goto L_088B91F4;
    case 237u: goto L_088B9204;
    case 238u: goto L_088B9214;
    case 239u: goto L_088B9230;
    case 240u: goto L_088B9240;
    case 241u: goto L_088B9254;
    case 242u: goto L_088B9288;
    case 243u: goto L_088B92A4;
    case 244u: goto L_088B92B8;
    case 245u: goto L_088B92C4;
    case 246u: goto L_088B92C8;
    case 247u: goto L_088B92D8;
    case 248u: goto L_088B92F8;
    case 249u: goto L_088B9304;
    case 250u: goto L_088B9310;
    case 251u: goto L_088B9318;
    case 252u: goto L_088B932C;
    case 253u: goto L_088B9334;
    case 254u: goto L_088B933C;
    case 255u: goto L_088B936C;
    case 256u: goto L_088B9378;
    case 257u: goto L_088B9380;
    case 258u: goto L_088B9388;
    case 259u: goto L_088B9394;
    case 260u: goto L_088B939C;
    case 261u: goto L_088B93A4;
    case 262u: goto L_088B93BC;
    case 263u: goto L_088B93CC;
    case 264u: goto L_088B93E8;
    case 265u: goto L_088B9434;
    case 266u: goto L_088B9490;
    case 267u: goto L_088B9498;
    case 268u: goto L_088B94A0;
    case 269u: goto L_088B94B4;
    case 270u: goto L_088B94BC;
    case 271u: goto L_088B94D0;
    case 272u: goto L_088B94E0;
    case 273u: goto L_088B950C;
    case 274u: goto L_088B951C;
    case 275u: goto L_088B9528;
    case 276u: goto L_088B9530;
    case 277u: goto L_088B9538;
    case 278u: goto L_088B9540;
    case 279u: goto L_088B9550;
    case 280u: goto L_088B9558;
    case 281u: goto L_088B9560;
    case 282u: goto L_088B9564;
    case 283u: goto L_088B9570;
    case 284u: goto L_088B9590;
    case 285u: goto L_088B9598;
    case 286u: goto L_088B95A0;
    case 287u: goto L_088B95A8;
    case 288u: goto L_088B95B4;
    case 289u: goto L_088B95CC;
    case 290u: goto L_088B95D4;
    case 291u: goto L_088B95EC;
    case 292u: goto L_088B9600;
    case 293u: goto L_088B960C;
    case 294u: goto L_088B9620;
    case 295u: goto L_088B962C;
    case 296u: goto L_088B963C;
    case 297u: goto L_088B9650;
    case 298u: goto L_088B966C;
    case 299u: goto L_088B9688;
    case 300u: goto L_088B9694;
    case 301u: goto L_088B969C;
    case 302u: goto L_088B96B8;
    case 303u: goto L_088B96DC;
    case 304u: goto L_088B96E0;
    case 305u: goto L_088B96E8;
    case 306u: goto L_088B96F8;
    case 307u: goto L_088B9704;
    case 308u: goto L_088B970C;
    case 309u: goto L_088B9714;
    case 310u: goto L_088B971C;
    case 311u: goto L_088B9724;
    case 312u: goto L_088B972C;
    case 313u: goto L_088B9734;
    case 314u: goto L_088B973C;
    case 315u: goto L_088B9758;
    case 316u: goto L_088B9760;
    case 317u: goto L_088B9774;
    case 318u: goto L_088B9788;
    case 319u: goto L_088B9798;
    case 320u: goto L_088B97A0;
    case 321u: goto L_088B97C0;
    case 322u: goto L_088B97CC;
    case 323u: goto L_088B97D8;
    case 324u: goto L_088B9800;
    case 325u: goto L_088B9808;
    case 326u: goto L_088B9810;
    case 327u: goto L_088B9830;
    case 328u: goto L_088B9838;
    case 329u: goto L_088B9840;
    case 330u: goto L_088B9848;
    case 331u: goto L_088B985C;
    case 332u: goto L_088B9890;
    case 333u: goto L_088B98A0;
    case 334u: goto L_088B98BC;
    case 335u: goto L_088B98C8;
    case 336u: goto L_088B98D0;
    case 337u: goto L_088B98EC;
    case 338u: goto L_088B9924;
    case 339u: goto L_088B9930;
    case 340u: goto L_088B9960;
    case 341u: goto L_088B9970;
    case 342u: goto L_088B997C;
    case 343u: goto L_088B9988;
    case 344u: goto L_088B9998;
    case 345u: goto L_088B99A8;
    case 346u: goto L_088B99B4;
    case 347u: goto L_088B99C8;
    case 348u: goto L_088B99D4;
    case 349u: goto L_088B99DC;
    case 350u: goto L_088B99EC;
    case 351u: goto L_088B9A00;
    case 352u: goto L_088B9A04;
    case 353u: goto L_088B9A10;
    case 354u: goto L_088B9A20;
    case 355u: goto L_088B9A30;
    case 356u: goto L_088B9A3C;
    case 357u: goto L_088B9A44;
    case 358u: goto L_088B9A50;
    case 359u: goto L_088B9A5C;
    case 360u: goto L_088B9A78;
    case 361u: goto L_088B9AB0;
    case 362u: goto L_088B9ABC;
    case 363u: goto L_088B9AC8;
    case 364u: goto L_088B9AD4;
    case 365u: goto L_088B9B00;
    case 366u: goto L_088B9B1C;
    case 367u: goto L_088B9B38;
    case 368u: goto L_088B9B54;
    case 369u: goto L_088B9B5C;
    case 370u: goto L_088B9B78;
    case 371u: goto L_088B9B80;
    case 372u: goto L_088B9B88;
    case 373u: goto L_088B9B90;
    case 374u: goto L_088B9B98;
    case 375u: goto L_088B9BA0;
    case 376u: goto L_088B9BB0;
    case 377u: goto L_088B9BB8;
    case 378u: goto L_088B9BD4;
    case 379u: goto L_088B9BDC;
    case 380u: goto L_088B9C14;
    case 381u: goto L_088B9C1C;
    case 382u: goto L_088B9C2C;
    case 383u: goto L_088B9C5C;
    case 384u: goto L_088B9C64;
    case 385u: goto L_088B9C74;
    case 386u: goto L_088B9C80;
    case 387u: goto L_088B9C8C;
    case 388u: goto L_088B9CB0;
    case 389u: goto L_088B9CCC;
    case 390u: goto L_088B9CEC;
    case 391u: goto L_088B9D24;
    case 392u: goto L_088B9D2C;
    case 393u: goto L_088B9D34;
    case 394u: goto L_088B9D3C;
    case 395u: goto L_088B9DE0;
    case 396u: goto L_088B9E24;
    case 397u: goto L_088B9E3C;
    case 398u: goto L_088B9E70;
    case 399u: goto L_088B9EA4;
    case 400u: goto L_088B9EB8;
    case 401u: goto L_088B9EF4;
    case 402u: goto L_088B9F14;
    case 403u: goto L_088B9F28;
    case 404u: goto L_088B9F40;
    case 405u: goto L_088B9F48;
    case 406u: goto L_088B9F5C;
    case 407u: goto L_088B9F78;
    case 408u: goto L_088B9F90;
    case 409u: goto L_088B9F98;
    case 410u: goto L_088B9FA0;
    case 411u: goto L_088B9FCC;
    case 412u: goto L_088BA000;
    case 413u: goto L_088BA00C;
    case 414u: goto L_088BA020;
    case 415u: goto L_088BA030;
    case 416u: goto L_088BA04C;
    case 417u: goto L_088BA068;
    case 418u: goto L_088BA07C;
    case 419u: goto L_088BA090;
    case 420u: goto L_088BA09C;
    case 421u: goto L_088BA0A4;
    case 422u: goto L_088BA0B8;
    case 423u: goto L_088BA0D0;
    case 424u: goto L_088BA0FC;
    case 425u: goto L_088BA120;
    case 426u: goto L_088BA128;
    case 427u: goto L_088BA134;
    case 428u: goto L_088BA138;
    case 429u: goto L_088BA148;
    case 430u: goto L_088BA154;
    case 431u: goto L_088BA160;
    case 432u: goto L_088BA170;
    case 433u: goto L_088BA180;
    case 434u: goto L_088BA18C;
    case 435u: goto L_088BA194;
    case 436u: goto L_088BA1A0;
    case 437u: goto L_088BA1A4;
    case 438u: goto L_088BA1AC;
    case 439u: goto L_088BA1B8;
    case 440u: goto L_088BA1C8;
    case 441u: goto L_088BA1DC;
    case 442u: goto L_088BA1E4;
    case 443u: goto L_088BA1EC;
    case 444u: goto L_088BA1F8;
    case 445u: goto L_088BA1FC;
    case 446u: goto L_088BA204;
    case 447u: goto L_088BA20C;
    case 448u: goto L_088BA220;
    case 449u: goto L_088BA248;
    case 450u: goto L_088BA268;
    case 451u: goto L_088BA27C;
    case 452u: goto L_088BA288;
    case 453u: goto L_088BA2A0;
    case 454u: goto L_088BA2C4;
    case 455u: goto L_088BA2D8;
    case 456u: goto L_088BA2E4;
    case 457u: goto L_088BA308;
    case 458u: goto L_088BA310;
    case 459u: goto L_088BA318;
    case 460u: goto L_088BA31C;
    case 461u: goto L_088BA324;
    case 462u: goto L_088BA330;
    case 463u: goto L_088BA338;
    case 464u: goto L_088BA360;
    case 465u: goto L_088BA368;
    case 466u: goto L_088BA374;
    case 467u: goto L_088BA37C;
    case 468u: goto L_088BA388;
    case 469u: goto L_088BA38C;
    case 470u: goto L_088BA3A4;
    case 471u: goto L_088BA3C4;
    case 472u: goto L_088BA3F8;
    case 473u: goto L_088BA404;
    case 474u: goto L_088BA40C;
    case 475u: goto L_088BA418;
    case 476u: goto L_088BA430;
    case 477u: goto L_088BA450;
    case 478u: goto L_088BA48C;
    case 479u: goto L_088BA4A4;
    case 480u: goto L_088BA4BC;
    case 481u: goto L_088BA4D0;
    case 482u: goto L_088BA510;
    case 483u: goto L_088BA530;
    case 484u: goto L_088BA538;
    case 485u: goto L_088BA540;
    case 486u: goto L_088BA54C;
    case 487u: goto L_088BA580;
    case 488u: goto L_088BA584;
    case 489u: goto L_088BA598;
    case 490u: goto L_088BA5AC;
    case 491u: goto L_088BA5B4;
    case 492u: goto L_088BA5BC;
    case 493u: goto L_088BA5C4;
    case 494u: goto L_088BA5D0;
    case 495u: goto L_088BA5D8;
    case 496u: goto L_088BA5E0;
    case 497u: goto L_088BA5EC;
    case 498u: goto L_088BA5F8;
    case 499u: goto L_088BA618;
    case 500u: goto L_088BA62C;
    case 501u: goto L_088BA648;
    case 502u: goto L_088BA650;
    case 503u: goto L_088BA65C;
    case 504u: goto L_088BA664;
    case 505u: goto L_088BA678;
    case 506u: goto L_088BA688;
    case 507u: goto L_088BA698;
    case 508u: goto L_088BA6A4;
    case 509u: goto L_088BA6AC;
    case 510u: goto L_088BA6C8;
    case 511u: goto L_088BA6D0;
    case 512u: goto L_088BA6DC;
    case 513u: goto L_088BA6E0;
    case 514u: goto L_088BA6F0;
    case 515u: goto L_088BA70C;
    case 516u: goto L_088BA720;
    case 517u: goto L_088BA728;
    case 518u: goto L_088BA740;
    case 519u: goto L_088BA768;
    case 520u: goto L_088BA794;
    case 521u: goto L_088BA7A4;
    case 522u: goto L_088BA7A8;
    case 523u: goto L_088BA7B0;
    case 524u: goto L_088BA7C0;
    case 525u: goto L_088BA7C4;
    case 526u: goto L_088BA7CC;
    case 527u: goto L_088BA7D8;
    case 528u: goto L_088BA7EC;
    case 529u: goto L_088BA804;
    case 530u: goto L_088BA818;
    case 531u: goto L_088BA82C;
    case 532u: goto L_088BA840;
    case 533u: goto L_088BA854;
    case 534u: goto L_088BA868;
    case 535u: goto L_088BA87C;
    case 536u: goto L_088BA890;
    case 537u: goto L_088BA898;
    case 538u: goto L_088BA8A8;
    case 539u: goto L_088BA8B8;
    case 540u: goto L_088BA8C8;
    case 541u: goto L_088BA8CC;
    case 542u: goto L_088BA978;
    case 543u: goto L_088BA994;
    case 544u: goto L_088BA99C;
    case 545u: goto L_088BA9A4;
    case 546u: goto L_088BA9C0;
    case 547u: goto L_088BA9C8;
    case 548u: goto L_088BA9D4;
    case 549u: goto L_088BA9FC;
    case 550u: goto L_088BAA04;
    case 551u: goto L_088BAA10;
    case 552u: goto L_088BAA18;
    case 553u: goto L_088BAA2C;
    case 554u: goto L_088BAA4C;
    case 555u: goto L_088BAA84;
    case 556u: goto L_088BAA8C;
    case 557u: goto L_088BAAB8;
    case 558u: goto L_088BAAC0;
    case 559u: goto L_088BAAD0;
    case 560u: goto L_088BAAD8;
    case 561u: goto L_088BAAEC;
    case 562u: goto L_088BAB0C;
    case 563u: goto L_088BAB44;
    case 564u: goto L_088BAB4C;
    case 565u: goto L_088BAB60;
    case 566u: goto L_088BABB4;
    case 567u: goto L_088BABDC;
    case 568u: goto L_088BABFC;
    case 569u: goto L_088BAC14;
    case 570u: goto L_088BAC28;
    case 571u: goto L_088BAC3C;
    case 572u: goto L_088BAC40;
    case 573u: goto L_088BAC48;
    case 574u: goto L_088BAC50;
    case 575u: goto L_088BAC58;
    case 576u: goto L_088BAC60;
    case 577u: goto L_088BAC68;
    case 578u: goto L_088BAC70;
    case 579u: goto L_088BAC84;
    case 580u: goto L_088BAC88;
    case 581u: goto L_088BAC90;
    case 582u: goto L_088BAC98;
    case 583u: goto L_088BACA0;
    case 584u: goto L_088BACA8;
    case 585u: goto L_088BACB0;
    case 586u: goto L_088BACB8;
    case 587u: goto L_088BACC4;
    case 588u: goto L_088BACCC;
    case 589u: goto L_088BACD4;
    case 590u: goto L_088BACDC;
    case 591u: goto L_088BACE4;
    case 592u: goto L_088BACF4;
    case 593u: goto L_088BAD0C;
    case 594u: goto L_088BAD14;
    case 595u: goto L_088BAD1C;
    case 596u: goto L_088BAE04;
    case 597u: goto L_088BAE08;
    case 598u: goto L_088BAE20;
    case 599u: goto L_088BAE48;
    case 600u: goto L_088BAE60;
    case 601u: goto L_088BAE64;
    case 602u: goto L_088BAE74;
    case 603u: goto L_088BAE94;
    case 604u: goto L_088BAE98;
    case 605u: goto L_088BAEA0;
    case 606u: goto L_088BAEA8;
    case 607u: goto L_088BAEB4;
    case 608u: goto L_088BAEBC;
    case 609u: goto L_088BAEC4;
    case 610u: goto L_088BAEC8;
    case 611u: goto L_088BAED0;
    case 612u: goto L_088BAED8;
    case 613u: goto L_088BAEF8;
    case 614u: goto L_088BAF20;
    case 615u: goto L_088BAF2C;
    case 616u: goto L_088BAF44;
    case 617u: goto L_088BAF4C;
    case 618u: goto L_088BAF64;
    case 619u: goto L_088BAF68;
    case 620u: goto L_088BAF70;
    case 621u: goto L_088BAFB0;
    case 622u: goto L_088BAFC0;
    case 623u: goto L_088BAFE8;
    case 624u: goto L_088BB01C;
    case 625u: goto L_088BB024;
    case 626u: goto L_088BB030;
    case 627u: goto L_088BB038;
    case 628u: goto L_088BB068;
    case 629u: goto L_088BB078;
    case 630u: goto L_088BB084;
    case 631u: goto L_088BB08C;
    case 632u: goto L_088BB09C;
    case 633u: goto L_088BB0AC;
    case 634u: goto L_088BB0B8;
    case 635u: goto L_088BB0C0;
    case 636u: goto L_088BB0CC;
    case 637u: goto L_088BB0D4;
    case 638u: goto L_088BB0E8;
    case 639u: goto L_088BB0F0;
    case 640u: goto L_088BB0F8;
    case 641u: goto L_088BB108;
    case 642u: goto L_088BB114;
    case 643u: goto L_088BB11C;
    case 644u: goto L_088BB130;
    case 645u: goto L_088BB13C;
    case 646u: goto L_088BB15C;
    case 647u: goto L_088BB1AC;
    case 648u: goto L_088BB1B8;
    case 649u: goto L_088BB1C0;
    case 650u: goto L_088BB1C8;
    case 651u: goto L_088BB1E0;
    case 652u: goto L_088BB1F8;
    case 653u: goto L_088BB20C;
    case 654u: goto L_088BB21C;
    case 655u: goto L_088BB22C;
    case 656u: goto L_088BB238;
    case 657u: goto L_088BB24C;
    case 658u: goto L_088BB254;
    case 659u: goto L_088BB264;
    case 660u: goto L_088BB270;
    case 661u: goto L_088BB280;
    case 662u: goto L_088BB28C;
    case 663u: goto L_088BB294;
    case 664u: goto L_088BB2A0;
    case 665u: goto L_088BB2B4;
    case 666u: goto L_088BB2BC;
    case 667u: goto L_088BB2C0;
    case 668u: goto L_088BB2C8;
    case 669u: goto L_088BB2D8;
    case 670u: goto L_088BB2E4;
    case 671u: goto L_088BB2F8;
    case 672u: goto L_088BB300;
    case 673u: goto L_088BB304;
    case 674u: goto L_088BB314;
    case 675u: goto L_088BB318;
    case 676u: goto L_088BB320;
    case 677u: goto L_088BB328;
    case 678u: goto L_088BB330;
    case 679u: goto L_088BB360;
    case 680u: goto L_088BB3BC;
    case 681u: goto L_088BB3C8;
    case 682u: goto L_088BB3DC;
    case 683u: goto L_088BB3E8;
    case 684u: goto L_088BB408;
    case 685u: goto L_088BB414;
    case 686u: goto L_088BB428;
    case 687u: goto L_088BB434;
    case 688u: goto L_088BB43C;
    case 689u: goto L_088BB448;
    case 690u: goto L_088BB44C;
    case 691u: goto L_088BB458;
    case 692u: goto L_088BB468;
    case 693u: goto L_088BB470;
    case 694u: goto L_088BB480;
    case 695u: goto L_088BB498;
    case 696u: goto L_088BB4A0;
    case 697u: goto L_088BB4BC;
    case 698u: goto L_088BB4E8;
    case 699u: goto L_088BB4F4;
    case 700u: goto L_088BB510;
    case 701u: goto L_088BB514;
    case 702u: goto L_088BB52C;
    case 703u: goto L_088BB53C;
    case 704u: goto L_088BB570;
    case 705u: goto L_088BB598;
    case 706u: goto L_088BB5EC;
    case 707u: goto L_088BB5F0;
    case 708u: goto L_088BB5FC;
    case 709u: goto L_088BB614;
    case 710u: goto L_088BB61C;
    case 711u: goto L_088BB624;
    case 712u: goto L_088BB70C;
    case 713u: goto L_088BB710;
    case 714u: goto L_088BB728;
    case 715u: goto L_088BB750;
    case 716u: goto L_088BB768;
    case 717u: goto L_088BB76C;
    case 718u: goto L_088BB788;
    case 719u: goto L_088BB7B4;
    case 720u: goto L_088BB7B8;
    case 721u: goto L_088BB7C0;
    case 722u: goto L_088BB7D4;
    case 723u: goto L_088BB818;
    case 724u: goto L_088BB840;
    case 725u: goto L_088BB84C;
    case 726u: goto L_088BB850;
    case 727u: goto L_088BB85C;
    case 728u: goto L_088BB864;
    case 729u: goto L_088BB884;
    case 730u: goto L_088BB888;
    case 731u: goto L_088BB8AC;
    case 732u: goto L_088BB8B4;
    case 733u: goto L_088BB8C8;
    case 734u: goto L_088BB900;
    case 735u: goto L_088BB908;
    case 736u: goto L_088BB910;
    case 737u: goto L_088BB930;
    case 738u: goto L_088BB974;
    case 739u: goto L_088BB990;
    case 740u: goto L_088BBA34;
    case 741u: goto L_088BBB44;
    case 742u: goto L_088BBB48;
    case 743u: goto L_088BBB50;
    case 744u: goto L_088BBB5C;
    case 745u: goto L_088BBB70;
    case 746u: goto L_088BBB98;
    case 747u: goto L_088BBBAC;
    case 748u: goto L_088BBBD0;
    case 749u: goto L_088BBBE8;
    case 750u: goto L_088BBBF8;
    case 751u: goto L_088BBC44;
    case 752u: goto L_088BBC50;
    case 753u: goto L_088BBC58;
    case 754u: goto L_088BBC60;
    case 755u: goto L_088BBC80;
    case 756u: goto L_088BBC98;
    case 757u: goto L_088BBCAC;
    case 758u: goto L_088BBCBC;
    case 759u: goto L_088BBCCC;
    case 760u: goto L_088BBCD8;
    case 761u: goto L_088BBD00;
    case 762u: goto L_088BBD48;
    case 763u: goto L_088BBD50;
    case 764u: goto L_088BBD60;
    case 765u: goto L_088BBD6C;
    case 766u: goto L_088BBD90;
    case 767u: goto L_088BBDD0;
    case 768u: goto L_088BBDDC;
    case 769u: goto L_088BBDE4;
    case 770u: goto L_088BBDF0;
    case 771u: goto L_088BBDFC;
    case 772u: goto L_088BBE30;
    case 773u: goto L_088BBE7C;
    case 774u: goto L_088BBE84;
    case 775u: goto L_088BBE88;
    case 776u: goto L_088BBE90;
    case 777u: goto L_088BBEA0;
    case 778u: goto L_088BBEAC;
    case 779u: goto L_088BBED0;
    case 780u: goto L_088BBF10;
    case 781u: goto L_088BBF18;
    case 782u: goto L_088BBF1C;
    case 783u: goto L_088BBF20;
    case 784u: goto L_088BBF30;
    case 785u: goto L_088BBF48;
    case 786u: goto L_088BBF50;
    case 787u: goto L_088BBF58;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_088B8000:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (16256u << 16u);
      if (branch_taken) {
          goto L_088B81B0;
      }
      goto L_088B8008;
    }
L_088B8008:
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_7);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x088B8050u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 672u, 0x088B7C30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8050u) goto L_088B8050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8050:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24631)));
    aot_gpr_5 = (20224u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_088B80C0;
      }
      goto L_088B8060;
    }
L_088B8060:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11016)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11012)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11008)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x088B80C0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 672u, 0x088B7C30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B80C0u) goto L_088B80C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B80C0:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8464)));
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8468)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8472)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_088B80F8;
      }
      goto L_088B80EC;
    }
L_088B80EC:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_088B810C;
      }
      goto L_088B80F8;
    }
L_088B80F8:
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[20];
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    goto L_088B810C;
L_088B810C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[20])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[20];
        goto L_088B8128;
    }
    goto L_088B811C;
L_088B811C:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_088B8138;
      }
      goto L_088B8128;
    }
L_088B8128:
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    goto L_088B8138;
L_088B8138:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[20])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[20];
        goto L_088B8154;
    }
    goto L_088B8148;
L_088B8148:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088B8164;
      }
      goto L_088B8154;
    }
L_088B8154:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_7 + aot_gpr_4);
    goto L_088B8164;
L_088B8164:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 & 255u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (256u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (21504u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
      if (branch_taken) {
          goto L_088B81B8;
      }
      goto L_088B81B0;
    }
L_088B81B0:
    aot_gpr_31 = (0x088B81B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 671u, 0x088B7BC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B81B8u) goto L_088B81B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B81B8:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
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
L_088B81D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-192));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B8338;
      }
      goto L_088B81F8;
    }
L_088B81F8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24162)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
        goto L_088B8234;
    }
    goto L_088B8204;
L_088B8204:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11032)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8464), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11036)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8468), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11040)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8472), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088B825C;
      }
      goto L_088B8234;
    }
L_088B8234:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11008)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8464), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11012)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8468), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11016)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8472), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088B825C;
L_088B825C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24162)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
        goto L_088B8298;
    }
    goto L_088B8268;
L_088B8268:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11044)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8480), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11048)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8484), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11052)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8488), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088B82C0;
      }
      goto L_088B8298;
    }
L_088B8298:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11020)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8480), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11024)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8484), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11028)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8488), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088B82C0;
L_088B82C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8592)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B82F8;
      }
      goto L_088B82CC;
    }
L_088B82CC:
    aot_gpr_31 = (0x088B82D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B82D4u) goto L_088B82D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B82D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (16256u << 16u);
      if (branch_taken) {
          goto L_088B82F8;
      }
      goto L_088B82DC;
    }
L_088B82DC:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8472), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8464), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8488), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8484), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8480), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088B82F8;
L_088B82F8:
    aot_gpr_31 = (0x088B8300u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8464));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 608u, 0x088B731Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8300u) goto L_088B8300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8300:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[28] + static_cast<std::uint32_t>(8464), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8476)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    goto L_088B8338;
L_088B8338:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B84C8;
      }
      goto L_088B8344;
    }
L_088B8344:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11056)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8496), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11060)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8500), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11064)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8504), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8508)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(11224)));
    aot_gpr_7 = (aot_gpr_7 << 4u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
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
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(11224)));
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_7 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11224)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11224)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11224)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088B84C8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 642u, 0x08972FA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B84C8u) goto L_088B84C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B84C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B84DC;
      }
      goto L_088B84D4;
    }
L_088B84D4:
    aot_gpr_31 = (0x088B84DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B84DCu) goto L_088B84DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B84DC:
    aot_gpr_31 = (0x088B84E4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B84E4u) goto L_088B84E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B84E4:
    aot_gpr_4 = (ctx.gpr[2] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B86A0;
      }
      goto L_088B84F0;
    }
L_088B84F0:
    aot_gpr_5 = (16153u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_gpr_6 = (16256u << 16u);
    aot_gpr_5 = (15232u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_088B851C;
      }
      goto L_088B8514;
    }
L_088B8514:
    aot_gpr_31 = (0x088B851Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B851Cu) goto L_088B851C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B851C:
    aot_gpr_31 = (0x088B8524u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8524u) goto L_088B8524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8524:
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
      if (branch_taken) {
          goto L_088B853C;
      }
      goto L_088B8530;
    }
L_088B8530:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = ctx.fpr[26] + aot_fpr_12;
    goto L_088B853C;
L_088B853C:
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[20];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[20];
      if (branch_taken) {
          goto L_088B8568;
      }
      goto L_088B8560;
    }
L_088B8560:
    aot_gpr_31 = (0x088B8568u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8568u) goto L_088B8568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8568:
    aot_gpr_31 = (0x088B8570u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8570u) goto L_088B8570;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8570:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_088B8588;
      }
      goto L_088B857C;
    }
L_088B857C:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_088B8588;
L_088B8588:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8464)));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[20];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_22 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_22 = fs * ft; }
    aot_fpr_22 = aot_fpr_22 + ctx.fpr[20];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088B85BC;
    }
    goto L_088B85BC;
L_088B85BC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8464), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8468)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088B85D8;
    }
    goto L_088B85D8;
L_088B85D8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8472)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_22 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_22 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088B85F4;
    }
    goto L_088B85F4;
L_088B85F4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8472), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8480)));
    { const float fs = aot_fpr_22; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_22 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_22 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088B8610;
    }
    goto L_088B8610;
L_088B8610:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8480), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8484)));
    { const float fs = aot_fpr_22; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_22 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_22 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088B862C;
    }
    goto L_088B862C;
L_088B862C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8484), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8488)));
    { const float fs = aot_fpr_22; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_22 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_22 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088B8648;
    }
    goto L_088B8648;
L_088B8648:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8488), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8464)));
    { const float fs = aot_fpr_22; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_22 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_22 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088B8664;
    }
    goto L_088B8664;
L_088B8664:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8496), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8468)));
    { const float fs = aot_fpr_22; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_22 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_22 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088B8680;
    }
    goto L_088B8680;
L_088B8680:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8472)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8500), std::bit_cast<std::uint32_t>(aot_fpr_22));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088B869C;
    }
    goto L_088B869C;
L_088B869C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8504), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088B86A0;
L_088B86A0:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
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
L_088B86BC:
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
L_088B86C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B870C;
      }
      goto L_088B86E0;
    }
L_088B86E0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B86F8;
      }
      goto L_088B86E8;
    }
L_088B86E8:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[16] & 1u);
        goto L_088B86FC;
    }
    goto L_088B86F0;
L_088B86F0:
    aot_gpr_31 = (0x088B86F8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B86F8u) goto L_088B86F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B86F8:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    goto L_088B86FC;
L_088B86FC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B870C;
      }
      goto L_088B8704;
    }
L_088B8704:
    aot_gpr_31 = (0x088B870Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B870Cu) goto L_088B870C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B870C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088B8720:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088B8920;
      }
      goto L_088B8758;
    }
L_088B8758:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B8790;
      }
      goto L_088B8778;
    }
L_088B8778:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088B879C;
      }
      goto L_088B8790;
    }
L_088B8790:
    aot_gpr_31 = (0x088B8798u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8798u) goto L_088B8798;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8798:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_088B879C;
L_088B879C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088B88CC;
      }
      goto L_088B87BC;
    }
L_088B87BC:
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_088B87DC;
      }
      goto L_088B87C8;
    }
L_088B87C8:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B87EC;
      }
      goto L_088B87DC;
    }
L_088B87DC:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088B87EC;
L_088B87EC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088B8814;
      }
      goto L_088B87F4;
    }
L_088B87F4:
    aot_gpr_31 = (0x088B87FCu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B87FCu) goto L_088B87FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B87FC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_088B8814;
      }
      goto L_088B8808;
    }
L_088B8808:
    aot_gpr_31 = (0x088B8810u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8810u) goto L_088B8810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8810:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_088B8814;
L_088B8814:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088B8840u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_088B95EC;
L_088B8840:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088B886C;
      }
      goto L_088B8850;
    }
L_088B8850:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088B8864u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8864u) goto L_088B8864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088B886C;
      }
      goto L_088B886C;
    }
L_088B886C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
    aot_gpr_5 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088B8880;
      }
      goto L_088B8878;
    }
L_088B8878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088B889C;
      }
      goto L_088B8880;
    }
L_088B8880:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088B8898u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8898u) goto L_088B8898;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8898:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    goto L_088B889C;
L_088B889C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B88B8;
      }
      goto L_088B88B0;
    }
L_088B88B0:
    aot_gpr_31 = (0x088B88B8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B88B8u) goto L_088B88B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B88B8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_088B8920;
      }
      goto L_088B88CC;
    }
L_088B88CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B88E4;
      }
      goto L_088B88DC;
    }
L_088B88DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088B8900;
      }
      goto L_088B88E4;
    }
L_088B88E4:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_7 = (ctx.gpr[18] - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088B88F8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B88F8u) goto L_088B88F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B88F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    goto L_088B8900;
L_088B8900:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_088B8920;
L_088B8920:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088B8950:
    ctx.gpr[2] = (2188u << 16u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-30384));
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
L_088B895C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088B896Cu);
    goto L_088B8950;
L_088B896C:
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
L_088B8978:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x088B8998u);
    ctx.gpr[18] = (0u | 0u);
    goto L_088B8950;
L_088B8998:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_088B89E0;
    }
    goto L_088B89A0;
L_088B89A0:
    aot_gpr_31 = (0x088B89A8u);
    ctx.gpr[17] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B89A8u) goto L_088B89A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B89A8:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_088B89D0;
    }
    goto L_088B89B0;
L_088B89B0:
    aot_gpr_31 = (0x088B89B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 115u, 0x08980688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B89B8u) goto L_088B89B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B89B8:
    aot_gpr_4 = (ctx.gpr[2] ^ ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_088B89D4;
      }
      goto L_088B89CC;
    }
L_088B89CC:
    ctx.gpr[17] = (0u | 1u);
    goto L_088B89D0;
L_088B89D0:
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    goto L_088B89D4;
L_088B89D4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B89E0;
      }
      goto L_088B89DC;
    }
L_088B89DC:
    ctx.gpr[18] = (0u | 1u);
    goto L_088B89E0;
L_088B89E0:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088B89FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[10]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    aot_gpr_31 = (0x088B8A30u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC59D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8A30u) goto L_088B8A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8A30:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22360));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(220));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_7 = (2231u << 16u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 9u);
    aot_gpr_6 = (0u | 12u);
    aot_gpr_31 = (0x088B8A58u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-30968));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8A58u) goto L_088B8A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8A58:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24560));
    aot_gpr_31 = (0x088B8A64u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8A64u) goto L_088B8A64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8A64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(244));
    ctx.gpr[9] = (ctx.gpr[18] + static_cast<std::uint32_t>(256));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24528));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(268));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24520));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[18] + static_cast<std::uint32_t>(280));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24512));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[18] + static_cast<std::uint32_t>(292));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24504));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[9]);
    ctx.gpr[19] = (ctx.gpr[28] + ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(304));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-24560));
    ctx.gpr[9] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24496));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[8]);
    ctx.gpr[16] = (ctx.gpr[19] - ctx.gpr[17]);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    ctx.gpr[10] = (ctx.gpr[18] + static_cast<std::uint32_t>(316));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[9]);
    aot_gpr_7 = (aot_gpr_6 < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24552));
    ctx.gpr[30] = (ctx.gpr[18] + static_cast<std::uint32_t>(232));
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24544));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24536));
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088B8B54;
      }
      goto L_088B8AF4;
    }
L_088B8AF4:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[16]);
        goto L_088B8B18;
    }
    goto L_088B8AFC;
L_088B8AFC:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B8B0Cu);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8B0Cu) goto L_088B8B0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8B0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[16]);
    goto L_088B8B18;
L_088B8B18:
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_088B8B9C;
      }
      goto L_088B8B24;
    }
L_088B8B24:
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B8B44;
      }
      goto L_088B8B34;
    }
L_088B8B34:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B8B40u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8B40u) goto L_088B8B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8B40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
    goto L_088B8B44;
L_088B8B44:
    aot_gpr_5 = (ctx.gpr[16] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(224), aot_gpr_4);
      if (branch_taken) {
          goto L_088B8B9C;
      }
      goto L_088B8B54;
    }
L_088B8B54:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_6);
        goto L_088B8B80;
    }
    goto L_088B8B60;
L_088B8B60:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088B8B70u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8B70u) goto L_088B8B70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8B70:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_6);
    goto L_088B8B80;
L_088B8B80:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24560));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088B8B9Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_088B8720;
L_088B8B9C:
    aot_gpr_31 = (0x088B8BA4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8BA4u) goto L_088B8BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8BA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    ctx.gpr[17] = (ctx.gpr[28] + ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24552));
    ctx.gpr[16] = (ctx.gpr[17] - ctx.gpr[21]);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_7 = (aot_gpr_6 < ctx.gpr[16] ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_088B8C28;
    }
    goto L_088B8BC8;
L_088B8BC8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B8BEC;
      }
      goto L_088B8BD0;
    }
L_088B8BD0:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088B8BE0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8BE0u) goto L_088B8BE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8BE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[16]);
    goto L_088B8BEC;
L_088B8BEC:
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_088B8C6C;
      }
      goto L_088B8BF8;
    }
L_088B8BF8:
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B8C18;
      }
      goto L_088B8C08;
    }
L_088B8C08:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B8C14u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8C14u) goto L_088B8C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8C14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    goto L_088B8C18;
L_088B8C18:
    aot_gpr_5 = (ctx.gpr[16] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(236), aot_gpr_4);
      if (branch_taken) {
          goto L_088B8C6C;
      }
      goto L_088B8C28;
    }
L_088B8C28:
    if (aot_gpr_4 == 0u) {
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_6);
        goto L_088B8C50;
    }
    goto L_088B8C30;
L_088B8C30:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088B8C40u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8C40u) goto L_088B8C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8C40:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_6);
    goto L_088B8C50;
L_088B8C50:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24552));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(3));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088B8C6Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_088B8720;
L_088B8C6C:
    aot_gpr_31 = (0x088B8C74u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8C74u) goto L_088B8C74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8C74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(248)));
    ctx.gpr[17] = (ctx.gpr[28] + ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24544));
    ctx.gpr[16] = (ctx.gpr[17] - ctx.gpr[22]);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_7 = (aot_gpr_6 < ctx.gpr[16] ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_088B8CF8;
    }
    goto L_088B8C98;
L_088B8C98:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B8CBC;
      }
      goto L_088B8CA0;
    }
L_088B8CA0:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088B8CB0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8CB0u) goto L_088B8CB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8CB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(248)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[16]);
    goto L_088B8CBC;
L_088B8CBC:
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_088B8D3C;
      }
      goto L_088B8CC8;
    }
L_088B8CC8:
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B8CE8;
      }
      goto L_088B8CD8;
    }
L_088B8CD8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B8CE4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8CE4u) goto L_088B8CE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8CE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(248)));
    goto L_088B8CE8;
L_088B8CE8:
    aot_gpr_5 = (ctx.gpr[16] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(248), aot_gpr_4);
      if (branch_taken) {
          goto L_088B8D3C;
      }
      goto L_088B8CF8;
    }
L_088B8CF8:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
        goto L_088B8D20;
    }
    goto L_088B8D00;
L_088B8D00:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088B8D10u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8D10u) goto L_088B8D10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8D10:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(248)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    goto L_088B8D20;
L_088B8D20:
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24544));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(5));
    aot_gpr_31 = (0x088B8D3Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_088B8720;
L_088B8D3C:
    aot_gpr_31 = (0x088B8D44u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8D44u) goto L_088B8D44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8D44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    ctx.gpr[17] = (ctx.gpr[28] + ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24536));
    ctx.gpr[16] = (ctx.gpr[17] - ctx.gpr[23]);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_7 = (aot_gpr_6 < ctx.gpr[16] ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_088B8DC8;
    }
    goto L_088B8D68;
L_088B8D68:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B8D8C;
      }
      goto L_088B8D70;
    }
L_088B8D70:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x088B8D80u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8D80u) goto L_088B8D80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8D80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[16]);
    goto L_088B8D8C;
L_088B8D8C:
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_088B8E0C;
      }
      goto L_088B8D98;
    }
L_088B8D98:
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B8DB8;
      }
      goto L_088B8DA8;
    }
L_088B8DA8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B8DB4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8DB4u) goto L_088B8DB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8DB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    goto L_088B8DB8;
L_088B8DB8:
    aot_gpr_5 = (ctx.gpr[16] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(260), aot_gpr_4);
      if (branch_taken) {
          goto L_088B8E0C;
      }
      goto L_088B8DC8;
    }
L_088B8DC8:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
        goto L_088B8DF0;
    }
    goto L_088B8DD0;
L_088B8DD0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088B8DE0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8DE0u) goto L_088B8DE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8DE0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(256)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    goto L_088B8DF0;
L_088B8DF0:
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24536));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(7));
    aot_gpr_31 = (0x088B8E0Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_088B8720;
L_088B8E0C:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x088B8E18u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8E18u) goto L_088B8E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8E18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (ctx.gpr[28] + ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24528));
    ctx.gpr[16] = (ctx.gpr[17] - ctx.gpr[19]);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_7 = (aot_gpr_6 < ctx.gpr[16] ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_088B8E9C;
    }
    goto L_088B8E3C;
L_088B8E3C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B8E60;
      }
      goto L_088B8E44;
    }
L_088B8E44:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088B8E54u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8E54u) goto L_088B8E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8E54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(272)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[16]);
    goto L_088B8E60;
L_088B8E60:
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_088B8EE0;
      }
      goto L_088B8E6C;
    }
L_088B8E6C:
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B8E8C;
      }
      goto L_088B8E7C;
    }
L_088B8E7C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B8E88u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8E88u) goto L_088B8E88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8E88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(272)));
    goto L_088B8E8C;
L_088B8E8C:
    aot_gpr_5 = (ctx.gpr[16] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(272), aot_gpr_4);
      if (branch_taken) {
          goto L_088B8EE0;
      }
      goto L_088B8E9C;
    }
L_088B8E9C:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
        goto L_088B8EC4;
    }
    goto L_088B8EA4;
L_088B8EA4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088B8EB4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8EB4u) goto L_088B8EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8EB4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(272)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(268)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    goto L_088B8EC4;
L_088B8EC4:
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24528));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(9));
    aot_gpr_31 = (0x088B8EE0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_088B8720;
L_088B8EE0:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x088B8EECu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8EECu) goto L_088B8EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8EEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    ctx.gpr[17] = (ctx.gpr[28] + ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24520));
    ctx.gpr[16] = (ctx.gpr[17] - ctx.gpr[19]);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_7 = (aot_gpr_6 < ctx.gpr[16] ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_088B8F70;
    }
    goto L_088B8F10;
L_088B8F10:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B8F34;
      }
      goto L_088B8F18;
    }
L_088B8F18:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088B8F28u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8F28u) goto L_088B8F28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8F28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[16]);
    goto L_088B8F34;
L_088B8F34:
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_088B8FB4;
      }
      goto L_088B8F40;
    }
L_088B8F40:
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B8F60;
      }
      goto L_088B8F50;
    }
L_088B8F50:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B8F5Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8F5Cu) goto L_088B8F5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8F5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    goto L_088B8F60;
L_088B8F60:
    aot_gpr_5 = (ctx.gpr[16] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(284), aot_gpr_4);
      if (branch_taken) {
          goto L_088B8FB4;
      }
      goto L_088B8F70;
    }
L_088B8F70:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
        goto L_088B8F98;
    }
    goto L_088B8F78;
L_088B8F78:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088B8F88u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8F88u) goto L_088B8F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8F88:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(280)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    goto L_088B8F98;
L_088B8F98:
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24520));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(11));
    aot_gpr_31 = (0x088B8FB4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_088B8720;
L_088B8FB4:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (0x088B8FC0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8FC0u) goto L_088B8FC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8FC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(296)));
    ctx.gpr[16] = (ctx.gpr[28] + ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(292)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-24512));
    ctx.gpr[17] = (ctx.gpr[16] - ctx.gpr[19]);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_7 = (aot_gpr_6 < ctx.gpr[17] ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_088B9044;
    }
    goto L_088B8FE4;
L_088B8FE4:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[17]);
        goto L_088B9008;
    }
    goto L_088B8FEC;
L_088B8FEC:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088B8FFCu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B8FFCu) goto L_088B8FFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B8FFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(296)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(292)));
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[17]);
    goto L_088B9008;
L_088B9008:
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_088B9088;
      }
      goto L_088B9014;
    }
L_088B9014:
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B9034;
      }
      goto L_088B9024;
    }
L_088B9024:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B9030u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9030u) goto L_088B9030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9030:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(296)));
    goto L_088B9034;
L_088B9034:
    aot_gpr_5 = (ctx.gpr[16] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(296), aot_gpr_4);
      if (branch_taken) {
          goto L_088B9088;
      }
      goto L_088B9044;
    }
L_088B9044:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
        goto L_088B906C;
    }
    goto L_088B904C;
L_088B904C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088B905Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B905Cu) goto L_088B905C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B905C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(296)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    goto L_088B906C;
L_088B906C:
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24512));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(13));
    aot_gpr_31 = (0x088B9088u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    goto L_088B8720;
L_088B9088:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_31 = (0x088B9094u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9094u) goto L_088B9094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9094:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    ctx.gpr[16] = (ctx.gpr[28] + ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-24504));
    ctx.gpr[17] = (ctx.gpr[16] - ctx.gpr[19]);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_7 = (aot_gpr_6 < ctx.gpr[17] ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_088B9118;
    }
    goto L_088B90B8;
L_088B90B8:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[17]);
        goto L_088B90DC;
    }
    goto L_088B90C0;
L_088B90C0:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088B90D0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B90D0u) goto L_088B90D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B90D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[17]);
    goto L_088B90DC;
L_088B90DC:
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_088B915C;
      }
      goto L_088B90E8;
    }
L_088B90E8:
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B9108;
      }
      goto L_088B90F8;
    }
L_088B90F8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B9104u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9104u) goto L_088B9104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9104:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    goto L_088B9108;
L_088B9108:
    aot_gpr_5 = (ctx.gpr[16] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(308), aot_gpr_4);
      if (branch_taken) {
          goto L_088B915C;
      }
      goto L_088B9118;
    }
L_088B9118:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
        goto L_088B9140;
    }
    goto L_088B9120;
L_088B9120:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088B9130u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9130u) goto L_088B9130;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9130:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    goto L_088B9140;
L_088B9140:
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24504));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(15));
    aot_gpr_31 = (0x088B915Cu);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    goto L_088B8720;
L_088B915C:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_31 = (0x088B9168u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9168u) goto L_088B9168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9168:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(320)));
    ctx.gpr[16] = (ctx.gpr[28] + ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(316)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-24496));
    ctx.gpr[17] = (ctx.gpr[16] - ctx.gpr[19]);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_7 = (aot_gpr_6 < ctx.gpr[17] ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_088B91EC;
    }
    goto L_088B918C;
L_088B918C:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[17]);
        goto L_088B91B0;
    }
    goto L_088B9194;
L_088B9194:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088B91A4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B91A4u) goto L_088B91A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B91A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(320)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(316)));
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[17]);
    goto L_088B91B0;
L_088B91B0:
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
      if (branch_taken) {
          goto L_088B9230;
      }
      goto L_088B91BC;
    }
L_088B91BC:
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B91DC;
      }
      goto L_088B91CC;
    }
L_088B91CC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B91D8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B91D8u) goto L_088B91D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B91D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(320)));
    goto L_088B91DC;
L_088B91DC:
    aot_gpr_5 = (ctx.gpr[16] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(320), aot_gpr_4);
      if (branch_taken) {
          goto L_088B9230;
      }
      goto L_088B91EC;
    }
L_088B91EC:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
        goto L_088B9214;
    }
    goto L_088B91F4;
L_088B91F4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088B9204u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9204u) goto L_088B9204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9204:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(320)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(316)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    goto L_088B9214;
L_088B9214:
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24496));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(17));
    aot_gpr_31 = (0x088B9230u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    goto L_088B8720;
L_088B9230:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24488));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(328), aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_088B9240;
L_088B9240:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(184), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B9240;
      }
      goto L_088B9254;
    }
L_088B9254:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
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
L_088B9288:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B9318;
      }
      goto L_088B92A4;
    }
L_088B92A4:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22360));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088B92B8;
L_088B92B8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088B92C8;
      }
      goto L_088B92C4;
    }
L_088B92C4:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(184), 0u);
    goto L_088B92C8;
L_088B92C8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B92B8;
      }
      goto L_088B92D8;
    }
L_088B92D8:
    aot_gpr_7 = (2188u << 16u);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(220));
    aot_gpr_5 = (0u | 9u);
    aot_gpr_6 = (0u | 12u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x088B92F8u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-31036));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B92F8u) goto L_088B92F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B92F8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B9304u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 486u, 0x08AC5AE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9304u) goto L_088B9304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9304:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B9318;
      }
      goto L_088B9310;
    }
L_088B9310:
    aot_gpr_31 = (0x088B9318u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9318u) goto L_088B9318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9318:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088B932C:
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
L_088B9334:
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
L_088B933C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[9]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_31 = (0x088B936Cu);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 507u, 0x08AC5C90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B936Cu) goto L_088B936C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B936C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B9380;
      }
      goto L_088B9378;
    }
L_088B9378:
    aot_gpr_31 = (0x088B9380u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9380u) goto L_088B9380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9380:
    aot_gpr_31 = (0x088B9388u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9388u) goto L_088B9388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9388:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B939C;
      }
      goto L_088B9394;
    }
L_088B9394:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B93A4;
      }
      goto L_088B939C;
    }
L_088B939C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B94E0;
      }
      goto L_088B93A4;
    }
L_088B93A4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(184));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    goto L_088B93BC;
L_088B93BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x088B93CCu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B93CCu) goto L_088B93CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B93CC:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[8] = (aot_gpr_5 ^ 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088B9434;
      }
      goto L_088B93E8;
    }
L_088B93E8:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-45));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_gpr_7 + static_cast<std::uint32_t>(45));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_7);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_gpr_4 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(45));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_088B9490;
      }
      goto L_088B9434;
    }
L_088B9434:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(45));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr_6 = (aot_gpr_7 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-45));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(45));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_gpr_6 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(45));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    goto L_088B9490;
L_088B9490:
    aot_gpr_31 = (0x088B9498u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9498u) goto L_088B9498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9498:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
      if (branch_taken) {
          goto L_088B94BC;
      }
      goto L_088B94A0;
    }
L_088B94A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_31 = (0x088B94B4u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 121u, 0x08AF51FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B94B4u) goto L_088B94B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B94B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B94D0;
      }
      goto L_088B94BC;
    }
L_088B94BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_gpr_31 = (0x088B94D0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 121u, 0x08AF51FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B94D0u) goto L_088B94D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B94D0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B93BC;
      }
      goto L_088B94E0;
    }
L_088B94E0:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088B950C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088B951Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 511u, 0x08AC5CC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B951Cu) goto L_088B951C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B951C:
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
L_088B9528:
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
L_088B9530:
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
L_088B9538:
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
L_088B9540:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088B9550u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 605u, 0x08AC646Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9550u) goto L_088B9550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9550:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088B9560;
      }
      goto L_088B9558;
    }
L_088B9558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B9564;
      }
      goto L_088B9560;
    }
L_088B9560:
    ctx.gpr[2] = (0u | 1u);
    goto L_088B9564;
L_088B9564:
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
L_088B9570:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x088B9590u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9590u) goto L_088B9590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9590:
    aot_gpr_31 = (0x088B9598u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9598u) goto L_088B9598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9598:
    aot_gpr_31 = (0x088B95A0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B95A0u) goto L_088B95A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B95A0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(220));
    goto L_088B95A8;
L_088B95A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088B95B4u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B95B4u) goto L_088B95B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B95B4:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B95A8;
      }
      goto L_088B95CC;
    }
L_088B95CC:
    aot_gpr_31 = (0x088B95D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B95D4u) goto L_088B95D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B95D4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088B95EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
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
L_088B9600:
    aot_gpr_6 = (aot_gpr_4 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_088B9620;
      }
      goto L_088B960C;
    }
L_088B960C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    aot_gpr_6 = (aot_gpr_4 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B960C;
      }
      goto L_088B9620;
    }
L_088B9620:
    ctx.gpr[2] = (aot_gpr_5 << 3u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] | aot_gpr_4);
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
L_088B962C:
    aot_gpr_5 = (1u << 16u);
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088B9688;
      }
      goto L_088B963C;
    }
L_088B963C:
    aot_gpr_5 = (256u << 16u);
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (2232u << 16u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-22336));
      if (branch_taken) {
          goto L_088B966C;
      }
      goto L_088B9650;
    }
L_088B9650:
    aot_gpr_4 = (aot_gpr_4 >> 24u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_088B96E0;
      }
      goto L_088B966C;
    }
L_088B966C:
    aot_gpr_4 = (aot_gpr_4 >> 16u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088B96E0;
      }
      goto L_088B9688;
    }
L_088B9688:
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088B96B8;
      }
      goto L_088B9694;
    }
L_088B9694:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B96DC;
      }
      goto L_088B969C;
    }
L_088B969C:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-22336));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B96E0;
      }
      goto L_088B96B8;
    }
L_088B96B8:
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-22336));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B96E0;
      }
      goto L_088B96DC;
    }
L_088B96DC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B96E0;
L_088B96E0:
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
L_088B96E8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_088B970C;
      }
      goto L_088B96F8;
    }
L_088B96F8:
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          goto L_088B9714;
      }
      goto L_088B9704;
    }
L_088B9704:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B972C;
      }
      goto L_088B970C;
    }
L_088B970C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B9798;
      }
      goto L_088B9714;
    }
L_088B9714:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) < 0;
      if (branch_taken) {
          goto L_088B9788;
      }
      goto L_088B971C;
    }
L_088B971C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) > 0;
      if (branch_taken) {
          goto L_088B9760;
      }
      goto L_088B9724;
    }
L_088B9724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B9798;
      }
      goto L_088B972C;
    }
L_088B972C:
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B9774;
      }
      goto L_088B9734;
    }
L_088B9734:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088B9788;
      }
      goto L_088B973C;
    }
L_088B973C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088B9758;
    }
    goto L_088B9758;
L_088B9758:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B9798;
      }
      goto L_088B9760;
    }
L_088B9760:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_gpr_4 ^ aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088B9798;
      }
      goto L_088B9774;
    }
L_088B9774:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_gpr_4 ^ aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088B9798;
      }
      goto L_088B9788;
    }
L_088B9788:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_gpr_4 ^ aot_gpr_5);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_088B9798;
L_088B9798:
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
L_088B97A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x088B97C0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 521u, 0x08B59DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B97C0u) goto L_088B97C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B97C0:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x088B97CCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B97CCu) goto L_088B97CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B97CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088B9808;
      }
      goto L_088B97D8;
    }
L_088B97D8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(14520));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_5 & 255u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_gpr_7 & 8u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B9810;
      }
      goto L_088B9800;
    }
L_088B9800:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B9830;
      }
      goto L_088B9808;
    }
L_088B9808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B9848;
      }
      goto L_088B9810;
    }
L_088B9810:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_gpr_5 & 255u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_gpr_7 & 8u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B9810;
      }
      goto L_088B9830;
    }
L_088B9830:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088B9840;
      }
      goto L_088B9838;
    }
L_088B9838:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B9848;
      }
      goto L_088B9840;
    }
L_088B9840:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (0u | 1u);
    goto L_088B9848;
L_088B9848:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088B985C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x088B9890u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9890u) goto L_088B9890;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9890:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088B98A0u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B98A0u) goto L_088B98A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B98A0:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B98D0;
      }
      goto L_088B98BC;
    }
L_088B98BC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B98C8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B98C8u) goto L_088B98C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B98C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    goto L_088B98D0;
L_088B98D0:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088B98EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_7);
    aot_gpr_6 = (0u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088B9924u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    goto L_088B9A78;
L_088B9924:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
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
L_088B9930:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_7 = (0u | 61u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_7;
    ctx.gpr[16] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088B997C;
      }
      goto L_088B9960;
    }
L_088B9960:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088B9970u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9970u) goto L_088B9970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9970:
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B9A5C;
      }
      goto L_088B997C;
    }
L_088B997C:
    aot_gpr_5 = (0u | 64u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088B99DC;
      }
      goto L_088B9988;
    }
L_088B9988:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8));
    aot_gpr_31 = (0x088B9998u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9998u) goto L_088B9998;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9998:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24456));
    aot_gpr_31 = (0x088B99A8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B99A8u) goto L_088B99A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B99A8:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B99C8;
      }
      goto L_088B99B4;
    }
L_088B99B4:
    aot_gpr_4 = (ctx.gpr[16] - ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24452));
    aot_gpr_31 = (0x088B99C8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B99C8u) goto L_088B99C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B99C8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088B99D4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B99D4u) goto L_088B99D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B99D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B9A5C;
      }
      goto L_088B99DC;
    }
L_088B99DC:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24448));
    aot_gpr_31 = (0x088B99ECu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 66u, 0x08B58360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B99ECu) goto L_088B99EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B99EC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(-17));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088B9A04;
      }
      goto L_088B9A00;
    }
L_088B9A00:
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    goto L_088B9A04;
L_088B9A04:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24444));
    aot_gpr_31 = (0x088B9A10u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9A10u) goto L_088B9A10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9A10:
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[17]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B9A44;
      }
      goto L_088B9A20;
    }
L_088B9A20:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B9A30u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 182u, 0x08B58AE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9A30u) goto L_088B9A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9A30:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24452));
    aot_gpr_31 = (0x088B9A3Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9A3Cu) goto L_088B9A3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9A3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B9A50;
      }
      goto L_088B9A44;
    }
L_088B9A44:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088B9A50u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9A50u) goto L_088B9A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9A50:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24432));
    aot_gpr_31 = (0x088B9A5Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9A5Cu) goto L_088B9A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9A5C:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088B9A78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x088B9AB0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24456));
    goto L_088B985C;
L_088B9AB0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088B9ABCu);
    aot_gpr_5 = (0u | 37u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9ABCu) goto L_088B9ABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9ABC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_088B9B1C;
      }
      goto L_088B9AC8;
    }
L_088B9AC8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B9AD4u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_088B985C;
L_088B9AD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_6 = (aot_gpr_6 >> 29u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x088B9B00u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 537u, 0x088C3C94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9B00u) goto L_088B9B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9B00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[19] << 3u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088B9C8C;
      }
      goto L_088B9B1C;
    }
L_088B9B1C:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[18] - ctx.gpr[20]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B9B38u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9B38u) goto L_088B9B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9B38:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088B9B5C;
      }
      goto L_088B9B54;
    }
L_088B9B54:
    aot_gpr_31 = (0x088B9B5Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9B5Cu) goto L_088B9B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9B5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 115u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 102u);
      if (branch_taken) {
          goto L_088B9BA0;
      }
      goto L_088B9B78;
    }
L_088B9B78:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 100u);
      if (branch_taken) {
          goto L_088B9C2C;
      }
      goto L_088B9B80;
    }
L_088B9B80:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 99u);
      if (branch_taken) {
          goto L_088B9BDC;
      }
      goto L_088B9B88;
    }
L_088B9B88:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 37u);
      if (branch_taken) {
          goto L_088B9BB8;
      }
      goto L_088B9B90;
    }
L_088B9B90:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088B9C74;
      }
      goto L_088B9B98;
    }
L_088B9B98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B9C80;
      }
      goto L_088B9BA0;
    }
L_088B9BA0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    aot_gpr_31 = (0x088B9BB0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088B985C;
L_088B9BB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B9C80;
      }
      goto L_088B9BB8;
    }
L_088B9BB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B9BD4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_088B985C;
L_088B9BD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B9C80;
      }
      goto L_088B9BDC;
    }
L_088B9BDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088B9C1C;
      }
      goto L_088B9C14;
    }
L_088B9C14:
    aot_gpr_31 = (0x088B9C1Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9C1Cu) goto L_088B9C1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9C1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_088B9C80;
      }
      goto L_088B9C2C;
    }
L_088B9C2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088B9C64;
      }
      goto L_088B9C5C;
    }
L_088B9C5C:
    aot_gpr_31 = (0x088B9C64u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9C64u) goto L_088B9C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9C64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_088B9C80;
      }
      goto L_088B9C74;
    }
L_088B9C74:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24428));
    aot_gpr_31 = (0x088B9C80u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088B985C;
L_088B9C80:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B9AB0;
      }
      goto L_088B9C8C;
    }
L_088B9C8C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088B9CB0:
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
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
L_088B9CCC:
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
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_7));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[8]));
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
L_088B9CEC:
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
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
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
L_088B9D24:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276), aot_gpr_4);
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
L_088B9D2C:
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
L_088B9D34:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7588), aot_gpr_4);
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
L_088B9D3C:
    aot_gpr_4 = (50300u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (50170u << 16u);
    aot_gpr_4 = (2246u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(17776), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17776));
    aot_gpr_6 = (50426u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (49880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (50198u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (50070u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (17597u << 16u);
    aot_gpr_6 = (50110u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 | 24576u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (17342u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (17658u << 16u);
    aot_gpr_6 = (49804u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
L_088B9DE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260)));
    aot_gpr_5 = (49024u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088B9F98;
      }
      goto L_088B9E24;
    }
L_088B9E24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088B9F78;
      }
      goto L_088B9E3C;
    }
L_088B9E3C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2246u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_5 + static_cast<std::uint32_t>(17776));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[19] = (aot_gpr_4 + ctx.gpr[19]);
    goto L_088B9E70;
L_088B9E70:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_088B9F48;
      }
      goto L_088B9EA4;
    }
L_088B9EA4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088B9F48;
      }
      goto L_088B9EB8;
    }
L_088B9EB8:
    aot_fpr_14 = ctx.fpr[24] - aot_fpr_12;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24272)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[15] + aot_fpr_12;
    aot_fpr_14 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088B9F48;
      }
      goto L_088B9EF4;
    }
L_088B9EF4:
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[24];
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088B9F28;
      }
      goto L_088B9F14;
    }
L_088B9F14:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
        goto L_088B9F28;
    }
    goto L_088B9F28;
L_088B9F28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24268)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x088B9F40u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B9F40u) goto L_088B9F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B9F40:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088B9F48;
L_088B9F48:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B9E70;
      }
      goto L_088B9F5C;
    }
L_088B9F5C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24256)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24264)));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[26];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[26] + aot_fpr_12;
      if (branch_taken) {
          goto L_088B9F90;
      }
      goto L_088B9F78;
    }
L_088B9F78:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24256)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24264)));
    aot_fpr_14 = ctx.fpr[26] - aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[26] = aot_fpr_12 + ctx.fpr[26];
    goto L_088B9F90;
L_088B9F90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24256), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088B9FA0;
      }
      goto L_088B9F98;
    }
L_088B9F98:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24256), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088B9FA0;
L_088B9FA0:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.gpr[16] = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
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
L_088B9FCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x088BA000u);
    aot_gpr_7 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA000u) goto L_088BA000;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA000:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088BA00Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA00Cu) goto L_088BA00C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA00C:
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
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088BA020u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 659u, 0x0896ECD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA020u) goto L_088BA020;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA020:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x088BA030u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA030u) goto L_088BA030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA030:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
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
L_088BA04C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088BA068u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA068u) goto L_088BA068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA068:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x088BA07Cu);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA07Cu) goto L_088BA07C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA07C:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_31 = (0x088BA090u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA090u) goto L_088BA090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA090:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BA0B8;
      }
      goto L_088BA09C;
    }
L_088BA09C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
      if (branch_taken) {
          goto L_088BA0B8;
      }
      goto L_088BA0A4;
    }
L_088BA0A4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[16] << 16u);
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    aot_gpr_31 = (0x088BA0B8u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 335u, 0x0896D36Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA0B8u) goto L_088BA0B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA0B8:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088BA0D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    aot_gpr_31 = (0x088BA0FCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA0FCu) goto L_088BA0FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA0FC:
    ctx.gpr[17] = (2237u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088BA120u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0196_entry, 196u, 274u, 0x08B15604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA120u) goto L_088BA120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088BA138;
      }
      goto L_088BA128;
    }
L_088BA128:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088BA134u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA134u) goto L_088BA134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA134:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088BA138;
L_088BA138:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088BA148u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA148u) goto L_088BA148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA148:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088BA1FC;
      }
      goto L_088BA154;
    }
L_088BA154:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (0u | 65535u);
      if (branch_taken) {
          goto L_088BA180;
      }
      goto L_088BA160;
    }
L_088BA160:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x088BA170u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA170u) goto L_088BA170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA170:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_088BA180;
L_088BA180:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088BA194;
      }
      goto L_088BA18C;
    }
L_088BA18C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088BA1A4;
      }
      goto L_088BA194;
    }
L_088BA194:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x088BA1A0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA1A0u) goto L_088BA1A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA1A0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_088BA1A4;
L_088BA1A4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BA1FC;
      }
      goto L_088BA1AC;
    }
L_088BA1AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
        goto L_088BA1DC;
    }
    goto L_088BA1B8;
L_088BA1B8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(17));
    aot_gpr_31 = (0x088BA1C8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA1C8u) goto L_088BA1C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA1C8:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(17)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    goto L_088BA1DC;
L_088BA1DC:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088BA1EC;
      }
      goto L_088BA1E4;
    }
L_088BA1E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088BA1FC;
      }
      goto L_088BA1EC;
    }
L_088BA1EC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x088BA1F8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA1F8u) goto L_088BA1F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA1F8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_088BA1FC;
L_088BA1FC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088BA220;
      }
      goto L_088BA204;
    }
L_088BA204:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
      if (branch_taken) {
          goto L_088BA220;
      }
      goto L_088BA20C;
    }
L_088BA20C:
    aot_gpr_5 = (ctx.gpr[16] << 16u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_31 = (0x088BA220u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 335u, 0x0896D36Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA220u) goto L_088BA220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA220:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
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
L_088BA248:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088BA268u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA268u) goto L_088BA268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA268:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_31 = (0x088BA27Cu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 341u, 0x0896D3E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA27Cu) goto L_088BA27C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA27C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088BA288u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA288u) goto L_088BA288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA288:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088BA2A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x088BA2C4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA2C4u) goto L_088BA2C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA2C4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x088BA2D8u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA2D8u) goto L_088BA2D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA2D8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (2237u << 16u);
      if (branch_taken) {
          goto L_088BA310;
      }
      goto L_088BA2E4;
    }
L_088BA2E4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088BA318;
      }
      goto L_088BA308;
    }
L_088BA308:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088BA31C;
      }
      goto L_088BA310;
    }
L_088BA310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BA38C;
      }
      goto L_088BA318;
    }
L_088BA318:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    goto L_088BA31C;
L_088BA31C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088BA338;
      }
      goto L_088BA324;
    }
L_088BA324:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088BA330u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA330u) goto L_088BA330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA330:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BA388;
      }
      goto L_088BA338;
    }
L_088BA338:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[17] + ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[17] << 7u);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (2246u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(17840));
    aot_gpr_31 = (0x088BA360u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA360u) goto L_088BA360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA360:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088BA37C;
      }
      goto L_088BA368;
    }
L_088BA368:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088BA374u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA374u) goto L_088BA374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA374:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BA388;
      }
      goto L_088BA37C;
    }
L_088BA37C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088BA388u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA388u) goto L_088BA388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA388:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_088BA38C;
L_088BA38C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088BA3A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088BA3C4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA3C4u) goto L_088BA3C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA3C4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_7 = (aot_gpr_5 << 7u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17840));
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BA40C;
      }
      goto L_088BA3F8;
    }
L_088BA3F8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088BA404u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA404u) goto L_088BA404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA404:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BA418;
      }
      goto L_088BA40C;
    }
L_088BA40C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088BA418u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA418u) goto L_088BA418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA418:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088BA430:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088BA450u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA450u) goto L_088BA450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA450:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_7 = (aot_gpr_5 << 7u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17840));
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(62)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x088BA48Cu);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA48Cu) goto L_088BA48C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA48C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088BA4A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088BA4BCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA4BCu) goto L_088BA4BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA4BC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x088BA4D0u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA4D0u) goto L_088BA4D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA4D0:
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_5 = (ctx.gpr[16] << 7u);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2246u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17840));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
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
L_088BA510:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088BA530u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880692C, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA530u) goto L_088BA530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA530:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088BA540;
      }
      goto L_088BA538;
    }
L_088BA538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BA584;
      }
      goto L_088BA540;
    }
L_088BA540:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088BA54Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA54Cu) goto L_088BA54C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA54C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17840));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_7 = (aot_gpr_5 << 7u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    aot_gpr_31 = (0x088BA580u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA580u) goto L_088BA580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA580:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_088BA584;
L_088BA584:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088BA598:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24240));
      if (branch_taken) {
          goto L_088BA5BC;
      }
      goto L_088BA5AC;
    }
L_088BA5AC:
    aot_gpr_31 = (0x088BA5B4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA5B4u) goto L_088BA5B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA5B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24240));
    goto L_088BA5BC;
L_088BA5BC:
    aot_gpr_31 = (0x088BA5C4u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24176));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 270u, 0x08885284u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA5C4u) goto L_088BA5C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA5C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2232u << 16u);
      if (branch_taken) {
          goto L_088BA5E0;
      }
      goto L_088BA5D0;
    }
L_088BA5D0:
    aot_gpr_31 = (0x088BA5D8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA5D8u) goto L_088BA5D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA5D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (2232u << 16u);
    goto L_088BA5E0;
L_088BA5E0:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088BA5ECu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21924));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA5ECu) goto L_088BA5EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA5EC:
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
L_088BA5F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088BA618u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088BA740;
L_088BA618:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
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
L_088BA62C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088BA664;
      }
      goto L_088BA648;
    }
L_088BA648:
    aot_gpr_31 = (0x088BA650u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088BA6AC;
L_088BA650:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BA664;
      }
      goto L_088BA65C;
    }
L_088BA65C:
    aot_gpr_31 = (0x088BA664u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA664u) goto L_088BA664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA664:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_088BA678:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x088BA688u);
    goto L_088BA768;
L_088BA688:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_088BA698;
      }
      goto L_088BA698;
    }
L_088BA698:
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
L_088BA6A4:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
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
L_088BA6AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BA6DC;
      }
      goto L_088BA6C8;
    }
L_088BA6C8:
    aot_gpr_31 = (0x088BA6D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 245u, 0x08B213BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA6D0u) goto L_088BA6D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA6D0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BA6E0;
      }
      goto L_088BA6DC;
    }
L_088BA6DC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088BA6E0;
L_088BA6E0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
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
L_088BA6F0:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_088BA70C;
    }
    goto L_088BA70C;
L_088BA70C:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_088BA720;
    }
    goto L_088BA720;
L_088BA720:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_13));
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
L_088BA728:
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(aot_fpr_13));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
L_088BA740:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(44), 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), 0u);
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
L_088BA768:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24164)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16965)));
      if (branch_taken) {
          goto L_088BA7A8;
      }
      goto L_088BA794;
    }
L_088BA794:
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24163)));
    ctx.gpr[3] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
      if (branch_taken) {
          goto L_088BA7A8;
      }
      goto L_088BA7A4;
    }
L_088BA7A4:
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    goto L_088BA7A8;
L_088BA7A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) < 0;
      if (branch_taken) {
          goto L_088BA7C4;
      }
      goto L_088BA7B0;
    }
L_088BA7B0:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088BA7C4;
      }
      goto L_088BA7C0;
    }
L_088BA7C0:
    aot_gpr_6 = (0u | 0u);
    goto L_088BA7C4;
L_088BA7C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
      if (branch_taken) {
          goto L_088BA7D8;
      }
      goto L_088BA7CC;
    }
L_088BA7CC:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    goto L_088BA7D8;
L_088BA7D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (aot_gpr_4 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA7EC;
    }
L_088BA7EC:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21840)));
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
L_088BA804:
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[8] = (0u | 180u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA818;
    }
L_088BA818:
    ctx.gpr[9] = (0u | 100u);
    ctx.gpr[8] = (0u | 220u);
    aot_gpr_7 = (0u | 230u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 158u);
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA82C;
    }
L_088BA82C:
    ctx.gpr[9] = (0u | 80u);
    ctx.gpr[8] = (0u | 255u);
    aot_gpr_7 = (0u | 230u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 138u);
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA840;
    }
L_088BA840:
    ctx.gpr[8] = (0u | 60u);
    ctx.gpr[9] = (0u | 255u);
    aot_gpr_7 = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 200u);
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA854;
    }
L_088BA854:
    ctx.gpr[8] = (0u | 180u);
    ctx.gpr[9] = (0u | 255u);
    aot_gpr_7 = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 128u);
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA868;
    }
L_088BA868:
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 240u);
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA87C;
    }
L_088BA87C:
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[8] = (0u | 180u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 120u);
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA890;
    }
L_088BA890:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_088BA978;
      }
      goto L_088BA898;
    }
L_088BA898:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16968)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
        goto L_088BA8CC;
    }
    goto L_088BA8A8;
L_088BA8A8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16967)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
        goto L_088BA8CC;
    }
    goto L_088BA8B8;
L_088BA8B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16966)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088BA978;
      }
      goto L_088BA8C8;
    }
L_088BA8C8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    goto L_088BA8CC;
L_088BA8CC:
    aot_gpr_4 = (50047u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17279u << 16u);
    aot_gpr_5 = (0u | 255u);
    ctx.gpr[10] = (16256u << 16u);
    ctx.gpr[11] = (aot_gpr_5 - ctx.gpr[9]);
    ctx.gpr[2] = (aot_gpr_5 - ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_7);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[9]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_14 = ctx.fpr[18] + aot_fpr_14;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_7);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    { const float fs = ctx.fpr[19]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = ctx.fpr[17] + ctx.fpr[15];
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_fpr_12 = ctx.fpr[18] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088BA978;
L_088BA978:
    ctx.gpr[10] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (aot_gpr_6 & 255u);
    aot_gpr_5 = (ctx.gpr[9] & 255u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088BA994u);
    aot_gpr_6 = (ctx.gpr[10] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA994u) goto L_088BA994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA994:
    aot_gpr_31 = (0x088BA99Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 268u, 0x08935094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BA99Cu) goto L_088BA99C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BA99C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088BA9C0;
      }
      goto L_088BA9A4;
    }
L_088BA9A4:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088BA9C8;
      }
      goto L_088BA9C0;
    }
L_088BA9C0:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24145), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_088BA9C8;
L_088BA9C8:
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
L_088BA9D4:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_7 - aot_gpr_6);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) < 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BAA10;
      }
      goto L_088BA9FC;
    }
L_088BA9FC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
      if (branch_taken) {
          goto L_088BAA10;
      }
      goto L_088BAA04;
    }
L_088BAA04:
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088BAA84;
      }
      goto L_088BAA10;
    }
L_088BAA10:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
    aot_gpr_5 = (0u - aot_gpr_6);
      if (branch_taken) {
          goto L_088BAA2C;
      }
      goto L_088BAA18;
    }
L_088BAA18:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 6u));
    aot_gpr_5 = (aot_gpr_5 >> 26u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 6u));
      if (branch_taken) {
          goto L_088BAA4C;
      }
      goto L_088BAA2C;
    }
L_088BAA2C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 6u));
    aot_gpr_5 = (aot_gpr_5 >> 26u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 6u));
    aot_gpr_5 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    goto L_088BAA4C;
L_088BAA4C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_gpr_5 << 2u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_088BAA84;
L_088BAA84:
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
L_088BAA8C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 - ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BAAD0;
      }
      goto L_088BAAB8;
    }
L_088BAAB8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_088BAAD0;
      }
      goto L_088BAAC0;
    }
L_088BAAC0:
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_7);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088BAB44;
      }
      goto L_088BAAD0;
    }
L_088BAAD0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    aot_gpr_6 = (0u - aot_gpr_5);
      if (branch_taken) {
          goto L_088BAAEC;
      }
      goto L_088BAAD8;
    }
L_088BAAD8:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 6u));
    aot_gpr_6 = (aot_gpr_6 >> 26u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 6u));
      if (branch_taken) {
          goto L_088BAB0C;
      }
      goto L_088BAAEC;
    }
L_088BAAEC:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 6u));
    aot_gpr_6 = (aot_gpr_6 >> 26u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 6u));
    aot_gpr_6 = (0u - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    goto L_088BAB0C;
L_088BAB0C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_gpr_6 << 2u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 << 6u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_088BAB44;
L_088BAB44:
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
L_088BAB4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
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
L_088BAB60:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(22480));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(60), aot_gpr_6);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    { const std::uint32_t aot_run_words[12]{0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_run_words); }
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
L_088BABB4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088BAED8;
      }
      goto L_088BABDC;
    }
L_088BABDC:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22480));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088BABFCu);
    aot_gpr_5 = (0u | 1u);
    goto L_088BB4BC;
L_088BABFC:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(116));
    aot_gpr_31 = (0x088BAC14u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 41u, 0x08934334u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BAC14u) goto L_088BAC14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BAC14:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088BAC68;
      }
      goto L_088BAC28;
    }
L_088BAC28:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr_7 = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_7 == aot_gpr_6;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BAC48;
      }
      goto L_088BAC3C;
    }
L_088BAC3C:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    goto L_088BAC40;
L_088BAC40:
    { const bool branch_taken = aot_gpr_7 != aot_gpr_6;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BAC40;
      }
      goto L_088BAC48;
    }
L_088BAC48:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BAC68;
      }
      goto L_088BAC50;
    }
L_088BAC50:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088BAC68;
      }
      goto L_088BAC58;
    }
L_088BAC58:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088BAC68;
      }
      goto L_088BAC60;
    }
L_088BAC60:
    aot_gpr_31 = (0x088BAC68u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BAC68u) goto L_088BAC68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BAC68:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088BACB0;
      }
      goto L_088BAC70;
    }
L_088BAC70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BAC90;
      }
      goto L_088BAC84;
    }
L_088BAC84:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    goto L_088BAC88;
L_088BAC88:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088BAC88;
      }
      goto L_088BAC90;
    }
L_088BAC90:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088BACB0;
      }
      goto L_088BAC98;
    }
L_088BAC98:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BACB0;
      }
      goto L_088BACA0;
    }
L_088BACA0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BACB0;
      }
      goto L_088BACA8;
    }
L_088BACA8:
    aot_gpr_31 = (0x088BACB0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BACB0u) goto L_088BACB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BACB0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088BACDC;
      }
      goto L_088BACB8;
    }
L_088BACB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BACDC;
      }
      goto L_088BACC4;
    }
L_088BACC4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BACDC;
      }
      goto L_088BACCC;
    }
L_088BACCC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BACDC;
      }
      goto L_088BACD4;
    }
L_088BACD4:
    aot_gpr_31 = (0x088BACDCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BACDCu) goto L_088BACDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BACDC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_088BAEC8;
      }
      goto L_088BACE4;
    }
L_088BACE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BAEA0;
      }
      goto L_088BACF4;
    }
L_088BACF4:
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(52));
    ctx.gpr[11] = (aot_gpr_29 + static_cast<std::uint32_t>(68));
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(84));
    goto L_088BAD0C;
L_088BAD0C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BAE94;
      }
      goto L_088BAD14;
    }
L_088BAD14:
    if (aot_gpr_6 == 0u) {
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(56));
        goto L_088BAE98;
    }
    goto L_088BAD1C;
L_088BAD1C:
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    ctx.gpr[3] = (ctx.gpr[11] | 0u);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[2] | 0u);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] ^ ctx.gpr[14]);
    ctx.gpr[13] = (0u < ctx.gpr[13] ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    if (ctx.gpr[13] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_4);
        goto L_088BAE64;
    }
    goto L_088BAE04;
L_088BAE04:
    ctx.gpr[13] = (ctx.gpr[11] | 0u);
    goto L_088BAE08;
L_088BAE08:
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[14] != ctx.gpr[15]) {
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_088BAE48;
    }
    goto L_088BAE20;
L_088BAE20:
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(12), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), ctx.gpr[14]);
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_088BAE48;
L_088BAE48:
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] ^ ctx.gpr[14]);
    ctx.gpr[13] = (0u < ctx.gpr[13] ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[13] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_088BAE08;
      }
      goto L_088BAE60;
    }
L_088BAE60:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_4);
    goto L_088BAE64;
L_088BAE64:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088BAE74u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 121u, 0x08B6876Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BAE74u) goto L_088BAE74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BAE74:
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(84));
    ctx.gpr[11] = (aot_gpr_29 + static_cast<std::uint32_t>(68));
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    goto L_088BAE94;
L_088BAE94:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(56));
    goto L_088BAE98;
L_088BAE98:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_088BAD0C;
      }
      goto L_088BAEA0;
    }
L_088BAEA0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_088BAEC8;
      }
      goto L_088BAEA8;
    }
L_088BAEA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[17] & 1u);
        goto L_088BAEC8;
    }
    goto L_088BAEB4;
L_088BAEB4:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[17] & 1u);
        goto L_088BAEC8;
    }
    goto L_088BAEBC;
L_088BAEBC:
    aot_gpr_31 = (0x088BAEC4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BAEC4u) goto L_088BAEC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BAEC4:
    aot_gpr_4 = (ctx.gpr[17] & 1u);
    goto L_088BAEC8;
L_088BAEC8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BAED8;
      }
      goto L_088BAED0;
    }
L_088BAED0:
    aot_gpr_31 = (0x088BAED8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BAED8u) goto L_088BAED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BAED8:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
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
L_088BAEF8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_7);
    aot_gpr_4 = (0u | 56u);
    ctx.gpr[8] = (0u | 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_088BAF64;
      }
      goto L_088BAF20;
    }
L_088BAF20:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == aot_gpr_5;
      if (branch_taken) {
          goto L_088BAF4C;
      }
      goto L_088BAF2C;
    }
L_088BAF2C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088BAF20;
      }
      goto L_088BAF44;
    }
L_088BAF44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BAF64;
      }
      goto L_088BAF4C;
    }
L_088BAF4C:
    aot_gpr_4 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_gpr_5 ^ aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088BAF68;
      }
      goto L_088BAF64;
    }
L_088BAF64:
    ctx.gpr[2] = (0u | 1u);
    goto L_088BAF68;
L_088BAF68:
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
L_088BAF70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (2188u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-15428));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8616))))));
    aot_gpr_31 = (0x088BAFB0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 323u, 0x08B6A1E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BAFB0u) goto L_088BAFB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BAFB0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088BAFC0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 294u, 0x08B6A05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BAFC0u) goto L_088BAFC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BAFC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] ^ aot_gpr_4);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
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
L_088BAFE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088BB038;
      }
      goto L_088BB01C;
    }
L_088BB01C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BB030;
      }
      goto L_088BB024;
    }
L_088BB024:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_088BB030;
L_088BB030:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), aot_gpr_4);
      if (branch_taken) {
          goto L_088BB130;
      }
      goto L_088BB038;
    }
L_088BB038:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
      if (branch_taken) {
          goto L_088BB078;
      }
      goto L_088BB068;
    }
L_088BB068:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_5 + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088BB084;
      }
      goto L_088BB078;
    }
L_088BB078:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_gpr_5 + ctx.gpr[18]);
    goto L_088BB084;
L_088BB084:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_088BB0C0;
      }
      goto L_088BB08C;
    }
L_088BB08C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_31 = (0x088BB09Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB09Cu) goto L_088BB09C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB09C:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088BB0C0;
      }
      goto L_088BB0AC;
    }
L_088BB0AC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_31 = (0x088BB0B8u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB0B8u) goto L_088BB0B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB0B8:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_088BB0C0;
L_088BB0C0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    ctx.gpr[19] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088BB0D4;
      }
      goto L_088BB0CC;
    }
L_088BB0CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088BB0F0;
      }
      goto L_088BB0D4;
    }
L_088BB0D4:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[20] = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088BB0E8u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB0E8u) goto L_088BB0E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB0E8:
    aot_gpr_5 = (ctx.gpr[2] + ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_088BB0F0;
L_088BB0F0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088BB108;
      }
      goto L_088BB0F8;
    }
L_088BB0F8:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BB0F8;
      }
      goto L_088BB108;
    }
L_088BB108:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BB11C;
      }
      goto L_088BB114;
    }
L_088BB114:
    aot_gpr_31 = (0x088BB11Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB11Cu) goto L_088BB11C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB11C:
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_4};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(24), aot_run_words); }
    goto L_088BB130;
L_088BB130:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088BB13Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 468u, 0x08A9BB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB13Cu) goto L_088BB13C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB13C:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
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
L_088BB15C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    ctx.gpr[17] = (aot_gpr_7 + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_7 = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BB1B8;
      }
      goto L_088BB1AC;
    }
L_088BB1AC:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_7);
      if (branch_taken) {
          goto L_088BB1C0;
      }
      goto L_088BB1B8;
    }
L_088BB1B8:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_7);
    goto L_088BB1C0;
L_088BB1C0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB21C;
      }
      goto L_088BB1C8;
    }
L_088BB1C8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] << 3u);
    aot_gpr_31 = (0x088BB1E0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB1E0u) goto L_088BB1E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB1E0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
    }
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088BB21C;
      }
      goto L_088BB1F8;
    }
L_088BB1F8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x088BB20Cu);
    aot_gpr_4 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB20Cu) goto L_088BB20C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB20C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_088BB21C;
L_088BB21C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BB254;
      }
      goto L_088BB22C;
    }
L_088BB22C:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(8));
        goto L_088BB24C;
    }
    goto L_088BB238;
L_088BB238:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(8));
    goto L_088BB24C;
L_088BB24C:
    { const bool branch_taken = aot_gpr_7 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088BB22C;
      }
      goto L_088BB254;
    }
L_088BB254:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[8];
      if (branch_taken) {
          goto L_088BB28C;
      }
      goto L_088BB264;
    }
L_088BB264:
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_088BB280;
      }
      goto L_088BB270;
    }
L_088BB270:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_088BB280;
L_088BB280:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088BB2C0;
      }
      goto L_088BB28C;
    }
L_088BB28C:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BB2BC;
      }
      goto L_088BB294;
    }
L_088BB294:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
        goto L_088BB2B4;
    }
    goto L_088BB2A0;
L_088BB2A0:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    goto L_088BB2B4;
L_088BB2B4:
    { const bool branch_taken = aot_gpr_7 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088BB294;
      }
      goto L_088BB2BC;
    }
L_088BB2BC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088BB2C0;
L_088BB2C0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088BB304;
      }
      goto L_088BB2C8;
    }
L_088BB2C8:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BB304;
      }
      goto L_088BB2D8;
    }
L_088BB2D8:
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
        goto L_088BB2F8;
    }
    goto L_088BB2E4;
L_088BB2E4:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_7);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    goto L_088BB2F8;
L_088BB2F8:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088BB2D8;
      }
      goto L_088BB300;
    }
L_088BB300:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088BB304;
L_088BB304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BB320;
      }
      goto L_088BB314;
    }
L_088BB314:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    goto L_088BB318;
L_088BB318:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088BB318;
      }
      goto L_088BB320;
    }
L_088BB320:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BB330;
      }
      goto L_088BB328;
    }
L_088BB328:
    aot_gpr_31 = (0x088BB330u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB330u) goto L_088BB330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB330:
    aot_gpr_4 = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_4};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_run_words); }
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
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
L_088BB360:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(96));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(14)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088BB3E8;
      }
      goto L_088BB3BC;
    }
L_088BB3BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_088BB3DC;
    }
    goto L_088BB3C8;
L_088BB3C8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_088BB3DC;
L_088BB3DC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), aot_gpr_4);
      if (branch_taken) {
          goto L_088BB408;
      }
      goto L_088BB3E8;
    }
L_088BB3E8:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x088BB408u);
    ctx.gpr[9] = (0u | 1u);
    goto L_088BB15C;
L_088BB408:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088BB414u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 468u, 0x08A9BB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB414u) goto L_088BB414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB414:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088BB428u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 296u, 0x08B6A098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB428u) goto L_088BB428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB428:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088BB43C;
      }
      goto L_088BB434;
    }
L_088BB434:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088BB470;
      }
      goto L_088BB43C;
    }
L_088BB43C:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_088BB470;
      }
      goto L_088BB448;
    }
L_088BB448:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088BB44C;
L_088BB44C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_6 == aot_gpr_7) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_088BB468;
    }
    goto L_088BB458;
L_088BB458:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_088BB468;
L_088BB468:
    if (aot_gpr_4 != ctx.gpr[17]) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_088BB44C;
    }
    goto L_088BB470;
L_088BB470:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_6;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BB4A0;
      }
      goto L_088BB480;
    }
L_088BB480:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_6 - aot_gpr_7);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    aot_gpr_31 = (0x088BB498u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB498u) goto L_088BB498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB498:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_088BB4A0;
      }
      goto L_088BB4A0;
    }
L_088BB4A0:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), aot_gpr_5);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
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
L_088BB4BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088BB52C;
      }
      goto L_088BB4E8;
    }
L_088BB4E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088BB514;
      }
      goto L_088BB4F4;
    }
L_088BB4F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(108)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088BB510u);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB510u) goto L_088BB510;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB510:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_088BB514;
L_088BB514:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088BB4E8;
      }
      goto L_088BB52C;
    }
L_088BB52C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
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
L_088BB53C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_31);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_gpr_6 | 0u);
    ctx.gpr[8] = (aot_gpr_7 - ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (0u | 56u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
      if (branch_taken) {
          goto L_088BB5F0;
      }
      goto L_088BB570;
    }
L_088BB570:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088BB598u);
    aot_gpr_5 = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 154u, 0x08B68A00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB598u) goto L_088BB598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB598:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(44));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    aot_gpr_5 = (ctx.gpr[9] + static_cast<std::uint32_t>(44));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(46));
    aot_gpr_5 = (ctx.gpr[9] + static_cast<std::uint32_t>(46));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(56));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(56));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_088BB570;
      }
      goto L_088BB5EC;
    }
L_088BB5EC:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    goto L_088BB5F0;
L_088BB5F0:
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BB7C0;
      }
      goto L_088BB5FC;
    }
L_088BB5FC:
    ctx.gpr[15] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[14] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[13] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.gpr[12] = (aot_gpr_29 + static_cast<std::uint32_t>(52));
    ctx.gpr[3] = (aot_gpr_29 + static_cast<std::uint32_t>(68));
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(84));
    goto L_088BB614;
L_088BB614:
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[24] = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BB7B4;
      }
      goto L_088BB61C;
    }
L_088BB61C:
    if (ctx.gpr[24] == 0u) {
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(56));
        goto L_088BB7B8;
    }
    goto L_088BB624;
L_088BB624:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[9]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    ctx.gpr[25] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] ^ ctx.gpr[25]);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), ctx.gpr[8]);
        goto L_088BB76C;
    }
    goto L_088BB70C;
L_088BB70C:
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    goto L_088BB710;
L_088BB710:
    ctx.gpr[25] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[25]);
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[25] != aot_gpr_31) {
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
        goto L_088BB750;
    }
    goto L_088BB728;
L_088BB728:
    ctx.gpr[25] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[25]);
    ctx.gpr[25] = (aot_mem.aot_direct_load32(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[25]);
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[25]);
    ctx.gpr[25] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[25]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    goto L_088BB750;
L_088BB750:
    ctx.gpr[25] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] ^ ctx.gpr[25]);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_088BB710;
      }
      goto L_088BB768;
    }
L_088BB768:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), ctx.gpr[8]);
    goto L_088BB76C;
L_088BB76C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[24] | 0u);
    aot_gpr_31 = (0x088BB788u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 121u, 0x08B6876Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB788u) goto L_088BB788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB788:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(84));
    ctx.gpr[3] = (aot_gpr_29 + static_cast<std::uint32_t>(68));
    ctx.gpr[12] = (aot_gpr_29 + static_cast<std::uint32_t>(52));
    ctx.gpr[13] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.gpr[14] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[15] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      aot_gpr_7 = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
    }
    goto L_088BB7B4;
L_088BB7B4:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(56));
    goto L_088BB7B8;
L_088BB7B8:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_088BB614;
      }
      goto L_088BB7C0;
    }
L_088BB7C0:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[2] = (aot_gpr_5 | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
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
L_088BB7D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (2188u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-15428));
    aot_gpr_31 = (0x088BB818u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8616))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 323u, 0x08B6A1E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB818u) goto L_088BB818;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB818:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088BB840u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 321u, 0x08B6A1A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB840u) goto L_088BB840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB840:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[20];
      if (branch_taken) {
          goto L_088BB864;
      }
      goto L_088BB84C;
    }
L_088BB84C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_088BB850;
L_088BB850:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088BB85Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_088BB53C;
L_088BB85C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BB910;
      }
      goto L_088BB864;
    }
L_088BB864:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_5);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_6);
      if (branch_taken) {
          goto L_088BB908;
      }
      goto L_088BB884;
    }
L_088BB884:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    goto L_088BB888;
L_088BB888:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(52))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088BB8ACu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB8ACu) goto L_088BB8AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB8AC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
        goto L_088BB900;
    }
    goto L_088BB8B4;
L_088BB8B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088BB8C8u);
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 154u, 0x08B68A00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB8C8u) goto L_088BB8C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB8C8:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(44));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(46));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(46));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
    goto L_088BB900;
L_088BB900:
    if (ctx.gpr[19] != ctx.gpr[20]) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[19]);
        goto L_088BB888;
    }
    goto L_088BB908;
L_088BB908:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088BB850;
      }
      goto L_088BB910;
    }
L_088BB910:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
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
L_088BB930:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const std::uint32_t aot_run_words[6]{0u, 0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_31 = (0x088BB974u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 130u, 0x08B687E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BB974u) goto L_088BB974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BB974:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
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
L_088BB990:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_gpr_31);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_7);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_7 = (aot_gpr_7 >> 31u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_7);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_7 = (aot_gpr_7 >> 31u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[9]{0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x088BBA34u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 130u, 0x08B687E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BBA34u) goto L_088BBA34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BBA34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_7);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words);
      aot_gpr_7 = aot_run_words[0];
      ctx.gpr[8] = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, ctx.gpr[8], ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_7);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[11], aot_gpr_5, aot_gpr_6, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_4, ctx.gpr[8], ctx.gpr[9], aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088BBBE8;
      }
      goto L_088BBB44;
    }
L_088BBB44:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_088BBB48;
L_088BBB48:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088BBB5C;
      }
      goto L_088BBB50;
    }
L_088BBB50:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    goto L_088BBB5C;
L_088BBB5C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
        goto L_088BBB98;
    }
    goto L_088BBB70;
L_088BBB70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_088BBB98;
L_088BBB98:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_088BBBD0;
      }
      goto L_088BBBAC;
    }
L_088BBBAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_088BBBD0;
L_088BBBD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
        goto L_088BBB48;
    }
    goto L_088BBBE8;
L_088BBBE8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
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
L_088BBBF8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 - ctx.gpr[9]);
    ctx.gpr[9] = (0u | 56u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_7); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[17] = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_7 = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BBC50;
      }
      goto L_088BBC44;
    }
L_088BBC44:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_7);
      if (branch_taken) {
          goto L_088BBC58;
      }
      goto L_088BBC50;
    }
L_088BBC50:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_7);
    goto L_088BBC58;
L_088BBC58:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088BBCBC;
      }
      goto L_088BBC60;
    }
L_088BBC60:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] << 6u);
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_31 = (0x088BBC80u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BBC80u) goto L_088BBC80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BBC80:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_088BBCBC;
      }
      goto L_088BBC98;
    }
L_088BBC98:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_5);
    aot_gpr_31 = (0x088BBCACu);
    aot_gpr_4 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BBCACu) goto L_088BBCAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BBCAC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    goto L_088BBCBC;
L_088BBCBC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BBD50;
      }
      goto L_088BBCCC;
    }
L_088BBCCC:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(56));
        goto L_088BBD48;
    }
    goto L_088BBCD8;
L_088BBCD8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088BBD00u);
    aot_gpr_5 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    goto L_088BB990;
L_088BBD00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(44));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(168)));
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(44));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(46));
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(46));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(56));
    goto L_088BBD48;
L_088BBD48:
    { const bool branch_taken = aot_gpr_7 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088BBCCC;
      }
      goto L_088BBD50;
    }
L_088BBD50:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[10] != aot_gpr_7;
      if (branch_taken) {
          goto L_088BBDDC;
      }
      goto L_088BBD60;
    }
L_088BBD60:
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_088BBDD0;
      }
      goto L_088BBD6C;
    }
L_088BBD6C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088BBD90u);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    goto L_088BB990;
L_088BBD90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(44));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(44));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(46));
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(46));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    goto L_088BBDD0;
L_088BBDD0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088BBE88;
      }
      goto L_088BBDDC;
    }
L_088BBDDC:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BBE84;
      }
      goto L_088BBDE4;
    }
L_088BBDE4:
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_gpr_6 + static_cast<std::uint32_t>(44));
    ctx.gpr[9] = (aot_gpr_6 + static_cast<std::uint32_t>(46));
    goto L_088BBDF0;
L_088BBDF0:
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
        goto L_088BBE7C;
    }
    goto L_088BBDFC;
L_088BBDFC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088BBE30u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    goto L_088BB990;
L_088BBE30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(44));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(46));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    goto L_088BBE7C;
L_088BBE7C:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088BBDF0;
      }
      goto L_088BBE84;
    }
L_088BBE84:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088BBE88;
L_088BBE88:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088BBF20;
      }
      goto L_088BBE90;
    }
L_088BBE90:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BBF1C;
      }
      goto L_088BBEA0;
    }
L_088BBEA0:
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(56));
        goto L_088BBF10;
    }
    goto L_088BBEAC;
L_088BBEAC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_4);
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088BBED0u);
    aot_gpr_5 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    goto L_088BB990;
L_088BBED0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(44));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    aot_gpr_7 = (aot_gpr_4 + static_cast<std::uint32_t>(44));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(46));
    aot_gpr_7 = (aot_gpr_4 + static_cast<std::uint32_t>(46));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(52), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(56));
    goto L_088BBF10;
L_088BBF10:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088BBEA0;
      }
      goto L_088BBF18;
    }
L_088BBF18:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088BBF1C;
L_088BBF1C:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    goto L_088BBF20;
L_088BBF20:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0046_entry, 46u, 12u, 0x088BC0E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088BBF30;
    }
L_088BBF30:
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(60));
    ctx.gpr[11] = (aot_gpr_29 + static_cast<std::uint32_t>(76));
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(92));
    goto L_088BBF48;
L_088BBF48:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0046_entry, 46u, 9u, 0x088BC0D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088BBF50;
    }
L_088BBF50:
    if (aot_gpr_6 == 0u) {
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(56));
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0046_entry, 46u, 10u, 0x088BC0D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_088BBF58;
L_088BBF58:
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    ctx.pc = 0x088BC000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0045(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0045_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_45(Runtime &runtime) {
    runtime.register_generated_unit(45u, 0x088B8000u, 16384u, &recomp_unit_0045, &recomp_unit_0045_entry);
    runtime.register_function(0x088B8000u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8008u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8050u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8060u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B80C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B80ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B80F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B810Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B811Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8128u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8138u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8148u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8154u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8164u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8204u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8234u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B825Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8268u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8298u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8300u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8338u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8344u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8514u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B851Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8524u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8530u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B853Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8560u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8568u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8570u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B857Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8588u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8610u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B862Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8648u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8664u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8680u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B869Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8704u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B870Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8720u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8758u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8778u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8790u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8798u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B879Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8808u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8810u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8814u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8840u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8850u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8864u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B886Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8878u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8880u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8898u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B889Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8900u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8920u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8950u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B895Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B896Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8978u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8998u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8AF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8AFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B24u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B9Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8BA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8BC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8BD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8BE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8BECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8BF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C74u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CD8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E9Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8EA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8EB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8EC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8EE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8EECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9008u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9014u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9024u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9030u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9034u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9044u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B904Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B905Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B906Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9088u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9094u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9104u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9108u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9118u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9120u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9130u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9140u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B915Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9168u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B918Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9194u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9204u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9214u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9230u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9240u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9254u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9288u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9304u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9310u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9318u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B932Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9334u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B933Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B936Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9378u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9380u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9388u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9394u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B939Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9434u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9490u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9498u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B950Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B951Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9528u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9530u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9538u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9540u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9550u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9558u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9560u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9564u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9570u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9590u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9598u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9600u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B960Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9620u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B962Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B963Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9650u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B966Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9688u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9694u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B969Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B96B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B96DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B96E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B96E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B96F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9704u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B970Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9714u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B971Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9724u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B972Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9734u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B973Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9758u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9760u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9774u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9788u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9798u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9800u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9808u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9810u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9830u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9838u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9840u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9848u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B985Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9890u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9924u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9930u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9960u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9970u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B997Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9988u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9998u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9AB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9ABCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9AC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9AD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B38u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C74u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D24u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9DE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E24u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9EA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9EB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9EF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA000u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA00Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA020u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA030u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA04Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA068u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA07Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA090u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA09Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA120u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA128u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA134u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA138u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA148u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA154u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA160u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA170u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA180u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA18Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA194u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA204u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA20Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA220u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA248u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA268u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA27Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA288u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA308u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA310u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA318u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA31Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA324u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA330u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA338u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA360u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA368u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA374u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA37Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA388u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA38Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA3A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA3C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA3F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA404u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA40Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA418u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA430u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA450u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA48Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA510u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA530u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA538u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA540u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA54Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA580u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA584u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA598u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA618u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA62Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA648u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA650u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA65Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA664u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA678u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA688u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA698u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA70Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA720u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA728u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA740u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA768u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA794u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA804u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA818u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA82Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA840u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA854u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA868u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA87Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA890u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA898u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA978u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA994u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA99Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAD8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE74u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAED0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAED8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB01Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB024u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB030u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB038u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB068u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB078u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB084u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB08Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB09Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB108u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB114u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB11Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB130u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB13Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB15Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB20Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB21Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB22Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB238u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB24Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB254u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB264u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB270u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB280u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB28Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB294u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB300u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB304u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB314u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB318u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB320u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB328u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB330u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB360u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB408u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB414u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB428u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB434u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB43Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB448u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB44Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB458u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB468u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB470u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB480u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB498u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB510u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB514u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB52Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB53Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB570u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB598u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB614u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB61Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB624u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB70Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB710u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB728u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB750u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB768u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB76Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB788u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB818u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB840u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB84Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB850u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB85Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB864u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB884u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB888u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB900u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB908u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB910u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB930u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB974u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB990u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBA34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCD8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBED0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF58u, &recomp_unit_0045, "recomp_unit_0045");
}
} // namespace psprecomp
