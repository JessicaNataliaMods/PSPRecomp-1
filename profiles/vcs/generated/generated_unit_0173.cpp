#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0173[64] = {
    0x24A15214280A0211ull, 0x2854850A0140242Dull, 0x140942A428500A01ull, 0x0A140A04A1521428ull,
    0x04522800000050A9ull, 0x001148A444444440ull, 0x8880114891111111ull, 0x420A002800948888ull,
    0x0000011111110010ull, 0x0882002109020140ull, 0x00502540A0509280ull, 0x81020406822A9524ull,
    0x4048480000000250ull, 0x2001040000000250ull, 0x9480426948008201ull, 0x000284145400404Aull,
    0x40002A0002080004ull, 0x000090A800808000ull, 0x1208000040020000ull, 0x2128009400482002ull,
    0x80000552A0028200ull, 0x142056A054004100ull, 0x150A500482010000ull, 0x5001400424850422ull,
    0x2208220014048020ull, 0x7494049622222222ull, 0x9091014A00404089ull, 0x210A005000841104ull,
    0x1500000010040480ull, 0x020020008000A105ull, 0x2000100015000000ull, 0x000122A000000200ull,
    0x0010000080040000ull, 0x000002A950000001ull, 0x2056A05400000040ull, 0x002A400100100014ull,
    0x550A941440081000ull, 0x0820000000128551ull, 0x0160000000128028ull, 0xA842B42A40154001ull,
    0x000000004A2A8010ull, 0x0180000000250011ull, 0x4024A9440134A001ull, 0x012A52A8109A5201ull,
    0x600000520A080C00ull, 0x4205411410000120ull, 0x080202AAAAA49022ull, 0x0014551451451552ull,
    0x102010624014004Aull, 0x8040102010102010ull, 0x0408040102010040ull, 0x0200810080102010ull,
    0x0400401020100204ull, 0x28081001030480A0ull, 0x090140040040C120ull, 0x8182405010200206ull,
    0x90040C1202800800ull, 0x0824C106248020C4ull, 0x106200401010B200ull, 0x1001020100102011ull,
    0x10A2100420100420ull, 0x05022C1202808502ull, 0x8140419210045824ull, 0x2404000401021110ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0173[64] = {
    1u, 18u, 36u, 52u, 69u, 81u, 95u, 111u, 124u, 132u, 142u, 156u, 173u, 181u, 187u, 202u,
    214u, 221u, 228u, 233u, 244u, 255u, 269u, 280u, 293u, 303u, 323u, 337u, 348u, 355u, 363u, 368u,
    374u, 377u, 385u, 396u, 404u, 418u, 428u, 436u, 454u, 462u, 469u, 485u, 504u, 514u, 525u, 543u,
    563u, 575u, 583u, 590u, 597u, 604u, 615u, 625u, 637u, 647u, 662u, 673u, 681u, 691u, 705u, 720u,
};
void recomp_unit_0173_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,6,29,31,7 fprs=12,13,14 gpr_occ=3936 fpr_occ=74 gpr_total=6612 fpr_total=74
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[29] = aot_gpr_29; ctx.gpr[31] = aot_gpr_31; ctx.gpr[7] = aot_gpr_7; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_7 = ctx.gpr[7]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AB8004u;
        entry_id = 0u;
        if (entry_delta < 16376u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0173[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0173[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08AB8004;
    case 2u: goto L_08AB8014;
    case 3u: goto L_08AB8028;
    case 4u: goto L_08AB8048;
    case 5u: goto L_08AB8050;
    case 6u: goto L_08AB8070;
    case 7u: goto L_08AB8078;
    case 8u: goto L_08AB808C;
    case 9u: goto L_08AB8094;
    case 10u: goto L_08AB80A8;
    case 11u: goto L_08AB80B4;
    case 12u: goto L_08AB80BC;
    case 13u: goto L_08AB80C4;
    case 14u: goto L_08AB80D8;
    case 15u: goto L_08AB80E0;
    case 16u: goto L_08AB80EC;
    case 17u: goto L_08AB80F8;
    case 18u: goto L_08AB8104;
    case 19u: goto L_08AB810C;
    case 20u: goto L_08AB8110;
    case 21u: goto L_08AB8118;
    case 22u: goto L_08AB812C;
    case 23u: goto L_08AB8138;
    case 24u: goto L_08AB815C;
    case 25u: goto L_08AB8164;
    case 26u: goto L_08AB8188;
    case 27u: goto L_08AB8190;
    case 28u: goto L_08AB81A4;
    case 29u: goto L_08AB81AC;
    case 30u: goto L_08AB81C0;
    case 31u: goto L_08AB81CC;
    case 32u: goto L_08AB81D4;
    case 33u: goto L_08AB81DC;
    case 34u: goto L_08AB81F0;
    case 35u: goto L_08AB81F8;
    case 36u: goto L_08AB8204;
    case 37u: goto L_08AB8228;
    case 38u: goto L_08AB8230;
    case 39u: goto L_08AB8254;
    case 40u: goto L_08AB825C;
    case 41u: goto L_08AB8270;
    case 42u: goto L_08AB8278;
    case 43u: goto L_08AB828C;
    case 44u: goto L_08AB8298;
    case 45u: goto L_08AB82A0;
    case 46u: goto L_08AB82A8;
    case 47u: goto L_08AB82BC;
    case 48u: goto L_08AB82C4;
    case 49u: goto L_08AB82D0;
    case 50u: goto L_08AB82EC;
    case 51u: goto L_08AB82F4;
    case 52u: goto L_08AB8310;
    case 53u: goto L_08AB8318;
    case 54u: goto L_08AB832C;
    case 55u: goto L_08AB8334;
    case 56u: goto L_08AB8348;
    case 57u: goto L_08AB8354;
    case 58u: goto L_08AB835C;
    case 59u: goto L_08AB8364;
    case 60u: goto L_08AB8378;
    case 61u: goto L_08AB8380;
    case 62u: goto L_08AB838C;
    case 63u: goto L_08AB83A8;
    case 64u: goto L_08AB83B0;
    case 65u: goto L_08AB83CC;
    case 66u: goto L_08AB83D4;
    case 67u: goto L_08AB83E8;
    case 68u: goto L_08AB83F0;
    case 69u: goto L_08AB8404;
    case 70u: goto L_08AB8410;
    case 71u: goto L_08AB8418;
    case 72u: goto L_08AB8420;
    case 73u: goto L_08AB8434;
    case 74u: goto L_08AB843C;
    case 75u: goto L_08AB84B0;
    case 76u: goto L_08AB84B8;
    case 77u: goto L_08AB84C8;
    case 78u: goto L_08AB84D4;
    case 79u: goto L_08AB84DC;
    case 80u: goto L_08AB84EC;
    case 81u: goto L_08AB851C;
    case 82u: goto L_08AB852C;
    case 83u: goto L_08AB853C;
    case 84u: goto L_08AB854C;
    case 85u: goto L_08AB855C;
    case 86u: goto L_08AB856C;
    case 87u: goto L_08AB857C;
    case 88u: goto L_08AB858C;
    case 89u: goto L_08AB8598;
    case 90u: goto L_08AB85A0;
    case 91u: goto L_08AB85B0;
    case 92u: goto L_08AB85BC;
    case 93u: goto L_08AB85C4;
    case 94u: goto L_08AB85D4;
    case 95u: goto L_08AB8604;
    case 96u: goto L_08AB8614;
    case 97u: goto L_08AB8624;
    case 98u: goto L_08AB8634;
    case 99u: goto L_08AB8644;
    case 100u: goto L_08AB8654;
    case 101u: goto L_08AB8664;
    case 102u: goto L_08AB8674;
    case 103u: goto L_08AB8680;
    case 104u: goto L_08AB8690;
    case 105u: goto L_08AB869C;
    case 106u: goto L_08AB86A4;
    case 107u: goto L_08AB86B4;
    case 108u: goto L_08AB86E0;
    case 109u: goto L_08AB86F0;
    case 110u: goto L_08AB8700;
    case 111u: goto L_08AB8710;
    case 112u: goto L_08AB8720;
    case 113u: goto L_08AB8730;
    case 114u: goto L_08AB8740;
    case 115u: goto L_08AB874C;
    case 116u: goto L_08AB8754;
    case 117u: goto L_08AB8760;
    case 118u: goto L_08AB8790;
    case 119u: goto L_08AB8798;
    case 120u: goto L_08AB87C8;
    case 121u: goto L_08AB87D0;
    case 122u: goto L_08AB87E8;
    case 123u: goto L_08AB87FC;
    case 124u: goto L_08AB8814;
    case 125u: goto L_08AB8844;
    case 126u: goto L_08AB8854;
    case 127u: goto L_08AB8864;
    case 128u: goto L_08AB8874;
    case 129u: goto L_08AB8884;
    case 130u: goto L_08AB8894;
    case 131u: goto L_08AB88A4;
    case 132u: goto L_08AB891C;
    case 133u: goto L_08AB8924;
    case 134u: goto L_08AB8948;
    case 135u: goto L_08AB8964;
    case 136u: goto L_08AB8970;
    case 137u: goto L_08AB8984;
    case 138u: goto L_08AB8998;
    case 139u: goto L_08AB89C8;
    case 140u: goto L_08AB89E0;
    case 141u: goto L_08AB89F0;
    case 142u: goto L_08AB8A20;
    case 143u: goto L_08AB8A28;
    case 144u: goto L_08AB8A34;
    case 145u: goto L_08AB8A40;
    case 146u: goto L_08AB8A54;
    case 147u: goto L_08AB8A5C;
    case 148u: goto L_08AB8A78;
    case 149u: goto L_08AB8A80;
    case 150u: goto L_08AB8A9C;
    case 151u: goto L_08AB8AA4;
    case 152u: goto L_08AB8AAC;
    case 153u: goto L_08AB8AB8;
    case 154u: goto L_08AB8AD4;
    case 155u: goto L_08AB8ADC;
    case 156u: goto L_08AB8B0C;
    case 157u: goto L_08AB8B18;
    case 158u: goto L_08AB8B24;
    case 159u: goto L_08AB8B2C;
    case 160u: goto L_08AB8B34;
    case 161u: goto L_08AB8B40;
    case 162u: goto L_08AB8B48;
    case 163u: goto L_08AB8B50;
    case 164u: goto L_08AB8B58;
    case 165u: goto L_08AB8B68;
    case 166u: goto L_08AB8B80;
    case 167u: goto L_08AB8B88;
    case 168u: goto L_08AB8B8C;
    case 169u: goto L_08AB8BAC;
    case 170u: goto L_08AB8BC8;
    case 171u: goto L_08AB8BE4;
    case 172u: goto L_08AB8C00;
    case 173u: goto L_08AB8C14;
    case 174u: goto L_08AB8C1C;
    case 175u: goto L_08AB8C28;
    case 176u: goto L_08AB8CB0;
    case 177u: goto L_08AB8CBC;
    case 178u: goto L_08AB8CD0;
    case 179u: goto L_08AB8CDC;
    case 180u: goto L_08AB8CFC;
    case 181u: goto L_08AB8D14;
    case 182u: goto L_08AB8D1C;
    case 183u: goto L_08AB8D28;
    case 184u: goto L_08AB8DAC;
    case 185u: goto L_08AB8DC4;
    case 186u: goto L_08AB8DF8;
    case 187u: goto L_08AB8E04;
    case 188u: goto L_08AB8E28;
    case 189u: goto L_08AB8E40;
    case 190u: goto L_08AB8E70;
    case 191u: goto L_08AB8E7C;
    case 192u: goto L_08AB8E84;
    case 193u: goto L_08AB8E90;
    case 194u: goto L_08AB8E98;
    case 195u: goto L_08AB8E9C;
    case 196u: goto L_08AB8EA8;
    case 197u: goto L_08AB8EBC;
    case 198u: goto L_08AB8EE0;
    case 199u: goto L_08AB8EEC;
    case 200u: goto L_08AB8EF4;
    case 201u: goto L_08AB8F00;
    case 202u: goto L_08AB8F08;
    case 203u: goto L_08AB8F10;
    case 204u: goto L_08AB8F1C;
    case 205u: goto L_08AB8F3C;
    case 206u: goto L_08AB8F6C;
    case 207u: goto L_08AB8F74;
    case 208u: goto L_08AB8F7C;
    case 209u: goto L_08AB8F8C;
    case 210u: goto L_08AB8F94;
    case 211u: goto L_08AB8FAC;
    case 212u: goto L_08AB8FC0;
    case 213u: goto L_08AB8FC8;
    case 214u: goto L_08AB900C;
    case 215u: goto L_08AB9050;
    case 216u: goto L_08AB9068;
    case 217u: goto L_08AB90A8;
    case 218u: goto L_08AB90B0;
    case 219u: goto L_08AB90B8;
    case 220u: goto L_08AB90FC;
    case 221u: goto L_08AB9140;
    case 222u: goto L_08AB9160;
    case 223u: goto L_08AB9190;
    case 224u: goto L_08AB9198;
    case 225u: goto L_08AB91A0;
    case 226u: goto L_08AB91B4;
    case 227u: goto L_08AB91C0;
    case 228u: goto L_08AB9248;
    case 229u: goto L_08AB927C;
    case 230u: goto L_08AB92D0;
    case 231u: goto L_08AB92E8;
    case 232u: goto L_08AB92F4;
    case 233u: goto L_08AB9308;
    case 234u: goto L_08AB9338;
    case 235u: goto L_08AB9350;
    case 236u: goto L_08AB935C;
    case 237u: goto L_08AB938C;
    case 238u: goto L_08AB9394;
    case 239u: goto L_08AB93A0;
    case 240u: goto L_08AB93D0;
    case 241u: goto L_08AB93D8;
    case 242u: goto L_08AB93E4;
    case 243u: goto L_08AB93F8;
    case 244u: goto L_08AB9428;
    case 245u: goto L_08AB9440;
    case 246u: goto L_08AB9448;
    case 247u: goto L_08AB9478;
    case 248u: goto L_08AB9480;
    case 249u: goto L_08AB9488;
    case 250u: goto L_08AB9494;
    case 251u: goto L_08AB949C;
    case 252u: goto L_08AB94A4;
    case 253u: goto L_08AB94AC;
    case 254u: goto L_08AB9500;
    case 255u: goto L_08AB9524;
    case 256u: goto L_08AB953C;
    case 257u: goto L_08AB956C;
    case 258u: goto L_08AB9574;
    case 259u: goto L_08AB957C;
    case 260u: goto L_08AB9598;
    case 261u: goto L_08AB95A0;
    case 262u: goto L_08AB95A8;
    case 263u: goto L_08AB95AC;
    case 264u: goto L_08AB95B4;
    case 265u: goto L_08AB95BC;
    case 266u: goto L_08AB95D8;
    case 267u: goto L_08AB95EC;
    case 268u: goto L_08AB95F4;
    case 269u: goto L_08AB9644;
    case 270u: goto L_08AB9668;
    case 271u: goto L_08AB9680;
    case 272u: goto L_08AB968C;
    case 273u: goto L_08AB96B4;
    case 274u: goto L_08AB96BC;
    case 275u: goto L_08AB96C8;
    case 276u: goto L_08AB96D0;
    case 277u: goto L_08AB96E4;
    case 278u: goto L_08AB96EC;
    case 279u: goto L_08AB96F4;
    case 280u: goto L_08AB9708;
    case 281u: goto L_08AB9718;
    case 282u: goto L_08AB972C;
    case 283u: goto L_08AB9744;
    case 284u: goto L_08AB974C;
    case 285u: goto L_08AB9760;
    case 286u: goto L_08AB976C;
    case 287u: goto L_08AB9778;
    case 288u: goto L_08AB978C;
    case 289u: goto L_08AB97BC;
    case 290u: goto L_08AB97C4;
    case 291u: goto L_08AB97F4;
    case 292u: goto L_08AB97FC;
    case 293u: goto L_08AB9818;
    case 294u: goto L_08AB9840;
    case 295u: goto L_08AB984C;
    case 296u: goto L_08AB986C;
    case 297u: goto L_08AB9874;
    case 298u: goto L_08AB98A8;
    case 299u: goto L_08AB98B8;
    case 300u: goto L_08AB98D0;
    case 301u: goto L_08AB98E8;
    case 302u: goto L_08AB98F8;
    case 303u: goto L_08AB9908;
    case 304u: goto L_08AB9918;
    case 305u: goto L_08AB9928;
    case 306u: goto L_08AB9938;
    case 307u: goto L_08AB9948;
    case 308u: goto L_08AB9958;
    case 309u: goto L_08AB9968;
    case 310u: goto L_08AB9978;
    case 311u: goto L_08AB9988;
    case 312u: goto L_08AB998C;
    case 313u: goto L_08AB9994;
    case 314u: goto L_08AB99A0;
    case 315u: goto L_08AB99AC;
    case 316u: goto L_08AB99CC;
    case 317u: goto L_08AB99D4;
    case 318u: goto L_08AB99E0;
    case 319u: goto L_08AB99EC;
    case 320u: goto L_08AB99F4;
    case 321u: goto L_08AB99F8;
    case 322u: goto L_08AB99FC;
    case 323u: goto L_08AB9A04;
    case 324u: goto L_08AB9A10;
    case 325u: goto L_08AB9A20;
    case 326u: goto L_08AB9A3C;
    case 327u: goto L_08AB9A5C;
    case 328u: goto L_08AB9A88;
    case 329u: goto L_08AB9A90;
    case 330u: goto L_08AB9A9C;
    case 331u: goto L_08AB9AA4;
    case 332u: goto L_08AB9AC4;
    case 333u: goto L_08AB9AD4;
    case 334u: goto L_08AB9AE0;
    case 335u: goto L_08AB9AF4;
    case 336u: goto L_08AB9B00;
    case 337u: goto L_08AB9B0C;
    case 338u: goto L_08AB9B24;
    case 339u: goto L_08AB9B34;
    case 340u: goto L_08AB9B4C;
    case 341u: goto L_08AB9B60;
    case 342u: goto L_08AB9B94;
    case 343u: goto L_08AB9B9C;
    case 344u: goto L_08AB9BC8;
    case 345u: goto L_08AB9BD0;
    case 346u: goto L_08AB9BE4;
    case 347u: goto L_08AB9BF8;
    case 348u: goto L_08AB9C20;
    case 349u: goto L_08AB9C2C;
    case 350u: goto L_08AB9C4C;
    case 351u: goto L_08AB9C74;
    case 352u: goto L_08AB9CE4;
    case 353u: goto L_08AB9CEC;
    case 354u: goto L_08AB9CF4;
    case 355u: goto L_08AB9D04;
    case 356u: goto L_08AB9D0C;
    case 357u: goto L_08AB9D24;
    case 358u: goto L_08AB9D38;
    case 359u: goto L_08AB9D40;
    case 360u: goto L_08AB9D80;
    case 361u: goto L_08AB9DB8;
    case 362u: goto L_08AB9DE8;
    case 363u: goto L_08AB9E64;
    case 364u: goto L_08AB9E6C;
    case 365u: goto L_08AB9E74;
    case 366u: goto L_08AB9EB4;
    case 367u: goto L_08AB9EF8;
    case 368u: goto L_08AB9F28;
    case 369u: goto L_08AB9F98;
    case 370u: goto L_08AB9FA0;
    case 371u: goto L_08AB9FA8;
    case 372u: goto L_08AB9FB8;
    case 373u: goto L_08AB9FC4;
    case 374u: goto L_08ABA04C;
    case 375u: goto L_08ABA080;
    case 376u: goto L_08ABA0D4;
    case 377u: goto L_08ABA104;
    case 378u: goto L_08ABA174;
    case 379u: goto L_08ABA17C;
    case 380u: goto L_08ABA184;
    case 381u: goto L_08ABA190;
    case 382u: goto L_08ABA198;
    case 383u: goto L_08ABA1A0;
    case 384u: goto L_08ABA1A8;
    case 385u: goto L_08ABA21C;
    case 386u: goto L_08ABA28C;
    case 387u: goto L_08ABA294;
    case 388u: goto L_08ABA29C;
    case 389u: goto L_08ABA2B8;
    case 390u: goto L_08ABA2C0;
    case 391u: goto L_08ABA2C8;
    case 392u: goto L_08ABA2CC;
    case 393u: goto L_08ABA2D4;
    case 394u: goto L_08ABA2DC;
    case 395u: goto L_08ABA2F8;
    case 396u: goto L_08ABA30C;
    case 397u: goto L_08ABA314;
    case 398u: goto L_08ABA354;
    case 399u: goto L_08ABA384;
    case 400u: goto L_08ABA3BC;
    case 401u: goto L_08ABA3C8;
    case 402u: goto L_08ABA3D0;
    case 403u: goto L_08ABA3D8;
    case 404u: goto L_08ABA434;
    case 405u: goto L_08ABA450;
    case 406u: goto L_08ABA47C;
    case 407u: goto L_08ABA48C;
    case 408u: goto L_08ABA494;
    case 409u: goto L_08ABA4AC;
    case 410u: goto L_08ABA4B4;
    case 411u: goto L_08ABA4C0;
    case 412u: goto L_08ABA4C8;
    case 413u: goto L_08ABA4D0;
    case 414u: goto L_08ABA4E4;
    case 415u: goto L_08ABA4EC;
    case 416u: goto L_08ABA4F4;
    case 417u: goto L_08ABA4FC;
    case 418u: goto L_08ABA504;
    case 419u: goto L_08ABA514;
    case 420u: goto L_08ABA51C;
    case 421u: goto L_08ABA524;
    case 422u: goto L_08ABA52C;
    case 423u: goto L_08ABA540;
    case 424u: goto L_08ABA548;
    case 425u: goto L_08ABA554;
    case 426u: goto L_08ABA5D8;
    case 427u: goto L_08ABA5F0;
    case 428u: goto L_08ABA610;
    case 429u: goto L_08ABA618;
    case 430u: goto L_08ABA640;
    case 431u: goto L_08ABA648;
    case 432u: goto L_08ABA654;
    case 433u: goto L_08ABA6D8;
    case 434u: goto L_08ABA6DC;
    case 435u: goto L_08ABA6E4;
    case 436u: goto L_08ABA704;
    case 437u: goto L_08ABA73C;
    case 438u: goto L_08ABA744;
    case 439u: goto L_08ABA74C;
    case 440u: goto L_08ABA754;
    case 441u: goto L_08ABA77C;
    case 442u: goto L_08ABA788;
    case 443u: goto L_08ABA790;
    case 444u: goto L_08ABA798;
    case 445u: goto L_08ABA7AC;
    case 446u: goto L_08ABA7B4;
    case 447u: goto L_08ABA7B8;
    case 448u: goto L_08ABA7C0;
    case 449u: goto L_08ABA7C8;
    case 450u: goto L_08ABA7DC;
    case 451u: goto L_08ABA7F0;
    case 452u: goto L_08ABA7F8;
    case 453u: goto L_08ABA800;
    case 454u: goto L_08ABA814;
    case 455u: goto L_08ABA840;
    case 456u: goto L_08ABA848;
    case 457u: goto L_08ABA850;
    case 458u: goto L_08ABA858;
    case 459u: goto L_08ABA868;
    case 460u: goto L_08ABA870;
    case 461u: goto L_08ABA87C;
    case 462u: goto L_08ABA904;
    case 463u: goto L_08ABA914;
    case 464u: goto L_08ABA944;
    case 465u: goto L_08ABA94C;
    case 466u: goto L_08ABA958;
    case 467u: goto L_08ABA9E0;
    case 468u: goto L_08ABA9E4;
    case 469u: goto L_08ABAA04;
    case 470u: goto L_08ABAA38;
    case 471u: goto L_08ABAA40;
    case 472u: goto L_08ABAA4C;
    case 473u: goto L_08ABAA54;
    case 474u: goto L_08ABAA58;
    case 475u: goto L_08ABAA64;
    case 476u: goto L_08ABAA8C;
    case 477u: goto L_08ABAA9C;
    case 478u: goto L_08ABAAA4;
    case 479u: goto L_08ABAAB0;
    case 480u: goto L_08ABAAB8;
    case 481u: goto L_08ABAAC0;
    case 482u: goto L_08ABAACC;
    case 483u: goto L_08ABAAD8;
    case 484u: goto L_08ABAAFC;
    case 485u: goto L_08ABAB04;
    case 486u: goto L_08ABAB28;
    case 487u: goto L_08ABAB34;
    case 488u: goto L_08ABAB3C;
    case 489u: goto L_08ABAB48;
    case 490u: goto L_08ABAB50;
    case 491u: goto L_08ABAB54;
    case 492u: goto L_08ABAB60;
    case 493u: goto L_08ABAB74;
    case 494u: goto L_08ABAB90;
    case 495u: goto L_08ABAB98;
    case 496u: goto L_08ABABA0;
    case 497u: goto L_08ABABA8;
    case 498u: goto L_08ABABB4;
    case 499u: goto L_08ABABBC;
    case 500u: goto L_08ABABC8;
    case 501u: goto L_08ABABD0;
    case 502u: goto L_08ABABD8;
    case 503u: goto L_08ABABE4;
    case 504u: goto L_08ABAC2C;
    case 505u: goto L_08ABAC30;
    case 506u: goto L_08ABAC50;
    case 507u: goto L_08ABAC68;
    case 508u: goto L_08ABAC70;
    case 509u: goto L_08ABAC88;
    case 510u: goto L_08ABAC94;
    case 511u: goto L_08ABAC9C;
    case 512u: goto L_08ABACF8;
    case 513u: goto L_08ABACFC;
    case 514u: goto L_08ABAD18;
    case 515u: goto L_08ABAD24;
    case 516u: goto L_08ABAD74;
    case 517u: goto L_08ABAD8C;
    case 518u: goto L_08ABAD94;
    case 519u: goto L_08ABADA4;
    case 520u: goto L_08ABADBC;
    case 521u: goto L_08ABADC4;
    case 522u: goto L_08ABADCC;
    case 523u: goto L_08ABADE8;
    case 524u: goto L_08ABADFC;
    case 525u: goto L_08ABAE08;
    case 526u: goto L_08ABAE18;
    case 527u: goto L_08ABAE34;
    case 528u: goto L_08ABAE40;
    case 529u: goto L_08ABAE4C;
    case 530u: goto L_08ABAE58;
    case 531u: goto L_08ABAE60;
    case 532u: goto L_08ABAE68;
    case 533u: goto L_08ABAE70;
    case 534u: goto L_08ABAE78;
    case 535u: goto L_08ABAE80;
    case 536u: goto L_08ABAE88;
    case 537u: goto L_08ABAE90;
    case 538u: goto L_08ABAE98;
    case 539u: goto L_08ABAEA0;
    case 540u: goto L_08ABAEA8;
    case 541u: goto L_08ABAEC8;
    case 542u: goto L_08ABAEF0;
    case 543u: goto L_08ABAF08;
    case 544u: goto L_08ABAF14;
    case 545u: goto L_08ABAF1C;
    case 546u: goto L_08ABAF24;
    case 547u: goto L_08ABAF2C;
    case 548u: goto L_08ABAF34;
    case 549u: goto L_08ABAF44;
    case 550u: goto L_08ABAF4C;
    case 551u: goto L_08ABAF5C;
    case 552u: goto L_08ABAF64;
    case 553u: goto L_08ABAF74;
    case 554u: goto L_08ABAF7C;
    case 555u: goto L_08ABAF8C;
    case 556u: goto L_08ABAF94;
    case 557u: goto L_08ABAFA4;
    case 558u: goto L_08ABAFAC;
    case 559u: goto L_08ABAFB4;
    case 560u: goto L_08ABAFBC;
    case 561u: goto L_08ABAFCC;
    case 562u: goto L_08ABAFD4;
    case 563u: goto L_08ABB008;
    case 564u: goto L_08ABB010;
    case 565u: goto L_08ABB01C;
    case 566u: goto L_08ABB04C;
    case 567u: goto L_08ABB054;
    case 568u: goto L_08ABB07C;
    case 569u: goto L_08ABB088;
    case 570u: goto L_08ABB098;
    case 571u: goto L_08ABB09C;
    case 572u: goto L_08ABB0B4;
    case 573u: goto L_08ABB0D8;
    case 574u: goto L_08ABB0F4;
    case 575u: goto L_08ABB114;
    case 576u: goto L_08ABB138;
    case 577u: goto L_08ABB154;
    case 578u: goto L_08ABB174;
    case 579u: goto L_08ABB198;
    case 580u: goto L_08ABB1B4;
    case 581u: goto L_08ABB1DC;
    case 582u: goto L_08ABB200;
    case 583u: goto L_08ABB21C;
    case 584u: goto L_08ABB244;
    case 585u: goto L_08ABB268;
    case 586u: goto L_08ABB284;
    case 587u: goto L_08ABB2AC;
    case 588u: goto L_08ABB2D0;
    case 589u: goto L_08ABB2EC;
    case 590u: goto L_08ABB314;
    case 591u: goto L_08ABB338;
    case 592u: goto L_08ABB354;
    case 593u: goto L_08ABB380;
    case 594u: goto L_08ABB3A4;
    case 595u: goto L_08ABB3C0;
    case 596u: goto L_08ABB3E8;
    case 597u: goto L_08ABB40C;
    case 598u: goto L_08ABB428;
    case 599u: goto L_08ABB454;
    case 600u: goto L_08ABB478;
    case 601u: goto L_08ABB494;
    case 602u: goto L_08ABB4BC;
    case 603u: goto L_08ABB4EC;
    case 604u: goto L_08ABB518;
    case 605u: goto L_08ABB520;
    case 606u: goto L_08ABB540;
    case 607u: goto L_08ABB54C;
    case 608u: goto L_08ABB564;
    case 609u: goto L_08ABB568;
    case 610u: goto L_08ABB584;
    case 611u: goto L_08ABB5B4;
    case 612u: goto L_08ABB5D0;
    case 613u: goto L_08ABB5F0;
    case 614u: goto L_08ABB5F8;
    case 615u: goto L_08ABB618;
    case 616u: goto L_08ABB624;
    case 617u: goto L_08ABB63C;
    case 618u: goto L_08ABB640;
    case 619u: goto L_08ABB65C;
    case 620u: goto L_08ABB68C;
    case 621u: goto L_08ABB6BC;
    case 622u: goto L_08ABB6C4;
    case 623u: goto L_08ABB6E4;
    case 624u: goto L_08ABB6F0;
    case 625u: goto L_08ABB708;
    case 626u: goto L_08ABB70C;
    case 627u: goto L_08ABB728;
    case 628u: goto L_08ABB758;
    case 629u: goto L_08ABB774;
    case 630u: goto L_08ABB794;
    case 631u: goto L_08ABB79C;
    case 632u: goto L_08ABB7BC;
    case 633u: goto L_08ABB7C8;
    case 634u: goto L_08ABB7E0;
    case 635u: goto L_08ABB7E4;
    case 636u: goto L_08ABB800;
    case 637u: goto L_08ABB830;
    case 638u: goto L_08ABB860;
    case 639u: goto L_08ABB868;
    case 640u: goto L_08ABB888;
    case 641u: goto L_08ABB894;
    case 642u: goto L_08ABB8AC;
    case 643u: goto L_08ABB8B0;
    case 644u: goto L_08ABB8CC;
    case 645u: goto L_08ABB8F4;
    case 646u: goto L_08ABB900;
    case 647u: goto L_08ABB90C;
    case 648u: goto L_08ABB91C;
    case 649u: goto L_08ABB920;
    case 650u: goto L_08ABB938;
    case 651u: goto L_08ABB960;
    case 652u: goto L_08ABB96C;
    case 653u: goto L_08ABB978;
    case 654u: goto L_08ABB988;
    case 655u: goto L_08ABB98C;
    case 656u: goto L_08ABB9A4;
    case 657u: goto L_08ABB9BC;
    case 658u: goto L_08ABB9C0;
    case 659u: goto L_08ABB9CC;
    case 660u: goto L_08ABB9D8;
    case 661u: goto L_08ABB9F0;
    case 662u: goto L_08ABBA28;
    case 663u: goto L_08ABBA34;
    case 664u: goto L_08ABBA38;
    case 665u: goto L_08ABBA40;
    case 666u: goto L_08ABBA54;
    case 667u: goto L_08ABBA74;
    case 668u: goto L_08ABBA9C;
    case 669u: goto L_08ABBAC8;
    case 670u: goto L_08ABBAD8;
    case 671u: goto L_08ABBADC;
    case 672u: goto L_08ABBAF4;
    case 673u: goto L_08ABBB04;
    case 674u: goto L_08ABBB14;
    case 675u: goto L_08ABBB38;
    case 676u: goto L_08ABBB54;
    case 677u: goto L_08ABBB84;
    case 678u: goto L_08ABBBA8;
    case 679u: goto L_08ABBBC4;
    case 680u: goto L_08ABBBF4;
    case 681u: goto L_08ABBC18;
    case 682u: goto L_08ABBC2C;
    case 683u: goto L_08ABBC54;
    case 684u: goto L_08ABBC78;
    case 685u: goto L_08ABBC8C;
    case 686u: goto L_08ABBCB4;
    case 687u: goto L_08ABBCC8;
    case 688u: goto L_08ABBCD8;
    case 689u: goto L_08ABBCE0;
    case 690u: goto L_08ABBCF4;
    case 691u: goto L_08ABBD08;
    case 692u: goto L_08ABBD24;
    case 693u: goto L_08ABBD2C;
    case 694u: goto L_08ABBD40;
    case 695u: goto L_08ABBD60;
    case 696u: goto L_08ABBD68;
    case 697u: goto L_08ABBD88;
    case 698u: goto L_08ABBD94;
    case 699u: goto L_08ABBDAC;
    case 700u: goto L_08ABBDB0;
    case 701u: goto L_08ABBDB8;
    case 702u: goto L_08ABBDC8;
    case 703u: goto L_08ABBDE4;
    case 704u: goto L_08ABBDEC;
    case 705u: goto L_08ABBE0C;
    case 706u: goto L_08ABBE18;
    case 707u: goto L_08ABBE30;
    case 708u: goto L_08ABBE34;
    case 709u: goto L_08ABBE3C;
    case 710u: goto L_08ABBE4C;
    case 711u: goto L_08ABBE74;
    case 712u: goto L_08ABBE88;
    case 713u: goto L_08ABBE94;
    case 714u: goto L_08ABBEA0;
    case 715u: goto L_08ABBEA4;
    case 716u: goto L_08ABBEBC;
    case 717u: goto L_08ABBEDC;
    case 718u: goto L_08ABBEE4;
    case 719u: goto L_08ABBF00;
    case 720u: goto L_08ABBF14;
    case 721u: goto L_08ABBF24;
    case 722u: goto L_08ABBF34;
    case 723u: goto L_08ABBF48;
    case 724u: goto L_08ABBF64;
    case 725u: goto L_08ABBF8C;
    case 726u: goto L_08ABBFCC;
    case 727u: goto L_08ABBFEC;
    case 728u: goto L_08ABBFF8;
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
L_08AB8004:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(384));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    aot_gpr_31 = (0x08AB8014u);
    aot_gpr_6 = (0u | 1023u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8014u) goto L_08AB8014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8014:
    aot_gpr_4 = (0u | 9u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB8050;
      }
      goto L_08AB8028;
    }
L_08AB8028:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_7 = (2234u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(11928));
    aot_gpr_31 = (0x08AB8048u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(12864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8048u) goto L_08AB8048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8048:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB8070;
      }
      goto L_08AB8050;
    }
L_08AB8050:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_7 = (2234u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(11972));
    aot_gpr_31 = (0x08AB8070u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(12864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8070u) goto L_08AB8070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8070:
    aot_gpr_31 = (0x08AB8078u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8078u) goto L_08AB8078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8078:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB808Cu);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB808Cu) goto L_08AB808C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB808C:
    aot_gpr_31 = (0x08AB8094u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8094u) goto L_08AB8094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8094:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB80A8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB80A8u) goto L_08AB80A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB80A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB80BC;
      }
      goto L_08AB80B4;
    }
L_08AB80B4:
    aot_gpr_31 = (0x08AB80BCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 185u, 0x08AB4E74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB80BCu) goto L_08AB80BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB80BC:
    aot_gpr_31 = (0x08AB80C4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB80C4u) goto L_08AB80C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB80C4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AB80D8u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB80D8u) goto L_08AB80D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB80D8:
    aot_gpr_31 = (0x08AB80E0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB80E0u) goto L_08AB80E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB80E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (2236u << 16u);
      if (branch_taken) {
          goto L_08AB8118;
      }
      goto L_08AB80EC;
    }
L_08AB80EC:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08AB80F8u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB80F8u) goto L_08AB80F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB80F8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AB8110;
      }
      goto L_08AB8104;
    }
L_08AB8104:
    aot_gpr_31 = (0x08AB810Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB810Cu) goto L_08AB810C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB810C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AB8110;
L_08AB8110:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_6 = (2236u << 16u);
    goto L_08AB8118;
L_08AB8118:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1920));
    aot_gpr_7 = (0u | 127u);
    aot_gpr_31 = (0x08AB812Cu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-2236));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB812Cu) goto L_08AB812C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB812C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB8164;
      }
      goto L_08AB8138;
    }
L_08AB8138:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(12864));
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(128));
    aot_gpr_31 = (0x08AB815Cu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(11928));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB815Cu) goto L_08AB815C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB815C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB8188;
      }
      goto L_08AB8164;
    }
L_08AB8164:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(12864));
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(128));
    aot_gpr_31 = (0x08AB8188u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(11972));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8188u) goto L_08AB8188;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8188:
    aot_gpr_31 = (0x08AB8190u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8190u) goto L_08AB8190;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8190:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB81A4u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB81A4u) goto L_08AB81A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB81A4:
    aot_gpr_31 = (0x08AB81ACu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB81ACu) goto L_08AB81AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB81AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB81C0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB81C0u) goto L_08AB81C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB81C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB81D4;
      }
      goto L_08AB81CC;
    }
L_08AB81CC:
    aot_gpr_31 = (0x08AB81D4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 185u, 0x08AB4E74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB81D4u) goto L_08AB81D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB81D4:
    aot_gpr_31 = (0x08AB81DCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB81DCu) goto L_08AB81DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB81DC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AB81F0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB81F0u) goto L_08AB81F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB81F0:
    aot_gpr_31 = (0x08AB81F8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB81F8u) goto L_08AB81F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB81F8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB8230;
      }
      goto L_08AB8204;
    }
L_08AB8204:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(12864));
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1912));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(128));
    aot_gpr_31 = (0x08AB8228u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(11928));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8228u) goto L_08AB8228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8228:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB8254;
      }
      goto L_08AB8230;
    }
L_08AB8230:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(12864));
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1912));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(128));
    aot_gpr_31 = (0x08AB8254u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(11972));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8254u) goto L_08AB8254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8254:
    aot_gpr_31 = (0x08AB825Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB825Cu) goto L_08AB825C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB825C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB8270u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8270u) goto L_08AB8270;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8270:
    aot_gpr_31 = (0x08AB8278u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8278u) goto L_08AB8278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8278:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB828Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB828Cu) goto L_08AB828C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB828C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB82A0;
      }
      goto L_08AB8298;
    }
L_08AB8298:
    aot_gpr_31 = (0x08AB82A0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 185u, 0x08AB4E74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB82A0u) goto L_08AB82A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB82A0:
    aot_gpr_31 = (0x08AB82A8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB82A8u) goto L_08AB82A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB82A8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AB82BCu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB82BCu) goto L_08AB82BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB82BC:
    aot_gpr_31 = (0x08AB82C4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB82C4u) goto L_08AB82C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB82C4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB82F4;
      }
      goto L_08AB82D0;
    }
L_08AB82D0:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    aot_gpr_7 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1904));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB82ECu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(11928));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB82ECu) goto L_08AB82EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB82EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB8310;
      }
      goto L_08AB82F4;
    }
L_08AB82F4:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    aot_gpr_7 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1904));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1928));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB8310u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(11972));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8310u) goto L_08AB8310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8310:
    aot_gpr_31 = (0x08AB8318u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8318u) goto L_08AB8318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8318:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB832Cu);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB832Cu) goto L_08AB832C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB832C:
    aot_gpr_31 = (0x08AB8334u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8334u) goto L_08AB8334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8334:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB8348u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8348u) goto L_08AB8348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8348:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB835C;
      }
      goto L_08AB8354;
    }
L_08AB8354:
    aot_gpr_31 = (0x08AB835Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 185u, 0x08AB4E74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB835Cu) goto L_08AB835C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB835C:
    aot_gpr_31 = (0x08AB8364u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8364u) goto L_08AB8364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8364:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AB8378u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8378u) goto L_08AB8378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8378:
    aot_gpr_31 = (0x08AB8380u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8380u) goto L_08AB8380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8380:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB83B0;
      }
      goto L_08AB838C;
    }
L_08AB838C:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    aot_gpr_7 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1896));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1888));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB83A8u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(11928));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB83A8u) goto L_08AB83A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB83A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB83CC;
      }
      goto L_08AB83B0;
    }
L_08AB83B0:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1936));
    aot_gpr_7 = (ctx.gpr[28] + static_cast<std::uint32_t>(-1896));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1888));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB83CCu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(11972));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB83CCu) goto L_08AB83CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB83CC:
    aot_gpr_31 = (0x08AB83D4u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB83D4u) goto L_08AB83D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB83D4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB83E8u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB83E8u) goto L_08AB83E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB83E8:
    aot_gpr_31 = (0x08AB83F0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 266u, 0x08939014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB83F0u) goto L_08AB83F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB83F0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB8404u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8404u) goto L_08AB8404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8404:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB8418;
      }
      goto L_08AB8410;
    }
L_08AB8410:
    aot_gpr_31 = (0x08AB8418u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 185u, 0x08AB4E74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8418u) goto L_08AB8418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8418:
    aot_gpr_31 = (0x08AB8420u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8420u) goto L_08AB8420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8420:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AB8434u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8434u) goto L_08AB8434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8434:
    aot_gpr_31 = (0x08AB843Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB843Cu) goto L_08AB843C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB843C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2216)));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1412), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1416), ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2212)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1420), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1428), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1432), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2204)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1436), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1444), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1448), ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2200)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1452), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, ctx.gpr[20], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(1460), aot_run_words); }
    aot_gpr_6 = (2236u << 16u);
    ctx.gpr[8] = (2236u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2208)));
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(-572));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-2236));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(-572), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1476), aot_gpr_7);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AB84B0;
    }
L_08AB84B0:
    aot_gpr_31 = (0x08AB84B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 212u, 0x08AB50BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB84B8u) goto L_08AB84B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB84B8:
    aot_gpr_4 = (2u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(-32768));
    aot_gpr_31 = (0x08AB84C8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB84C8u) goto L_08AB84C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB84C8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AB84D4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 186u, 0x08AB4E7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB84D4u) goto L_08AB84D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB84D4:
    aot_gpr_31 = (0x08AB84DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 189u, 0x08AB4EC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB84DCu) goto L_08AB84DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB84DC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB84ECu);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB84ECu) goto L_08AB84EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB84EC:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (0u | 4u);
    ctx.gpr[17] = (aot_gpr_5 + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1480), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1516), 0u);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1500));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    aot_gpr_31 = (0x08AB851Cu);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB851Cu) goto L_08AB851C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB851C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    aot_gpr_31 = (0x08AB852Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB852Cu) goto L_08AB852C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB852C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB853Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB853Cu) goto L_08AB853C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB853C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1956));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    aot_gpr_31 = (0x08AB854Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB854Cu) goto L_08AB854C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB854C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB855Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB855Cu) goto L_08AB855C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB855C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1948));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    aot_gpr_31 = (0x08AB856Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB856Cu) goto L_08AB856C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB856C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB857Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB857Cu) goto L_08AB857C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB857C:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12504));
    aot_gpr_31 = (0x08AB858Cu);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 189u, 0x08AB4EC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB858Cu) goto L_08AB858C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB858C:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AB8598;
    }
L_08AB8598:
    aot_gpr_31 = (0x08AB85A0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 212u, 0x08AB50BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB85A0u) goto L_08AB85A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB85A0:
    aot_gpr_4 = (2u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(-32768));
    aot_gpr_31 = (0x08AB85B0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB85B0u) goto L_08AB85B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB85B0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AB85BCu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 186u, 0x08AB4E7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB85BCu) goto L_08AB85BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB85BC:
    aot_gpr_31 = (0x08AB85C4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 189u, 0x08AB4EC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB85C4u) goto L_08AB85C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB85C4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB85D4u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB85D4u) goto L_08AB85D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB85D4:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (0u | 4u);
    ctx.gpr[17] = (aot_gpr_5 + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1480), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1516), 0u);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1500));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    aot_gpr_31 = (0x08AB8604u);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8604u) goto L_08AB8604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8604:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    aot_gpr_31 = (0x08AB8614u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8614u) goto L_08AB8614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8614:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB8624u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8624u) goto L_08AB8624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8624:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1880));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    aot_gpr_31 = (0x08AB8634u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8634u) goto L_08AB8634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8634:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB8644u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8644u) goto L_08AB8644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8644:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1876));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    aot_gpr_31 = (0x08AB8654u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8654u) goto L_08AB8654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8654:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB8664u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8664u) goto L_08AB8664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8664:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12684));
    aot_gpr_31 = (0x08AB8674u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 189u, 0x08AB4EC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8674u) goto L_08AB8674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8674:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AB8680;
    }
L_08AB8680:
    aot_gpr_4 = (2u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(-32768));
    aot_gpr_31 = (0x08AB8690u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 179u, 0x08AB4DFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8690u) goto L_08AB8690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8690:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AB869Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 186u, 0x08AB4E7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB869Cu) goto L_08AB869C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB869C:
    aot_gpr_31 = (0x08AB86A4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 189u, 0x08AB4EC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB86A4u) goto L_08AB86A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB86A4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB86B4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB86B4u) goto L_08AB86B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB86B4:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1480), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1516), 0u);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(1500));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    aot_gpr_31 = (0x08AB86E0u);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB86E0u) goto L_08AB86E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB86E0:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    aot_gpr_31 = (0x08AB86F0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB86F0u) goto L_08AB86F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB86F0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB8700u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8700u) goto L_08AB8700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8700:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1956));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(76));
    aot_gpr_31 = (0x08AB8710u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8710u) goto L_08AB8710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8710:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB8720u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8720u) goto L_08AB8720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8720:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1948));
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
    aot_gpr_31 = (0x08AB8730u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8730u) goto L_08AB8730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8730:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB8740u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8740u) goto L_08AB8740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8740:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr_31 = (0x08AB874Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB874Cu) goto L_08AB874C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB874C:
    aot_gpr_31 = (0x08AB8754u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 189u, 0x08AB4EC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8754u) goto L_08AB8754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8754:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AB8760;
    }
L_08AB8760:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (0u | 7u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1480), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1516), 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1500));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    aot_gpr_31 = (0x08AB8790u);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8790u) goto L_08AB8790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8790:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AB8798;
    }
L_08AB8798:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (0u | 7u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1480), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1516), 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1500));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    aot_gpr_31 = (0x08AB87C8u);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB87C8u) goto L_08AB87C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB87C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AB87D0;
    }
L_08AB87D0:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(-552));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB87E8u);
    aot_gpr_6 = (0u | 20u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB87E8u) goto L_08AB87E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB87E8:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 64u);
    aot_gpr_31 = (0x08AB87FCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-532));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB87FCu) goto L_08AB87FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB87FC:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(-468));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB8814u);
    aot_gpr_6 = (0u | 28u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8814u) goto L_08AB8814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8814:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (0u | 8u);
    ctx.gpr[18] = (aot_gpr_5 + static_cast<std::uint32_t>(-2108));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1480), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1516), 0u);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(1500));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2232));
    aot_gpr_31 = (0x08AB8844u);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8844u) goto L_08AB8844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8844:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2084));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    aot_gpr_31 = (0x08AB8854u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8854u) goto L_08AB8854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8854:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB8864u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8864u) goto L_08AB8864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8864:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1956));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(76));
    aot_gpr_31 = (0x08AB8874u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8874u) goto L_08AB8874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8874:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB8884u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8884u) goto L_08AB8884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8884:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1948));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
    aot_gpr_31 = (0x08AB8894u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8894u) goto L_08AB8894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8894:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB88A4u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB88A4u) goto L_08AB88A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB88A4:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12504));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], 0u, ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(ctx.gpr[18] + static_cast<std::uint32_t>(1488), aot_run_words); }
    aot_gpr_4 = (1024u << 16u);
    aot_gpr_5 = (1u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4040));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(124), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), aot_gpr_4);
    aot_gpr_5 = (0u | 15947u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1416), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1420), aot_gpr_5);
    aot_gpr_5 = (7u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1428), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-16384));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1432), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1436), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1444), aot_gpr_4);
    aot_gpr_5 = (0u | 63736u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1448), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1452), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1460), aot_gpr_4);
    aot_gpr_4 = (0u | 50564u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1464), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1468), aot_gpr_4);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AB891C;
    }
L_08AB891C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 1090u, 0x08AB7F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AB8924;
    }
L_08AB8924:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(256), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB8948:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2280u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 28u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB8964u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2288));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8964u) goto L_08AB8964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8964:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB8970:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27808));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    goto L_08AB8984;
L_08AB8984:
    aot_gpr_6 = (aot_gpr_4 << 6u);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_7 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_gpr_7 << 4u);
    goto L_08AB8998;
L_08AB8998:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_gpr_6 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_5);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (aot_gpr_7 << 4u);
      if (branch_taken) {
          goto L_08AB8998;
      }
      goto L_08AB89C8;
    }
L_08AB89C8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AB8984;
      }
      goto L_08AB89E0;
    }
L_08AB89E0:
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-26272));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    goto L_08AB89F0;
L_08AB89F0:
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(40), 0u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (aot_gpr_4 << 4u);
      if (branch_taken) {
          goto L_08AB89F0;
      }
      goto L_08AB8A20;
    }
L_08AB8A20:
    aot_gpr_31 = (0x08AB8A28u);
    goto L_08AB9680;
L_08AB8A28:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB8A34:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB8A54;
      }
      goto L_08AB8A40;
    }
L_08AB8A40:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
      if (branch_taken) {
          goto L_08AB8A40;
      }
      goto L_08AB8A54;
    }
L_08AB8A54:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB8A5C:
    ctx.gpr[9] = (aot_gpr_6 & 65535u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    aot_gpr_7 = (0u | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AB8AA4;
      }
      goto L_08AB8A78;
    }
L_08AB8A78:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08AB8A9C;
      }
      goto L_08AB8A80;
    }
L_08AB8A80:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    aot_gpr_6 = (ctx.gpr[10] + ctx.gpr[10]);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
      if (branch_taken) {
          goto L_08AB8A80;
      }
      goto L_08AB8A9C;
    }
L_08AB8A9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08AB8AD4;
      }
      goto L_08AB8AA4;
    }
L_08AB8AA4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_7);
      if (branch_taken) {
          goto L_08AB8A9C;
      }
      goto L_08AB8AAC;
    }
L_08AB8AAC:
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08AB8A9C;
      }
      goto L_08AB8AB8;
    }
L_08AB8AB8:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    aot_gpr_7 = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_7);
      if (branch_taken) {
          goto L_08AB8AA4;
      }
      goto L_08AB8AD4;
    }
L_08AB8AD4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB8ADC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_6 & 65535u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08AB8B0Cu);
    ctx.gpr[18] = (0u | 0u);
    goto L_08AB8A34;
L_08AB8B0C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AB8B18u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AB8A34;
L_08AB8B18:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB8B34;
      }
      goto L_08AB8B24;
    }
L_08AB8B24:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB8B40;
      }
      goto L_08AB8B2C;
    }
L_08AB8B2C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB8B40;
      }
      goto L_08AB8B34;
    }
L_08AB8B34:
    aot_gpr_5 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB8B48;
      }
      goto L_08AB8B40;
    }
L_08AB8B40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB8B8C;
      }
      goto L_08AB8B48;
    }
L_08AB8B48:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB8B88;
      }
      goto L_08AB8B50;
    }
L_08AB8B50:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AB8B88;
      }
      goto L_08AB8B58;
    }
L_08AB8B58:
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AB8B80;
      }
      goto L_08AB8B68;
    }
L_08AB8B68:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    aot_gpr_5 = (ctx.gpr[18] + ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB8B48;
      }
      goto L_08AB8B80;
    }
L_08AB8B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB8B8C;
      }
      goto L_08AB8B88;
    }
L_08AB8B88:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AB8B8C;
L_08AB8B8C:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AB8BAC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[11] = (2240u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-27808));
    ctx.gpr[3] = (0u | 0u);
    aot_gpr_6 = (ctx.gpr[11] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (2240u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    goto L_08AB8BC8;
L_08AB8BC8:
    ctx.gpr[2] = (ctx.gpr[3] << 6u);
    aot_gpr_5 = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + aot_gpr_5);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[11]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB8CBC;
      }
      goto L_08AB8BE4;
    }
L_08AB8BE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_7);
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB8CBC;
      }
      goto L_08AB8C00;
    }
L_08AB8C00:
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    aot_gpr_7 = (ctx.gpr[8] + ctx.gpr[11]);
    goto L_08AB8C14;
L_08AB8C14:
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08AB8CB0;
      }
      goto L_08AB8C1C;
    }
L_08AB8C1C:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_6);
      if (branch_taken) {
          goto L_08AB8CB0;
      }
      goto L_08AB8C28;
    }
L_08AB8C28:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[9] = aot_run_words[0];
      ctx.gpr[12] = aot_run_words[1];
      ctx.gpr[13] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    ctx.gpr[12] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(8), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    ctx.gpr[12] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(28), ctx.gpr[12]);
    ctx.gpr[12] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(32), ctx.gpr[13]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(40), ctx.gpr[12]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_5 << 4u);
    ctx.gpr[8] = (aot_gpr_7 + aot_gpr_7);
    ctx.gpr[8] = (aot_gpr_7 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (ctx.gpr[8] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AB8C14;
      }
      goto L_08AB8CB0;
    }
L_08AB8CB0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), aot_gpr_5);
    goto L_08AB8CBC;
L_08AB8CBC:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[3] & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB8BC8;
      }
      goto L_08AB8CD0;
    }
L_08AB8CD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-26272)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB8DF8;
      }
      goto L_08AB8CDC;
    }
L_08AB8CDC:
    aot_gpr_7 = (aot_gpr_4 + static_cast<std::uint32_t>(-26272));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB8DF8;
      }
      goto L_08AB8CFC;
    }
L_08AB8CFC:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-26272), 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[8] = (aot_gpr_7 + static_cast<std::uint32_t>(48));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_08AB8D14;
L_08AB8D14:
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08AB8DAC;
      }
      goto L_08AB8D1C;
    }
L_08AB8D1C:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AB8DAC;
      }
      goto L_08AB8D28;
    }
L_08AB8D28:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[9] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[10] = aot_run_words[0];
      ctx.gpr[11] = aot_run_words[1];
      ctx.gpr[2] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[10] = (aot_gpr_5 << 4u);
    aot_gpr_6 = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + aot_gpr_6);
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (ctx.gpr[10] + aot_gpr_7);
      if (branch_taken) {
          goto L_08AB8D14;
      }
      goto L_08AB8DAC;
    }
L_08AB8DAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-26272)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB8DF8;
      }
      goto L_08AB8DC4;
    }
L_08AB8DC4:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_7 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
      ctx.gpr[9] = aot_run_words[3];
      ctx.gpr[10] = aot_run_words[4];
      ctx.gpr[11] = aot_run_words[5];
      ctx.gpr[2] = aot_run_words[6];
    }
    aot_gpr_7 = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    aot_gpr_31 = (0x08AB8DF8u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_08ABAB74;
L_08AB8DF8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB8E04:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-544));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(512), aot_run_words); }
    aot_gpr_31 = (0x08AB8E28u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8E28u) goto L_08AB8E28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8E28:
    ctx.gpr[18] = (2240u << 16u);
    ctx.gpr[17] = (2240u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-27808));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-26272));
    aot_gpr_4 = (ctx.gpr[19] << 6u);
    goto L_08AB8E40;
L_08AB8E40:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[20] = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[20] + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
      ctx.gpr[8] = aot_run_words[3];
      ctx.gpr[9] = aot_run_words[4];
      ctx.gpr[10] = aot_run_words[5];
    }
    aot_gpr_31 = (0x08AB8E70u);
    ctx.gpr[11] = (aot_gpr_29 | 0u);
    goto L_08ABAD24;
L_08AB8E70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr_31 = (0x08AB8E7Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB96BC;
L_08AB8E7C:
    aot_gpr_31 = (0x08AB8E84u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08AB8E84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08AB8E9C;
    }
    goto L_08AB8E90;
L_08AB8E90:
    aot_gpr_31 = (0x08AB8E98u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8E98u) goto L_08AB8E98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8E98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AB8E9C;
L_08AB8E9C:
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB8EA8u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 618u, 0x089BAEB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8EA8u) goto L_08AB8EA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8EA8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[19] << 6u);
      if (branch_taken) {
          goto L_08AB8E40;
      }
      goto L_08AB8EBC;
    }
L_08AB8EBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26272)));
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
      ctx.gpr[8] = aot_run_words[3];
      ctx.gpr[9] = aot_run_words[4];
      ctx.gpr[10] = aot_run_words[5];
    }
    aot_gpr_31 = (0x08AB8EE0u);
    ctx.gpr[11] = (aot_gpr_29 | 0u);
    goto L_08ABAD24;
L_08AB8EE0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr_31 = (0x08AB8EECu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB96BC;
L_08AB8EEC:
    aot_gpr_31 = (0x08AB8EF4u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08AB8EF4:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08AB8F10;
    }
    goto L_08AB8F00;
L_08AB8F00:
    aot_gpr_31 = (0x08AB8F08u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8F08u) goto L_08AB8F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8F08:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08AB8F10;
L_08AB8F10:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB8F1Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 676u, 0x089BB208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB8F1Cu) goto L_08AB8F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB8F1C:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(512), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB8F3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1040));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1036), aot_gpr_31);
    aot_gpr_31 = (0x08AB8F6Cu);
    aot_gpr_6 = (0u | 256u);
    goto L_08AB8A5C;
L_08AB8F6C:
    aot_gpr_31 = (0x08AB8F74u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08AB8F74:
    aot_gpr_31 = (0x08AB8F7Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB8A34;
L_08AB8F7C:
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_7 = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-26272));
    goto L_08AB8F8C;
L_08AB8F8C:
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[8] = (aot_gpr_7 << 4u);
      if (branch_taken) {
          goto L_08AB8FC0;
      }
      goto L_08AB8F94;
    }
L_08AB8F94:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08AB8FC0;
      }
      goto L_08AB8FAC;
    }
L_08AB8FAC:
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_6 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_7) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB8F8C;
      }
      goto L_08AB8FC0;
    }
L_08AB8FC0:
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (aot_gpr_7 << 4u);
      if (branch_taken) {
          goto L_08AB9050;
      }
      goto L_08AB8FC8;
    }
L_08AB8FC8:
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[8], ctx.gpr[8], ctx.gpr[8], ctx.gpr[8], ctx.gpr[8], ctx.gpr[8]};
      aot_mem.aot_direct_store32_block(aot_gpr_6 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08AB9050;
      }
      goto L_08AB900C;
    }
L_08AB900C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(-26272)));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      aot_gpr_7 = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
      ctx.gpr[9] = aot_run_words[3];
      ctx.gpr[10] = aot_run_words[4];
      ctx.gpr[11] = aot_run_words[5];
      ctx.gpr[2] = aot_run_words[6];
    }
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    aot_gpr_7 = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    aot_gpr_31 = (0x08AB9050u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_08ABAB74;
L_08AB9050:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB9068:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1056));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1036), ctx.gpr[19]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1040), ctx.gpr[20]);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_7 | 0u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1044), aot_gpr_31);
    aot_gpr_31 = (0x08AB90A8u);
    aot_gpr_6 = (0u | 256u);
    goto L_08AB8A5C;
L_08AB90A8:
    aot_gpr_31 = (0x08AB90B0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08AB90B0:
    aot_gpr_31 = (0x08AB90B8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB8A34;
L_08AB90B8:
    aot_gpr_5 = (2240u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(-26272), ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-26272));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t aot_run_words[7]{aot_gpr_6, aot_gpr_6, aot_gpr_6, aot_gpr_6, aot_gpr_6, aot_gpr_6, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AB9140;
      }
      goto L_08AB90FC;
    }
L_08AB90FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(-26272)));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      aot_gpr_7 = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
      ctx.gpr[9] = aot_run_words[3];
      ctx.gpr[10] = aot_run_words[4];
      ctx.gpr[11] = aot_run_words[5];
      ctx.gpr[2] = aot_run_words[6];
    }
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    aot_gpr_7 = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    aot_gpr_31 = (0x08AB9140u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_08ABAB74;
L_08AB9140:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1056));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB9160:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1040));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1036), aot_gpr_31);
    aot_gpr_31 = (0x08AB9190u);
    aot_gpr_6 = (0u | 256u);
    goto L_08AB8A5C;
L_08AB9190:
    aot_gpr_31 = (0x08AB9198u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08AB9198:
    aot_gpr_31 = (0x08AB91A0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB8A34;
L_08AB91A0:
    aot_gpr_6 = (2240u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(-26272)));
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-26272));
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB927C;
      }
      goto L_08AB91B4;
    }
L_08AB91B4:
    aot_gpr_7 = (0u | 7u);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (aot_gpr_7 << 4u);
    goto L_08AB91C0;
L_08AB91C0:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + aot_gpr_6);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_5);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(44)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (aot_gpr_7 << 4u);
      if (branch_taken) {
          goto L_08AB91C0;
      }
      goto L_08AB9248;
    }
L_08AB9248:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const std::uint32_t aot_run_words[8]{ctx.gpr[16], aot_gpr_6, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(56), aot_run_words); }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(88), 0u);
      if (branch_taken) {
          goto L_08AB92D0;
      }
      goto L_08AB927C;
    }
L_08AB927C:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(-26272), ctx.gpr[17]);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const std::uint32_t aot_run_words[9]{ctx.gpr[16], aot_gpr_6, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, aot_gpr_4, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_7 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    ctx.gpr[9] = (aot_gpr_4 | 0u);
    ctx.gpr[10] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB92D0u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08ABAB74;
L_08AB92D0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB92E8:
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27808));
    goto L_08AB92F4;
L_08AB92F4:
    aot_gpr_6 = (aot_gpr_4 << 6u);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_7 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_gpr_7 << 4u);
    goto L_08AB9308;
L_08AB9308:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_gpr_6 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_5);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (aot_gpr_7 << 4u);
      if (branch_taken) {
          goto L_08AB9308;
      }
      goto L_08AB9338;
    }
L_08AB9338:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AB92F4;
      }
      goto L_08AB9350;
    }
L_08AB9350:
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-26272));
    goto L_08AB935C;
L_08AB935C:
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(40), 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AB935C;
      }
      goto L_08AB938C;
    }
L_08AB938C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB9394:
    aot_gpr_4 = (2240u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26272));
    goto L_08AB93A0;
L_08AB93A0:
    aot_gpr_6 = (aot_gpr_5 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(40), 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AB93A0;
      }
      goto L_08AB93D0;
    }
L_08AB93D0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB93D8:
    aot_gpr_4 = (2240u << 16u);
    aot_gpr_7 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27808));
    goto L_08AB93E4;
L_08AB93E4:
    aot_gpr_5 = (aot_gpr_7 << 6u);
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_gpr_6 << 4u);
    goto L_08AB93F8;
L_08AB93F8:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_6 = (aot_gpr_6 << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (aot_gpr_6 << 4u);
      if (branch_taken) {
          goto L_08AB93F8;
      }
      goto L_08AB9428;
    }
L_08AB9428:
    aot_gpr_5 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_5 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_7) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB93E4;
      }
      goto L_08AB9440;
    }
L_08AB9440:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB9448:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1040));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1036), aot_gpr_31);
    aot_gpr_31 = (0x08AB9478u);
    aot_gpr_6 = (0u | 256u);
    goto L_08AB8A5C;
L_08AB9478:
    aot_gpr_31 = (0x08AB9480u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08AB9480:
    aot_gpr_31 = (0x08AB9488u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB8A34;
L_08AB9488:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
      if (branch_taken) {
          goto L_08AB94A4;
      }
      goto L_08AB9494;
    }
L_08AB9494:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (0u | 6u);
      if (branch_taken) {
          goto L_08AB94A4;
      }
      goto L_08AB949C;
    }
L_08AB949C:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[18] << 6u);
      if (branch_taken) {
          goto L_08AB94AC;
      }
      goto L_08AB94A4;
    }
L_08AB94A4:
    ctx.gpr[16] = (0u | 4900u);
    aot_gpr_4 = (ctx.gpr[18] << 6u);
    goto L_08AB94AC;
L_08AB94AC:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27808));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t aot_run_words[7]{aot_gpr_5, aot_gpr_5, aot_gpr_5, aot_gpr_5, aot_gpr_5, aot_gpr_5, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_4 = (0u | 7u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AB9524;
      }
      goto L_08AB9500;
    }
L_08AB9500:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_7 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08AB9524u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08ABAB74;
L_08AB9524:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB953C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1040));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1036), aot_gpr_31);
    aot_gpr_31 = (0x08AB956Cu);
    aot_gpr_6 = (0u | 256u);
    goto L_08AB8A5C;
L_08AB956C:
    aot_gpr_31 = (0x08AB9574u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08AB9574:
    aot_gpr_31 = (0x08AB957Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB8A34;
L_08AB957C:
    aot_gpr_5 = (ctx.gpr[18] << 6u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (2240u << 16u);
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27808));
      if (branch_taken) {
          goto L_08AB95A8;
      }
      goto L_08AB9598;
    }
L_08AB9598:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_6 = (0u | 6u);
      if (branch_taken) {
          goto L_08AB95A8;
      }
      goto L_08AB95A0;
    }
L_08AB95A0:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_6;
      if (branch_taken) {
          goto L_08AB95AC;
      }
      goto L_08AB95A8;
    }
L_08AB95A8:
    ctx.gpr[16] = (0u | 4900u);
    goto L_08AB95AC;
L_08AB95AC:
    aot_gpr_7 = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    goto L_08AB95B4;
L_08AB95B4:
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[8] = (aot_gpr_7 << 4u);
      if (branch_taken) {
          goto L_08AB95EC;
      }
      goto L_08AB95BC;
    }
L_08AB95BC:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08AB95EC;
      }
      goto L_08AB95D8;
    }
L_08AB95D8:
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_6 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_7) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB95B4;
      }
      goto L_08AB95EC;
    }
L_08AB95EC:
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (aot_gpr_7 << 4u);
      if (branch_taken) {
          goto L_08AB9668;
      }
      goto L_08AB95F4;
    }
L_08AB95F4:
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t aot_run_words[7]{aot_gpr_5, aot_gpr_5, aot_gpr_5, aot_gpr_5, aot_gpr_5, aot_gpr_5, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_4 = (0u | 7u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AB9668;
      }
      goto L_08AB9644;
    }
L_08AB9644:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_7 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08AB9668u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08ABAB74;
L_08AB9668:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB9680:
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18024));
    goto L_08AB968C;
L_08AB968C:
    aot_gpr_6 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(28), 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AB968C;
      }
      goto L_08AB96B4;
    }
L_08AB96B4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB96BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-512));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB96EC;
      }
      goto L_08AB96C8;
    }
L_08AB96C8:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB96EC;
      }
      goto L_08AB96D0;
    }
L_08AB96D0:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB96F4;
      }
      goto L_08AB96E4;
    }
L_08AB96E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB9708;
      }
      goto L_08AB96EC;
    }
L_08AB96EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB986C;
      }
      goto L_08AB96F4;
    }
L_08AB96F4:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
      if (branch_taken) {
          goto L_08AB96F4;
      }
      goto L_08AB9708;
    }
L_08AB9708:
    aot_gpr_7 = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08AB972C;
      }
      goto L_08AB9718;
    }
L_08AB9718:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_6 = (aot_gpr_6 & 65535u);
      if (branch_taken) {
          goto L_08AB9718;
      }
      goto L_08AB972C;
    }
L_08AB972C:
    ctx.gpr[10] = (ctx.gpr[10] + aot_gpr_6);
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_7 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB97FC;
      }
      goto L_08AB9744;
    }
L_08AB9744:
    ctx.gpr[2] = (0u | 126u);
    ctx.gpr[11] = (0u | 97u);
    goto L_08AB974C;
L_08AB974C:
    ctx.gpr[3] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[3] = (aot_gpr_4 + ctx.gpr[3]);
    ctx.gpr[12] = (aot_mem.aot_direct_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[2];
      if (branch_taken) {
          goto L_08AB97C4;
      }
      goto L_08AB9760;
    }
L_08AB9760:
    ctx.gpr[12] = (aot_mem.aot_direct_load16(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[11];
      if (branch_taken) {
          goto L_08AB97C4;
      }
      goto L_08AB976C;
    }
L_08AB976C:
    ctx.gpr[3] = (aot_mem.aot_direct_load16(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
      if (branch_taken) {
          goto L_08AB97C4;
      }
      goto L_08AB9778;
    }
L_08AB9778:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(3));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
      if (branch_taken) {
          goto L_08AB97F4;
      }
      goto L_08AB978C;
    }
L_08AB978C:
    aot_gpr_7 = (ctx.gpr[3] + ctx.gpr[3]);
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (aot_gpr_29 + ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[3] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_7 = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
      if (branch_taken) {
          goto L_08AB978C;
      }
      goto L_08AB97BC;
    }
L_08AB97BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB97F4;
      }
      goto L_08AB97C4;
    }
L_08AB97C4:
    aot_gpr_7 = (ctx.gpr[9] + ctx.gpr[9]);
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (aot_gpr_29 + ctx.gpr[3]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_mem.aot_direct_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB97F4;
      }
      goto L_08AB97F4;
    }
L_08AB97F4:
    { const bool branch_taken = aot_gpr_7 != 0u;
      if (branch_taken) {
          goto L_08AB974C;
      }
      goto L_08AB97FC;
    }
L_08AB97FC:
    aot_gpr_5 = (ctx.gpr[8] + ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB9840;
      }
      goto L_08AB9818;
    }
L_08AB9818:
    aot_gpr_5 = (ctx.gpr[8] + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB9818;
      }
      goto L_08AB9840;
    }
L_08AB9840:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB986C;
      }
      goto L_08AB984C;
    }
L_08AB984C:
    aot_gpr_5 = (ctx.gpr[8] + ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB984C;
      }
      goto L_08AB986C;
    }
L_08AB986C:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB9874:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-544));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(512), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(520), ctx.gpr[18]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(516), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 2u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(524), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(528), aot_gpr_31);
    aot_gpr_31 = (0x08AB98A8u);
    aot_gpr_6 = (0u | 512u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB98A8u) goto L_08AB98A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB98A8:
    aot_gpr_4 = (0u | 67u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_31 = (0x08AB98B8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB98B8u) goto L_08AB98B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB98B8:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(150)));
    aot_gpr_4 = (0u | 126u);
    aot_gpr_7 = (aot_gpr_6 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_08AB9988;
      }
      goto L_08AB98D0;
    }
L_08AB98D0:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12184)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB98E8:
    aot_gpr_6 = (0u | 48u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB98F8;
    }
L_08AB98F8:
    aot_gpr_6 = (0u | 49u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9908;
    }
L_08AB9908:
    aot_gpr_6 = (0u | 50u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9918;
    }
L_08AB9918:
    aot_gpr_6 = (0u | 51u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9928;
    }
L_08AB9928:
    aot_gpr_6 = (0u | 52u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9938;
    }
L_08AB9938:
    aot_gpr_6 = (0u | 53u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9948;
    }
L_08AB9948:
    aot_gpr_6 = (0u | 54u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9958;
    }
L_08AB9958:
    aot_gpr_6 = (0u | 55u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9968;
    }
L_08AB9968:
    aot_gpr_6 = (0u | 56u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9978;
    }
L_08AB9978:
    aot_gpr_6 = (0u | 57u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB998C;
      }
      goto L_08AB9988;
    }
L_08AB9988:
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AB998C;
L_08AB998C:
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
      if (branch_taken) {
          goto L_08AB99A0;
      }
      goto L_08AB9994;
    }
L_08AB9994:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB9994;
      }
      goto L_08AB99A0;
    }
L_08AB99A0:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB99CC;
      }
      goto L_08AB99AC;
    }
L_08AB99AC:
    aot_gpr_7 = (ctx.gpr[17] + ctx.gpr[17]);
    aot_gpr_7 = (aot_gpr_29 + aot_gpr_7);
    aot_mem.aot_direct_store16(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB99AC;
      }
      goto L_08AB99CC;
    }
L_08AB99CC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08AB99FC;
      }
      goto L_08AB99D4;
    }
L_08AB99D4:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08AB99E0u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB99E0u) goto L_08AB99E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB99E0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AB99F8;
      }
      goto L_08AB99EC;
    }
L_08AB99EC:
    aot_gpr_31 = (0x08AB99F4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB99F4u) goto L_08AB99F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB99F4:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    goto L_08AB99F8;
L_08AB99F8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AB99FC;
L_08AB99FC:
    aot_gpr_31 = (0x08AB9A04u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 300u, 0x089F5A5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB9A04u) goto L_08AB9A04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB9A04:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB9A10u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB9A10u) goto L_08AB9A10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB9A10:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB9A3C;
      }
      goto L_08AB9A20;
    }
L_08AB9A20:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB9A20;
      }
      goto L_08AB9A3C;
    }
L_08AB9A3C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(512), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB9A5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1120));
    { const std::uint32_t aot_run_words[8]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1084), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AB9A9C;
      }
      goto L_08AB9A88;
    }
L_08AB9A88:
    aot_gpr_31 = (0x08AB9A90u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AB8A34;
L_08AB9A90:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB9AA4;
      }
      goto L_08AB9A9C;
    }
L_08AB9A9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB9C4C;
      }
      goto L_08AB9AA4;
    }
L_08AB9AA4:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(572), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB9AA4;
      }
      goto L_08AB9AC4;
    }
L_08AB9AC4:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB9BD0;
      }
      goto L_08AB9AD4;
    }
L_08AB9AD4:
    ctx.gpr[20] = (0u | 126u);
    ctx.gpr[21] = (0u | 107u);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(572));
    goto L_08AB9AE0;
L_08AB9AE0:
    aot_gpr_4 = (ctx.gpr[18] + ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08AB9B9C;
      }
      goto L_08AB9AF4;
    }
L_08AB9AF4:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[21];
      if (branch_taken) {
          goto L_08AB9B9C;
      }
      goto L_08AB9B00;
    }
L_08AB9B00:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08AB9B9C;
      }
      goto L_08AB9B0C;
    }
L_08AB9B0C:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (aot_gpr_4 & 65535u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB9B24u);
    aot_gpr_6 = (0u | 512u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB9B24u) goto L_08AB9B24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB9B24:
    aot_gpr_4 = (ctx.gpr[18] + ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_31 = (0x08AB9B34u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    goto L_08AB9874;
L_08AB9B34:
    aot_gpr_4 = (ctx.gpr[18] + ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    aot_gpr_31 = (0x08AB9B4Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_08AB8A34;
L_08AB9B4C:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB9BC8;
      }
      goto L_08AB9B60;
    }
L_08AB9B60:
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_7 = (aot_gpr_29 + aot_gpr_7);
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(572)));
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[9] = (aot_gpr_29 + ctx.gpr[9]);
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_7 + static_cast<std::uint32_t>(572), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
      if (branch_taken) {
          goto L_08AB9B60;
      }
      goto L_08AB9B94;
    }
L_08AB9B94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB9BC8;
      }
      goto L_08AB9B9C;
    }
L_08AB9B9C:
    aot_gpr_4 = (ctx.gpr[18] + ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    goto L_08AB9BC8;
L_08AB9BC8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB9AE0;
      }
      goto L_08AB9BD0;
    }
L_08AB9BD0:
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(0u));
    aot_gpr_31 = (0x08AB9BE4u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(60));
    goto L_08AB8A34;
L_08AB9BE4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB9C20;
      }
      goto L_08AB9BF8;
    }
L_08AB9BF8:
    aot_gpr_5 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB9BF8;
      }
      goto L_08AB9C20;
    }
L_08AB9C20:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB9C4C;
      }
      goto L_08AB9C2C;
    }
L_08AB9C2C:
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB9C2C;
      }
      goto L_08AB9C4C;
    }
L_08AB9C4C:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1084), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1120));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB9C74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1056), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1072)));
    { const std::uint32_t aot_run_words[7]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1028), aot_run_words); }
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (aot_gpr_7 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[23] = (aot_gpr_6 & 65535u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1060), aot_gpr_31);
    aot_gpr_31 = (0x08AB9CE4u);
    ctx.gpr[11] = (aot_gpr_29 | 0u);
    goto L_08ABAD24;
L_08AB9CE4:
    aot_gpr_31 = (0x08AB9CECu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08AB9CEC:
    aot_gpr_31 = (0x08AB9CF4u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB8A34;
L_08AB9CF4:
    aot_gpr_6 = (2240u << 16u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(-26272));
    goto L_08AB9D04;
L_08AB9D04:
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[8] = (aot_gpr_4 << 4u);
      if (branch_taken) {
          goto L_08AB9D38;
      }
      goto L_08AB9D0C;
    }
L_08AB9D0C:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_7);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08AB9D38;
      }
      goto L_08AB9D24;
    }
L_08AB9D24:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB9D04;
      }
      goto L_08AB9D38;
    }
L_08AB9D38:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 << 4u);
      if (branch_taken) {
          goto L_08AB9DB8;
      }
      goto L_08AB9D40;
    }
L_08AB9D40:
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const std::uint32_t aot_run_words[8]{ctx.gpr[17], ctx.gpr[8], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[30]};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08AB9DB8;
      }
      goto L_08AB9D80;
    }
L_08AB9D80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(-26272)));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_7 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
      ctx.gpr[9] = aot_run_words[3];
      ctx.gpr[10] = aot_run_words[4];
      ctx.gpr[11] = aot_run_words[5];
      ctx.gpr[2] = aot_run_words[6];
    }
    aot_gpr_7 = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    aot_gpr_31 = (0x08AB9DB8u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_08ABAB74;
L_08AB9DB8:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB9DE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1052), ctx.gpr[22]);
    ctx.gpr[22] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1076)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1060), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1072)));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1028), aot_run_words); }
    ctx.gpr[16] = (ctx.gpr[11] | 0u);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (aot_gpr_7 | 0u);
    ctx.gpr[21] = (aot_gpr_6 | 0u);
    ctx.gpr[22] = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1056), ctx.gpr[23]);
    ctx.gpr[23] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1064), aot_gpr_31);
    aot_gpr_31 = (0x08AB9E64u);
    ctx.gpr[11] = (aot_gpr_29 | 0u);
    goto L_08ABAD24;
L_08AB9E64:
    aot_gpr_31 = (0x08AB9E6Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08AB9E6C:
    aot_gpr_31 = (0x08AB9E74u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB8A34;
L_08AB9E74:
    aot_gpr_5 = (2240u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(-26272), ctx.gpr[23]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-26272));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1024)));
    { const std::uint32_t aot_run_words[8]{aot_gpr_7, aot_gpr_6, ctx.gpr[20], ctx.gpr[19], ctx.gpr[18], ctx.gpr[17], ctx.gpr[16], ctx.gpr[30]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08AB9EF8;
      }
      goto L_08AB9EB4;
    }
L_08AB9EB4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(-26272)));
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      aot_gpr_7 = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
      ctx.gpr[9] = aot_run_words[3];
      ctx.gpr[10] = aot_run_words[4];
      ctx.gpr[11] = aot_run_words[5];
      ctx.gpr[2] = aot_run_words[6];
    }
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    aot_gpr_7 = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    aot_gpr_31 = (0x08AB9EF8u);
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    goto L_08ABAB74;
L_08AB9EF8:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1028), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AB9F28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1056), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1072)));
    { const std::uint32_t aot_run_words[7]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1028), aot_run_words); }
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (aot_gpr_7 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[23] = (aot_gpr_6 & 65535u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1060), aot_gpr_31);
    aot_gpr_31 = (0x08AB9F98u);
    ctx.gpr[11] = (aot_gpr_29 | 0u);
    goto L_08ABAD24;
L_08AB9F98:
    aot_gpr_31 = (0x08AB9FA0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08AB9FA0:
    aot_gpr_31 = (0x08AB9FA8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB8A34;
L_08AB9FA8:
    aot_gpr_4 = (2240u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-26272)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-26272));
      if (branch_taken) {
          goto L_08ABA080;
      }
      goto L_08AB9FB8;
    }
L_08AB9FB8:
    aot_gpr_4 = (0u | 7u);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-48));
    aot_gpr_7 = (aot_gpr_4 << 4u);
    goto L_08AB9FC4;
L_08AB9FC4:
    ctx.gpr[8] = (aot_gpr_7 + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_gpr_7 + aot_gpr_6);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_gpr_7 + aot_gpr_5);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_7 = (aot_gpr_4 << 4u);
      if (branch_taken) {
          goto L_08AB9FC4;
      }
      goto L_08ABA04C;
    }
L_08ABA04C:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[23]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const std::uint32_t aot_run_words[8]{ctx.gpr[17], aot_gpr_4, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[30]};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(56), aot_run_words); }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(88), 0u);
      if (branch_taken) {
          goto L_08ABA0D4;
      }
      goto L_08ABA080;
    }
L_08ABA080:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-26272), ctx.gpr[16]);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[23]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], aot_gpr_4, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[30], 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08ABA0D4u);
    ctx.gpr[11] = (0u | 0u);
    goto L_08ABAB74;
L_08ABA0D4:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABA104:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1052), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1072)));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1056), ctx.gpr[30]);
    ctx.gpr[16] = (ctx.gpr[11] | 0u);
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (aot_gpr_7 | 0u);
    ctx.gpr[21] = (aot_gpr_5 | 0u);
    ctx.gpr[30] = (aot_gpr_6 & 65535u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1048), ctx.gpr[22]);
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1060), aot_gpr_31);
    aot_gpr_31 = (0x08ABA174u);
    ctx.gpr[11] = (aot_gpr_29 | 0u);
    goto L_08ABAD24;
L_08ABA174:
    aot_gpr_31 = (0x08ABA17Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08ABA17C:
    aot_gpr_31 = (0x08ABA184u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB8A34;
L_08ABA184:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[30] == aot_gpr_4;
      if (branch_taken) {
          goto L_08ABA1A0;
      }
      goto L_08ABA190;
    }
L_08ABA190:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_gpr_4 = (0u | 6u);
      if (branch_taken) {
          goto L_08ABA1A0;
      }
      goto L_08ABA198;
    }
L_08ABA198:
    { const bool branch_taken = ctx.gpr[30] != aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[30] << 6u);
      if (branch_taken) {
          goto L_08ABA1A8;
      }
      goto L_08ABA1A0;
    }
L_08ABA1A0:
    ctx.gpr[21] = (0u | 4900u);
    aot_gpr_4 = (ctx.gpr[30] << 6u);
    goto L_08ABA1A8;
L_08ABA1A8:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27808));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const std::uint32_t aot_run_words[9]{ctx.gpr[21], aot_gpr_5, ctx.gpr[20], ctx.gpr[19], ctx.gpr[18], ctx.gpr[17], ctx.gpr[16], ctx.gpr[23], 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_run_words); }
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABA21C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1056), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1072)));
    { const std::uint32_t aot_run_words[7]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1028), aot_run_words); }
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (aot_gpr_7 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[23] = (aot_gpr_6 & 65535u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1060), aot_gpr_31);
    aot_gpr_31 = (0x08ABA28Cu);
    ctx.gpr[11] = (aot_gpr_29 | 0u);
    goto L_08ABAD24;
L_08ABA28C:
    aot_gpr_31 = (0x08ABA294u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08ABA294:
    aot_gpr_31 = (0x08ABA29Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB8A34;
L_08ABA29C:
    aot_gpr_4 = (ctx.gpr[23] << 6u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27808));
      if (branch_taken) {
          goto L_08ABA2C8;
      }
      goto L_08ABA2B8;
    }
L_08ABA2B8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_gpr_6 = (0u | 6u);
      if (branch_taken) {
          goto L_08ABA2C8;
      }
      goto L_08ABA2C0;
    }
L_08ABA2C0:
    { const bool branch_taken = ctx.gpr[23] != aot_gpr_6;
      if (branch_taken) {
          goto L_08ABA2CC;
      }
      goto L_08ABA2C8;
    }
L_08ABA2C8:
    ctx.gpr[17] = (0u | 4900u);
    goto L_08ABA2CC;
L_08ABA2CC:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_7 = (0u | 1u);
    goto L_08ABA2D4;
L_08ABA2D4:
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[8] = (aot_gpr_6 << 4u);
      if (branch_taken) {
          goto L_08ABA30C;
      }
      goto L_08ABA2DC;
    }
L_08ABA2DC:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_gpr_4 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_5);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08ABA30C;
      }
      goto L_08ABA2F8;
    }
L_08ABA2F8:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 << 16u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABA2D4;
      }
      goto L_08ABA30C;
    }
L_08ABA30C:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_6 = (aot_gpr_6 << 4u);
      if (branch_taken) {
          goto L_08ABA354;
      }
      goto L_08ABA314;
    }
L_08ABA314:
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], aot_gpr_5, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[30], 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_run_words); }
    goto L_08ABA354;
L_08ABA354:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABA384:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1056));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1036), ctx.gpr[19]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_7 | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1040), aot_gpr_31);
    aot_gpr_31 = (0x08ABA3BCu);
    aot_gpr_6 = (0u | 256u);
    goto L_08AB8A5C;
L_08ABA3BC:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08ABA3C8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AB96BC;
L_08ABA3C8:
    aot_gpr_31 = (0x08ABA3D0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08ABA3D0:
    aot_gpr_31 = (0x08ABA3D8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB8A34;
L_08ABA3D8:
    aot_gpr_4 = (2240u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-26272), ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26272));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t aot_run_words[7]{aot_gpr_5, aot_gpr_5, aot_gpr_5, aot_gpr_5, aot_gpr_5, aot_gpr_5, ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_7 = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (aot_gpr_5 | 0u);
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    ctx.gpr[10] = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08ABA434u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    goto L_08ABAB74;
L_08ABA434:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1056));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABA450:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2240u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26272));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    goto L_08ABA47C;
L_08ABA47C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    goto L_08ABA48C;
L_08ABA48C:
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_7 = (aot_gpr_5 << 4u);
      if (branch_taken) {
          goto L_08ABA51C;
      }
      goto L_08ABA494;
    }
L_08ABA494:
    ctx.gpr[8] = (aot_gpr_7 + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[19]);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08ABA51C;
      }
      goto L_08ABA4AC;
    }
L_08ABA4AC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABA51C;
      }
      goto L_08ABA4B4;
    }
L_08ABA4B4:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_08ABA4C0;
L_08ABA4C0:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
      if (branch_taken) {
          goto L_08ABA4FC;
      }
      goto L_08ABA4C8;
    }
L_08ABA4C8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABA4FC;
      }
      goto L_08ABA4D0;
    }
L_08ABA4D0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABA4F4;
      }
      goto L_08ABA4E4;
    }
L_08ABA4E4:
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08ABA4F4;
      }
      goto L_08ABA4EC;
    }
L_08ABA4EC:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08ABA4F4;
L_08ABA4F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABA4C0;
      }
      goto L_08ABA4FC;
    }
L_08ABA4FC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABA514;
      }
      goto L_08ABA504;
    }
L_08ABA504:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
    goto L_08ABA514;
L_08ABA514:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABA48C;
      }
      goto L_08ABA51C;
    }
L_08ABA51C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABA6DC;
      }
      goto L_08ABA524;
    }
L_08ABA524:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08ABA618;
      }
      goto L_08ABA52C;
    }
L_08ABA52C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-26272), 0u);
    aot_gpr_7 = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_08ABA540;
L_08ABA540:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08ABA5D8;
      }
      goto L_08ABA548;
    }
L_08ABA548:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08ABA5D8;
      }
      goto L_08ABA554;
    }
L_08ABA554:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      ctx.gpr[8] = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(44)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_6);
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(44), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_7 << 4u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_7) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08ABA540;
      }
      goto L_08ABA5D8;
    }
L_08ABA5D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26272)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABA6DC;
      }
      goto L_08ABA5F0;
    }
L_08ABA5F0:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[19] + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
      ctx.gpr[8] = aot_run_words[3];
      ctx.gpr[9] = aot_run_words[4];
      ctx.gpr[10] = aot_run_words[5];
    }
    aot_gpr_31 = (0x08ABA610u);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    goto L_08ABAB74;
L_08ABA610:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABA6DC;
      }
      goto L_08ABA618;
    }
L_08ABA618:
    aot_gpr_4 = (aot_gpr_5 << 4u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_6 + ctx.gpr[19]);
    goto L_08ABA640;
L_08ABA640:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABA6D8;
      }
      goto L_08ABA648;
    }
L_08ABA648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08ABA6D8;
      }
      goto L_08ABA654;
    }
L_08ABA654:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      ctx.gpr[8] = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(24), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(36), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_5 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_gpr_6 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08ABA640;
      }
      goto L_08ABA6D8;
    }
L_08ABA6D8:
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), 0u);
    goto L_08ABA6DC;
L_08ABA6DC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08ABA47C;
      }
      goto L_08ABA6E4;
    }
L_08ABA6E4:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08ABA704:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2240u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[2] = (0u | 4u);
    aot_gpr_7 = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-27808));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    goto L_08ABA73C;
L_08ABA73C:
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABA7F8;
      }
      goto L_08ABA744;
    }
L_08ABA744:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08ABA7F8;
      }
      goto L_08ABA74C;
    }
L_08ABA74C:
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[8] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_08ABA7F8;
      }
      goto L_08ABA754;
    }
L_08ABA754:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_gpr_5 << 4u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[18]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08ABA7C0;
      }
      goto L_08ABA77C;
    }
L_08ABA77C:
    ctx.gpr[9] = (aot_gpr_4 | 0u);
    ctx.gpr[10] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_08ABA788;
L_08ABA788:
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
      if (branch_taken) {
          goto L_08ABA7C0;
      }
      goto L_08ABA790;
    }
L_08ABA790:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08ABA7C0;
      }
      goto L_08ABA798;
    }
L_08ABA798:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[11] = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABA7B8;
      }
      goto L_08ABA7AC;
    }
L_08ABA7AC:
    { const bool branch_taken = ctx.gpr[10] != 0u;
      if (branch_taken) {
          goto L_08ABA7B8;
      }
      goto L_08ABA7B4;
    }
L_08ABA7B4:
    aot_gpr_6 = (0u | 1u);
    goto L_08ABA7B8;
L_08ABA7B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABA788;
      }
      goto L_08ABA7C0;
    }
L_08ABA7C0:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08ABA7F0;
      }
      goto L_08ABA7C8;
    }
L_08ABA7C8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[2];
      if (branch_taken) {
          goto L_08ABA7F0;
      }
      goto L_08ABA7DC;
    }
L_08ABA7DC:
    aot_gpr_7 = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (aot_gpr_7 << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_7 = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    goto L_08ABA7F0;
L_08ABA7F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABA73C;
      }
      goto L_08ABA7F8;
    }
L_08ABA7F8:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08ABA9E4;
      }
      goto L_08ABA800;
    }
L_08ABA800:
    ctx.gpr[17] = (ctx.gpr[16] << 6u);
    aot_gpr_4 = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08ABA914;
      }
      goto L_08ABA814;
    }
L_08ABA814:
    aot_gpr_5 = (2279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[16] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17968));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_08ABA850;
      }
      goto L_08ABA840;
    }
L_08ABA840:
    aot_gpr_31 = (0x08ABA848u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABA848u) goto L_08ABA848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABA848:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_gpr_6 = (ctx.gpr[16] & 65535u);
    goto L_08ABA850;
L_08ABA850:
    aot_gpr_31 = (0x08ABA858u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 618u, 0x089BAEB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABA858u) goto L_08ABA858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABA858:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[16] = (aot_gpr_4 + ctx.gpr[18]);
    goto L_08ABA868;
L_08ABA868:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABA904;
      }
      goto L_08ABA870;
    }
L_08ABA870:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08ABA904;
      }
      goto L_08ABA87C;
    }
L_08ABA87C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_7 = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), aot_gpr_7);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 << 4u);
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_7);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 3 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_gpr_4 + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ABA868;
      }
      goto L_08ABA904;
    }
L_08ABA904:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABA9E4;
      }
      goto L_08ABA914;
    }
L_08ABA914:
    aot_gpr_4 = (aot_gpr_5 << 4u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_6 = (ctx.gpr[17] + aot_gpr_6);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_6 + ctx.gpr[18]);
    goto L_08ABA944;
L_08ABA944:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABA9E0;
      }
      goto L_08ABA94C;
    }
L_08ABA94C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08ABA9E0;
      }
      goto L_08ABA958;
    }
L_08ABA958:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      ctx.gpr[8] = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(24), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(36), aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_5 << 4u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (ctx.gpr[17] + aot_gpr_6);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_gpr_6 + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ABA944;
      }
      goto L_08ABA9E0;
    }
L_08ABA9E0:
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), 0u);
    goto L_08ABA9E4;
L_08ABA9E4:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08ABAA04:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[16] << 6u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27808));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABAA40;
      }
      goto L_08ABAA38;
    }
L_08ABAA38:
    aot_gpr_31 = (0x08ABAA40u);
    goto L_08ABA704;
L_08ABAA40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08ABAA58;
    }
    goto L_08ABAA4C;
L_08ABAA4C:
    aot_gpr_31 = (0x08ABAA54u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAA54u) goto L_08ABAA54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAA54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08ABAA58;
L_08ABAA58:
    aot_gpr_6 = (ctx.gpr[16] & 65535u);
    aot_gpr_31 = (0x08ABAA64u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 618u, 0x089BAEB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAA64u) goto L_08ABAA64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAA64:
    aot_gpr_5 = (2279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[16] << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17968));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABAA8C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABAA9Cu);
    goto L_08AB92E8;
L_08ABAA9C:
    aot_gpr_31 = (0x08ABAAA4u);
    goto L_08AB9680;
L_08ABAAA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABAAB8;
      }
      goto L_08ABAAB0;
    }
L_08ABAAB0:
    aot_gpr_31 = (0x08ABAAB8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAAB8u) goto L_08ABAAB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAAB8:
    aot_gpr_31 = (0x08ABAAC0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 573u, 0x089BAB28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAAC0u) goto L_08ABAAC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAAC0:
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_31 = (0x08ABAACCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8968));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 646u, 0x0893ABACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAACCu) goto L_08ABAACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAACC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABAAD8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-528));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(516), ctx.gpr[17]);
    ctx.gpr[17] = (2240u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(512), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-26272));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(520), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABAB60;
      }
      goto L_08ABAAFC;
    }
L_08ABAAFC:
    aot_gpr_31 = (0x08ABAB04u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAB04u) goto L_08ABAB04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAB04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26272)));
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
      ctx.gpr[8] = aot_run_words[3];
      ctx.gpr[9] = aot_run_words[4];
      ctx.gpr[10] = aot_run_words[5];
    }
    aot_gpr_31 = (0x08ABAB28u);
    ctx.gpr[11] = (aot_gpr_29 | 0u);
    goto L_08ABAD24;
L_08ABAB28:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr_31 = (0x08ABAB34u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB96BC;
L_08ABAB34:
    aot_gpr_31 = (0x08ABAB3Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_08AB9A5C;
L_08ABAB3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08ABAB54;
    }
    goto L_08ABAB48;
L_08ABAB48:
    aot_gpr_31 = (0x08ABAB50u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAB50u) goto L_08ABAB50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAB50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08ABAB54;
L_08ABAB54:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr_31 = (0x08ABAB60u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 676u, 0x089BB208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAB60u) goto L_08ABAB60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAB60:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(512), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABAB74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (2238u << 16u);
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(18024));
    ctx.gpr[14] = (ctx.gpr[2] | 0u);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08ABAB90;
L_08ABAB90:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[15] = (static_cast<std::int32_t>(ctx.gpr[12]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABAC68;
      }
      goto L_08ABAB98;
    }
L_08ABAB98:
    { const bool branch_taken = ctx.gpr[15] == 0u;
      if (branch_taken) {
          goto L_08ABAC68;
      }
      goto L_08ABABA0;
    }
L_08ABABA0:
    { const bool branch_taken = ctx.gpr[13] != aot_gpr_4;
      if (branch_taken) {
          goto L_08ABAC50;
      }
      goto L_08ABABA8;
    }
L_08ABABA8:
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[11];
      if (branch_taken) {
          goto L_08ABAC50;
      }
      goto L_08ABABB4;
    }
L_08ABABB4:
    if (ctx.gpr[12] == 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[3] + static_cast<std::uint32_t>(18024), aot_gpr_4);
        goto L_08ABAC30;
    }
    goto L_08ABABBC;
L_08ABABBC:
    ctx.gpr[13] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[13] << 5u);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[2]);
    goto L_08ABABC8;
L_08ABABC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) < 0;
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[13]) < 21 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABAC2C;
      }
      goto L_08ABABD0;
    }
L_08ABABD0:
    { const bool branch_taken = ctx.gpr[14] == 0u;
      if (branch_taken) {
          goto L_08ABAC2C;
      }
      goto L_08ABABD8;
    }
L_08ABABD8:
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[14] == 0u;
      if (branch_taken) {
          goto L_08ABAC2C;
      }
      goto L_08ABABE4;
    }
L_08ABABE4:
    ctx.gpr[15] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(32), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(36), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(40), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(44), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(48), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(52), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(56), ctx.gpr[14]);
    aot_mem.aot_direct_store32(ctx.gpr[12] + static_cast<std::uint32_t>(60), ctx.gpr[15]);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08ABABC8;
      }
      goto L_08ABAC2C;
    }
L_08ABAC2C:
    aot_mem.aot_direct_store32(ctx.gpr[3] + static_cast<std::uint32_t>(18024), aot_gpr_4);
    goto L_08ABAC30;
L_08ABAC30:
    { const std::uint32_t aot_run_words[6]{aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(ctx.gpr[2] + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08ABAD18;
      }
      goto L_08ABAC50;
    }
L_08ABAC50:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[12] & 65535u);
    ctx.gpr[14] = (ctx.gpr[12] << 5u);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ABAB90;
      }
      goto L_08ABAC68;
    }
L_08ABAC68:
    if (ctx.gpr[12] == 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[3] + static_cast<std::uint32_t>(18024), aot_gpr_4);
        goto L_08ABACFC;
    }
    goto L_08ABAC70;
L_08ABAC70:
    ctx.gpr[13] = (ctx.gpr[12] | 0u);
    ctx.gpr[12] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    ctx.gpr[14] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[14];
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
      if (branch_taken) {
          goto L_08ABAC94;
      }
      goto L_08ABAC88;
    }
L_08ABAC88:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    goto L_08ABAC94;
L_08ABAC94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) < 0;
    ctx.gpr[13] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08ABACF8;
      }
      goto L_08ABAC9C;
    }
L_08ABAC9C:
    ctx.gpr[14] = (ctx.gpr[12] << 5u);
    ctx.gpr[15] = (ctx.gpr[14] + ctx.gpr[2]);
    ctx.gpr[24] = (aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[13]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[14] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.gpr[24] = (aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[14] + static_cast<std::uint32_t>(4), ctx.gpr[25]);
    ctx.gpr[25] = (aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[14] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[14] + static_cast<std::uint32_t>(12), ctx.gpr[24]);
    ctx.gpr[24] = (aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[14] + static_cast<std::uint32_t>(16), ctx.gpr[25]);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(ctx.gpr[15] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(ctx.gpr[14] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[14] + static_cast<std::uint32_t>(24), ctx.gpr[24]);
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[14] + static_cast<std::uint32_t>(28), ctx.gpr[15]);
      if (branch_taken) {
          goto L_08ABAC9C;
      }
      goto L_08ABACF8;
    }
L_08ABACF8:
    aot_mem.aot_direct_store32(ctx.gpr[3] + static_cast<std::uint32_t>(18024), aot_gpr_4);
    goto L_08ABACFC;
L_08ABACFC:
    { const std::uint32_t aot_run_words[7]{aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11]};
      aot_mem.aot_direct_store32_block(ctx.gpr[2] + static_cast<std::uint32_t>(4), aot_run_words); }
    goto L_08ABAD18;
L_08ABAD18:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABAD24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (ctx.gpr[11] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08ABADC4;
      }
      goto L_08ABAD74;
    }
L_08ABAD74:
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1856));
    ctx.gpr[30] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08ABAD8Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAD8Cu) goto L_08ABAD8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAD8C:
    aot_gpr_31 = (0x08ABAD94u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAD94u) goto L_08ABAD94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAD94:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(10));
    aot_gpr_31 = (0x08ABADA4u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABADA4u) goto L_08ABADA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABADA4:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08ABADCC;
      }
      goto L_08ABADBC;
    }
L_08ABADBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABADE8;
      }
      goto L_08ABADC4;
    }
L_08ABADC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08ABB01C;
      }
      goto L_08ABADCC;
    }
L_08ABADCC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08ABADCC;
      }
      goto L_08ABADE8;
    }
L_08ABADE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[19] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABB010;
      }
      goto L_08ABADFC;
    }
L_08ABADFC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    goto L_08ABAE08;
L_08ABAE08:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u | 126u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABAFD4;
      }
      goto L_08ABAE18;
    }
L_08ABAE18:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (ctx.gpr[20] + ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 49u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08ABAFD4;
      }
      goto L_08ABAE34;
    }
L_08ABAE34:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08ABAFD4;
      }
      goto L_08ABAE40;
    }
L_08ABAE40:
    aot_gpr_4 = (ctx.gpr[30] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAE4C;
    }
L_08ABAE4C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ABAE80;
      }
      goto L_08ABAE58;
    }
L_08ABAE58:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ABAE88;
      }
      goto L_08ABAE60;
    }
L_08ABAE60:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABAE90;
      }
      goto L_08ABAE68;
    }
L_08ABAE68:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08ABAE98;
      }
      goto L_08ABAE70;
    }
L_08ABAE70:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[1];
      if (branch_taken) {
          goto L_08ABAEA0;
      }
      goto L_08ABAE78;
    }
L_08ABAE78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAE80;
    }
L_08ABAE80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAE88;
    }
L_08ABAE88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAE90;
    }
L_08ABAE90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAE98;
    }
L_08ABAE98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAEA0;
    }
L_08ABAEA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABAEA8;
      }
      goto L_08ABAEA8;
    }
L_08ABAEA8:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(3));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(6));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(6));
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[20] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABAEF0;
      }
      goto L_08ABAEC8;
    }
L_08ABAEC8:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(10)));
    aot_gpr_6 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_6 = (ctx.gpr[18] + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABAEC8;
      }
      goto L_08ABAEF0;
    }
L_08ABAEF0:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAF08;
    }
L_08ABAF08:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ABAF4C;
      }
      goto L_08ABAF14;
    }
L_08ABAF14:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ABAF64;
      }
      goto L_08ABAF1C;
    }
L_08ABAF1C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABAF7C;
      }
      goto L_08ABAF24;
    }
L_08ABAF24:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08ABAF94;
      }
      goto L_08ABAF2C;
    }
L_08ABAF2C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08ABAFAC;
      }
      goto L_08ABAF34;
    }
L_08ABAF34:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08ABAF44u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAF44u) goto L_08ABAF44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAF44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAF4C;
    }
L_08ABAF4C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08ABAF5Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAF5Cu) goto L_08ABAF5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAF5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAF64;
    }
L_08ABAF64:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08ABAF74u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAF74u) goto L_08ABAF74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAF74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAF7C;
    }
L_08ABAF7C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08ABAF8Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAF8Cu) goto L_08ABAF8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAF8C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAF94;
    }
L_08ABAF94:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08ABAFA4u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAFA4u) goto L_08ABAFA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAFA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAFAC;
    }
L_08ABAFAC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABAFB4;
      }
      goto L_08ABAFB4;
    }
L_08ABAFB4:
    aot_gpr_31 = (0x08ABAFBCu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAFBCu) goto L_08ABAFBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAFBC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(10));
    aot_gpr_31 = (0x08ABAFCCu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABAFCCu) goto L_08ABAFCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABAFCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ABB008;
      }
      goto L_08ABAFD4;
    }
L_08ABAFD4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(2));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[20] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    goto L_08ABB008;
L_08ABB008:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08ABAE08;
      }
      goto L_08ABB010;
    }
L_08ABB010:
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08ABB01C;
L_08ABB01C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB04C:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB054:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABB07Cu);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB07Cu) goto L_08ABB07C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB07C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08ABB098;
      }
      goto L_08ABB088;
    }
L_08ABB088:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABB09C;
      }
      goto L_08ABB098;
    }
L_08ABB098:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_gpr_4);
    goto L_08ABB09C;
L_08ABB09C:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB0B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABB0D8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB0D8u) goto L_08ABB0D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB0D8:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08ABB0F4u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB0F4u) goto L_08ABB0F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB0F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_4);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB114:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABB138u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB138u) goto L_08ABB138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB138:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08ABB154u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB154u) goto L_08ABB154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB154:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_4);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB174:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABB198u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB198u) goto L_08ABB198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB198:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08ABB1B4u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB1B4u) goto L_08ABB1B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB1B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_4);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB1DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABB200u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB200u) goto L_08ABB200;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB200:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08ABB21Cu);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB21Cu) goto L_08ABB21C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB21C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB244:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABB268u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB268u) goto L_08ABB268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB268:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08ABB284u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB284u) goto L_08ABB284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB284:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_4);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB2AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABB2D0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB2D0u) goto L_08ABB2D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB2D0:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08ABB2ECu);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB2ECu) goto L_08ABB2EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB2EC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB314:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABB338u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB338u) goto L_08ABB338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB338:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08ABB354u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB354u) goto L_08ABB354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB354:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_4);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB380:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABB3A4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB3A4u) goto L_08ABB3A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB3A4:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08ABB3C0u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB3C0u) goto L_08ABB3C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB3C0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB3E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABB40Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB40Cu) goto L_08ABB40C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB40C:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08ABB428u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB428u) goto L_08ABB428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB428:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_4);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB454:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABB478u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB478u) goto L_08ABB478;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB478:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08ABB494u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB494u) goto L_08ABB494;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB494:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB4BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08ABB4ECu);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB4ECu) goto L_08ABB4EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB4EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB520;
      }
      goto L_08ABB518;
    }
L_08ABB518:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08ABB568;
      }
      goto L_08ABB520;
    }
L_08ABB520:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB54C;
      }
      goto L_08ABB540;
    }
L_08ABB540:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08ABB568;
      }
      goto L_08ABB54C;
    }
L_08ABB54C:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABB568;
      }
      goto L_08ABB564;
    }
L_08ABB564:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABB568;
L_08ABB568:
    ctx.gpr[2] = (0u | 0u);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB584:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08ABB5B4u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB5B4u) goto L_08ABB5B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB5B4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (0u | 1u);
        goto L_08ABB5D0;
    }
    goto L_08ABB5D0;
L_08ABB5D0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB5F8;
      }
      goto L_08ABB5F0;
    }
L_08ABB5F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08ABB640;
      }
      goto L_08ABB5F8;
    }
L_08ABB5F8:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB624;
      }
      goto L_08ABB618;
    }
L_08ABB618:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08ABB640;
      }
      goto L_08ABB624;
    }
L_08ABB624:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABB640;
      }
      goto L_08ABB63C;
    }
L_08ABB63C:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABB640;
L_08ABB640:
    ctx.gpr[2] = (0u | 0u);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB65C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08ABB68Cu);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB68Cu) goto L_08ABB68C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB68C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB6C4;
      }
      goto L_08ABB6BC;
    }
L_08ABB6BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08ABB70C;
      }
      goto L_08ABB6C4;
    }
L_08ABB6C4:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB6F0;
      }
      goto L_08ABB6E4;
    }
L_08ABB6E4:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08ABB70C;
      }
      goto L_08ABB6F0;
    }
L_08ABB6F0:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABB70C;
      }
      goto L_08ABB708;
    }
L_08ABB708:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABB70C;
L_08ABB70C:
    ctx.gpr[2] = (0u | 0u);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB728:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08ABB758u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB758u) goto L_08ABB758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB758:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (0u | 1u);
        goto L_08ABB774;
    }
    goto L_08ABB774;
L_08ABB774:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB79C;
      }
      goto L_08ABB794;
    }
L_08ABB794:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08ABB7E4;
      }
      goto L_08ABB79C;
    }
L_08ABB79C:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB7C8;
      }
      goto L_08ABB7BC;
    }
L_08ABB7BC:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08ABB7E4;
      }
      goto L_08ABB7C8;
    }
L_08ABB7C8:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABB7E4;
      }
      goto L_08ABB7E0;
    }
L_08ABB7E0:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABB7E4;
L_08ABB7E4:
    ctx.gpr[2] = (0u | 0u);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB800:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08ABB830u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB830u) goto L_08ABB830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB830:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB868;
      }
      goto L_08ABB860;
    }
L_08ABB860:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08ABB8B0;
      }
      goto L_08ABB868;
    }
L_08ABB868:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB894;
      }
      goto L_08ABB888;
    }
L_08ABB888:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08ABB8B0;
      }
      goto L_08ABB894;
    }
L_08ABB894:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABB8B0;
      }
      goto L_08ABB8AC;
    }
L_08ABB8AC:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABB8B0;
L_08ABB8B0:
    ctx.gpr[2] = (0u | 0u);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB8CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABB8F4u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB8F4u) goto L_08ABB8F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB8F4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABB920;
      }
      goto L_08ABB900;
    }
L_08ABB900:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
      if (branch_taken) {
          goto L_08ABB91C;
      }
      goto L_08ABB90C;
    }
L_08ABB90C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABB920;
      }
      goto L_08ABB91C;
    }
L_08ABB91C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    goto L_08ABB920;
L_08ABB920:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB938:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABB960u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB960u) goto L_08ABB960;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB960:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ABB98C;
      }
      goto L_08ABB96C;
    }
L_08ABB96C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
      if (branch_taken) {
          goto L_08ABB988;
      }
      goto L_08ABB978;
    }
L_08ABB978:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABB98C;
      }
      goto L_08ABB988;
    }
L_08ABB988:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    goto L_08ABB98C;
L_08ABB98C:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB9A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(535)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08ABB9C0;
      }
      goto L_08ABB9BC;
    }
L_08ABB9BC:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8024), static_cast<std::uint8_t>(0u));
    goto L_08ABB9C0;
L_08ABB9C0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7956));
    aot_gpr_31 = (0x08ABB9CCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 409u, 0x088626C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB9CCu) goto L_08ABB9CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB9CC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7960));
    aot_gpr_31 = (0x08ABB9D8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 415u, 0x088626F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABB9D8u) goto L_08ABB9D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABB9D8:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABB9F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08ABBA28u);
    aot_gpr_7 = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBA28u) goto L_08ABBA28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBA28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08ABBA38;
      }
      goto L_08ABBA34;
    }
L_08ABBA34:
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_08ABBA38;
L_08ABBA38:
    aot_gpr_31 = (0x08ABBA40u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 611u, 0x08863470u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBA40u) goto L_08ABBA40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBA40:
    aot_gpr_7 = (ctx.gpr[2] + static_cast<std::uint32_t>(84));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABBA54u);
    aot_gpr_6 = (0u | 96u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBA54u) goto L_08ABBA54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBA54:
    ctx.gpr[2] = (0u | 0u);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBA74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABBA9Cu);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBA9Cu) goto L_08ABBA9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBA9C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(516));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08ABBAD8;
      }
      goto L_08ABBAC8;
    }
L_08ABBAC8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8004)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_08ABBADC;
      }
      goto L_08ABBAD8;
    }
L_08ABBAD8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_gpr_4);
    goto L_08ABBADC;
L_08ABBADC:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBAF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABBB04u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 575u, 0x0886309Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBB04u) goto L_08ABBB04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBB04:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBB14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABBB38u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBB38u) goto L_08ABBB38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBB38:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08ABBB54u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBB54u) goto L_08ABBB54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBB54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBB84:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABBBA8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBBA8u) goto L_08ABBBA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBBA8:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08ABBBC4u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBBC4u) goto L_08ABBBC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBBC4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBBF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABBC18u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBC18u) goto L_08ABBC18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBC18:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABBC2Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBC2Cu) goto L_08ABBC2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBC2C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_4);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBC54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABBC78u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBC78u) goto L_08ABBC78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBC78:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ABBC8Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBC8Cu) goto L_08ABBC8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBC8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBCB4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABBCC8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBCC8u) goto L_08ABBCC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBCC8:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08ABBCE0;
      }
      goto L_08ABBCD8;
    }
L_08ABBCD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_4);
      if (branch_taken) {
          goto L_08ABBCE0;
      }
      goto L_08ABBCE0;
    }
L_08ABBCE0:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBCF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABBD08u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBD08u) goto L_08ABBD08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBD08:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08ABBD2C;
      }
      goto L_08ABBD24;
    }
L_08ABBD24:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08ABBD2C;
      }
      goto L_08ABBD2C;
    }
L_08ABBD2C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBD40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABBD68;
      }
      goto L_08ABBD60;
    }
L_08ABBD60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08ABBDB0;
      }
      goto L_08ABBD68;
    }
L_08ABBD68:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABBD94;
      }
      goto L_08ABBD88;
    }
L_08ABBD88:
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08ABBDB0;
      }
      goto L_08ABBD94;
    }
L_08ABBD94:
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABBDB0;
      }
      goto L_08ABBDAC;
    }
L_08ABBDAC:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABBDB0;
L_08ABBDB0:
    aot_gpr_31 = (0x08ABBDB8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 575u, 0x0886309Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBDB8u) goto L_08ABBDB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBDB8:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBDC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABBDEC;
      }
      goto L_08ABBDE4;
    }
L_08ABBDE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08ABBE34;
      }
      goto L_08ABBDEC;
    }
L_08ABBDEC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABBE18;
      }
      goto L_08ABBE0C;
    }
L_08ABBE0C:
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08ABBE34;
      }
      goto L_08ABBE18;
    }
L_08ABBE18:
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABBE34;
      }
      goto L_08ABBE30;
    }
L_08ABBE30:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08ABBE34;
L_08ABBE34:
    aot_gpr_31 = (0x08ABBE3Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 575u, 0x0886309Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBE3Cu) goto L_08ABBE3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBE3C:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBE4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABBE74u);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBE74u) goto L_08ABBE74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBE74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABBEA4;
      }
      goto L_08ABBE88;
    }
L_08ABBE88:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ABBEA0;
      }
      goto L_08ABBE94;
    }
L_08ABBE94:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08ABBEA4;
      }
      goto L_08ABBEA0;
    }
L_08ABBEA0:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(0u));
    goto L_08ABBEA4;
L_08ABBEA4:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBEBC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08ABBEDCu);
    aot_gpr_7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBEDCu) goto L_08ABBEDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBEDC:
    aot_gpr_31 = (0x08ABBEE4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 611u, 0x08863470u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBEE4u) goto L_08ABBEE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBEE4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(522), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBF00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(522)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ABBF24;
      }
      goto L_08ABBF14;
    }
L_08ABBF14:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2239u << 16u);
    aot_gpr_31 = (0x08ABBF24u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21784));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 157u, 0x08864DF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBF24u) goto L_08ABBF24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBF24:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBF34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08ABBF48u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBF48u) goto L_08ABBF48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBF48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_4 = (ctx.gpr[2] - aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7968), aot_gpr_4);
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBF64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABBF8Cu);
    aot_gpr_7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBF8Cu) goto L_08ABBF8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBF8C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(516));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_gpr_4);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ABBFCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08ABBFECu);
    aot_gpr_7 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ABBFECu) goto L_08ABBFEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ABBFEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 1u, 0x08ABC000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08ABBFF8;
L_08ABBFF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 2u, 0x08ABC004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 1u, 0x08ABC000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0173(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0173_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_173(Runtime &runtime) {
    runtime.register_generated_unit(173u, 0x08AB8000u, 16384u, &recomp_unit_0173, &recomp_unit_0173_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08AB8004u, &recomp_unit_0173, "recomp_unit_0173",
                                          kEntryMasks_recomp_unit_0173, 64u);
}
} // namespace psprecomp
