#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0218[64] = {
    0x8C40000482006041ull, 0x0041141100000582ull, 0x0004054100080002ull, 0x8000500000D82802ull,
    0x180000B0A0A00000ull, 0xB0A8000480000002ull, 0x4002080000916154ull, 0x0A00409400084A04ull,
    0x080092404008042Cull, 0x82460082002C2A00ull, 0x2008000595264848ull, 0x9148820492488290ull,
    0x8100200016080425ull, 0x0409401292122014ull, 0x0280000101452408ull, 0x8010400301200580ull,
    0x0030120041000C04ull, 0x2008200180900104ull, 0xAD12A24010400301ull, 0x9104444082080AD4ull,
    0x82204292110212CAull, 0x80A94A5301096548ull, 0x0A94A5301534515Aull, 0x41111021534515A8ull,
    0x0810A4844084B2A4ull, 0x0012492252448852ull, 0x240816000949122Cull, 0x1054880924910AD2ull,
    0x10010010AC852208ull, 0x824884602A002410ull, 0x20601049108A2080ull, 0xB202000412888080ull,
    0x4044204010815004ull, 0x0888048A04012000ull, 0x00224502810940A0ull, 0x0281080200891402ull,
    0x95028108022A0445ull, 0x8040423002004048ull, 0x80869022520C0424ull, 0x4406944020082084ull,
    0x44000840908410A4ull, 0x1002008020004024ull, 0xA24400C414C44289ull, 0x961512692910014Cull,
    0xD454A52984008550ull, 0x4C2B102810A9A28Aull, 0x82254D1456A2A529ull, 0x5A424085691205A0ull,
    0x8001884104640021ull, 0x0090910841000000ull, 0x000C028100004229ull, 0x0000000000000000ull,
    0x0000100200000001ull, 0x8043000000000000ull, 0x2004000000080440ull, 0x0000000000000000ull,
    0x0402004020810086ull, 0xDAAB2C21852C4008ull, 0x0421488C40001000ull, 0x048800A446200020ull,
    0x800000200001001Aull, 0x5100000000000000ull, 0x8100802020082280ull, 0x0000008080000000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0218[64] = {
    1u, 12u, 22u, 29u, 39u, 48u, 57u, 69u, 80u, 91u, 104u, 119u, 136u, 147u, 161u, 171u,
    181u, 190u, 199u, 215u, 231u, 248u, 269u, 293u, 313u, 330u, 347u, 363u, 382u, 395u, 409u, 422u,
    434u, 445u, 455u, 468u, 479u, 495u, 505u, 521u, 534u, 546u, 553u, 571u, 592u, 613u, 634u, 659u,
    679u, 691u, 699u, 709u, 709u, 712u, 716u, 721u, 721u, 730u, 753u, 763u, 774u, 780u, 783u, 792u,
};
void recomp_unit_0218_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,29,5,6,7,16 fprs=12,13,14 gpr_occ=4995 fpr_occ=74 gpr_total=7256 fpr_total=74
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[29] = aot_gpr_29; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[7] = aot_gpr_7; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_7 = ctx.gpr[7]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B6C000u;
        entry_id = 0u;
        if (entry_delta < 16288u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0218[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0218[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B6C000;
    case 2u: goto L_08B6C018;
    case 3u: goto L_08B6C034;
    case 4u: goto L_08B6C038;
    case 5u: goto L_08B6C064;
    case 6u: goto L_08B6C07C;
    case 7u: goto L_08B6C088;
    case 8u: goto L_08B6C0D8;
    case 9u: goto L_08B6C0E8;
    case 10u: goto L_08B6C0EC;
    case 11u: goto L_08B6C0FC;
    case 12u: goto L_08B6C104;
    case 13u: goto L_08B6C11C;
    case 14u: goto L_08B6C120;
    case 15u: goto L_08B6C128;
    case 16u: goto L_08B6C180;
    case 17u: goto L_08B6C190;
    case 18u: goto L_08B6C1A8;
    case 19u: goto L_08B6C1B0;
    case 20u: goto L_08B6C1C0;
    case 21u: goto L_08B6C1D8;
    case 22u: goto L_08B6C204;
    case 23u: goto L_08B6C24C;
    case 24u: goto L_08B6C280;
    case 25u: goto L_08B6C298;
    case 26u: goto L_08B6C2A0;
    case 27u: goto L_08B6C2A8;
    case 28u: goto L_08B6C2C8;
    case 29u: goto L_08B6C304;
    case 30u: goto L_08B6C32C;
    case 31u: goto L_08B6C334;
    case 32u: goto L_08B6C34C;
    case 33u: goto L_08B6C350;
    case 34u: goto L_08B6C358;
    case 35u: goto L_08B6C35C;
    case 36u: goto L_08B6C3B0;
    case 37u: goto L_08B6C3B8;
    case 38u: goto L_08B6C3FC;
    case 39u: goto L_08B6C454;
    case 40u: goto L_08B6C45C;
    case 41u: goto L_08B6C474;
    case 42u: goto L_08B6C47C;
    case 43u: goto L_08B6C490;
    case 44u: goto L_08B6C494;
    case 45u: goto L_08B6C49C;
    case 46u: goto L_08B6C4EC;
    case 47u: goto L_08B6C4F0;
    case 48u: goto L_08B6C504;
    case 49u: goto L_08B6C57C;
    case 50u: goto L_08B6C588;
    case 51u: goto L_08B6C5CC;
    case 52u: goto L_08B6C5D4;
    case 53u: goto L_08B6C5DC;
    case 54u: goto L_08B6C5F0;
    case 55u: goto L_08B6C5F4;
    case 56u: goto L_08B6C5FC;
    case 57u: goto L_08B6C608;
    case 58u: goto L_08B6C610;
    case 59u: goto L_08B6C618;
    case 60u: goto L_08B6C620;
    case 61u: goto L_08B6C634;
    case 62u: goto L_08B6C638;
    case 63u: goto L_08B6C640;
    case 64u: goto L_08B6C650;
    case 65u: goto L_08B6C65C;
    case 66u: goto L_08B6C6AC;
    case 67u: goto L_08B6C6C4;
    case 68u: goto L_08B6C6F8;
    case 69u: goto L_08B6C708;
    case 70u: goto L_08B6C724;
    case 71u: goto L_08B6C72C;
    case 72u: goto L_08B6C738;
    case 73u: goto L_08B6C74C;
    case 74u: goto L_08B6C788;
    case 75u: goto L_08B6C790;
    case 76u: goto L_08B6C79C;
    case 77u: goto L_08B6C7B8;
    case 78u: goto L_08B6C7E4;
    case 79u: goto L_08B6C7EC;
    case 80u: goto L_08B6C808;
    case 81u: goto L_08B6C80C;
    case 82u: goto L_08B6C814;
    case 83u: goto L_08B6C828;
    case 84u: goto L_08B6C84C;
    case 85u: goto L_08B6C878;
    case 86u: goto L_08B6C898;
    case 87u: goto L_08B6C8A4;
    case 88u: goto L_08B6C8B0;
    case 89u: goto L_08B6C8BC;
    case 90u: goto L_08B6C8EC;
    case 91u: goto L_08B6C924;
    case 92u: goto L_08B6C92C;
    case 93u: goto L_08B6C934;
    case 94u: goto L_08B6C948;
    case 95u: goto L_08B6C94C;
    case 96u: goto L_08B6C954;
    case 97u: goto L_08B6C984;
    case 98u: goto L_08B6C99C;
    case 99u: goto L_08B6C9C4;
    case 100u: goto L_08B6C9C8;
    case 101u: goto L_08B6C9D8;
    case 102u: goto L_08B6C9E4;
    case 103u: goto L_08B6C9FC;
    case 104u: goto L_08B6CA0C;
    case 105u: goto L_08B6CA18;
    case 106u: goto L_08B6CA2C;
    case 107u: goto L_08B6CA38;
    case 108u: goto L_08B6CA44;
    case 109u: goto L_08B6CA48;
    case 110u: goto L_08B6CA54;
    case 111u: goto L_08B6CA60;
    case 112u: goto L_08B6CA68;
    case 113u: goto L_08B6CA70;
    case 114u: goto L_08B6CA7C;
    case 115u: goto L_08B6CA80;
    case 116u: goto L_08B6CA88;
    case 117u: goto L_08B6CACC;
    case 118u: goto L_08B6CAF4;
    case 119u: goto L_08B6CB10;
    case 120u: goto L_08B6CB1C;
    case 121u: goto L_08B6CB24;
    case 122u: goto L_08B6CB3C;
    case 123u: goto L_08B6CB4C;
    case 124u: goto L_08B6CB58;
    case 125u: goto L_08B6CB64;
    case 126u: goto L_08B6CB70;
    case 127u: goto L_08B6CB7C;
    case 128u: goto L_08B6CB88;
    case 129u: goto L_08B6CBA4;
    case 130u: goto L_08B6CBBC;
    case 131u: goto L_08B6CBCC;
    case 132u: goto L_08B6CBD8;
    case 133u: goto L_08B6CBE0;
    case 134u: goto L_08B6CBF0;
    case 135u: goto L_08B6CBFC;
    case 136u: goto L_08B6CC00;
    case 137u: goto L_08B6CC08;
    case 138u: goto L_08B6CC14;
    case 139u: goto L_08B6CC28;
    case 140u: goto L_08B6CC4C;
    case 141u: goto L_08B6CC64;
    case 142u: goto L_08B6CC68;
    case 143u: goto L_08B6CC70;
    case 144u: goto L_08B6CCB4;
    case 145u: goto L_08B6CCE0;
    case 146u: goto L_08B6CCFC;
    case 147u: goto L_08B6CD08;
    case 148u: goto L_08B6CD10;
    case 149u: goto L_08B6CD34;
    case 150u: goto L_08B6CD44;
    case 151u: goto L_08B6CD50;
    case 152u: goto L_08B6CD64;
    case 153u: goto L_08B6CD70;
    case 154u: goto L_08B6CD7C;
    case 155u: goto L_08B6CD84;
    case 156u: goto L_08B6CD90;
    case 157u: goto L_08B6CDB8;
    case 158u: goto L_08B6CDC0;
    case 159u: goto L_08B6CDCC;
    case 160u: goto L_08B6CDE8;
    case 161u: goto L_08B6CE0C;
    case 162u: goto L_08B6CE28;
    case 163u: goto L_08B6CE34;
    case 164u: goto L_08B6CE40;
    case 165u: goto L_08B6CE48;
    case 166u: goto L_08B6CE58;
    case 167u: goto L_08B6CE60;
    case 168u: goto L_08B6CE80;
    case 169u: goto L_08B6CEDC;
    case 170u: goto L_08B6CEE4;
    case 171u: goto L_08B6CF1C;
    case 172u: goto L_08B6CF20;
    case 173u: goto L_08B6CF28;
    case 174u: goto L_08B6CF54;
    case 175u: goto L_08B6CF60;
    case 176u: goto L_08B6CF80;
    case 177u: goto L_08B6CF84;
    case 178u: goto L_08B6CFB8;
    case 179u: goto L_08B6CFD0;
    case 180u: goto L_08B6CFFC;
    case 181u: goto L_08B6D008;
    case 182u: goto L_08B6D028;
    case 183u: goto L_08B6D02C;
    case 184u: goto L_08B6D060;
    case 185u: goto L_08B6D078;
    case 186u: goto L_08B6D0A4;
    case 187u: goto L_08B6D0B0;
    case 188u: goto L_08B6D0D0;
    case 189u: goto L_08B6D0D4;
    case 190u: goto L_08B6D108;
    case 191u: goto L_08B6D120;
    case 192u: goto L_08B6D150;
    case 193u: goto L_08B6D15C;
    case 194u: goto L_08B6D17C;
    case 195u: goto L_08B6D180;
    case 196u: goto L_08B6D1B4;
    case 197u: goto L_08B6D1CC;
    case 198u: goto L_08B6D1F4;
    case 199u: goto L_08B6D200;
    case 200u: goto L_08B6D220;
    case 201u: goto L_08B6D224;
    case 202u: goto L_08B6D258;
    case 203u: goto L_08B6D270;
    case 204u: goto L_08B6D298;
    case 205u: goto L_08B6D2A4;
    case 206u: goto L_08B6D2B4;
    case 207u: goto L_08B6D2BC;
    case 208u: goto L_08B6D2C4;
    case 209u: goto L_08B6D2D0;
    case 210u: goto L_08B6D2E0;
    case 211u: goto L_08B6D2E8;
    case 212u: goto L_08B6D2EC;
    case 213u: goto L_08B6D2F4;
    case 214u: goto L_08B6D2FC;
    case 215u: goto L_08B6D308;
    case 216u: goto L_08B6D310;
    case 217u: goto L_08B6D318;
    case 218u: goto L_08B6D31C;
    case 219u: goto L_08B6D324;
    case 220u: goto L_08B6D32C;
    case 221u: goto L_08B6D34C;
    case 222u: goto L_08B6D364;
    case 223u: goto L_08B6D37C;
    case 224u: goto L_08B6D398;
    case 225u: goto L_08B6D3A8;
    case 226u: goto L_08B6D3B8;
    case 227u: goto L_08B6D3C8;
    case 228u: goto L_08B6D3E0;
    case 229u: goto L_08B6D3F0;
    case 230u: goto L_08B6D3FC;
    case 231u: goto L_08B6D404;
    case 232u: goto L_08B6D40C;
    case 233u: goto L_08B6D418;
    case 234u: goto L_08B6D41C;
    case 235u: goto L_08B6D424;
    case 236u: goto L_08B6D430;
    case 237u: goto L_08B6D444;
    case 238u: goto L_08B6D460;
    case 239u: goto L_08B6D470;
    case 240u: goto L_08B6D484;
    case 241u: goto L_08B6D490;
    case 242u: goto L_08B6D49C;
    case 243u: goto L_08B6D4A4;
    case 244u: goto L_08B6D4B8;
    case 245u: goto L_08B6D4D4;
    case 246u: goto L_08B6D4E4;
    case 247u: goto L_08B6D4FC;
    case 248u: goto L_08B6D50C;
    case 249u: goto L_08B6D518;
    case 250u: goto L_08B6D520;
    case 251u: goto L_08B6D528;
    case 252u: goto L_08B6D534;
    case 253u: goto L_08B6D538;
    case 254u: goto L_08B6D540;
    case 255u: goto L_08B6D54C;
    case 256u: goto L_08B6D560;
    case 257u: goto L_08B6D580;
    case 258u: goto L_08B6D584;
    case 259u: goto L_08B6D590;
    case 260u: goto L_08B6D598;
    case 261u: goto L_08B6D5A4;
    case 262u: goto L_08B6D5AC;
    case 263u: goto L_08B6D5B8;
    case 264u: goto L_08B6D5C0;
    case 265u: goto L_08B6D5CC;
    case 266u: goto L_08B6D5D4;
    case 267u: goto L_08B6D5DC;
    case 268u: goto L_08B6D5FC;
    case 269u: goto L_08B6D604;
    case 270u: goto L_08B6D60C;
    case 271u: goto L_08B6D610;
    case 272u: goto L_08B6D618;
    case 273u: goto L_08B6D620;
    case 274u: goto L_08B6D630;
    case 275u: goto L_08B6D638;
    case 276u: goto L_08B6D648;
    case 277u: goto L_08B6D650;
    case 278u: goto L_08B6D654;
    case 279u: goto L_08B6D660;
    case 280u: goto L_08B6D668;
    case 281u: goto L_08B6D670;
    case 282u: goto L_08B6D690;
    case 283u: goto L_08B6D694;
    case 284u: goto L_08B6D6A0;
    case 285u: goto L_08B6D6A8;
    case 286u: goto L_08B6D6B4;
    case 287u: goto L_08B6D6BC;
    case 288u: goto L_08B6D6C8;
    case 289u: goto L_08B6D6D0;
    case 290u: goto L_08B6D6DC;
    case 291u: goto L_08B6D6E4;
    case 292u: goto L_08B6D6EC;
    case 293u: goto L_08B6D70C;
    case 294u: goto L_08B6D714;
    case 295u: goto L_08B6D71C;
    case 296u: goto L_08B6D720;
    case 297u: goto L_08B6D728;
    case 298u: goto L_08B6D730;
    case 299u: goto L_08B6D740;
    case 300u: goto L_08B6D748;
    case 301u: goto L_08B6D758;
    case 302u: goto L_08B6D760;
    case 303u: goto L_08B6D764;
    case 304u: goto L_08B6D770;
    case 305u: goto L_08B6D778;
    case 306u: goto L_08B6D780;
    case 307u: goto L_08B6D794;
    case 308u: goto L_08B6D7B0;
    case 309u: goto L_08B6D7C0;
    case 310u: goto L_08B6D7D0;
    case 311u: goto L_08B6D7E0;
    case 312u: goto L_08B6D7F8;
    case 313u: goto L_08B6D808;
    case 314u: goto L_08B6D814;
    case 315u: goto L_08B6D81C;
    case 316u: goto L_08B6D824;
    case 317u: goto L_08B6D830;
    case 318u: goto L_08B6D834;
    case 319u: goto L_08B6D83C;
    case 320u: goto L_08B6D848;
    case 321u: goto L_08B6D85C;
    case 322u: goto L_08B6D878;
    case 323u: goto L_08B6D888;
    case 324u: goto L_08B6D89C;
    case 325u: goto L_08B6D8A8;
    case 326u: goto L_08B6D8B4;
    case 327u: goto L_08B6D8BC;
    case 328u: goto L_08B6D8D0;
    case 329u: goto L_08B6D8EC;
    case 330u: goto L_08B6D904;
    case 331u: goto L_08B6D910;
    case 332u: goto L_08B6D918;
    case 333u: goto L_08B6D92C;
    case 334u: goto L_08B6D93C;
    case 335u: goto L_08B6D948;
    case 336u: goto L_08B6D958;
    case 337u: goto L_08B6D964;
    case 338u: goto L_08B6D970;
    case 339u: goto L_08B6D978;
    case 340u: goto L_08B6D984;
    case 341u: goto L_08B6D994;
    case 342u: goto L_08B6D9A0;
    case 343u: goto L_08B6D9AC;
    case 344u: goto L_08B6D9B8;
    case 345u: goto L_08B6D9C4;
    case 346u: goto L_08B6D9D0;
    case 347u: goto L_08B6DA08;
    case 348u: goto L_08B6DA0C;
    case 349u: goto L_08B6DA14;
    case 350u: goto L_08B6DA24;
    case 351u: goto L_08B6DA30;
    case 352u: goto L_08B6DA40;
    case 353u: goto L_08B6DA4C;
    case 354u: goto L_08B6DA58;
    case 355u: goto L_08B6DA60;
    case 356u: goto L_08B6DA6C;
    case 357u: goto L_08B6DAA4;
    case 358u: goto L_08B6DAA8;
    case 359u: goto L_08B6DAB0;
    case 360u: goto L_08B6DACC;
    case 361u: goto L_08B6DAE8;
    case 362u: goto L_08B6DAF4;
    case 363u: goto L_08B6DB04;
    case 364u: goto L_08B6DB10;
    case 365u: goto L_08B6DB18;
    case 366u: goto L_08B6DB1C;
    case 367u: goto L_08B6DB24;
    case 368u: goto L_08B6DB2C;
    case 369u: goto L_08B6DB40;
    case 370u: goto L_08B6DB50;
    case 371u: goto L_08B6DB5C;
    case 372u: goto L_08B6DB68;
    case 373u: goto L_08B6DB74;
    case 374u: goto L_08B6DB80;
    case 375u: goto L_08B6DB8C;
    case 376u: goto L_08B6DBAC;
    case 377u: goto L_08B6DBBC;
    case 378u: goto L_08B6DBC8;
    case 379u: goto L_08B6DBD0;
    case 380u: goto L_08B6DBD8;
    case 381u: goto L_08B6DBF0;
    case 382u: goto L_08B6DC0C;
    case 383u: goto L_08B6DC24;
    case 384u: goto L_08B6DC34;
    case 385u: goto L_08B6DC40;
    case 386u: goto L_08B6DC48;
    case 387u: goto L_08B6DC5C;
    case 388u: goto L_08B6DC68;
    case 389u: goto L_08B6DC6C;
    case 390u: goto L_08B6DC74;
    case 391u: goto L_08B6DC7C;
    case 392u: goto L_08B6DC90;
    case 393u: goto L_08B6DCC0;
    case 394u: goto L_08B6DCF0;
    case 395u: goto L_08B6DD10;
    case 396u: goto L_08B6DD28;
    case 397u: goto L_08B6DD34;
    case 398u: goto L_08B6DD64;
    case 399u: goto L_08B6DD6C;
    case 400u: goto L_08B6DD74;
    case 401u: goto L_08B6DD94;
    case 402u: goto L_08B6DD98;
    case 403u: goto L_08B6DDA8;
    case 404u: goto L_08B6DDBC;
    case 405u: goto L_08B6DDCC;
    case 406u: goto L_08B6DDD8;
    case 407u: goto L_08B6DDE4;
    case 408u: goto L_08B6DDFC;
    case 409u: goto L_08B6DE1C;
    case 410u: goto L_08B6DE34;
    case 411u: goto L_08B6DE44;
    case 412u: goto L_08B6DE4C;
    case 413u: goto L_08B6DE5C;
    case 414u: goto L_08B6DE70;
    case 415u: goto L_08B6DE80;
    case 416u: goto L_08B6DE8C;
    case 417u: goto L_08B6DE98;
    case 418u: goto L_08B6DEB0;
    case 419u: goto L_08B6DED4;
    case 420u: goto L_08B6DED8;
    case 421u: goto L_08B6DEF4;
    case 422u: goto L_08B6DF1C;
    case 423u: goto L_08B6DF3C;
    case 424u: goto L_08B6DF4C;
    case 425u: goto L_08B6DF5C;
    case 426u: goto L_08B6DF64;
    case 427u: goto L_08B6DF70;
    case 428u: goto L_08B6DF88;
    case 429u: goto L_08B6DFC4;
    case 430u: goto L_08B6DFE4;
    case 431u: goto L_08B6DFF0;
    case 432u: goto L_08B6DFF4;
    case 433u: goto L_08B6DFFC;
    case 434u: goto L_08B6E008;
    case 435u: goto L_08B6E030;
    case 436u: goto L_08B6E038;
    case 437u: goto L_08B6E040;
    case 438u: goto L_08B6E05C;
    case 439u: goto L_08B6E070;
    case 440u: goto L_08B6E098;
    case 441u: goto L_08B6E0B4;
    case 442u: goto L_08B6E0C8;
    case 443u: goto L_08B6E0D8;
    case 444u: goto L_08B6E0F8;
    case 445u: goto L_08B6E134;
    case 446u: goto L_08B6E140;
    case 447u: goto L_08B6E168;
    case 448u: goto L_08B6E184;
    case 449u: goto L_08B6E18C;
    case 450u: goto L_08B6E19C;
    case 451u: goto L_08B6E1A8;
    case 452u: goto L_08B6E1CC;
    case 453u: goto L_08B6E1DC;
    case 454u: goto L_08B6E1EC;
    case 455u: goto L_08B6E214;
    case 456u: goto L_08B6E21C;
    case 457u: goto L_08B6E238;
    case 458u: goto L_08B6E240;
    case 459u: goto L_08B6E24C;
    case 460u: goto L_08B6E260;
    case 461u: goto L_08B6E27C;
    case 462u: goto L_08B6E284;
    case 463u: goto L_08B6E2A0;
    case 464u: goto L_08B6E2A8;
    case 465u: goto L_08B6E2B8;
    case 466u: goto L_08B6E2C4;
    case 467u: goto L_08B6E2D4;
    case 468u: goto L_08B6E304;
    case 469u: goto L_08B6E328;
    case 470u: goto L_08B6E330;
    case 471u: goto L_08B6E340;
    case 472u: goto L_08B6E34C;
    case 473u: goto L_08B6E35C;
    case 474u: goto L_08B6E384;
    case 475u: goto L_08B6E3AC;
    case 476u: goto L_08B6E3C0;
    case 477u: goto L_08B6E3DC;
    case 478u: goto L_08B6E3E4;
    case 479u: goto L_08B6E400;
    case 480u: goto L_08B6E408;
    case 481u: goto L_08B6E418;
    case 482u: goto L_08B6E428;
    case 483u: goto L_08B6E444;
    case 484u: goto L_08B6E44C;
    case 485u: goto L_08B6E454;
    case 486u: goto L_08B6E464;
    case 487u: goto L_08B6E48C;
    case 488u: goto L_08B6E4A0;
    case 489u: goto L_08B6E4BC;
    case 490u: goto L_08B6E4C4;
    case 491u: goto L_08B6E4E0;
    case 492u: goto L_08B6E4E8;
    case 493u: goto L_08B6E4F0;
    case 494u: goto L_08B6E4FC;
    case 495u: goto L_08B6E50C;
    case 496u: goto L_08B6E518;
    case 497u: goto L_08B6E538;
    case 498u: goto L_08B6E564;
    case 499u: goto L_08B6E590;
    case 500u: goto L_08B6E594;
    case 501u: goto L_08B6E5A4;
    case 502u: goto L_08B6E5B8;
    case 503u: goto L_08B6E5D8;
    case 504u: goto L_08B6E5FC;
    case 505u: goto L_08B6E608;
    case 506u: goto L_08B6E614;
    case 507u: goto L_08B6E628;
    case 508u: goto L_08B6E648;
    case 509u: goto L_08B6E64C;
    case 510u: goto L_08B6E664;
    case 511u: goto L_08B6E670;
    case 512u: goto L_08B6E678;
    case 513u: goto L_08B6E684;
    case 514u: goto L_08B6E694;
    case 515u: goto L_08B6E6B0;
    case 516u: goto L_08B6E6BC;
    case 517u: goto L_08B6E6C4;
    case 518u: goto L_08B6E6C8;
    case 519u: goto L_08B6E6DC;
    case 520u: goto L_08B6E6FC;
    case 521u: goto L_08B6E708;
    case 522u: goto L_08B6E71C;
    case 523u: goto L_08B6E734;
    case 524u: goto L_08B6E74C;
    case 525u: goto L_08B6E774;
    case 526u: goto L_08B6E798;
    case 527u: goto L_08B6E7A8;
    case 528u: goto L_08B6E7B0;
    case 529u: goto L_08B6E7BC;
    case 530u: goto L_08B6E7C4;
    case 531u: goto L_08B6E7C8;
    case 532u: goto L_08B6E7E8;
    case 533u: goto L_08B6E7F8;
    case 534u: goto L_08B6E808;
    case 535u: goto L_08B6E814;
    case 536u: goto L_08B6E81C;
    case 537u: goto L_08B6E830;
    case 538u: goto L_08B6E848;
    case 539u: goto L_08B6E85C;
    case 540u: goto L_08B6E870;
    case 541u: goto L_08B6E87C;
    case 542u: goto L_08B6E898;
    case 543u: goto L_08B6E8AC;
    case 544u: goto L_08B6E8E8;
    case 545u: goto L_08B6E8F8;
    case 546u: goto L_08B6E908;
    case 547u: goto L_08B6E914;
    case 548u: goto L_08B6E938;
    case 549u: goto L_08B6E974;
    case 550u: goto L_08B6E99C;
    case 551u: goto L_08B6E9C4;
    case 552u: goto L_08B6E9F0;
    case 553u: goto L_08B6EA00;
    case 554u: goto L_08B6EA0C;
    case 555u: goto L_08B6EA1C;
    case 556u: goto L_08B6EA24;
    case 557u: goto L_08B6EA38;
    case 558u: goto L_08B6EA48;
    case 559u: goto L_08B6EA58;
    case 560u: goto L_08B6EA5C;
    case 561u: goto L_08B6EA68;
    case 562u: goto L_08B6EA70;
    case 563u: goto L_08B6EA88;
    case 564u: goto L_08B6EA98;
    case 565u: goto L_08B6EA9C;
    case 566u: goto L_08B6EAC8;
    case 567u: goto L_08B6EAD8;
    case 568u: goto L_08B6EAE4;
    case 569u: goto L_08B6EAF4;
    case 570u: goto L_08B6EAFC;
    case 571u: goto L_08B6EB08;
    case 572u: goto L_08B6EB0C;
    case 573u: goto L_08B6EB18;
    case 574u: goto L_08B6EB20;
    case 575u: goto L_08B6EB50;
    case 576u: goto L_08B6EB60;
    case 577u: goto L_08B6EB6C;
    case 578u: goto L_08B6EB74;
    case 579u: goto L_08B6EB80;
    case 580u: goto L_08B6EB8C;
    case 581u: goto L_08B6EB94;
    case 582u: goto L_08B6EB98;
    case 583u: goto L_08B6EBA4;
    case 584u: goto L_08B6EBB0;
    case 585u: goto L_08B6EBC0;
    case 586u: goto L_08B6EBC8;
    case 587u: goto L_08B6EBD0;
    case 588u: goto L_08B6EBE4;
    case 589u: goto L_08B6EBE8;
    case 590u: goto L_08B6EBF0;
    case 591u: goto L_08B6EBFC;
    case 592u: goto L_08B6EC10;
    case 593u: goto L_08B6EC18;
    case 594u: goto L_08B6EC20;
    case 595u: goto L_08B6EC28;
    case 596u: goto L_08B6EC3C;
    case 597u: goto L_08B6EC68;
    case 598u: goto L_08B6EC7C;
    case 599u: goto L_08B6EC80;
    case 600u: goto L_08B6EC8C;
    case 601u: goto L_08B6EC94;
    case 602u: goto L_08B6ECA0;
    case 603u: goto L_08B6ECA8;
    case 604u: goto L_08B6ECB4;
    case 605u: goto L_08B6ECBC;
    case 606u: goto L_08B6ECC8;
    case 607u: goto L_08B6ECD0;
    case 608u: goto L_08B6ECD8;
    case 609u: goto L_08B6ECE8;
    case 610u: goto L_08B6ECF0;
    case 611u: goto L_08B6ECF8;
    case 612u: goto L_08B6ECFC;
    case 613u: goto L_08B6ED04;
    case 614u: goto L_08B6ED0C;
    case 615u: goto L_08B6ED1C;
    case 616u: goto L_08B6ED24;
    case 617u: goto L_08B6ED34;
    case 618u: goto L_08B6ED3C;
    case 619u: goto L_08B6ED40;
    case 620u: goto L_08B6ED4C;
    case 621u: goto L_08B6ED54;
    case 622u: goto L_08B6ED5C;
    case 623u: goto L_08B6ED70;
    case 624u: goto L_08B6ED8C;
    case 625u: goto L_08B6ED94;
    case 626u: goto L_08B6EDB0;
    case 627u: goto L_08B6EDC0;
    case 628u: goto L_08B6EDC4;
    case 629u: goto L_08B6EDCC;
    case 630u: goto L_08B6EDD4;
    case 631u: goto L_08B6EDE8;
    case 632u: goto L_08B6EDEC;
    case 633u: goto L_08B6EDF8;
    case 634u: goto L_08B6EE00;
    case 635u: goto L_08B6EE0C;
    case 636u: goto L_08B6EE14;
    case 637u: goto L_08B6EE20;
    case 638u: goto L_08B6EE28;
    case 639u: goto L_08B6EE34;
    case 640u: goto L_08B6EE3C;
    case 641u: goto L_08B6EE44;
    case 642u: goto L_08B6EE54;
    case 643u: goto L_08B6EE5C;
    case 644u: goto L_08B6EE64;
    case 645u: goto L_08B6EE68;
    case 646u: goto L_08B6EE70;
    case 647u: goto L_08B6EE78;
    case 648u: goto L_08B6EE88;
    case 649u: goto L_08B6EE90;
    case 650u: goto L_08B6EEA0;
    case 651u: goto L_08B6EEA8;
    case 652u: goto L_08B6EEAC;
    case 653u: goto L_08B6EEB8;
    case 654u: goto L_08B6EEC0;
    case 655u: goto L_08B6EEC8;
    case 656u: goto L_08B6EED4;
    case 657u: goto L_08B6EEE4;
    case 658u: goto L_08B6EEFC;
    case 659u: goto L_08B6EF14;
    case 660u: goto L_08B6EF1C;
    case 661u: goto L_08B6EF20;
    case 662u: goto L_08B6EF28;
    case 663u: goto L_08B6EF44;
    case 664u: goto L_08B6EF50;
    case 665u: goto L_08B6EF60;
    case 666u: goto L_08B6EF6C;
    case 667u: goto L_08B6EF74;
    case 668u: goto L_08B6EF78;
    case 669u: goto L_08B6EF80;
    case 670u: goto L_08B6EF88;
    case 671u: goto L_08B6EF9C;
    case 672u: goto L_08B6EFB8;
    case 673u: goto L_08B6EFC4;
    case 674u: goto L_08B6EFD8;
    case 675u: goto L_08B6EFE4;
    case 676u: goto L_08B6EFEC;
    case 677u: goto L_08B6EFF0;
    case 678u: goto L_08B6EFF8;
    case 679u: goto L_08B6F000;
    case 680u: goto L_08B6F014;
    case 681u: goto L_08B6F048;
    case 682u: goto L_08B6F054;
    case 683u: goto L_08B6F058;
    case 684u: goto L_08B6F068;
    case 685u: goto L_08B6F080;
    case 686u: goto L_08B6F098;
    case 687u: goto L_08B6F0AC;
    case 688u: goto L_08B6F0BC;
    case 689u: goto L_08B6F0C0;
    case 690u: goto L_08B6F0FC;
    case 691u: goto L_08B6F160;
    case 692u: goto L_08B6F178;
    case 693u: goto L_08B6F18C;
    case 694u: goto L_08B6F1A0;
    case 695u: goto L_08B6F1B0;
    case 696u: goto L_08B6F1BC;
    case 697u: goto L_08B6F1D0;
    case 698u: goto L_08B6F1DC;
    case 699u: goto L_08B6F200;
    case 700u: goto L_08B6F20C;
    case 701u: goto L_08B6F214;
    case 702u: goto L_08B6F224;
    case 703u: goto L_08B6F238;
    case 704u: goto L_08B6F280;
    case 705u: goto L_08B6F29C;
    case 706u: goto L_08B6F2A4;
    case 707u: goto L_08B6F2C8;
    case 708u: goto L_08B6F2CC;
    case 709u: goto L_08B6F400;
    case 710u: goto L_08B6F484;
    case 711u: goto L_08B6F4B0;
    case 712u: goto L_08B6F5C0;
    case 713u: goto L_08B6F5C4;
    case 714u: goto L_08B6F5D8;
    case 715u: goto L_08B6F5FC;
    case 716u: goto L_08B6F618;
    case 717u: goto L_08B6F628;
    case 718u: goto L_08B6F64C;
    case 719u: goto L_08B6F6C8;
    case 720u: goto L_08B6F6F4;
    case 721u: goto L_08B6F804;
    case 722u: goto L_08B6F808;
    case 723u: goto L_08B6F81C;
    case 724u: goto L_08B6F840;
    case 725u: goto L_08B6F85C;
    case 726u: goto L_08B6F874;
    case 727u: goto L_08B6F898;
    case 728u: goto L_08B6F8C4;
    case 729u: goto L_08B6F8E8;
    case 730u: goto L_08B6F90C;
    case 731u: goto L_08B6F938;
    case 732u: goto L_08B6F948;
    case 733u: goto L_08B6F94C;
    case 734u: goto L_08B6F954;
    case 735u: goto L_08B6F960;
    case 736u: goto L_08B6F968;
    case 737u: goto L_08B6F97C;
    case 738u: goto L_08B6F980;
    case 739u: goto L_08B6F994;
    case 740u: goto L_08B6F9A8;
    case 741u: goto L_08B6F9AC;
    case 742u: goto L_08B6F9B4;
    case 743u: goto L_08B6F9C0;
    case 744u: goto L_08B6F9C4;
    case 745u: goto L_08B6F9CC;
    case 746u: goto L_08B6F9D4;
    case 747u: goto L_08B6F9DC;
    case 748u: goto L_08B6F9E4;
    case 749u: goto L_08B6F9EC;
    case 750u: goto L_08B6F9F0;
    case 751u: goto L_08B6F9F8;
    case 752u: goto L_08B6F9FC;
    case 753u: goto L_08B6FA30;
    case 754u: goto L_08B6FA78;
    case 755u: goto L_08B6FA88;
    case 756u: goto L_08B6FA8C;
    case 757u: goto L_08B6FA9C;
    case 758u: goto L_08B6FAAC;
    case 759u: goto L_08B6FAB8;
    case 760u: goto L_08B6FAC0;
    case 761u: goto L_08B6FAD4;
    case 762u: goto L_08B6FAE8;
    case 763u: goto L_08B6FB14;
    case 764u: goto L_08B6FB54;
    case 765u: goto L_08B6FB64;
    case 766u: goto L_08B6FB68;
    case 767u: goto L_08B6FB78;
    case 768u: goto L_08B6FB88;
    case 769u: goto L_08B6FB94;
    case 770u: goto L_08B6FB9C;
    case 771u: goto L_08B6FBCC;
    case 772u: goto L_08B6FBDC;
    case 773u: goto L_08B6FBE8;
    case 774u: goto L_08B6FC04;
    case 775u: goto L_08B6FC0C;
    case 776u: goto L_08B6FC10;
    case 777u: goto L_08B6FC40;
    case 778u: goto L_08B6FC94;
    case 779u: goto L_08B6FCFC;
    case 780u: goto L_08B6FDE0;
    case 781u: goto L_08B6FDF0;
    case 782u: goto L_08B6FDF8;
    case 783u: goto L_08B6FE1C;
    case 784u: goto L_08B6FE24;
    case 785u: goto L_08B6FE34;
    case 786u: goto L_08B6FE4C;
    case 787u: goto L_08B6FE74;
    case 788u: goto L_08B6FE94;
    case 789u: goto L_08B6FEBC;
    case 790u: goto L_08B6FEE0;
    case 791u: goto L_08B6FEFC;
    case 792u: goto L_08B6FF7C;
    case 793u: goto L_08B6FF9C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08B6C000:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B6C018u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 763u, 0x08B6BDFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6C018u) goto L_08B6C018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6C018:
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    aot_gpr_4 = (ctx.gpr[23] - aot_gpr_16);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 765u, 0x08B6BE58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B6C034;
    }
L_08B6C034:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08B6C038;
L_08B6C038:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[31] = aot_run_words[8];
    }
    jump_target = ctx.gpr[31];
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
L_08B6C064:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_7);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    ctx.gpr[31] = (0x08B6C07Cu);
    aot_gpr_7 = (0u | 0u);
    goto L_08B6C088;
L_08B6C07C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
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
L_08B6C088:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[9]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(80))))));
    ctx.gpr[22] = (0u | 12u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(80))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08B6C0D8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B6C204;
L_08B6C0D8:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[19] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (ctx.gpr[17] - aot_gpr_16);
      if (branch_taken) {
          goto L_08B6C190;
      }
      goto L_08B6C0E8;
    }
L_08B6C0E8:
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    goto L_08B6C0EC;
L_08B6C0EC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (0u | 0u);
        goto L_08B6C104;
    }
    goto L_08B6C0FC;
L_08B6C0FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6C120;
      }
      goto L_08B6C104;
    }
L_08B6C104:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (0u | 1u);
        goto L_08B6C11C;
    }
    goto L_08B6C11C;
L_08B6C11C:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08B6C120;
L_08B6C120:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6C180;
      }
      goto L_08B6C128;
    }
L_08B6C128:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_run_words); }
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (ctx.lo);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x08B6C180u);
    aot_gpr_7 = (ctx.gpr[23] | 0u);
    goto L_08B6C2C8;
L_08B6C180:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (ctx.gpr[19] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B6C0EC;
      }
      goto L_08B6C190;
    }
L_08B6C190:
    aot_gpr_4 = (ctx.gpr[17] - aot_gpr_16);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08B6C1D8;
      }
      goto L_08B6C1A8;
    }
L_08B6C1A8:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B6C1B0;
L_08B6C1B0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08B6C1C0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    goto L_08B6C504;
L_08B6C1C0:
    aot_gpr_4 = (ctx.gpr[17] - aot_gpr_16);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B6C1B0;
      }
      goto L_08B6C1D8;
    }
L_08B6C1D8:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[31] = aot_run_words[8];
    }
    jump_target = ctx.gpr[31];
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
L_08B6C204:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_6);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_16);
    ctx.gpr[20] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B6C2A8;
      }
      goto L_08B6C24C;
    }
L_08B6C24C:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_4 = (aot_gpr_4 >> 31u);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_4 << 2u);
    ctx.gpr[18] = (aot_gpr_16 + ctx.gpr[18]);
    goto L_08B6C280;
L_08B6C280:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B6C298u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    goto L_08B6C2C8;
L_08B6C298:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B6C2A8;
      }
      goto L_08B6C2A0;
    }
L_08B6C2A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08B6C280;
      }
      goto L_08B6C2A8;
    }
L_08B6C2A8:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
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
L_08B6C2C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[9], ctx.gpr[10], aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08B6C3B0;
      }
      goto L_08B6C304;
    }
L_08B6C304:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[2] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-12));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[10] == ctx.gpr[9]) {
    ctx.gpr[9] = (0u | 0u);
        goto L_08B6C334;
    }
    goto L_08B6C32C;
L_08B6C32C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6C350;
      }
      goto L_08B6C334;
    }
L_08B6C334:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[9] = (0u | 1u);
        goto L_08B6C34C;
    }
    goto L_08B6C34C;
L_08B6C34C:
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    goto L_08B6C350;
L_08B6C350:
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08B6C35C;
      }
      goto L_08B6C358;
    }
L_08B6C358:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08B6C35C;
L_08B6C35C:
    ctx.gpr[9] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[9]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (aot_gpr_4 + ctx.gpr[9]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[10], ctx.gpr[11], ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08B6C304;
      }
      goto L_08B6C3B0;
    }
L_08B6C3B0:
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[8];
      if (branch_taken) {
          goto L_08B6C3FC;
      }
      goto L_08B6C3B8;
    }
L_08B6C3B8:
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[8] + ctx.gpr[8]);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[9], ctx.gpr[10], aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08B6C3FC;
L_08B6C3FC:
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[8], ctx.gpr[10], ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[11] = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    ctx.gpr[2] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[2]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    goto L_08B6C454;
L_08B6C454:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B6C4EC;
      }
      goto L_08B6C45C;
    }
L_08B6C45C:
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[11] = (aot_gpr_4 + ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[2] == aot_gpr_6) {
    ctx.gpr[2] = (0u | 0u);
        goto L_08B6C47C;
    }
    goto L_08B6C474;
L_08B6C474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6C494;
      }
      goto L_08B6C47C;
    }
L_08B6C47C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[2] = (0u | 1u);
        goto L_08B6C490;
    }
    goto L_08B6C490;
L_08B6C490:
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_08B6C494;
L_08B6C494:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B6C4F0;
    }
    goto L_08B6C49C;
L_08B6C49C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[2], ctx.gpr[3], ctx.gpr[11]};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[2] >> 31u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[2] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[2]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
      if (branch_taken) {
          goto L_08B6C454;
      }
      goto L_08B6C4EC;
    }
L_08B6C4EC:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B6C4F0;
L_08B6C4F0:
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, ctx.gpr[10], ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words); }
    jump_target = ctx.gpr[31];
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
L_08B6C504:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-12));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_6));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, aot_gpr_7, ctx.gpr[8]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, aot_gpr_7, ctx.gpr[8]};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (ctx.lo);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(17))))));
    ctx.gpr[31] = (0x08B6C57Cu);
    aot_gpr_5 = (0u | 0u);
    goto L_08B6C2C8;
L_08B6C57C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
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
L_08B6C588:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (aot_gpr_5 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, ctx.gpr[9], aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_7);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_7 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-12));
    goto L_08B6C5CC;
L_08B6C5CC:
    if (aot_gpr_5 == ctx.gpr[9]) {
    aot_gpr_5 = (0u | 0u);
        goto L_08B6C5DC;
    }
    goto L_08B6C5D4;
L_08B6C5D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6C5F4;
      }
      goto L_08B6C5DC;
    }
L_08B6C5DC:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_5 = (0u | 1u);
        goto L_08B6C5F0;
    }
    goto L_08B6C5F0;
L_08B6C5F0:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08B6C5F4;
L_08B6C5F4:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B6C608;
      }
      goto L_08B6C5FC;
    }
L_08B6C5FC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B6C5CC;
      }
      goto L_08B6C608;
    }
L_08B6C608:
    aot_gpr_5 = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    goto L_08B6C610;
L_08B6C610:
    if (ctx.gpr[9] == ctx.gpr[10]) {
    ctx.gpr[10] = (0u | 0u);
        goto L_08B6C620;
    }
    goto L_08B6C618;
L_08B6C618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6C638;
      }
      goto L_08B6C620;
    }
L_08B6C620:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[10] = (0u | 1u);
        goto L_08B6C634;
    }
    goto L_08B6C634;
L_08B6C634:
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    goto L_08B6C638;
L_08B6C638:
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08B6C650;
      }
      goto L_08B6C640;
    }
L_08B6C640:
    ctx.gpr[8] = (aot_gpr_5 + static_cast<std::uint32_t>(-12));
    aot_gpr_5 = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B6C610;
      }
      goto L_08B6C650;
    }
L_08B6C650:
    ctx.gpr[10] = (aot_gpr_4 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6C6AC;
      }
      goto L_08B6C65C;
    }
L_08B6C65C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, ctx.gpr[11], ctx.gpr[2]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_7, aot_gpr_6};
      aot_mem.aot_direct_store32_block(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[10] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08B6C5CC;
      }
      goto L_08B6C6AC;
    }
L_08B6C6AC:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), aot_gpr_7, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    jump_target = ctx.gpr[31];
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
L_08B6C6C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_16 - aot_gpr_4);
    aot_gpr_6 = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08B6C72C;
      }
      goto L_08B6C6F8;
    }
L_08B6C6F8:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08B6C708u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B6C74C;
L_08B6C708:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08B6C724u);
    aot_gpr_6 = (0u | 0u);
    goto L_08B6C99C;
L_08B6C724:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6C738;
      }
      goto L_08B6C72C;
    }
L_08B6C72C:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B6C738u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08B6C74C;
L_08B6C738:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6C74C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[10]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_6);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6C790;
      }
      goto L_08B6C788;
    }
L_08B6C788:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6C8BC;
      }
      goto L_08B6C790;
    }
L_08B6C790:
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
      if (branch_taken) {
          goto L_08B6C8BC;
      }
      goto L_08B6C79C;
    }
L_08B6C79C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    ctx.gpr[23] = (0u | 12u);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(37))))));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(35))))));
    goto L_08B6C7B8;
L_08B6C7B8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B6C7EC;
      }
      goto L_08B6C7E4;
    }
L_08B6C7E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6C80C;
      }
      goto L_08B6C7EC;
    }
L_08B6C7EC:
    aot_gpr_4 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (0u | 1u);
        goto L_08B6C808;
    }
    goto L_08B6C808;
L_08B6C808:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08B6C80C;
L_08B6C80C:
    if (aot_gpr_4 == 0u) {
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
        goto L_08B6C898;
    }
    goto L_08B6C814;
L_08B6C814:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(33))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08B6C828u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(36))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0084_entry, 84u, 709u, 0x089574ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6C828u) goto L_08B6C828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6C828:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(40))))));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (ctx.gpr[18] - aot_gpr_16);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_08B6C878;
      }
      goto L_08B6C84C;
    }
L_08B6C84C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-12));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_7);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B6C84C;
      }
      goto L_08B6C878;
    }
L_08B6C878:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_6);
      if (branch_taken) {
          goto L_08B6C8A4;
      }
      goto L_08B6C898;
    }
L_08B6C898:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B6C8A4u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    goto L_08B6C8EC;
L_08B6C8A4:
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
      if (branch_taken) {
          goto L_08B6C7B8;
      }
      goto L_08B6C8B0;
    }
L_08B6C8B0:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08B6C8BC;
L_08B6C8BC:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[30] = aot_run_words[8];
      ctx.gpr[31] = aot_run_words[9];
    }
    jump_target = ctx.gpr[31];
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
L_08B6C8EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, ctx.gpr[9], ctx.gpr[8]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(-12));
    aot_gpr_7 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    goto L_08B6C924;
L_08B6C924:
    if (aot_gpr_5 == ctx.gpr[10]) {
    ctx.gpr[10] = (0u | 0u);
        goto L_08B6C934;
    }
    goto L_08B6C92C;
L_08B6C92C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6C94C;
      }
      goto L_08B6C934;
    }
L_08B6C934:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[10] = (0u | 1u);
        goto L_08B6C948;
    }
    goto L_08B6C948;
L_08B6C948:
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    goto L_08B6C94C;
L_08B6C94C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08B6C984;
      }
      goto L_08B6C954;
    }
L_08B6C954:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[10], ctx.gpr[11], ctx.gpr[2]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-12));
    aot_gpr_7 = (aot_gpr_6 | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B6C924;
      }
      goto L_08B6C984;
    }
L_08B6C984:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, ctx.gpr[9], ctx.gpr[8]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    jump_target = ctx.gpr[31];
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
L_08B6C99C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[31], aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_16;
      if (branch_taken) {
          goto L_08B6C9E4;
      }
      goto L_08B6C9C4;
    }
L_08B6C9C4:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    goto L_08B6C9C8;
L_08B6C9C8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B6C9D8u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08B6C8EC;
L_08B6C9D8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_16;
      if (branch_taken) {
          goto L_08B6C9C8;
      }
      goto L_08B6C9E4;
    }
L_08B6C9E4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
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
L_08B6C9FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6CA0Cu);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    goto L_08B6CA18;
L_08B6CA0C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
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
L_08B6CA18:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_7 + aot_gpr_4);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
      if (branch_taken) {
          goto L_08B6CA7C;
      }
      goto L_08B6CA2C;
    }
L_08B6CA2C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    goto L_08B6CA38;
L_08B6CA38:
    ctx.gpr[9] = (aot_gpr_7 | 0u);
    { const bool branch_taken = ctx.gpr[9] == aot_gpr_5;
      if (branch_taken) {
          goto L_08B6CA70;
      }
      goto L_08B6CA44;
    }
L_08B6CA44:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    goto L_08B6CA48;
L_08B6CA48:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[10];
      if (branch_taken) {
          goto L_08B6CA68;
      }
      goto L_08B6CA54;
    }
L_08B6CA54:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != aot_gpr_5;
      if (branch_taken) {
          goto L_08B6CA48;
      }
      goto L_08B6CA60;
    }
L_08B6CA60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6CA70;
      }
      goto L_08B6CA68;
    }
L_08B6CA68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B6CA80;
      }
      goto L_08B6CA70;
    }
L_08B6CA70:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
      if (branch_taken) {
          goto L_08B6CA38;
      }
      goto L_08B6CA7C;
    }
L_08B6CA7C:
    ctx.gpr[2] = (aot_gpr_6 | 0u);
    goto L_08B6CA80;
L_08B6CA80:
    jump_target = ctx.gpr[31];
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
L_08B6CA88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_16);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6CACCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CACCu) goto L_08B6CACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CACC:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(13))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[31] = (0x08B6CAF4u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr_5));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 86u, 0x08964FC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CAF4u) goto L_08B6CAF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CAF4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B6CB24;
      }
      goto L_08B6CB10;
    }
L_08B6CB10:
    aot_gpr_16 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[31] = (0x08B6CB1Cu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CB1Cu) goto L_08B6CB1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CB1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_16);
      if (branch_taken) {
          goto L_08B6CB24;
      }
      goto L_08B6CB24;
    }
L_08B6CB24:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6CB3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (2235u << 16u);
      if (branch_taken) {
          goto L_08B6CB7C;
      }
      goto L_08B6CB4C;
    }
L_08B6CB4C:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27268));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
      if (branch_taken) {
          goto L_08B6CB64;
      }
      goto L_08B6CB58;
    }
L_08B6CB58:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08B6CB64;
L_08B6CB64:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6CB7C;
      }
      goto L_08B6CB70;
    }
L_08B6CB70:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[31] = (0x08B6CB7Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CB7Cu) goto L_08B6CB7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CB7C:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
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
L_08B6CB88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6CC14;
      }
      goto L_08B6CBA4;
    }
L_08B6CBA4:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27076));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6CBD8;
      }
      goto L_08B6CBBC;
    }
L_08B6CBBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6CBD8;
      }
      goto L_08B6CBCC;
    }
L_08B6CBCC:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[31] = (0x08B6CBD8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CBD8u) goto L_08B6CBD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CBD8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08B6CC00;
      }
      goto L_08B6CBE0;
    }
L_08B6CBE0:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27268));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6CBFC;
      }
      goto L_08B6CBF0;
    }
L_08B6CBF0:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08B6CBFC;
L_08B6CBFC:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_08B6CC00;
L_08B6CC00:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B6CC14;
      }
      goto L_08B6CC08;
    }
L_08B6CC08:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B6CC14u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CC14u) goto L_08B6CC14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CC14:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6CC28:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (0u | 2080u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B6CC64;
      }
      goto L_08B6CC4C;
    }
L_08B6CC4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_gpr_5 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + aot_gpr_4);
      if (branch_taken) {
          goto L_08B6CC68;
      }
      goto L_08B6CC64;
    }
L_08B6CC64:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B6CC68;
L_08B6CC68:
    jump_target = ctx.gpr[31];
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
L_08B6CC70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 - ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6CCB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 641u, 0x08B66A74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CCB4u) goto L_08B6CCB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CCB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[31] = (0x08B6CCE0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_5));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 613u, 0x08972CF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CCE0u) goto L_08B6CCE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CCE0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(12))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B6CD10;
      }
      goto L_08B6CCFC;
    }
L_08B6CCFC:
    ctx.gpr[17] = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[31] = (0x08B6CD08u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CD08u) goto L_08B6CD08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CD08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B6CD10;
      }
      goto L_08B6CD10;
    }
L_08B6CD10:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6CD34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (2235u << 16u);
      if (branch_taken) {
          goto L_08B6CD84;
      }
      goto L_08B6CD44;
    }
L_08B6CD44:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27044));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
      if (branch_taken) {
          goto L_08B6CD70;
      }
      goto L_08B6CD50;
    }
L_08B6CD50:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27060));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5860), 0u);
      if (branch_taken) {
          goto L_08B6CD70;
      }
      goto L_08B6CD64;
    }
L_08B6CD64:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08B6CD70;
L_08B6CD70:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B6CD84;
      }
      goto L_08B6CD7C;
    }
L_08B6CD7C:
    ctx.gpr[31] = (0x08B6CD84u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CD84u) goto L_08B6CD84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CD84:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
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
L_08B6CD90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B6CDC0;
      }
      goto L_08B6CDB8;
    }
L_08B6CDB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6CE0C;
      }
      goto L_08B6CDC0;
    }
L_08B6CDC0:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
      if (branch_taken) {
          goto L_08B6CE0C;
      }
      goto L_08B6CDCC;
    }
L_08B6CDCC:
    aot_gpr_4 = (ctx.gpr[19] - ctx.gpr[18]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    jump_target = aot_gpr_16;
    ctx.gpr[31] = (0x08B6CDE8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CDE8u) goto L_08B6CDE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CDE8:
    aot_gpr_4 = (ctx.gpr[2] + ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
      if (branch_taken) {
          goto L_08B6CDCC;
      }
      goto L_08B6CE0C;
    }
L_08B6CE0C:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
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
L_08B6CE28:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    goto L_08B6CE34;
L_08B6CE34:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_7 != aot_gpr_6;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_7);
      if (branch_taken) {
          goto L_08B6CE60;
      }
      goto L_08B6CE40;
    }
L_08B6CE40:
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08B6CE58;
      }
      goto L_08B6CE48;
    }
L_08B6CE48:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (0u | 0u);
      if (branch_taken) {
          goto L_08B6CE60;
      }
      goto L_08B6CE58;
    }
L_08B6CE58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B6CEDC;
      }
      goto L_08B6CE60;
    }
L_08B6CE60:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_gpr_5 + aot_gpr_7);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_7);
      if (branch_taken) {
          goto L_08B6CE34;
      }
      goto L_08B6CE80;
    }
L_08B6CE80:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_7);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_7 & 127u);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_7 & ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 & 127u);
    aot_gpr_6 = (aot_gpr_7 | aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[2] = (ctx.gpr[2] + aot_gpr_4);
    goto L_08B6CEDC;
L_08B6CEDC:
    jump_target = ctx.gpr[31];
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
L_08B6CEE4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 | 128u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B6CF20;
      }
      goto L_08B6CF1C;
    }
L_08B6CF1C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    goto L_08B6CF20;
L_08B6CF20:
    jump_target = ctx.gpr[31];
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
L_08B6CF28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_16)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    ctx.gpr[31] = (0x08B6CF54u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CF54u) goto L_08B6CF54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CF54:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B6CF60u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CF60u) goto L_08B6CF60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CF60:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B6CFB8;
      }
      goto L_08B6CF80;
    }
L_08B6CF80:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B6CF84;
L_08B6CF84:
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 | 128u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_7 & aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B6CF84;
    }
    goto L_08B6CFB8;
L_08B6CFB8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6CFD0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    aot_gpr_4 = (aot_gpr_16 << 5u);
    aot_gpr_5 = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    ctx.gpr[31] = (0x08B6CFFCu);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6CFFCu) goto L_08B6CFFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6CFFC:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B6D008u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D008u) goto L_08B6D008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D008:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B6D060;
      }
      goto L_08B6D028;
    }
L_08B6D028:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B6D02C;
L_08B6D02C:
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 | 128u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_7 & aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B6D02C;
    }
    goto L_08B6D060;
L_08B6D060:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6D078:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    aot_gpr_4 = (aot_gpr_16 << 5u);
    aot_gpr_5 = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    ctx.gpr[31] = (0x08B6D0A4u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D0A4u) goto L_08B6D0A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D0A4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B6D0B0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D0B0u) goto L_08B6D0B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D0B0:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B6D108;
      }
      goto L_08B6D0D0;
    }
L_08B6D0D0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B6D0D4;
L_08B6D0D4:
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 | 128u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_7 & aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B6D0D4;
    }
    goto L_08B6D108;
L_08B6D108:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6D120:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 << 8u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    ctx.gpr[31] = (0x08B6D150u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D150u) goto L_08B6D150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D150:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B6D15Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D15Cu) goto L_08B6D15C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D15C:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B6D1B4;
      }
      goto L_08B6D17C;
    }
L_08B6D17C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B6D180;
L_08B6D180:
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 | 128u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_7 & aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B6D180;
    }
    goto L_08B6D1B4;
L_08B6D1B4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6D1CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    aot_gpr_4 = (aot_gpr_16 << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[31] = (0x08B6D1F4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D1F4u) goto L_08B6D1F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D1F4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B6D200u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D200u) goto L_08B6D200;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D200:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B6D258;
      }
      goto L_08B6D220;
    }
L_08B6D220:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B6D224;
L_08B6D224:
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 | 128u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_7 & aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B6D224;
    }
    goto L_08B6D258;
L_08B6D258:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6D270:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6D32C;
      }
      goto L_08B6D298;
    }
L_08B6D298:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08B6D31C;
      }
      goto L_08B6D2A4;
    }
L_08B6D2A4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6D2F4;
      }
      goto L_08B6D2B4;
    }
L_08B6D2B4:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
        goto L_08B6D2EC;
    }
    goto L_08B6D2BC;
L_08B6D2BC:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
        goto L_08B6D2EC;
    }
    goto L_08B6D2C4;
L_08B6D2C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
        goto L_08B6D2EC;
    }
    goto L_08B6D2D0;
L_08B6D2D0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08B6D2E8;
      }
      goto L_08B6D2E0;
    }
L_08B6D2E0:
    ctx.gpr[31] = (0x08B6D2E8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D2E8u) goto L_08B6D2E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D2E8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_08B6D2EC;
L_08B6D2EC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
      if (branch_taken) {
          goto L_08B6D2B4;
      }
      goto L_08B6D2F4;
    }
L_08B6D2F4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08B6D31C;
      }
      goto L_08B6D2FC;
    }
L_08B6D2FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_08B6D31C;
    }
    goto L_08B6D308;
L_08B6D308:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_08B6D31C;
    }
    goto L_08B6D310;
L_08B6D310:
    ctx.gpr[31] = (0x08B6D318u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D318u) goto L_08B6D318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D318:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_08B6D31C;
L_08B6D31C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6D32C;
      }
      goto L_08B6D324;
    }
L_08B6D324:
    ctx.gpr[31] = (0x08B6D32Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D32Cu) goto L_08B6D32C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D32C:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
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
L_08B6D34C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x08B6D364u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 624u, 0x08B6B464u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D364u) goto L_08B6D364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D364:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (aot_gpr_4 - ctx.gpr[2]);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
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
L_08B6D37C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6D430;
      }
      goto L_08B6D398;
    }
L_08B6D398:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26788));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6D418;
      }
      goto L_08B6D3A8;
    }
L_08B6D3A8:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28580));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6D418;
      }
      goto L_08B6D3B8;
    }
L_08B6D3B8:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28596));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6D418;
      }
      goto L_08B6D3C8;
    }
L_08B6D3C8:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6D404;
      }
      goto L_08B6D3E0;
    }
L_08B6D3E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6D404;
      }
      goto L_08B6D3F0;
    }
L_08B6D3F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6D404;
      }
      goto L_08B6D3FC;
    }
L_08B6D3FC:
    ctx.gpr[31] = (0x08B6D404u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D404u) goto L_08B6D404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D404:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08B6D41C;
      }
      goto L_08B6D40C;
    }
L_08B6D40C:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08B6D418;
L_08B6D418:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_08B6D41C;
L_08B6D41C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B6D430;
      }
      goto L_08B6D424;
    }
L_08B6D424:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B6D430u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D430u) goto L_08B6D430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D430:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6D444:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6D4A4;
      }
      goto L_08B6D460;
    }
L_08B6D460:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25400));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6D490;
      }
      goto L_08B6D470;
    }
L_08B6D470:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26980));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), aot_gpr_4);
    ctx.gpr[31] = (0x08B6D484u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D484u) goto L_08B6D484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D484:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B6D490u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D490u) goto L_08B6D490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D490:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6D4A4;
      }
      goto L_08B6D49C;
    }
L_08B6D49C:
    ctx.gpr[31] = (0x08B6D4A4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D4A4u) goto L_08B6D4A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D4A4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6D4B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6D54C;
      }
      goto L_08B6D4D4;
    }
L_08B6D4D4:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26772));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6D534;
      }
      goto L_08B6D4E4;
    }
L_08B6D4E4:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6D520;
      }
      goto L_08B6D4FC;
    }
L_08B6D4FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6D520;
      }
      goto L_08B6D50C;
    }
L_08B6D50C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6D520;
      }
      goto L_08B6D518;
    }
L_08B6D518:
    ctx.gpr[31] = (0x08B6D520u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D520u) goto L_08B6D520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D520:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08B6D538;
      }
      goto L_08B6D528;
    }
L_08B6D528:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08B6D534;
L_08B6D534:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_08B6D538;
L_08B6D538:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B6D54C;
      }
      goto L_08B6D540;
    }
L_08B6D540:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B6D54Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D54Cu) goto L_08B6D54C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D54C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6D560:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 4u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6D5DC;
      }
      goto L_08B6D580;
    }
L_08B6D580:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08B6D584;
L_08B6D584:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08B6D598;
    }
    goto L_08B6D590;
L_08B6D590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D668;
      }
      goto L_08B6D598;
    }
L_08B6D598:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08B6D5AC;
    }
    goto L_08B6D5A4;
L_08B6D5A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D668;
      }
      goto L_08B6D5AC;
    }
L_08B6D5AC:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08B6D5C0;
    }
    goto L_08B6D5B8;
L_08B6D5B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D668;
      }
      goto L_08B6D5C0;
    }
L_08B6D5C0:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B6D5D4;
      }
      goto L_08B6D5CC;
    }
L_08B6D5CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D668;
      }
      goto L_08B6D5D4;
    }
L_08B6D5D4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) > 0;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B6D584;
      }
      goto L_08B6D5DC;
    }
L_08B6D5DC:
    aot_gpr_7 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6D610;
      }
      goto L_08B6D5FC;
    }
L_08B6D5FC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) <= 0;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6D668;
      }
      goto L_08B6D604;
    }
L_08B6D604:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6D654;
      }
      goto L_08B6D60C;
    }
L_08B6D60C:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 3 ? 1u : 0u);
    goto L_08B6D610;
L_08B6D610:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6D638;
      }
      goto L_08B6D618;
    }
L_08B6D618:
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6D668;
      }
      goto L_08B6D620;
    }
L_08B6D620:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_7 != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08B6D638;
    }
    goto L_08B6D630;
L_08B6D630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D668;
      }
      goto L_08B6D638;
    }
L_08B6D638:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_7 != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08B6D650;
    }
    goto L_08B6D648;
L_08B6D648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D668;
      }
      goto L_08B6D650;
    }
L_08B6D650:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B6D654;
L_08B6D654:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 != aot_gpr_6;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6D668;
      }
      goto L_08B6D660;
    }
L_08B6D660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D668;
      }
      goto L_08B6D668;
    }
L_08B6D668:
    jump_target = ctx.gpr[31];
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
L_08B6D670:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 4u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6D6EC;
      }
      goto L_08B6D690;
    }
L_08B6D690:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08B6D694;
L_08B6D694:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08B6D6A8;
    }
    goto L_08B6D6A0;
L_08B6D6A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D778;
      }
      goto L_08B6D6A8;
    }
L_08B6D6A8:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08B6D6BC;
    }
    goto L_08B6D6B4;
L_08B6D6B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D778;
      }
      goto L_08B6D6BC;
    }
L_08B6D6BC:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08B6D6D0;
    }
    goto L_08B6D6C8;
L_08B6D6C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D778;
      }
      goto L_08B6D6D0;
    }
L_08B6D6D0:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B6D6E4;
      }
      goto L_08B6D6DC;
    }
L_08B6D6DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D778;
      }
      goto L_08B6D6E4;
    }
L_08B6D6E4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) > 0;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B6D694;
      }
      goto L_08B6D6EC;
    }
L_08B6D6EC:
    aot_gpr_7 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6D720;
      }
      goto L_08B6D70C;
    }
L_08B6D70C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) <= 0;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6D778;
      }
      goto L_08B6D714;
    }
L_08B6D714:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6D764;
      }
      goto L_08B6D71C;
    }
L_08B6D71C:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 3 ? 1u : 0u);
    goto L_08B6D720;
L_08B6D720:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6D748;
      }
      goto L_08B6D728;
    }
L_08B6D728:
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6D778;
      }
      goto L_08B6D730;
    }
L_08B6D730:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_7 != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08B6D748;
    }
    goto L_08B6D740;
L_08B6D740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D778;
      }
      goto L_08B6D748;
    }
L_08B6D748:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_7 != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_08B6D760;
    }
    goto L_08B6D758;
L_08B6D758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D778;
      }
      goto L_08B6D760;
    }
L_08B6D760:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B6D764;
L_08B6D764:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 != aot_gpr_6;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6D778;
      }
      goto L_08B6D770;
    }
L_08B6D770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D778;
      }
      goto L_08B6D778;
    }
L_08B6D778:
    jump_target = ctx.gpr[31];
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
L_08B6D780:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
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
L_08B6D794:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6D848;
      }
      goto L_08B6D7B0;
    }
L_08B6D7B0:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26564));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6D830;
      }
      goto L_08B6D7C0;
    }
L_08B6D7C0:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28580));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6D830;
      }
      goto L_08B6D7D0;
    }
L_08B6D7D0:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28596));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6D830;
      }
      goto L_08B6D7E0;
    }
L_08B6D7E0:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6D81C;
      }
      goto L_08B6D7F8;
    }
L_08B6D7F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6D81C;
      }
      goto L_08B6D808;
    }
L_08B6D808:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6D81C;
      }
      goto L_08B6D814;
    }
L_08B6D814:
    ctx.gpr[31] = (0x08B6D81Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D81Cu) goto L_08B6D81C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D81C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08B6D834;
      }
      goto L_08B6D824;
    }
L_08B6D824:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08B6D830;
L_08B6D830:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_08B6D834;
L_08B6D834:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B6D848;
      }
      goto L_08B6D83C;
    }
L_08B6D83C:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B6D848u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D848u) goto L_08B6D848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D848:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6D85C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6D8BC;
      }
      goto L_08B6D878;
    }
L_08B6D878:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(27568));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6D8A8;
      }
      goto L_08B6D888;
    }
L_08B6D888:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26548));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), aot_gpr_4);
    ctx.gpr[31] = (0x08B6D89Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D89Cu) goto L_08B6D89C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D89C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B6D8A8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D8A8u) goto L_08B6D8A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D8A8:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6D8BC;
      }
      goto L_08B6D8B4;
    }
L_08B6D8B4:
    ctx.gpr[31] = (0x08B6D8BCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D8BCu) goto L_08B6D8BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D8BC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6D8D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6D918;
      }
      goto L_08B6D8EC;
    }
L_08B6D8EC:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(27352));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B6D904u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 266u, 0x08AAD844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D904u) goto L_08B6D904;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D904:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6D918;
      }
      goto L_08B6D910;
    }
L_08B6D910:
    ctx.gpr[31] = (0x08B6D918u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D918u) goto L_08B6D918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D918:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6D92C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B6D978;
      }
      goto L_08B6D93C;
    }
L_08B6D93C:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(27760));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_6);
      if (branch_taken) {
          goto L_08B6D964;
      }
      goto L_08B6D948;
    }
L_08B6D948:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(20576));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_6);
      if (branch_taken) {
          goto L_08B6D964;
      }
      goto L_08B6D958;
    }
L_08B6D958:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(22544));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_6);
    goto L_08B6D964;
L_08B6D964:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B6D978;
      }
      goto L_08B6D970;
    }
L_08B6D970:
    ctx.gpr[31] = (0x08B6D978u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D978u) goto L_08B6D978;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D978:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
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
L_08B6D984:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (2235u << 16u);
      if (branch_taken) {
          goto L_08B6D9C4;
      }
      goto L_08B6D994;
    }
L_08B6D994:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-26188));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
      if (branch_taken) {
          goto L_08B6D9AC;
      }
      goto L_08B6D9A0;
    }
L_08B6D9A0:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08B6D9AC;
L_08B6D9AC:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6D9C4;
      }
      goto L_08B6D9B8;
    }
L_08B6D9B8:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[31] = (0x08B6D9C4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6D9C4u) goto L_08B6D9C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6D9C4:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
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
L_08B6D9D0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (0u | 96u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 | 128u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B6DA0C;
      }
      goto L_08B6DA08;
    }
L_08B6DA08:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    goto L_08B6DA0C;
L_08B6DA0C:
    jump_target = ctx.gpr[31];
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
L_08B6DA14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (2235u << 16u);
      if (branch_taken) {
          goto L_08B6DA60;
      }
      goto L_08B6DA24;
    }
L_08B6DA24:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-26172));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_6);
      if (branch_taken) {
          goto L_08B6DA4C;
      }
      goto L_08B6DA30;
    }
L_08B6DA30:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(20576));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_6);
      if (branch_taken) {
          goto L_08B6DA4C;
      }
      goto L_08B6DA40;
    }
L_08B6DA40:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(22544));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_6);
    goto L_08B6DA4C;
L_08B6DA4C:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B6DA60;
      }
      goto L_08B6DA58;
    }
L_08B6DA58:
    ctx.gpr[31] = (0x08B6DA60u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DA60u) goto L_08B6DA60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DA60:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
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
L_08B6DA6C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (0u | 96u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 | 128u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B6DAA8;
      }
      goto L_08B6DAA4;
    }
L_08B6DAA4:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    goto L_08B6DAA8;
L_08B6DAA8:
    jump_target = ctx.gpr[31];
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
L_08B6DAB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 96u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
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
L_08B6DACC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6DB2C;
      }
      goto L_08B6DAE8;
    }
L_08B6DAE8:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08B6DB1C;
      }
      goto L_08B6DAF4;
    }
L_08B6DAF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08B6DB1C;
      }
      goto L_08B6DB04;
    }
L_08B6DB04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_08B6DB1C;
    }
    goto L_08B6DB10;
L_08B6DB10:
    ctx.gpr[31] = (0x08B6DB18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DB18u) goto L_08B6DB18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DB18:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_08B6DB1C;
L_08B6DB1C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6DB2C;
      }
      goto L_08B6DB24;
    }
L_08B6DB24:
    ctx.gpr[31] = (0x08B6DB2Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DB2Cu) goto L_08B6DB2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DB2C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6DB40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (2235u << 16u);
      if (branch_taken) {
          goto L_08B6DB80;
      }
      goto L_08B6DB50;
    }
L_08B6DB50:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-25908));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
      if (branch_taken) {
          goto L_08B6DB68;
      }
      goto L_08B6DB5C;
    }
L_08B6DB5C:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08B6DB68;
L_08B6DB68:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6DB80;
      }
      goto L_08B6DB74;
    }
L_08B6DB74:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[31] = (0x08B6DB80u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DB80u) goto L_08B6DB80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DB80:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
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
L_08B6DB8C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6DBD8;
      }
      goto L_08B6DBAC;
    }
L_08B6DBAC:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B6DBBCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08B6DB8C;
L_08B6DBBC:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6DBD0;
      }
      goto L_08B6DBC8;
    }
L_08B6DBC8:
    ctx.gpr[31] = (0x08B6DBD0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DBD0u) goto L_08B6DBD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DBD0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_16 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B6DBAC;
      }
      goto L_08B6DBD8;
    }
L_08B6DBD8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
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
L_08B6DBF0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6DC7C;
      }
      goto L_08B6DC0C;
    }
L_08B6DC0C:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-25860));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6DC40;
      }
      goto L_08B6DC24;
    }
L_08B6DC24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6DC40;
      }
      goto L_08B6DC34;
    }
L_08B6DC34:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[31] = (0x08B6DC40u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DC40u) goto L_08B6DC40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DC40:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08B6DC6C;
      }
      goto L_08B6DC48;
    }
L_08B6DC48:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-25876));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5868), 0u);
      if (branch_taken) {
          goto L_08B6DC68;
      }
      goto L_08B6DC5C;
    }
L_08B6DC5C:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08B6DC68;
L_08B6DC68:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_08B6DC6C;
L_08B6DC6C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6DC7C;
      }
      goto L_08B6DC74;
    }
L_08B6DC74:
    ctx.gpr[31] = (0x08B6DC7Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DC7Cu) goto L_08B6DC7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DC7C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6DC90:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(30744));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_7);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_6);
    jump_target = ctx.gpr[31];
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
L_08B6DCC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_7);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (aot_gpr_6 | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(10))))));
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_4 = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B6DD10;
      }
      goto L_08B6DCF0;
    }
L_08B6DCF0:
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 << 3u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_7);
      if (branch_taken) {
          goto L_08B6DD10;
      }
      goto L_08B6DD10;
    }
L_08B6DD10:
    ctx.gpr[11] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08B6DD28u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DD28u) goto L_08B6DD28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DD28:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
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
L_08B6DD34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[9] | 0u);
    aot_gpr_4 = (aot_gpr_7 | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == aot_gpr_7) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
        goto L_08B6DD98;
    }
    goto L_08B6DD64;
L_08B6DD64:
    if (aot_gpr_5 != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
        goto L_08B6DE4C;
    }
    goto L_08B6DD6C;
L_08B6DD6C:
    if (aot_gpr_6 != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
        goto L_08B6DD98;
    }
    goto L_08B6DD74;
L_08B6DD74:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
        goto L_08B6DE4C;
    }
    goto L_08B6DD94;
L_08B6DD94:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    goto L_08B6DD98;
L_08B6DD98:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_gpr_4 = (0u | 28u);
    ctx.gpr[31] = (0x08B6DDA8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DDA8u) goto L_08B6DDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DDA8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B6DDD8;
      }
      goto L_08B6DDBC;
    }
L_08B6DDBC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B6DDCCu);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DDCCu) goto L_08B6DDCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DDCC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    goto L_08B6DDD8;
L_08B6DDD8:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B6DDFC;
      }
      goto L_08B6DDE4;
    }
L_08B6DDE4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_6));
    goto L_08B6DDFC;
L_08B6DDFC:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_7 = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B6DE34;
      }
      goto L_08B6DE1C;
    }
L_08B6DE1C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B6DED8;
      }
      goto L_08B6DE34;
    }
L_08B6DE34:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[9];
      if (branch_taken) {
          goto L_08B6DED8;
      }
      goto L_08B6DE44;
    }
L_08B6DE44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B6DED8;
      }
      goto L_08B6DE4C;
    }
L_08B6DE4C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_gpr_4 = (0u | 28u);
    ctx.gpr[31] = (0x08B6DE5Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DE5Cu) goto L_08B6DE5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DE5C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B6DE8C;
      }
      goto L_08B6DE70;
    }
L_08B6DE70:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B6DE80u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DE80u) goto L_08B6DE80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DE80:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    goto L_08B6DE8C;
L_08B6DE8C:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B6DEB0;
      }
      goto L_08B6DE98;
    }
L_08B6DE98:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_6));
    goto L_08B6DEB0;
L_08B6DEB0:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_7 = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B6DED8;
      }
      goto L_08B6DED4;
    }
L_08B6DED4:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B6DED8;
L_08B6DED8:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08B6DEF4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 368u, 0x08B6A46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DEF4u) goto L_08B6DEF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DEF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
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
L_08B6DF1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6DF70;
      }
      goto L_08B6DF3C;
    }
L_08B6DF3C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B6DF4Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08B6DF1C;
L_08B6DF4C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08B6DF64;
      }
      goto L_08B6DF5C;
    }
L_08B6DF5C:
    ctx.gpr[31] = (0x08B6DF64u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6DF64u) goto L_08B6DF64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6DF64:
    aot_gpr_16 = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08B6DF3C;
      }
      goto L_08B6DF70;
    }
L_08B6DF70:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[31] = aot_run_words[3];
    }
    jump_target = ctx.gpr[31];
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
L_08B6DF88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B6DFFC;
      }
      goto L_08B6DFC4;
    }
L_08B6DFC4:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B6DFF0;
      }
      goto L_08B6DFE4;
    }
L_08B6DFE4:
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6DFF4;
      }
      goto L_08B6DFF0;
    }
L_08B6DFF0:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_08B6DFF4;
L_08B6DFF4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08B6DFC4;
      }
      goto L_08B6DFFC;
    }
L_08B6DFFC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6E070;
      }
      goto L_08B6E008;
    }
L_08B6E008:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B6E040;
      }
      goto L_08B6E030;
    }
L_08B6E030:
    ctx.gpr[31] = (0x08B6E038u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 401u, 0x08B6A64Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E038u) goto L_08B6E038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E038:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B6E070;
      }
      goto L_08B6E040;
    }
L_08B6E040:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08B6E05Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B6DD34;
L_08B6E05C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B6E0D8;
      }
      goto L_08B6E070;
    }
L_08B6E070:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6E0C8;
      }
      goto L_08B6E098;
    }
L_08B6E098:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08B6E0B4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B6DD34;
L_08B6E0B4:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B6E0D8;
      }
      goto L_08B6E0C8;
    }
L_08B6E0C8:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B6E0D8;
L_08B6E0D8:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
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
L_08B6E0F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    ctx.gpr[20] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[8];
    aot_gpr_16 = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08B6E2C4;
      }
      goto L_08B6E134;
    }
L_08B6E134:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6E18C;
      }
      goto L_08B6E140;
    }
L_08B6E140:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6E1A8;
      }
      goto L_08B6E168;
    }
L_08B6E168:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08B6E184u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B6DD34;
L_08B6E184:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E18C;
    }
L_08B6E18C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B6E19Cu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08B6DF88;
L_08B6E19C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E1A8;
    }
L_08B6E1A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6E240;
      }
      goto L_08B6E1CC;
    }
L_08B6E1CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    ctx.gpr[31] = (0x08B6E1DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E1DCu) goto L_08B6E1DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E1DC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_08B6E21C;
      }
      goto L_08B6E1EC;
    }
L_08B6E1EC:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B6E24C;
      }
      goto L_08B6E214;
    }
L_08B6E214:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6E2A8;
      }
      goto L_08B6E21C;
    }
L_08B6E21C:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B6E238u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_08B6DD34;
L_08B6E238:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E240;
    }
L_08B6E240:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E24C;
    }
L_08B6E24C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B6E284;
      }
      goto L_08B6E260;
    }
L_08B6E260:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B6E27Cu);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_08B6DD34;
L_08B6E27C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E284;
    }
L_08B6E284:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08B6E2A0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B6DD34;
L_08B6E2A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E2A8;
    }
L_08B6E2A8:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B6E2B8u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08B6DF88;
L_08B6E2B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E2C4;
    }
L_08B6E2C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B6E34C;
      }
      goto L_08B6E2D4;
    }
L_08B6E2D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6E330;
      }
      goto L_08B6E304;
    }
L_08B6E304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[31] = (0x08B6E328u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_08B6DD34;
L_08B6E328:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E330;
    }
L_08B6E330:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B6E340u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08B6DF88;
L_08B6E340:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E34C;
    }
L_08B6E34C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    ctx.gpr[31] = (0x08B6E35Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 401u, 0x08B6A64Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E35Cu) goto L_08B6E35C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E35C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08B6E408;
      }
      goto L_08B6E384;
    }
L_08B6E384:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6E408;
      }
      goto L_08B6E3AC;
    }
L_08B6E3AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B6E3E4;
      }
      goto L_08B6E3C0;
    }
L_08B6E3C0:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B6E3DCu);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_08B6DD34;
L_08B6E3DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E3E4;
    }
L_08B6E3E4:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08B6E400u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B6DD34;
L_08B6E400:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E408;
    }
L_08B6E408:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_4);
    ctx.gpr[31] = (0x08B6E418u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E418u) goto L_08B6E418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E418:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08B6E444;
      }
      goto L_08B6E428;
    }
L_08B6E428:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    goto L_08B6E444;
L_08B6E444:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08B6E4E8;
      }
      goto L_08B6E44C;
    }
L_08B6E44C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6E4E8;
      }
      goto L_08B6E454;
    }
L_08B6E454:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08B6E48C;
      }
      goto L_08B6E464;
    }
L_08B6E464:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B6E4E8;
      }
      goto L_08B6E48C;
    }
L_08B6E48C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B6E4C4;
      }
      goto L_08B6E4A0;
    }
L_08B6E4A0:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B6E4BCu);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_08B6DD34;
L_08B6E4BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E4C4;
    }
L_08B6E4C4:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08B6E4E0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B6DD34;
L_08B6E4E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E4E8;
    }
L_08B6E4E8:
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_08B6E4FC;
      }
      goto L_08B6E4F0;
    }
L_08B6E4F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E4FC;
    }
L_08B6E4FC:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B6E50Cu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08B6DF88;
L_08B6E50C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6E518;
      }
      goto L_08B6E518;
    }
L_08B6E518:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
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
L_08B6E538:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[31] = (0x08B6E564u);
    aot_gpr_4 = (ctx.gpr[18] << 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E564u) goto L_08B6E564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E564:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), aot_gpr_4);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_16 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B6E5B8;
      }
      goto L_08B6E590;
    }
L_08B6E590:
    ctx.gpr[18] = (ctx.gpr[19] << 4u);
    goto L_08B6E594;
L_08B6E594:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B6E5A4u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    goto L_08B6E71C;
L_08B6E5A4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_16 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08B6E594;
      }
      goto L_08B6E5B8;
    }
L_08B6E5B8:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
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
L_08B6E5D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_08B6E614;
      }
      goto L_08B6E5FC;
    }
L_08B6E5FC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x08B6E608u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B6E6DC;
L_08B6E608:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_08B6E5FC;
      }
      goto L_08B6E614;
    }
L_08B6E614:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6E628:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_16 == aot_gpr_7;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B6E684;
      }
      goto L_08B6E648;
    }
L_08B6E648:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    goto L_08B6E64C;
L_08B6E64C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[8] = (0u | 1u);
        goto L_08B6E664;
    }
    goto L_08B6E664;
L_08B6E664:
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08B6E678;
      }
      goto L_08B6E670;
    }
L_08B6E670:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6E684;
      }
      goto L_08B6E678;
    }
L_08B6E678:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_16 != aot_gpr_7;
      if (branch_taken) {
          goto L_08B6E64C;
      }
      goto L_08B6E684;
    }
L_08B6E684:
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_08B6E6C4;
      }
      goto L_08B6E694;
    }
L_08B6E694:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[31] = (0x08B6E6B0u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_7);
    goto L_08B6E734;
L_08B6E6B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B6E6BCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08B6E71C;
L_08B6E6BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B6E6C8;
      }
      goto L_08B6E6C4;
    }
L_08B6E6C4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B6E6C8;
L_08B6E6C8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6E6DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6E6FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B6E734;
L_08B6E6FC:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08B6E708u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08B6E71C;
L_08B6E708:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6E71C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_4);
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
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
L_08B6E734:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_4);
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
L_08B6E74C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6E914;
      }
      goto L_08B6E774;
    }
L_08B6E774:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] - aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B6E830;
      }
      goto L_08B6E798;
    }
L_08B6E798:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08B6E7C8;
      }
      goto L_08B6E7A8;
    }
L_08B6E7A8:
    ctx.gpr[31] = (0x08B6E7B0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E7B0u) goto L_08B6E7B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E7B0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08B6E7C8;
      }
      goto L_08B6E7BC;
    }
L_08B6E7BC:
    ctx.gpr[31] = (0x08B6E7C4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E7C4u) goto L_08B6E7C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E7C4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08B6E7C8;
L_08B6E7C8:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(8))))));
    ctx.gpr[31] = (0x08B6E7E8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E7E8u) goto L_08B6E7E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E7E8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B6E808;
      }
      goto L_08B6E7F8;
    }
L_08B6E7F8:
    aot_gpr_6 = (ctx.gpr[19] - ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B6E808u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E808u) goto L_08B6E808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E808:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6E81C;
      }
      goto L_08B6E814;
    }
L_08B6E814:
    ctx.gpr[31] = (0x08B6E81Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E81Cu) goto L_08B6E81C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E81C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6E908;
      }
      goto L_08B6E830;
    }
L_08B6E830:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B6E87C;
      }
      goto L_08B6E848;
    }
L_08B6E848:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6E870;
      }
      goto L_08B6E85C;
    }
L_08B6E85C:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (ctx.gpr[17] - aot_gpr_7);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B6E870u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E870u) goto L_08B6E870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E870:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6E908;
      }
      goto L_08B6E87C;
    }
L_08B6E87C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6E8AC;
      }
      goto L_08B6E898;
    }
L_08B6E898:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 - aot_gpr_7);
    ctx.gpr[31] = (0x08B6E8ACu);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E8ACu) goto L_08B6E8AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E8AC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[20] - aot_gpr_5);
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_5);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(13))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    ctx.gpr[31] = (0x08B6E8E8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E8E8u) goto L_08B6E8E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E8E8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B6E908;
      }
      goto L_08B6E8F8;
    }
L_08B6E8F8:
    aot_gpr_6 = (ctx.gpr[19] - ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B6E908u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E908u) goto L_08B6E908;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E908:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08B6E914;
L_08B6E914:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
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
L_08B6E938:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[9]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[18] = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08B6EC3C;
      }
      goto L_08B6E974;
    }
L_08B6E974:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[22]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B6EB20;
      }
      goto L_08B6E99C;
    }
L_08B6E99C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] - ctx.gpr[17]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[20] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[21] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6EA70;
      }
      goto L_08B6E9C4;
    }
L_08B6E9C4:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[21] = (ctx.gpr[22] - ctx.gpr[20]);
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(9))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(12))))));
    ctx.gpr[31] = (0x08B6E9F0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 576u, 0x08A87A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6E9F0u) goto L_08B6E9F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6E9F0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[21];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B6EA0C;
      }
      goto L_08B6EA00;
    }
L_08B6EA00:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B6EA24;
      }
      goto L_08B6EA0C;
    }
L_08B6EA0C:
    aot_gpr_6 = (ctx.gpr[22] - ctx.gpr[21]);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08B6EA1Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6EA1Cu) goto L_08B6EA1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6EA1C:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    goto L_08B6EA24;
L_08B6EA24:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    aot_gpr_16 = (ctx.gpr[19] - ctx.gpr[20]);
    aot_gpr_16 = (aot_gpr_16 - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6EA48;
      }
      goto L_08B6EA38;
    }
L_08B6EA38:
    aot_gpr_4 = (ctx.gpr[19] - aot_gpr_16);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B6EA48u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6EA48u) goto L_08B6EA48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6EA48:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_08B6EA68;
      }
      goto L_08B6EA58;
    }
L_08B6EA58:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B6EA5C;
L_08B6EA5C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    if (aot_gpr_4 != ctx.gpr[17]) {
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08B6EA5C;
    }
    goto L_08B6EA68;
L_08B6EA68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6EB18;
      }
      goto L_08B6EA70;
    }
L_08B6EA70:
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[21]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
      if (branch_taken) {
          goto L_08B6EA9C;
      }
      goto L_08B6EA88;
    }
L_08B6EA88:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B6EA88;
      }
      goto L_08B6EA98;
    }
L_08B6EA98:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08B6EA9C;
L_08B6EA9C:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    ctx.gpr[31] = (0x08B6EAC8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 576u, 0x08A87A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6EAC8u) goto L_08B6EAC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6EAC8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B6EAE4;
      }
      goto L_08B6EAD8;
    }
L_08B6EAD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_gpr_4 + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B6EAFC;
      }
      goto L_08B6EAE4;
    }
L_08B6EAE4:
    aot_gpr_6 = (ctx.gpr[19] - ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B6EAF4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6EAF4u) goto L_08B6EAF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6EAF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (aot_gpr_4 + ctx.gpr[21]);
    goto L_08B6EAFC;
L_08B6EAFC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
      if (branch_taken) {
          goto L_08B6EB18;
      }
      goto L_08B6EB08;
    }
L_08B6EB08:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B6EB0C;
L_08B6EB0C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[17] != ctx.gpr[19]) {
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08B6EB0C;
    }
    goto L_08B6EB18;
L_08B6EB18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B6EC3C;
      }
      goto L_08B6EB20;
    }
L_08B6EB20:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    aot_gpr_4 = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B6EB60;
      }
      goto L_08B6EB50;
    }
L_08B6EB50:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
      if (branch_taken) {
          goto L_08B6EB6C;
      }
      goto L_08B6EB60;
    }
L_08B6EB60:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    goto L_08B6EB6C;
L_08B6EB6C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B6EB98;
      }
      goto L_08B6EB74;
    }
L_08B6EB74:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x08B6EB80u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6EB80u) goto L_08B6EB80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6EB80:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B6EB98;
      }
      goto L_08B6EB8C;
    }
L_08B6EB8C:
    ctx.gpr[31] = (0x08B6EB94u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6EB94u) goto L_08B6EB94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6EB94:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08B6EB98;
L_08B6EB98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_5;
    ctx.gpr[20] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6EBB0;
      }
      goto L_08B6EBA4;
    }
L_08B6EBA4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B6EBC8;
      }
      goto L_08B6EBB0;
    }
L_08B6EBB0:
    ctx.gpr[21] = (ctx.gpr[17] - aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B6EBC0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6EBC0u) goto L_08B6EBC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6EBC0:
    aot_gpr_5 = (ctx.gpr[2] + ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_08B6EBC8;
L_08B6EBC8:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
        goto L_08B6EBE8;
    }
    goto L_08B6EBD0;
L_08B6EBD0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B6EBD0;
      }
      goto L_08B6EBE4;
    }
L_08B6EBE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_08B6EBE8;
L_08B6EBE8:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6EBFC;
      }
      goto L_08B6EBF0;
    }
L_08B6EBF0:
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6EC18;
      }
      goto L_08B6EBFC;
    }
L_08B6EBFC:
    ctx.gpr[18] = (aot_gpr_4 - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B6EC10u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6EC10u) goto L_08B6EC10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6EC10:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08B6EC18;
L_08B6EC18:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6EC28;
      }
      goto L_08B6EC20;
    }
L_08B6EC20:
    ctx.gpr[31] = (0x08B6EC28u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6EC28u) goto L_08B6EC28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6EC28:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[17], aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_run_words); }
    goto L_08B6EC3C;
L_08B6EC3C:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[31] = aot_run_words[8];
    }
    jump_target = ctx.gpr[31];
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
L_08B6EC68:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6ECD8;
      }
      goto L_08B6EC7C;
    }
L_08B6EC7C:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08B6EC80;
L_08B6EC80:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B6EC94;
    }
    goto L_08B6EC8C;
L_08B6EC8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6ED54;
      }
      goto L_08B6EC94;
    }
L_08B6EC94:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B6ECA8;
    }
    goto L_08B6ECA0;
L_08B6ECA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6ED54;
      }
      goto L_08B6ECA8;
    }
L_08B6ECA8:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B6ECBC;
    }
    goto L_08B6ECB4;
L_08B6ECB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6ED54;
      }
      goto L_08B6ECBC;
    }
L_08B6ECBC:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B6ECD0;
      }
      goto L_08B6ECC8;
    }
L_08B6ECC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6ED54;
      }
      goto L_08B6ECD0;
    }
L_08B6ECD0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) > 0;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B6EC80;
      }
      goto L_08B6ECD8;
    }
L_08B6ECD8:
    aot_gpr_7 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6ECFC;
      }
      goto L_08B6ECE8;
    }
L_08B6ECE8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) <= 0;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6ED54;
      }
      goto L_08B6ECF0;
    }
L_08B6ECF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6ED40;
      }
      goto L_08B6ECF8;
    }
L_08B6ECF8:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 3 ? 1u : 0u);
    goto L_08B6ECFC;
L_08B6ECFC:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6ED24;
      }
      goto L_08B6ED04;
    }
L_08B6ED04:
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6ED54;
      }
      goto L_08B6ED0C;
    }
L_08B6ED0C:
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_7 != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B6ED24;
    }
    goto L_08B6ED1C;
L_08B6ED1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6ED54;
      }
      goto L_08B6ED24;
    }
L_08B6ED24:
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_7 != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B6ED3C;
    }
    goto L_08B6ED34;
L_08B6ED34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6ED54;
      }
      goto L_08B6ED3C;
    }
L_08B6ED3C:
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B6ED40;
L_08B6ED40:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 != aot_gpr_6;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6ED54;
      }
      goto L_08B6ED4C;
    }
L_08B6ED4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6ED54;
      }
      goto L_08B6ED54;
    }
L_08B6ED54:
    jump_target = ctx.gpr[31];
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
L_08B6ED5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
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
L_08B6ED70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_7);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_5 - ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08B6EDCC;
      }
      goto L_08B6ED8C;
    }
L_08B6ED8C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    goto L_08B6ED94;
L_08B6ED94:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_6 = (ctx.gpr[2] + aot_gpr_7);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08B6EDC0;
      }
      goto L_08B6EDB0;
    }
L_08B6EDB0:
    ctx.gpr[2] = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_7);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B6EDC4;
      }
      goto L_08B6EDC0;
    }
L_08B6EDC0:
    aot_gpr_4 = (aot_gpr_7 | 0u);
    goto L_08B6EDC4;
L_08B6EDC4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_08B6ED94;
      }
      goto L_08B6EDCC;
    }
L_08B6EDCC:
    jump_target = ctx.gpr[31];
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
L_08B6EDD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6EE44;
      }
      goto L_08B6EDE8;
    }
L_08B6EDE8:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08B6EDEC;
L_08B6EDEC:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B6EE00;
    }
    goto L_08B6EDF8;
L_08B6EDF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6EEC0;
      }
      goto L_08B6EE00;
    }
L_08B6EE00:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B6EE14;
    }
    goto L_08B6EE0C;
L_08B6EE0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6EEC0;
      }
      goto L_08B6EE14;
    }
L_08B6EE14:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B6EE28;
    }
    goto L_08B6EE20;
L_08B6EE20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6EEC0;
      }
      goto L_08B6EE28;
    }
L_08B6EE28:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B6EE3C;
      }
      goto L_08B6EE34;
    }
L_08B6EE34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6EEC0;
      }
      goto L_08B6EE3C;
    }
L_08B6EE3C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) > 0;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B6EDEC;
      }
      goto L_08B6EE44;
    }
L_08B6EE44:
    aot_gpr_7 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6EE68;
      }
      goto L_08B6EE54;
    }
L_08B6EE54:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) <= 0;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6EEC0;
      }
      goto L_08B6EE5C;
    }
L_08B6EE5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6EEAC;
      }
      goto L_08B6EE64;
    }
L_08B6EE64:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_7) < 3 ? 1u : 0u);
    goto L_08B6EE68;
L_08B6EE68:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6EE90;
      }
      goto L_08B6EE70;
    }
L_08B6EE70:
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6EEC0;
      }
      goto L_08B6EE78;
    }
L_08B6EE78:
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_7 != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B6EE90;
    }
    goto L_08B6EE88;
L_08B6EE88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6EEC0;
      }
      goto L_08B6EE90;
    }
L_08B6EE90:
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_7 != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B6EEA8;
    }
    goto L_08B6EEA0;
L_08B6EEA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6EEC0;
      }
      goto L_08B6EEA8;
    }
L_08B6EEA8:
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B6EEAC;
L_08B6EEAC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 != aot_gpr_6;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6EEC0;
      }
      goto L_08B6EEB8;
    }
L_08B6EEB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6EEC0;
      }
      goto L_08B6EEC0;
    }
L_08B6EEC0:
    jump_target = ctx.gpr[31];
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
L_08B6EEC8:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) < 0;
      if (branch_taken) {
          goto L_08B6EF14;
      }
      goto L_08B6EED4;
    }
L_08B6EED4:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08B6EF14;
      }
      goto L_08B6EEE4;
    }
L_08B6EEE4:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_7 = (aot_gpr_7 + aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B6EF1C;
      }
      goto L_08B6EEFC;
    }
L_08B6EEFC:
    aot_gpr_5 = (aot_gpr_6 << 4u);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + aot_gpr_4);
      if (branch_taken) {
          goto L_08B6EF20;
      }
      goto L_08B6EF14;
    }
L_08B6EF14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B6EF20;
      }
      goto L_08B6EF1C;
    }
L_08B6EF1C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B6EF20;
L_08B6EF20:
    jump_target = ctx.gpr[31];
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
L_08B6EF28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6EF88;
      }
      goto L_08B6EF44;
    }
L_08B6EF44:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08B6EF78;
      }
      goto L_08B6EF50;
    }
L_08B6EF50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08B6EF78;
      }
      goto L_08B6EF60;
    }
L_08B6EF60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_08B6EF78;
    }
    goto L_08B6EF6C;
L_08B6EF6C:
    ctx.gpr[31] = (0x08B6EF74u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6EF74u) goto L_08B6EF74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6EF74:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_08B6EF78;
L_08B6EF78:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6EF88;
      }
      goto L_08B6EF80;
    }
L_08B6EF80:
    ctx.gpr[31] = (0x08B6EF88u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6EF88u) goto L_08B6EF88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6EF88:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6EF9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B6F000;
      }
      goto L_08B6EFB8;
    }
L_08B6EFB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_08B6EFF0;
      }
      goto L_08B6EFC4;
    }
L_08B6EFC4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B6EFD8u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    goto L_08B6F1DC;
L_08B6EFD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_08B6EFF0;
    }
    goto L_08B6EFE4;
L_08B6EFE4:
    ctx.gpr[31] = (0x08B6EFECu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6EFECu) goto L_08B6EFEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6EFEC:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_08B6EFF0;
L_08B6EFF0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6F000;
      }
      goto L_08B6EFF8;
    }
L_08B6EFF8:
    ctx.gpr[31] = (0x08B6F000u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6F000u) goto L_08B6F000;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6F000:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6F014:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_7 = (aot_gpr_5 >> 4u);
    aot_gpr_6 = (0u | 8u);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (0u | 8u);
    aot_gpr_6 = (aot_gpr_6 < ctx.gpr[8] ? 1u : 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B6F054;
      }
      goto L_08B6F048;
    }
L_08B6F048:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6F058;
      }
      goto L_08B6F054;
    }
L_08B6F054:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_08B6F058;
L_08B6F058:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08B6F0C0;
      }
      goto L_08B6F068;
    }
L_08B6F068:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 << 2u);
    ctx.gpr[31] = (0x08B6F080u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6F080u) goto L_08B6F080;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6F080:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
    }
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B6F0BC;
      }
      goto L_08B6F098;
    }
L_08B6F098:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    ctx.gpr[31] = (0x08B6F0ACu);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6F0ACu) goto L_08B6F0AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6F0AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    goto L_08B6F0BC;
L_08B6F0BC:
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    goto L_08B6F0C0;
L_08B6F0C0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[9] - aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 >> 1u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_16 = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_7 << 2u);
    ctx.gpr[17] = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08B6F0FCu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08B6F160;
L_08B6F0FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 & 15u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6F160:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B6F1D0;
      }
      goto L_08B6F178;
    }
L_08B6F178:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (0u | 128u);
    ctx.gpr[31] = (0x08B6F18Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6F18Cu) goto L_08B6F18C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6F18C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B6F1BC;
      }
      goto L_08B6F1A0;
    }
L_08B6F1A0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[31] = (0x08B6F1B0u);
    aot_gpr_4 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6F1B0u) goto L_08B6F1B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6F1B0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08B6F1BC;
L_08B6F1BC:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B6F178;
      }
      goto L_08B6F1D0;
    }
L_08B6F1D0:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
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
L_08B6F1DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6F224;
      }
      goto L_08B6F200;
    }
L_08B6F200:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6F214;
      }
      goto L_08B6F20C;
    }
L_08B6F20C:
    ctx.gpr[31] = (0x08B6F214u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6F214u) goto L_08B6F214;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6F214:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B6F200;
      }
      goto L_08B6F224;
    }
L_08B6F224:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6F238:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-384));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(352), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 ^ ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(356), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08B6F2C8;
      }
      goto L_08B6F280;
    }
L_08B6F280:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_gpr_6 ^ aot_gpr_7);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
        goto L_08B6F2CC;
    }
    goto L_08B6F29C;
L_08B6F29C:
    ctx.gpr[31] = (0x08B6F2A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B6F90C;
L_08B6F2A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6F8E8;
      }
      goto L_08B6F2C8;
    }
L_08B6F2C8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    goto L_08B6F2CC;
L_08B6F2CC:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_7);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_6 << 4u);
    ctx.gpr[9] = (ctx.gpr[10] - ctx.gpr[11]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[2] >> 29u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[18] = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_7 - ctx.gpr[10]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_gpr_7 >> 30u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (ctx.gpr[11] - ctx.gpr[8]);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 3u));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (ctx.gpr[8] >> 29u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 << 4u);
    ctx.gpr[8] = (ctx.gpr[11] - ctx.gpr[10]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 3u));
    ctx.gpr[10] = (ctx.gpr[9] - ctx.gpr[2]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 3u));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.gpr[3] = (ctx.gpr[3] >> 29u);
    ctx.gpr[11] = (ctx.gpr[11] >> 30u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[3]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    aot_gpr_7 = (aot_gpr_7 - ctx.gpr[12]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 3u));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 3u));
    ctx.gpr[19] = (aot_gpr_6 + ctx.gpr[10]);
    aot_gpr_6 = (ctx.gpr[11] >> 29u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    aot_gpr_6 = (aot_gpr_7 + aot_gpr_6);
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    aot_gpr_7 = (ctx.gpr[9] - ctx.gpr[2]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 3u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 3u));
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    ctx.gpr[8] = (ctx.gpr[9] >> 29u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 3u));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[18]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_7 = (aot_gpr_7 >> 31u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
        goto L_08B6F64C;
    }
    goto L_08B6F400;
L_08B6F400:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_7);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(40));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_5);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(56));
    aot_gpr_4 = (aot_gpr_7 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B6F484u);
    aot_gpr_7 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 9u, 0x08A9C198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6F484u) goto L_08B6F484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6F484:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(168));
    ctx.gpr[31] = (0x08B6F4B0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 386u, 0x08A9B124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6F4B0u) goto L_08B6F4B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6F4B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(232), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(216));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(236), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(232));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(248));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(264));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_gpr_7);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 ^ aot_gpr_7);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B6F618;
      }
      goto L_08B6F5C0;
    }
L_08B6F5C0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    goto L_08B6F5C4;
L_08B6F5C4:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[8];
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_7);
      if (branch_taken) {
          goto L_08B6F5FC;
      }
      goto L_08B6F5D8;
    }
L_08B6F5D8:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_gpr_7 = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08B6F5FC;
L_08B6F5FC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 ^ aot_gpr_7);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6F5C4;
      }
      goto L_08B6F618;
    }
L_08B6F618:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08B6F628u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B6F1DC;
L_08B6F628:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6F898;
      }
      goto L_08B6F64C;
    }
L_08B6F64C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_7);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(88));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(120));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(136));
    aot_gpr_4 = (aot_gpr_7 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(104));
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B6F6C8u);
    aot_gpr_7 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 508u, 0x08A9BF74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6F6C8u) goto L_08B6F6C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6F6C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(184));
    ctx.gpr[31] = (0x08B6F6F4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 500u, 0x08A9BEB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6F6F4u) goto L_08B6F6F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6F6F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(284), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(300), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(284));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(304), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(308), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(312), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(316), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(300));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(320), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(324), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(332), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(316));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(332));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(340), aot_gpr_7);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(348), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(344), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 ^ aot_gpr_7);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B6F85C;
      }
      goto L_08B6F804;
    }
L_08B6F804:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    goto L_08B6F808;
L_08B6F808:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[8];
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_7);
      if (branch_taken) {
          goto L_08B6F840;
      }
      goto L_08B6F81C;
    }
L_08B6F81C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_gpr_7 = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08B6F840;
L_08B6F840:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 ^ aot_gpr_7);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B6F808;
      }
      goto L_08B6F85C;
    }
L_08B6F85C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08B6F874u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B6F1DC;
L_08B6F874:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, aot_gpr_7, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_run_words); }
    goto L_08B6F898;
L_08B6F898:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(200));
    ctx.gpr[31] = (0x08B6F8C4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 386u, 0x08A9B124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6F8C4u) goto L_08B6F8C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6F8C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6F8E8;
      }
      goto L_08B6F8E8;
    }
L_08B6F8E8:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(352), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[31] = aot_run_words[6];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
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
L_08B6F90C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B6F980;
      }
      goto L_08B6F938;
    }
L_08B6F938:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6F954;
      }
      goto L_08B6F948;
    }
L_08B6F948:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    goto L_08B6F94C;
L_08B6F94C:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B6F94C;
      }
      goto L_08B6F954;
    }
L_08B6F954:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B6F968;
      }
      goto L_08B6F960;
    }
L_08B6F960:
    ctx.gpr[31] = (0x08B6F968u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6F968u) goto L_08B6F968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6F968:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B6F938;
      }
      goto L_08B6F97C;
    }
L_08B6F97C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    goto L_08B6F980;
L_08B6F980:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 == aot_gpr_6;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B6F9E4;
      }
      goto L_08B6F994;
    }
L_08B6F994:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B6F9B4;
      }
      goto L_08B6F9A8;
    }
L_08B6F9A8:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    goto L_08B6F9AC;
L_08B6F9AC:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B6F9AC;
      }
      goto L_08B6F9B4;
    }
L_08B6F9B4:
    aot_gpr_4 = (aot_gpr_7 | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6F9CC;
      }
      goto L_08B6F9C0;
    }
L_08B6F9C0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    goto L_08B6F9C4;
L_08B6F9C4:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B6F9C4;
      }
      goto L_08B6F9CC;
    }
L_08B6F9CC:
    if (aot_gpr_7 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
        goto L_08B6F9FC;
    }
    goto L_08B6F9D4;
L_08B6F9D4:
    ctx.gpr[31] = (0x08B6F9DCu);
    aot_gpr_4 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6F9DCu) goto L_08B6F9DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6F9DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6F9FC;
      }
      goto L_08B6F9E4;
    }
L_08B6F9E4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6F9F8;
      }
      goto L_08B6F9EC;
    }
L_08B6F9EC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    goto L_08B6F9F0;
L_08B6F9F0:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B6F9F0;
      }
      goto L_08B6F9F8;
    }
L_08B6F9F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08B6F9FC;
L_08B6F9FC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, aot_gpr_7, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_run_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6FA30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[8] >> 30u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (aot_gpr_7 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B6FA8C;
      }
      goto L_08B6FA78;
    }
L_08B6FA78:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[31] = (0x08B6FA88u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 20u, 0x08B70280u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6FA88u) goto L_08B6FA88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6FA88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08B6FA8C;
L_08B6FA8C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (0u | 128u);
    ctx.gpr[31] = (0x08B6FA9Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6FA9Cu) goto L_08B6FA9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6FA9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B6FAC0;
      }
      goto L_08B6FAAC;
    }
L_08B6FAAC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[31] = (0x08B6FAB8u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6FAB8u) goto L_08B6FAB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6FAB8:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08B6FAC0;
L_08B6FAC0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
        goto L_08B6FAE8;
    }
    goto L_08B6FAD4;
L_08B6FAD4:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    goto L_08B6FAE8;
L_08B6FAE8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(128));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_6);
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
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
L_08B6FB14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_7);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_7 >> 30u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B6FB68;
      }
      goto L_08B6FB54;
    }
L_08B6FB54:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[31] = (0x08B6FB64u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 20u, 0x08B70280u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6FB64u) goto L_08B6FB64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6FB64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08B6FB68;
L_08B6FB68:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (0u | 128u);
    ctx.gpr[31] = (0x08B6FB78u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6FB78u) goto L_08B6FB78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6FB78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B6FB9C;
      }
      goto L_08B6FB88;
    }
L_08B6FB88:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[31] = (0x08B6FB94u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6FB94u) goto L_08B6FB94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6FB94:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08B6FB9C;
L_08B6FB9C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(-4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08B6FBDC;
      }
      goto L_08B6FBCC;
    }
L_08B6FBCC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08B6FBDC;
L_08B6FBDC:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
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
L_08B6FBE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
        goto L_08B6FC10;
    }
    goto L_08B6FC04;
L_08B6FC04:
    ctx.gpr[31] = (0x08B6FC0Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6FC0Cu) goto L_08B6FC0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6FC0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    goto L_08B6FC10;
L_08B6FC10:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
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
L_08B6FC40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_16);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_7);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6FC94u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_7);
    goto L_08B6FCFC;
L_08B6FC94:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
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
L_08B6FCFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-320));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(300), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(304), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_gpr_7 - ctx.gpr[9]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[10] = (aot_gpr_6 << 4u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_gpr_6 - aot_gpr_7);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[10] = (ctx.gpr[11] - aot_gpr_5);
    ctx.gpr[11] = (ctx.gpr[2] >> 29u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[11] - ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] >> 30u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[11] >> 29u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] << 4u);
    ctx.gpr[11] = (aot_gpr_6 - aot_gpr_7);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 3u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[2] >> 29u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-16));
    ctx.gpr[9] = (ctx.gpr[9] >> 1u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(308), ctx.gpr[31]);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 4u, 0x08B70018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B6FDE0;
L_08B6FDE0:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_gpr_7 | 0u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[11];
    ctx.gpr[10] = (aot_gpr_7 + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08B6FE24;
      }
      goto L_08B6FDF0;
    }
L_08B6FDF0:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08B6FE1C;
      }
      goto L_08B6FDF8;
    }
L_08B6FDF8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-8));
    goto L_08B6FE1C;
L_08B6FE1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_7);
      if (branch_taken) {
          goto L_08B6FE4C;
      }
      goto L_08B6FE24;
    }
L_08B6FE24:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B6FE34u);
    aot_gpr_5 = (ctx.gpr[9] | 0u);
    goto L_08B6FB14;
L_08B6FE34:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(292)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(296)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    goto L_08B6FE4C;
L_08B6FE4C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_5);
    ctx.gpr[10] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08B6FE94;
      }
      goto L_08B6FE74;
    }
L_08B6FE74:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(128));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[10]);
    goto L_08B6FE94;
L_08B6FE94:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[10] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[9];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_4);
      if (branch_taken) {
          goto L_08B6FEE0;
      }
      goto L_08B6FEBC;
    }
L_08B6FEBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[9]);
    aot_gpr_4 = (ctx.gpr[9] + static_cast<std::uint32_t>(128));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[9]);
    goto L_08B6FEE0;
L_08B6FEE0:
    { const std::uint32_t aot_run_words[4]{aot_gpr_7, ctx.gpr[11], aot_gpr_6, aot_gpr_5};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(244), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(244));
    ctx.gpr[31] = (0x08B6FEFCu);
    aot_gpr_5 = (ctx.gpr[8] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 386u, 0x08A9B124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B6FEFCu) goto L_08B6FEFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B6FEFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, aot_gpr_4, aot_gpr_5};
      aot_mem.aot_direct_store32_block(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_7);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[8];
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_08B6FF9C;
      }
      goto L_08B6FF7C;
    }
L_08B6FF7C:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[8]);
    goto L_08B6FF9C;
L_08B6FF9C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_6);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, ctx.gpr[9], aot_gpr_5};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(52));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(68));
    ctx.pc = 0x08B70000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0218(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0218_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_218(Runtime &runtime) {
    runtime.register_generated_unit(218u, 0x08B6C000u, 16384u, &recomp_unit_0218, &recomp_unit_0218_entry);
    runtime.register_function(0x08B6C000u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C018u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C034u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C038u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C064u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C07Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C088u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C0D8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C0E8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C0ECu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C0FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C104u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C11Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C120u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C128u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C180u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C190u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C1A8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C1B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C1C0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C1D8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C204u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C24Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C280u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C298u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C2A0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C2A8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C2C8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C304u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C32Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C334u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C34Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C350u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C358u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C35Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C3B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C3B8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C3FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C454u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C45Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C474u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C47Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C490u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C494u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C49Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C4ECu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C4F0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C504u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C57Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C588u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C5CCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C5D4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C5DCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C5F0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C5F4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C5FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C608u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C610u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C618u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C620u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C634u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C638u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C640u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C650u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C65Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C6ACu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C6C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C6F8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C708u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C724u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C72Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C738u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C74Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C788u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C790u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C79Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C7B8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C7E4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C7ECu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C808u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C80Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C814u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C828u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C84Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C878u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C898u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C8A4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C8B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C8BCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C8ECu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C924u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C92Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C934u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C948u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C94Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C954u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C984u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C99Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C9C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C9C8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C9D8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C9E4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6C9FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CA0Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CA18u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CA2Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CA38u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CA44u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CA48u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CA54u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CA60u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CA68u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CA70u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CA7Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CA80u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CA88u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CACCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CAF4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CB10u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CB1Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CB24u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CB3Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CB4Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CB58u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CB64u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CB70u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CB7Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CB88u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CBA4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CBBCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CBCCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CBD8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CBE0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CBF0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CBFCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CC00u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CC08u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CC14u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CC28u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CC4Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CC64u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CC68u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CC70u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CCB4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CCE0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CCFCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CD08u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CD10u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CD34u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CD44u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CD50u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CD64u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CD70u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CD7Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CD84u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CD90u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CDB8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CDC0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CDCCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CDE8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CE0Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CE28u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CE34u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CE40u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CE48u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CE58u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CE60u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CE80u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CEDCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CEE4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CF1Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CF20u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CF28u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CF54u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CF60u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CF80u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CF84u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CFB8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CFD0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6CFFCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D008u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D028u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D02Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D060u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D078u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D0A4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D0B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D0D0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D0D4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D108u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D120u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D150u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D15Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D17Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D180u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D1B4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D1CCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D1F4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D200u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D220u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D224u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D258u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D270u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D298u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D2A4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D2B4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D2BCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D2C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D2D0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D2E0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D2E8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D2ECu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D2F4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D2FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D308u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D310u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D318u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D31Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D324u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D32Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D34Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D364u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D37Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D398u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D3A8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D3B8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D3C8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D3E0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D3F0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D3FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D404u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D40Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D418u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D41Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D424u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D430u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D444u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D460u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D470u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D484u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D490u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D49Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D4A4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D4B8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D4D4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D4E4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D4FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D50Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D518u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D520u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D528u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D534u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D538u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D540u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D54Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D560u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D580u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D584u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D590u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D598u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D5A4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D5ACu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D5B8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D5C0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D5CCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D5D4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D5DCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D5FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D604u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D60Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D610u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D618u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D620u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D630u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D638u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D648u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D650u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D654u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D660u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D668u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D670u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D690u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D694u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D6A0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D6A8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D6B4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D6BCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D6C8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D6D0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D6DCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D6E4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D6ECu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D70Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D714u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D71Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D720u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D728u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D730u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D740u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D748u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D758u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D760u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D764u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D770u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D778u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D780u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D794u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D7B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D7C0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D7D0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D7E0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D7F8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D808u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D814u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D81Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D824u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D830u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D834u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D83Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D848u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D85Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D878u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D888u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D89Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D8A8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D8B4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D8BCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D8D0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D8ECu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D904u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D910u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D918u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D92Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D93Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D948u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D958u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D964u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D970u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D978u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D984u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D994u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D9A0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D9ACu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D9B8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D9C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6D9D0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DA08u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DA0Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DA14u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DA24u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DA30u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DA40u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DA4Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DA58u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DA60u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DA6Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DAA4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DAA8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DAB0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DACCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DAE8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DAF4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DB04u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DB10u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DB18u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DB1Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DB24u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DB2Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DB40u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DB50u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DB5Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DB68u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DB74u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DB80u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DB8Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DBACu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DBBCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DBC8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DBD0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DBD8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DBF0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DC0Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DC24u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DC34u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DC40u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DC48u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DC5Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DC68u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DC6Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DC74u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DC7Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DC90u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DCC0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DCF0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DD10u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DD28u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DD34u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DD64u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DD6Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DD74u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DD94u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DD98u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DDA8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DDBCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DDCCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DDD8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DDE4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DDFCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DE1Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DE34u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DE44u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DE4Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DE5Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DE70u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DE80u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DE8Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DE98u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DEB0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DED4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DED8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DEF4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DF1Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DF3Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DF4Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DF5Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DF64u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DF70u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DF88u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DFC4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DFE4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DFF0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DFF4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6DFFCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E008u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E030u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E038u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E040u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E05Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E070u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E098u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E0B4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E0C8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E0D8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E0F8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E134u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E140u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E168u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E184u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E18Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E19Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E1A8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E1CCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E1DCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E1ECu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E214u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E21Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E238u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E240u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E24Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E260u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E27Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E284u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E2A0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E2A8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E2B8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E2C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E2D4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E304u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E328u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E330u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E340u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E34Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E35Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E384u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E3ACu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E3C0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E3DCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E3E4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E400u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E408u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E418u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E428u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E444u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E44Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E454u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E464u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E48Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E4A0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E4BCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E4C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E4E0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E4E8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E4F0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E4FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E50Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E518u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E538u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E564u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E590u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E594u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E5A4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E5B8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E5D8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E5FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E608u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E614u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E628u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E648u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E64Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E664u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E670u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E678u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E684u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E694u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E6B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E6BCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E6C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E6C8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E6DCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E6FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E708u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E71Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E734u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E74Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E774u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E798u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E7A8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E7B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E7BCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E7C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E7C8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E7E8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E7F8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E808u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E814u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E81Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E830u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E848u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E85Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E870u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E87Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E898u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E8ACu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E8E8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E8F8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E908u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E914u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E938u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E974u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E99Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E9C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6E9F0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EA00u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EA0Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EA1Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EA24u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EA38u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EA48u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EA58u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EA5Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EA68u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EA70u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EA88u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EA98u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EA9Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EAC8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EAD8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EAE4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EAF4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EAFCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EB08u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EB0Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EB18u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EB20u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EB50u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EB60u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EB6Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EB74u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EB80u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EB8Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EB94u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EB98u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EBA4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EBB0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EBC0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EBC8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EBD0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EBE4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EBE8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EBF0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EBFCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EC10u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EC18u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EC20u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EC28u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EC3Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EC68u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EC7Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EC80u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EC8Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EC94u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ECA0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ECA8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ECB4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ECBCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ECC8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ECD0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ECD8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ECE8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ECF0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ECF8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ECFCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ED04u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ED0Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ED1Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ED24u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ED34u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ED3Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ED40u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ED4Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ED54u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ED5Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ED70u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ED8Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6ED94u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EDB0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EDC0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EDC4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EDCCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EDD4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EDE8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EDECu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EDF8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE00u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE0Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE14u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE20u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE28u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE34u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE3Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE44u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE54u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE5Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE64u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE68u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE70u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE78u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE88u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EE90u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EEA0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EEA8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EEACu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EEB8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EEC0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EEC8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EED4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EEE4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EEFCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EF14u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EF1Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EF20u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EF28u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EF44u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EF50u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EF60u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EF6Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EF74u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EF78u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EF80u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EF88u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EF9Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EFB8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EFC4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EFD8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EFE4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EFECu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EFF0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6EFF8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F000u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F014u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F048u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F054u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F058u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F068u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F080u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F098u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F0ACu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F0BCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F0C0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F0FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F160u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F178u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F18Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F1A0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F1B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F1BCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F1D0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F1DCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F200u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F20Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F214u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F224u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F238u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F280u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F29Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F2A4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F2C8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F2CCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F400u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F484u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F4B0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F5C0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F5C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F5D8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F5FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F618u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F628u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F64Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F6C8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F6F4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F804u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F808u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F81Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F840u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F85Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F874u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F898u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F8C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F8E8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F90Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F938u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F948u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F94Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F954u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F960u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F968u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F97Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F980u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F994u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F9A8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F9ACu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F9B4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F9C0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F9C4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F9CCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F9D4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F9DCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F9E4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F9ECu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F9F0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F9F8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6F9FCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FA30u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FA78u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FA88u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FA8Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FA9Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FAACu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FAB8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FAC0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FAD4u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FAE8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FB14u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FB54u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FB64u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FB68u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FB78u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FB88u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FB94u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FB9Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FBCCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FBDCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FBE8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FC04u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FC0Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FC10u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FC40u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FC94u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FCFCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FDE0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FDF0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FDF8u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FE1Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FE24u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FE34u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FE4Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FE74u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FE94u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FEBCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FEE0u, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FEFCu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FF7Cu, &recomp_unit_0218, "recomp_unit_0218");
    runtime.register_function(0x08B6FF9Cu, &recomp_unit_0218, "recomp_unit_0218");
}
} // namespace psprecomp
