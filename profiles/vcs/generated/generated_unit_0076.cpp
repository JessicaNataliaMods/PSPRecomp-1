#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include "vcs_config.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static float get_effective_aspect_ratio(float default_aspect) noexcept {
    const vcs::VcsConfiguration &config = vcs::vcs_configuration();
    if (!config.initialized) return default_aspect;
    const vcs::DisplaySurfaceDimensions output =
        vcs::resolve_display_surface_dimensions(config.display);
    const float aspect = vcs::resolve_widescreen_aspect_ratio(config, output.width, output.height);
    return (aspect > 0.0f) ? aspect : default_aspect;
}
static float widen_horizontal_extent(float native_extent) noexcept {
    const vcs::VcsConfiguration &config = vcs::vcs_configuration();
    if (!config.initialized) return native_extent;
    const vcs::DisplaySurfaceDimensions output =
        vcs::resolve_display_surface_dimensions(config.display);
    return native_extent * vcs::widescreen_stretch_factor(config, output.width, output.height);
}
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0076[64] = {
    0x0021009200040A01ull, 0x0C05003622436224ull, 0x0D20441801090100ull, 0x2845081A40242010ull,
    0x44208AA9544248AAull, 0x8080104900115155ull, 0x8840A549042052A4ull, 0x402A90228404280Aull,
    0x825A5A044AAA8434ull, 0xA904841294103480ull, 0xAA00000040000294ull, 0x0000008018200AA8ull,
    0xB455500055020000ull, 0xA114122001809294ull, 0xAA80AA82AD24AE92ull, 0x482580042849042Aull,
    0xA84200A6A8A2A215ull, 0xB0A490296A121616ull, 0x8203524A49215090ull, 0x5042811254242C28ull,
    0x0000001221060008ull, 0x0044080000440400ull, 0x0044080002204000ull, 0x802A809A550A000Aull,
    0x5456924A9224082Aull, 0x8AD248AD24945692ull, 0x09050200AAA4A082ull, 0xA000000000855015ull,
    0x95C8A80410A0A2AAull, 0x0412010552B9155Aull, 0x04214A1282880508ull, 0xAAA5AB55284A812Aull,
    0xAD2AD2880A8AA952ull, 0x802AAA5A555452B4ull, 0x129512248012AAAAull, 0x4080AAD535524080ull,
    0x0220440880A20440ull, 0x544080554A5A5491ull, 0x484440102102A549ull, 0x5555400015541095ull,
    0x49AA404102906093ull, 0x108884152A855555ull, 0x52A8884211111111ull, 0xBA49549A40A954A9ull,
    0x9245010B4922D248ull, 0x11405528085A4916ull, 0x885556E9250A080Aull, 0x425255100043548Aull,
    0x0108C885A00852D5ull, 0x0418000400000000ull, 0x4001003408012400ull, 0x110C950153A495D2ull,
    0x208010B0A142A855ull, 0x0A01581090420085ull, 0x2802550B40010A01ull, 0x245692513A492A80ull,
    0x45692C014010485Aull, 0x5A2AD15512525511ull, 0x2252152A02400400ull, 0xA9493495AA585095ull,
    0x4828492A8A895252ull, 0x0000A02A44AAA228ull, 0x254540000AAAA228ull, 0x094401A54454AAAAull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0076[64] = {
    1u, 10u, 28u, 40u, 54u, 75u, 90u, 108u, 123u, 146u, 163u, 172u, 181u, 196u, 212u, 238u,
    254u, 275u, 298u, 317u, 335u, 342u, 348u, 354u, 371u, 393u, 419u, 435u, 445u, 466u, 487u, 502u,
    529u, 555u, 581u, 602u, 622u, 633u, 655u, 671u, 691u, 710u, 732u, 750u, 777u, 798u, 818u, 841u,
    860u, 879u, 883u, 892u, 916u, 934u, 948u, 963u, 986u, 1005u, 1031u, 1045u, 1072u, 1094u, 1110u, 1128u,
};
void recomp_unit_0076_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,31,5,29,2,6 fprs=12,13,14,15 gpr_occ=3860 fpr_occ=449 gpr_total=5589 fpr_total=595
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[31] = aot_gpr_31; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[2] = aot_gpr_2; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08934000u;
        entry_id = 0u;
        if (entry_delta < 16368u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0076[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0076[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08934000;
    case 2u: goto L_08934024;
    case 3u: goto L_0893402C;
    case 4u: goto L_08934048;
    case 5u: goto L_08934084;
    case 6u: goto L_08934090;
    case 7u: goto L_0893409C;
    case 8u: goto L_089340C0;
    case 9u: goto L_089340D4;
    case 10u: goto L_08934108;
    case 11u: goto L_08934114;
    case 12u: goto L_08934124;
    case 13u: goto L_08934134;
    case 14u: goto L_08934138;
    case 15u: goto L_08934140;
    case 16u: goto L_08934144;
    case 17u: goto L_08934158;
    case 18u: goto L_08934164;
    case 19u: goto L_08934174;
    case 20u: goto L_08934184;
    case 21u: goto L_08934188;
    case 22u: goto L_08934190;
    case 23u: goto L_08934194;
    case 24u: goto L_089341C0;
    case 25u: goto L_089341C8;
    case 26u: goto L_089341E8;
    case 27u: goto L_089341EC;
    case 28u: goto L_08934220;
    case 29u: goto L_08934240;
    case 30u: goto L_0893424C;
    case 31u: goto L_08934260;
    case 32u: goto L_0893428C;
    case 33u: goto L_08934290;
    case 34u: goto L_089342A8;
    case 35u: goto L_089342B8;
    case 36u: goto L_089342D4;
    case 37u: goto L_089342E0;
    case 38u: goto L_089342E8;
    case 39u: goto L_089342EC;
    case 40u: goto L_08934310;
    case 41u: goto L_08934334;
    case 42u: goto L_08934348;
    case 43u: goto L_08934354;
    case 44u: goto L_08934378;
    case 45u: goto L_08934384;
    case 46u: goto L_0893438C;
    case 47u: goto L_08934390;
    case 48u: goto L_089343AC;
    case 49u: goto L_089343C0;
    case 50u: goto L_089343C8;
    case 51u: goto L_089343D8;
    case 52u: goto L_089343EC;
    case 53u: goto L_089343F4;
    case 54u: goto L_08934404;
    case 55u: goto L_0893440C;
    case 56u: goto L_08934414;
    case 57u: goto L_0893441C;
    case 58u: goto L_0893442C;
    case 59u: goto L_08934438;
    case 60u: goto L_08934444;
    case 61u: goto L_08934458;
    case 62u: goto L_08934468;
    case 63u: goto L_08934470;
    case 64u: goto L_08934478;
    case 65u: goto L_08934480;
    case 66u: goto L_0893448C;
    case 67u: goto L_08934494;
    case 68u: goto L_0893449C;
    case 69u: goto L_089344A4;
    case 70u: goto L_089344AC;
    case 71u: goto L_089344BC;
    case 72u: goto L_089344D4;
    case 73u: goto L_089344E8;
    case 74u: goto L_089344F8;
    case 75u: goto L_08934500;
    case 76u: goto L_08934508;
    case 77u: goto L_08934510;
    case 78u: goto L_08934518;
    case 79u: goto L_08934520;
    case 80u: goto L_08934530;
    case 81u: goto L_08934538;
    case 82u: goto L_08934540;
    case 83u: goto L_08934550;
    case 84u: goto L_08934580;
    case 85u: goto L_0893458C;
    case 86u: goto L_08934598;
    case 87u: goto L_089345B0;
    case 88u: goto L_089345DC;
    case 89u: goto L_089345FC;
    case 90u: goto L_08934608;
    case 91u: goto L_08934614;
    case 92u: goto L_0893461C;
    case 93u: goto L_08934624;
    case 94u: goto L_08934630;
    case 95u: goto L_08934638;
    case 96u: goto L_08934654;
    case 97u: goto L_08934668;
    case 98u: goto L_08934680;
    case 99u: goto L_0893468C;
    case 100u: goto L_08934698;
    case 101u: goto L_089346A0;
    case 102u: goto L_089346A8;
    case 103u: goto L_089346B4;
    case 104u: goto L_089346BC;
    case 105u: goto L_089346D8;
    case 106u: goto L_089346EC;
    case 107u: goto L_089346FC;
    case 108u: goto L_08934704;
    case 109u: goto L_0893470C;
    case 110u: goto L_0893472C;
    case 111u: goto L_08934734;
    case 112u: goto L_08934748;
    case 113u: goto L_08934768;
    case 114u: goto L_0893477C;
    case 115u: goto L_08934784;
    case 116u: goto L_08934794;
    case 117u: goto L_089347B0;
    case 118u: goto L_089347BC;
    case 119u: goto L_089347C4;
    case 120u: goto L_089347CC;
    case 121u: goto L_089347D4;
    case 122u: goto L_089347F8;
    case 123u: goto L_08934808;
    case 124u: goto L_08934810;
    case 125u: goto L_08934814;
    case 126u: goto L_08934828;
    case 127u: goto L_0893483C;
    case 128u: goto L_08934844;
    case 129u: goto L_0893484C;
    case 130u: goto L_08934854;
    case 131u: goto L_0893485C;
    case 132u: goto L_08934864;
    case 133u: goto L_0893486C;
    case 134u: goto L_08934878;
    case 135u: goto L_08934888;
    case 136u: goto L_089348A4;
    case 137u: goto L_089348AC;
    case 138u: goto L_089348B0;
    case 139u: goto L_089348B8;
    case 140u: goto L_089348C4;
    case 141u: goto L_089348CC;
    case 142u: goto L_089348D0;
    case 143u: goto L_089348D8;
    case 144u: goto L_089348E4;
    case 145u: goto L_089348FC;
    case 146u: goto L_0893491C;
    case 147u: goto L_08934928;
    case 148u: goto L_08934930;
    case 149u: goto L_08934934;
    case 150u: goto L_08934950;
    case 151u: goto L_08934968;
    case 152u: goto L_08934970;
    case 153u: goto L_0893497C;
    case 154u: goto L_08934984;
    case 155u: goto L_08934990;
    case 156u: goto L_089349A8;
    case 157u: goto L_089349BC;
    case 158u: goto L_089349C8;
    case 159u: goto L_089349E0;
    case 160u: goto L_089349EC;
    case 161u: goto L_089349F4;
    case 162u: goto L_089349FC;
    case 163u: goto L_08934A08;
    case 164u: goto L_08934A10;
    case 165u: goto L_08934A1C;
    case 166u: goto L_08934A24;
    case 167u: goto L_08934A78;
    case 168u: goto L_08934AE4;
    case 169u: goto L_08934AEC;
    case 170u: goto L_08934AF4;
    case 171u: goto L_08934AFC;
    case 172u: goto L_08934B0C;
    case 173u: goto L_08934B14;
    case 174u: goto L_08934B1C;
    case 175u: goto L_08934B24;
    case 176u: goto L_08934B2C;
    case 177u: goto L_08934B54;
    case 178u: goto L_08934B6C;
    case 179u: goto L_08934B70;
    case 180u: goto L_08934B9C;
    case 181u: goto L_08934C44;
    case 182u: goto L_08934C60;
    case 183u: goto L_08934C68;
    case 184u: goto L_08934C70;
    case 185u: goto L_08934C78;
    case 186u: goto L_08934CB0;
    case 187u: goto L_08934CB8;
    case 188u: goto L_08934CC0;
    case 189u: goto L_08934CC8;
    case 190u: goto L_08934CD0;
    case 191u: goto L_08934CD8;
    case 192u: goto L_08934CE8;
    case 193u: goto L_08934CF0;
    case 194u: goto L_08934CF4;
    case 195u: goto L_08934CFC;
    case 196u: goto L_08934D08;
    case 197u: goto L_08934D10;
    case 198u: goto L_08934D1C;
    case 199u: goto L_08934D24;
    case 200u: goto L_08934D30;
    case 201u: goto L_08934D3C;
    case 202u: goto L_08934D5C;
    case 203u: goto L_08934D60;
    case 204u: goto L_08934D94;
    case 205u: goto L_08934DA4;
    case 206u: goto L_08934DB0;
    case 207u: goto L_08934DC8;
    case 208u: goto L_08934DD0;
    case 209u: goto L_08934DE0;
    case 210u: goto L_08934DF4;
    case 211u: goto L_08934DFC;
    case 212u: goto L_08934E04;
    case 213u: goto L_08934E10;
    case 214u: goto L_08934E1C;
    case 215u: goto L_08934E24;
    case 216u: goto L_08934E28;
    case 217u: goto L_08934E2C;
    case 218u: goto L_08934E34;
    case 219u: goto L_08934E3C;
    case 220u: goto L_08934E48;
    case 221u: goto L_08934E54;
    case 222u: goto L_08934E60;
    case 223u: goto L_08934E68;
    case 224u: goto L_08934E6C;
    case 225u: goto L_08934E74;
    case 226u: goto L_08934E7C;
    case 227u: goto L_08934E84;
    case 228u: goto L_08934E9C;
    case 229u: goto L_08934EA4;
    case 230u: goto L_08934EAC;
    case 231u: goto L_08934EB4;
    case 232u: goto L_08934EBC;
    case 233u: goto L_08934EDC;
    case 234u: goto L_08934EE4;
    case 235u: goto L_08934EEC;
    case 236u: goto L_08934EF4;
    case 237u: goto L_08934EFC;
    case 238u: goto L_08934F04;
    case 239u: goto L_08934F0C;
    case 240u: goto L_08934F14;
    case 241u: goto L_08934F28;
    case 242u: goto L_08934F40;
    case 243u: goto L_08934F4C;
    case 244u: goto L_08934F58;
    case 245u: goto L_08934F6C;
    case 246u: goto L_08934F74;
    case 247u: goto L_08934F88;
    case 248u: goto L_08934FBC;
    case 249u: goto L_08934FC0;
    case 250u: goto L_08934FC8;
    case 251u: goto L_08934FD4;
    case 252u: goto L_08934FEC;
    case 253u: goto L_08934FF8;
    case 254u: goto L_08935000;
    case 255u: goto L_08935008;
    case 256u: goto L_08935010;
    case 257u: goto L_08935024;
    case 258u: goto L_08935034;
    case 259u: goto L_0893503C;
    case 260u: goto L_08935044;
    case 261u: goto L_08935054;
    case 262u: goto L_0893505C;
    case 263u: goto L_0893506C;
    case 264u: goto L_08935074;
    case 265u: goto L_0893507C;
    case 266u: goto L_08935084;
    case 267u: goto L_08935088;
    case 268u: goto L_08935094;
    case 269u: goto L_0893509C;
    case 270u: goto L_089350C4;
    case 271u: goto L_089350D8;
    case 272u: goto L_089350EC;
    case 273u: goto L_089350F4;
    case 274u: goto L_089350FC;
    case 275u: goto L_08935104;
    case 276u: goto L_08935108;
    case 277u: goto L_08935110;
    case 278u: goto L_08935124;
    case 279u: goto L_08935128;
    case 280u: goto L_08935130;
    case 281u: goto L_08935144;
    case 282u: goto L_08935150;
    case 283u: goto L_08935164;
    case 284u: goto L_0893516C;
    case 285u: goto L_08935174;
    case 286u: goto L_08935178;
    case 287u: goto L_08935180;
    case 288u: goto L_0893518C;
    case 289u: goto L_08935194;
    case 290u: goto L_089351B0;
    case 291u: goto L_089351BC;
    case 292u: goto L_089351C8;
    case 293u: goto L_089351D4;
    case 294u: goto L_089351DC;
    case 295u: goto L_089351F0;
    case 296u: goto L_089351F4;
    case 297u: goto L_089351FC;
    case 298u: goto L_08935210;
    case 299u: goto L_0893521C;
    case 300u: goto L_08935230;
    case 301u: goto L_08935238;
    case 302u: goto L_08935240;
    case 303u: goto L_08935254;
    case 304u: goto L_08935260;
    case 305u: goto L_0893526C;
    case 306u: goto L_08935278;
    case 307u: goto L_08935284;
    case 308u: goto L_0893528C;
    case 309u: goto L_08935298;
    case 310u: goto L_089352A4;
    case 311u: goto L_089352B0;
    case 312u: goto L_089352B8;
    case 313u: goto L_089352C0;
    case 314u: goto L_089352C4;
    case 315u: goto L_089352E4;
    case 316u: goto L_089352FC;
    case 317u: goto L_0893530C;
    case 318u: goto L_08935314;
    case 319u: goto L_08935328;
    case 320u: goto L_0893532C;
    case 321u: goto L_08935334;
    case 322u: goto L_08935348;
    case 323u: goto L_08935354;
    case 324u: goto L_08935368;
    case 325u: goto L_08935370;
    case 326u: goto L_08935378;
    case 327u: goto L_08935384;
    case 328u: goto L_08935390;
    case 329u: goto L_089353A0;
    case 330u: goto L_089353BC;
    case 331u: goto L_089353C4;
    case 332u: goto L_089353D8;
    case 333u: goto L_089353F0;
    case 334u: goto L_089353F8;
    case 335u: goto L_0893540C;
    case 336u: goto L_08935444;
    case 337u: goto L_08935448;
    case 338u: goto L_08935460;
    case 339u: goto L_08935474;
    case 340u: goto L_08935484;
    case 341u: goto L_08935490;
    case 342u: goto L_08935528;
    case 343u: goto L_08935548;
    case 344u: goto L_08935558;
    case 345u: goto L_089355AC;
    case 346u: goto L_089355C8;
    case 347u: goto L_089355D8;
    case 348u: goto L_08935638;
    case 349u: goto L_08935654;
    case 350u: goto L_08935664;
    case 351u: goto L_089356AC;
    case 352u: goto L_089356C8;
    case 353u: goto L_089356D8;
    case 354u: goto L_08935704;
    case 355u: goto L_0893570C;
    case 356u: goto L_08935744;
    case 357u: goto L_0893574C;
    case 358u: goto L_08935760;
    case 359u: goto L_08935768;
    case 360u: goto L_08935770;
    case 361u: goto L_08935778;
    case 362u: goto L_08935784;
    case 363u: goto L_0893578C;
    case 364u: goto L_08935790;
    case 365u: goto L_0893579C;
    case 366u: goto L_089357BC;
    case 367u: goto L_089357C4;
    case 368u: goto L_089357CC;
    case 369u: goto L_089357D4;
    case 370u: goto L_089357FC;
    case 371u: goto L_08935804;
    case 372u: goto L_0893580C;
    case 373u: goto L_08935814;
    case 374u: goto L_0893582C;
    case 375u: goto L_08935848;
    case 376u: goto L_08935854;
    case 377u: goto L_08935864;
    case 378u: goto L_08935870;
    case 379u: goto L_0893587C;
    case 380u: goto L_08935884;
    case 381u: goto L_0893588C;
    case 382u: goto L_08935898;
    case 383u: goto L_089358A4;
    case 384u: goto L_089358B0;
    case 385u: goto L_089358BC;
    case 386u: goto L_089358C4;
    case 387u: goto L_089358C8;
    case 388u: goto L_089358D0;
    case 389u: goto L_089358D8;
    case 390u: goto L_089358E8;
    case 391u: goto L_089358F0;
    case 392u: goto L_089358F8;
    case 393u: goto L_08935904;
    case 394u: goto L_08935910;
    case 395u: goto L_0893591C;
    case 396u: goto L_08935924;
    case 397u: goto L_08935928;
    case 398u: goto L_08935930;
    case 399u: goto L_08935938;
    case 400u: goto L_08935948;
    case 401u: goto L_08935950;
    case 402u: goto L_0893595C;
    case 403u: goto L_08935968;
    case 404u: goto L_08935974;
    case 405u: goto L_08935980;
    case 406u: goto L_08935988;
    case 407u: goto L_0893598C;
    case 408u: goto L_08935994;
    case 409u: goto L_0893599C;
    case 410u: goto L_089359AC;
    case 411u: goto L_089359B8;
    case 412u: goto L_089359C4;
    case 413u: goto L_089359D0;
    case 414u: goto L_089359D8;
    case 415u: goto L_089359DC;
    case 416u: goto L_089359E4;
    case 417u: goto L_089359EC;
    case 418u: goto L_089359FC;
    case 419u: goto L_08935A04;
    case 420u: goto L_08935A1C;
    case 421u: goto L_08935A34;
    case 422u: goto L_08935A3C;
    case 423u: goto L_08935A48;
    case 424u: goto L_08935A54;
    case 425u: goto L_08935A5C;
    case 426u: goto L_08935A64;
    case 427u: goto L_08935A6C;
    case 428u: goto L_08935A74;
    case 429u: goto L_08935A7C;
    case 430u: goto L_08935AA4;
    case 431u: goto L_08935AC0;
    case 432u: goto L_08935AC8;
    case 433u: goto L_08935AE0;
    case 434u: goto L_08935AEC;
    case 435u: goto L_08935B00;
    case 436u: goto L_08935B08;
    case 437u: goto L_08935B10;
    case 438u: goto L_08935B30;
    case 439u: goto L_08935B38;
    case 440u: goto L_08935B40;
    case 441u: goto L_08935B48;
    case 442u: goto L_08935B5C;
    case 443u: goto L_08935BF4;
    case 444u: goto L_08935BFC;
    case 445u: goto L_08935C04;
    case 446u: goto L_08935C0C;
    case 447u: goto L_08935C14;
    case 448u: goto L_08935C1C;
    case 449u: goto L_08935C24;
    case 450u: goto L_08935C34;
    case 451u: goto L_08935C3C;
    case 452u: goto L_08935C54;
    case 453u: goto L_08935C5C;
    case 454u: goto L_08935C70;
    case 455u: goto L_08935C88;
    case 456u: goto L_08935CAC;
    case 457u: goto L_08935CB4;
    case 458u: goto L_08935CBC;
    case 459u: goto L_08935CCC;
    case 460u: goto L_08935CD8;
    case 461u: goto L_08935CDC;
    case 462u: goto L_08935CE0;
    case 463u: goto L_08935CE8;
    case 464u: goto L_08935CF0;
    case 465u: goto L_08935CFC;
    case 466u: goto L_08935D04;
    case 467u: goto L_08935D0C;
    case 468u: goto L_08935D10;
    case 469u: goto L_08935D18;
    case 470u: goto L_08935D20;
    case 471u: goto L_08935D28;
    case 472u: goto L_08935D30;
    case 473u: goto L_08935D40;
    case 474u: goto L_08935D4C;
    case 475u: goto L_08935D50;
    case 476u: goto L_08935D54;
    case 477u: goto L_08935D5C;
    case 478u: goto L_08935D64;
    case 479u: goto L_08935D70;
    case 480u: goto L_08935D78;
    case 481u: goto L_08935D80;
    case 482u: goto L_08935D88;
    case 483u: goto L_08935DA0;
    case 484u: goto L_08935DC4;
    case 485u: goto L_08935DD0;
    case 486u: goto L_08935DE8;
    case 487u: goto L_08935E0C;
    case 488u: goto L_08935E20;
    case 489u: goto L_08935E28;
    case 490u: goto L_08935E4C;
    case 491u: goto L_08935E5C;
    case 492u: goto L_08935E64;
    case 493u: goto L_08935E7C;
    case 494u: goto L_08935E84;
    case 495u: goto L_08935E90;
    case 496u: goto L_08935EA4;
    case 497u: goto L_08935EAC;
    case 498u: goto L_08935EB8;
    case 499u: goto L_08935EC0;
    case 500u: goto L_08935ED4;
    case 501u: goto L_08935EE8;
    case 502u: goto L_08935F04;
    case 503u: goto L_08935F0C;
    case 504u: goto L_08935F14;
    case 505u: goto L_08935F20;
    case 506u: goto L_08935F3C;
    case 507u: goto L_08935F44;
    case 508u: goto L_08935F4C;
    case 509u: goto L_08935F58;
    case 510u: goto L_08935F6C;
    case 511u: goto L_08935F74;
    case 512u: goto L_08935F80;
    case 513u: goto L_08935F88;
    case 514u: goto L_08935F90;
    case 515u: goto L_08935F98;
    case 516u: goto L_08935FA0;
    case 517u: goto L_08935FA4;
    case 518u: goto L_08935FAC;
    case 519u: goto L_08935FB4;
    case 520u: goto L_08935FBC;
    case 521u: goto L_08935FC0;
    case 522u: goto L_08935FC8;
    case 523u: goto L_08935FD4;
    case 524u: goto L_08935FDC;
    case 525u: goto L_08935FE4;
    case 526u: goto L_08935FEC;
    case 527u: goto L_08935FF4;
    case 528u: goto L_08935FFC;
    case 529u: goto L_08936004;
    case 530u: goto L_08936010;
    case 531u: goto L_08936018;
    case 532u: goto L_08936020;
    case 533u: goto L_0893602C;
    case 534u: goto L_08936034;
    case 535u: goto L_0893603C;
    case 536u: goto L_08936044;
    case 537u: goto L_0893604C;
    case 538u: goto L_0893605C;
    case 539u: goto L_08936064;
    case 540u: goto L_0893606C;
    case 541u: goto L_0893608C;
    case 542u: goto L_0893609C;
    case 543u: goto L_089360A4;
    case 544u: goto L_089360B0;
    case 545u: goto L_089360B8;
    case 546u: goto L_089360BC;
    case 547u: goto L_089360C4;
    case 548u: goto L_089360CC;
    case 549u: goto L_089360D4;
    case 550u: goto L_089360E0;
    case 551u: goto L_089360E8;
    case 552u: goto L_089360EC;
    case 553u: goto L_089360F4;
    case 554u: goto L_089360FC;
    case 555u: goto L_08936108;
    case 556u: goto L_08936110;
    case 557u: goto L_08936114;
    case 558u: goto L_0893611C;
    case 559u: goto L_08936124;
    case 560u: goto L_08936130;
    case 561u: goto L_08936138;
    case 562u: goto L_08936148;
    case 563u: goto L_08936150;
    case 564u: goto L_08936158;
    case 565u: goto L_08936160;
    case 566u: goto L_08936168;
    case 567u: goto L_08936170;
    case 568u: goto L_08936178;
    case 569u: goto L_08936184;
    case 570u: goto L_0893618C;
    case 571u: goto L_08936190;
    case 572u: goto L_08936198;
    case 573u: goto L_089361A4;
    case 574u: goto L_089361AC;
    case 575u: goto L_089361B4;
    case 576u: goto L_089361BC;
    case 577u: goto L_089361C4;
    case 578u: goto L_089361CC;
    case 579u: goto L_089361D4;
    case 580u: goto L_089361FC;
    case 581u: goto L_08936204;
    case 582u: goto L_0893620C;
    case 583u: goto L_08936214;
    case 584u: goto L_0893621C;
    case 585u: goto L_08936224;
    case 586u: goto L_0893622C;
    case 587u: goto L_08936234;
    case 588u: goto L_0893623C;
    case 589u: goto L_08936244;
    case 590u: goto L_08936250;
    case 591u: goto L_0893627C;
    case 592u: goto L_08936288;
    case 593u: goto L_08936294;
    case 594u: goto L_089362A4;
    case 595u: goto L_089362B0;
    case 596u: goto L_089362C0;
    case 597u: goto L_089362C8;
    case 598u: goto L_089362D0;
    case 599u: goto L_089362DC;
    case 600u: goto L_089362E4;
    case 601u: goto L_089362F0;
    case 602u: goto L_0893631C;
    case 603u: goto L_08936338;
    case 604u: goto L_08936344;
    case 605u: goto L_08936350;
    case 606u: goto L_08936358;
    case 607u: goto L_08936360;
    case 608u: goto L_08936368;
    case 609u: goto L_08936370;
    case 610u: goto L_08936374;
    case 611u: goto L_08936380;
    case 612u: goto L_08936388;
    case 613u: goto L_08936390;
    case 614u: goto L_08936398;
    case 615u: goto L_0893639C;
    case 616u: goto L_089363A4;
    case 617u: goto L_089363AC;
    case 618u: goto L_089363B4;
    case 619u: goto L_089363BC;
    case 620u: goto L_089363DC;
    case 621u: goto L_089363F8;
    case 622u: goto L_08936418;
    case 623u: goto L_08936428;
    case 624u: goto L_08936444;
    case 625u: goto L_08936454;
    case 626u: goto L_0893645C;
    case 627u: goto L_0893647C;
    case 628u: goto L_0893648C;
    case 629u: goto L_089364A8;
    case 630u: goto L_089364B8;
    case 631u: goto L_089364D4;
    case 632u: goto L_089364E4;
    case 633u: goto L_08936500;
    case 634u: goto L_08936510;
    case 635u: goto L_0893651C;
    case 636u: goto L_08936528;
    case 637u: goto L_08936530;
    case 638u: goto L_08936538;
    case 639u: goto L_08936544;
    case 640u: goto L_0893654C;
    case 641u: goto L_08936550;
    case 642u: goto L_08936558;
    case 643u: goto L_08936564;
    case 644u: goto L_0893656C;
    case 645u: goto L_08936578;
    case 646u: goto L_08936580;
    case 647u: goto L_08936588;
    case 648u: goto L_08936590;
    case 649u: goto L_08936598;
    case 650u: goto L_089365BC;
    case 651u: goto L_089365D8;
    case 652u: goto L_089365E8;
    case 653u: goto L_089365F0;
    case 654u: goto L_089365F8;
    case 655u: goto L_08936600;
    case 656u: goto L_0893660C;
    case 657u: goto L_08936618;
    case 658u: goto L_08936620;
    case 659u: goto L_08936628;
    case 660u: goto L_08936634;
    case 661u: goto L_0893663C;
    case 662u: goto L_08936644;
    case 663u: goto L_08936660;
    case 664u: goto L_08936674;
    case 665u: goto L_08936690;
    case 666u: goto L_089366B8;
    case 667u: goto L_089366C8;
    case 668u: goto L_089366D8;
    case 669u: goto L_089366EC;
    case 670u: goto L_089366F8;
    case 671u: goto L_08936700;
    case 672u: goto L_08936708;
    case 673u: goto L_08936710;
    case 674u: goto L_0893671C;
    case 675u: goto L_08936730;
    case 676u: goto L_08936748;
    case 677u: goto L_08936750;
    case 678u: goto L_08936758;
    case 679u: goto L_08936760;
    case 680u: goto L_08936768;
    case 681u: goto L_08936770;
    case 682u: goto L_089367B8;
    case 683u: goto L_089367C0;
    case 684u: goto L_089367C8;
    case 685u: goto L_089367D0;
    case 686u: goto L_089367D8;
    case 687u: goto L_089367E0;
    case 688u: goto L_089367E8;
    case 689u: goto L_089367F0;
    case 690u: goto L_089367F8;
    case 691u: goto L_08936800;
    case 692u: goto L_08936804;
    case 693u: goto L_08936810;
    case 694u: goto L_0893681C;
    case 695u: goto L_08936834;
    case 696u: goto L_08936838;
    case 697u: goto L_08936850;
    case 698u: goto L_0893685C;
    case 699u: goto L_08936864;
    case 700u: goto L_08936880;
    case 701u: goto L_08936898;
    case 702u: goto L_089368B8;
    case 703u: goto L_089368C4;
    case 704u: goto L_089368CC;
    case 705u: goto L_089368D4;
    case 706u: goto L_089368DC;
    case 707u: goto L_089368E0;
    case 708u: goto L_089368EC;
    case 709u: goto L_089368F8;
    case 710u: goto L_08936900;
    case 711u: goto L_08936908;
    case 712u: goto L_08936910;
    case 713u: goto L_08936918;
    case 714u: goto L_08936920;
    case 715u: goto L_08936928;
    case 716u: goto L_08936930;
    case 717u: goto L_08936938;
    case 718u: goto L_08936940;
    case 719u: goto L_08936948;
    case 720u: goto L_0893695C;
    case 721u: goto L_08936964;
    case 722u: goto L_0893696C;
    case 723u: goto L_08936974;
    case 724u: goto L_08936980;
    case 725u: goto L_08936988;
    case 726u: goto L_08936990;
    case 727u: goto L_089369A8;
    case 728u: goto L_089369BC;
    case 729u: goto L_089369CC;
    case 730u: goto L_089369DC;
    case 731u: goto L_089369F0;
    case 732u: goto L_08936A00;
    case 733u: goto L_08936A10;
    case 734u: goto L_08936A20;
    case 735u: goto L_08936A30;
    case 736u: goto L_08936A40;
    case 737u: goto L_08936A50;
    case 738u: goto L_08936A60;
    case 739u: goto L_08936A70;
    case 740u: goto L_08936A84;
    case 741u: goto L_08936A98;
    case 742u: goto L_08936AAC;
    case 743u: goto L_08936ABC;
    case 744u: goto L_08936ACC;
    case 745u: goto L_08936AD4;
    case 746u: goto L_08936ADC;
    case 747u: goto L_08936AE4;
    case 748u: goto L_08936AF0;
    case 749u: goto L_08936AF8;
    case 750u: goto L_08936B00;
    case 751u: goto L_08936B0C;
    case 752u: goto L_08936B14;
    case 753u: goto L_08936B1C;
    case 754u: goto L_08936B28;
    case 755u: goto L_08936B30;
    case 756u: goto L_08936B38;
    case 757u: goto L_08936B40;
    case 758u: goto L_08936B4C;
    case 759u: goto L_08936B54;
    case 760u: goto L_08936B5C;
    case 761u: goto L_08936B78;
    case 762u: goto L_08936B84;
    case 763u: goto L_08936B8C;
    case 764u: goto L_08936B90;
    case 765u: goto L_08936B9C;
    case 766u: goto L_08936BA8;
    case 767u: goto L_08936BB0;
    case 768u: goto L_08936BB8;
    case 769u: goto L_08936BC0;
    case 770u: goto L_08936BCC;
    case 771u: goto L_08936BD8;
    case 772u: goto L_08936BE4;
    case 773u: goto L_08936BEC;
    case 774u: goto L_08936BF0;
    case 775u: goto L_08936BF4;
    case 776u: goto L_08936BFC;
    case 777u: goto L_08936C0C;
    case 778u: goto L_08936C18;
    case 779u: goto L_08936C24;
    case 780u: goto L_08936C30;
    case 781u: goto L_08936C38;
    case 782u: goto L_08936C3C;
    case 783u: goto L_08936C44;
    case 784u: goto L_08936C54;
    case 785u: goto L_08936C60;
    case 786u: goto L_08936C6C;
    case 787u: goto L_08936C78;
    case 788u: goto L_08936C80;
    case 789u: goto L_08936C84;
    case 790u: goto L_08936C8C;
    case 791u: goto L_08936CA0;
    case 792u: goto L_08936CC0;
    case 793u: goto L_08936CC8;
    case 794u: goto L_08936CD8;
    case 795u: goto L_08936CE4;
    case 796u: goto L_08936CF0;
    case 797u: goto L_08936CFC;
    case 798u: goto L_08936D04;
    case 799u: goto L_08936D08;
    case 800u: goto L_08936D10;
    case 801u: goto L_08936D20;
    case 802u: goto L_08936D2C;
    case 803u: goto L_08936D38;
    case 804u: goto L_08936D44;
    case 805u: goto L_08936D4C;
    case 806u: goto L_08936D50;
    case 807u: goto L_08936D58;
    case 808u: goto L_08936D6C;
    case 809u: goto L_08936D8C;
    case 810u: goto L_08936D94;
    case 811u: goto L_08936DA0;
    case 812u: goto L_08936DA8;
    case 813u: goto L_08936DB0;
    case 814u: goto L_08936DB8;
    case 815u: goto L_08936DD8;
    case 816u: goto L_08936DE0;
    case 817u: goto L_08936DF0;
    case 818u: goto L_08936E04;
    case 819u: goto L_08936E0C;
    case 820u: goto L_08936E2C;
    case 821u: goto L_08936E44;
    case 822u: goto L_08936E4C;
    case 823u: goto L_08936E60;
    case 824u: goto L_08936E68;
    case 825u: goto L_08936E74;
    case 826u: goto L_08936E80;
    case 827u: goto L_08936E8C;
    case 828u: goto L_08936E94;
    case 829u: goto L_08936E98;
    case 830u: goto L_08936E9C;
    case 831u: goto L_08936EA4;
    case 832u: goto L_08936EA8;
    case 833u: goto L_08936EB0;
    case 834u: goto L_08936EB8;
    case 835u: goto L_08936EC0;
    case 836u: goto L_08936EC8;
    case 837u: goto L_08936ED0;
    case 838u: goto L_08936ED8;
    case 839u: goto L_08936EEC;
    case 840u: goto L_08936EFC;
    case 841u: goto L_08936F04;
    case 842u: goto L_08936F0C;
    case 843u: goto L_08936F1C;
    case 844u: goto L_08936F28;
    case 845u: goto L_08936F30;
    case 846u: goto L_08936F38;
    case 847u: goto L_08936F40;
    case 848u: goto L_08936F44;
    case 849u: goto L_08936F58;
    case 850u: goto L_08936F90;
    case 851u: goto L_08936FA0;
    case 852u: goto L_08936FA8;
    case 853u: goto L_08936FB0;
    case 854u: goto L_08936FB8;
    case 855u: goto L_08936FC4;
    case 856u: goto L_08936FD0;
    case 857u: goto L_08936FD8;
    case 858u: goto L_08936FE4;
    case 859u: goto L_08936FF8;
    case 860u: goto L_08937000;
    case 861u: goto L_08937008;
    case 862u: goto L_08937010;
    case 863u: goto L_08937018;
    case 864u: goto L_0893701C;
    case 865u: goto L_08937024;
    case 866u: goto L_08937030;
    case 867u: goto L_08937038;
    case 868u: goto L_0893704C;
    case 869u: goto L_08937074;
    case 870u: goto L_0893707C;
    case 871u: goto L_08937080;
    case 872u: goto L_08937088;
    case 873u: goto L_0893709C;
    case 874u: goto L_089370AC;
    case 875u: goto L_089370B8;
    case 876u: goto L_089370BC;
    case 877u: goto L_089370CC;
    case 878u: goto L_089370E0;
    case 879u: goto L_08937188;
    case 880u: goto L_089371CC;
    case 881u: goto L_089371D0;
    case 882u: goto L_089371E8;
    case 883u: goto L_08937228;
    case 884u: goto L_08937234;
    case 885u: goto L_08937240;
    case 886u: goto L_0893726C;
    case 887u: goto L_08937288;
    case 888u: goto L_08937290;
    case 889u: goto L_08937294;
    case 890u: goto L_089372C0;
    case 891u: goto L_089372F8;
    case 892u: goto L_08937304;
    case 893u: goto L_08937310;
    case 894u: goto L_08937318;
    case 895u: goto L_0893731C;
    case 896u: goto L_08937320;
    case 897u: goto L_08937328;
    case 898u: goto L_08937330;
    case 899u: goto L_0893733C;
    case 900u: goto L_08937348;
    case 901u: goto L_08937354;
    case 902u: goto L_0893735C;
    case 903u: goto L_08937360;
    case 904u: goto L_08937364;
    case 905u: goto L_08937370;
    case 906u: goto L_08937378;
    case 907u: goto L_08937380;
    case 908u: goto L_089373A0;
    case 909u: goto L_089373A8;
    case 910u: goto L_089373B0;
    case 911u: goto L_089373BC;
    case 912u: goto L_089373C8;
    case 913u: goto L_089373CC;
    case 914u: goto L_089373E0;
    case 915u: goto L_089373F0;
    case 916u: goto L_08937400;
    case 917u: goto L_08937408;
    case 918u: goto L_08937410;
    case 919u: goto L_08937418;
    case 920u: goto L_0893742C;
    case 921u: goto L_08937434;
    case 922u: goto L_0893743C;
    case 923u: goto L_08937444;
    case 924u: goto L_08937458;
    case 925u: goto L_08937460;
    case 926u: goto L_08937474;
    case 927u: goto L_0893747C;
    case 928u: goto L_08937490;
    case 929u: goto L_08937494;
    case 930u: goto L_0893749C;
    case 931u: goto L_089374B0;
    case 932u: goto L_089374DC;
    case 933u: goto L_089374F4;
    case 934u: goto L_08937500;
    case 935u: goto L_08937508;
    case 936u: goto L_0893751C;
    case 937u: goto L_08937544;
    case 938u: goto L_08937558;
    case 939u: goto L_08937570;
    case 940u: goto L_0893757C;
    case 941u: goto L_08937590;
    case 942u: goto L_089375AC;
    case 943u: goto L_089375B0;
    case 944u: goto L_089375B8;
    case 945u: goto L_089375C0;
    case 946u: goto L_089375E4;
    case 947u: goto L_089375EC;
    case 948u: goto L_08937600;
    case 949u: goto L_08937624;
    case 950u: goto L_0893762C;
    case 951u: goto L_08937640;
    case 952u: goto L_08937678;
    case 953u: goto L_08937680;
    case 954u: goto L_08937684;
    case 955u: goto L_0893768C;
    case 956u: goto L_089376A0;
    case 957u: goto L_089376A8;
    case 958u: goto L_089376B0;
    case 959u: goto L_089376B8;
    case 960u: goto L_089376C4;
    case 961u: goto L_089376EC;
    case 962u: goto L_089376F4;
    case 963u: goto L_0893771C;
    case 964u: goto L_08937724;
    case 965u: goto L_0893772C;
    case 966u: goto L_08937734;
    case 967u: goto L_08937740;
    case 968u: goto L_0893774C;
    case 969u: goto L_08937758;
    case 970u: goto L_08937764;
    case 971u: goto L_0893776C;
    case 972u: goto L_08937770;
    case 973u: goto L_08937774;
    case 974u: goto L_08937780;
    case 975u: goto L_08937790;
    case 976u: goto L_08937798;
    case 977u: goto L_089377A4;
    case 978u: goto L_089377B0;
    case 979u: goto L_089377BC;
    case 980u: goto L_089377C4;
    case 981u: goto L_089377C8;
    case 982u: goto L_089377D0;
    case 983u: goto L_089377D8;
    case 984u: goto L_089377E8;
    case 985u: goto L_089377F4;
    case 986u: goto L_08937804;
    case 987u: goto L_0893780C;
    case 988u: goto L_08937810;
    case 989u: goto L_08937818;
    case 990u: goto L_0893782C;
    case 991u: goto L_08937838;
    case 992u: goto L_08937850;
    case 993u: goto L_08937878;
    case 994u: goto L_08937880;
    case 995u: goto L_089378A8;
    case 996u: goto L_089378AC;
    case 997u: goto L_089378B4;
    case 998u: goto L_089378C0;
    case 999u: goto L_089378CC;
    case 1000u: goto L_089378D4;
    case 1001u: goto L_089378D8;
    case 1002u: goto L_089378E0;
    case 1003u: goto L_089378E8;
    case 1004u: goto L_089378F8;
    case 1005u: goto L_08937900;
    case 1006u: goto L_08937910;
    case 1007u: goto L_08937920;
    case 1008u: goto L_08937928;
    case 1009u: goto L_08937930;
    case 1010u: goto L_08937938;
    case 1011u: goto L_08937944;
    case 1012u: goto L_08937950;
    case 1013u: goto L_08937958;
    case 1014u: goto L_08937964;
    case 1015u: goto L_08937970;
    case 1016u: goto L_08937980;
    case 1017u: goto L_08937988;
    case 1018u: goto L_08937990;
    case 1019u: goto L_08937998;
    case 1020u: goto L_089379A0;
    case 1021u: goto L_089379B0;
    case 1022u: goto L_089379B8;
    case 1023u: goto L_089379BC;
    case 1024u: goto L_089379C4;
    case 1025u: goto L_089379CC;
    case 1026u: goto L_089379D4;
    case 1027u: goto L_089379E4;
    case 1028u: goto L_089379EC;
    case 1029u: goto L_089379F0;
    case 1030u: goto L_089379F8;
    case 1031u: goto L_08937A28;
    case 1032u: goto L_08937A58;
    case 1033u: goto L_08937A64;
    case 1034u: goto L_08937A84;
    case 1035u: goto L_08937A8C;
    case 1036u: goto L_08937A94;
    case 1037u: goto L_08937AA0;
    case 1038u: goto L_08937AA8;
    case 1039u: goto L_08937AB0;
    case 1040u: goto L_08937AC4;
    case 1041u: goto L_08937AD0;
    case 1042u: goto L_08937AD8;
    case 1043u: goto L_08937AE4;
    case 1044u: goto L_08937AF4;
    case 1045u: goto L_08937B00;
    case 1046u: goto L_08937B08;
    case 1047u: goto L_08937B10;
    case 1048u: goto L_08937B1C;
    case 1049u: goto L_08937B30;
    case 1050u: goto L_08937B38;
    case 1051u: goto L_08937B4C;
    case 1052u: goto L_08937B50;
    case 1053u: goto L_08937B58;
    case 1054u: goto L_08937B64;
    case 1055u: goto L_08937B6C;
    case 1056u: goto L_08937B74;
    case 1057u: goto L_08937B7C;
    case 1058u: goto L_08937B80;
    case 1059u: goto L_08937B88;
    case 1060u: goto L_08937B90;
    case 1061u: goto L_08937B9C;
    case 1062u: goto L_08937BA8;
    case 1063u: goto L_08937BB0;
    case 1064u: goto L_08937BB4;
    case 1065u: goto L_08937BC0;
    case 1066u: goto L_08937BCC;
    case 1067u: goto L_08937BD8;
    case 1068u: goto L_08937BE0;
    case 1069u: goto L_08937BEC;
    case 1070u: goto L_08937BF4;
    case 1071u: goto L_08937BFC;
    case 1072u: goto L_08937C04;
    case 1073u: goto L_08937C10;
    case 1074u: goto L_08937C18;
    case 1075u: goto L_08937C24;
    case 1076u: goto L_08937C30;
    case 1077u: goto L_08937C38;
    case 1078u: goto L_08937C40;
    case 1079u: goto L_08937C4C;
    case 1080u: goto L_08937C5C;
    case 1081u: goto L_08937C64;
    case 1082u: goto L_08937C6C;
    case 1083u: goto L_08937C7C;
    case 1084u: goto L_08937C84;
    case 1085u: goto L_08937C8C;
    case 1086u: goto L_08937C94;
    case 1087u: goto L_08937CA0;
    case 1088u: goto L_08937CAC;
    case 1089u: goto L_08937CB8;
    case 1090u: goto L_08937CCC;
    case 1091u: goto L_08937CD4;
    case 1092u: goto L_08937CEC;
    case 1093u: goto L_08937CF8;
    case 1094u: goto L_08937D0C;
    case 1095u: goto L_08937D14;
    case 1096u: goto L_08937D24;
    case 1097u: goto L_08937D34;
    case 1098u: goto L_08937D3C;
    case 1099u: goto L_08937D44;
    case 1100u: goto L_08937D4C;
    case 1101u: goto L_08937D54;
    case 1102u: goto L_08937D5C;
    case 1103u: goto L_08937D68;
    case 1104u: goto L_08937D78;
    case 1105u: goto L_08937D84;
    case 1106u: goto L_08937D8C;
    case 1107u: goto L_08937D94;
    case 1108u: goto L_08937DB4;
    case 1109u: goto L_08937DBC;
    case 1110u: goto L_08937E0C;
    case 1111u: goto L_08937E14;
    case 1112u: goto L_08937E24;
    case 1113u: goto L_08937E34;
    case 1114u: goto L_08937E3C;
    case 1115u: goto L_08937E44;
    case 1116u: goto L_08937E4C;
    case 1117u: goto L_08937E54;
    case 1118u: goto L_08937E5C;
    case 1119u: goto L_08937E64;
    case 1120u: goto L_08937E6C;
    case 1121u: goto L_08937EB8;
    case 1122u: goto L_08937EC0;
    case 1123u: goto L_08937EC8;
    case 1124u: goto L_08937ED8;
    case 1125u: goto L_08937EE0;
    case 1126u: goto L_08937EE8;
    case 1127u: goto L_08937EF4;
    case 1128u: goto L_08937F04;
    case 1129u: goto L_08937F0C;
    case 1130u: goto L_08937F14;
    case 1131u: goto L_08937F1C;
    case 1132u: goto L_08937F24;
    case 1133u: goto L_08937F2C;
    case 1134u: goto L_08937F34;
    case 1135u: goto L_08937F3C;
    case 1136u: goto L_08937F48;
    case 1137u: goto L_08937F50;
    case 1138u: goto L_08937F58;
    case 1139u: goto L_08937F68;
    case 1140u: goto L_08937F78;
    case 1141u: goto L_08937F80;
    case 1142u: goto L_08937F88;
    case 1143u: goto L_08937F94;
    case 1144u: goto L_08937F9C;
    case 1145u: goto L_08937FA0;
    case 1146u: goto L_08937FC8;
    case 1147u: goto L_08937FD8;
    case 1148u: goto L_08937FE0;
    case 1149u: goto L_08937FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08934000u;
        if (local_delta_v813 >= 16368u || (local_delta_v813 & 3u) != 0u) {
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
L_08934000:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(40));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08934024u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934024u) goto L_08934024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934024:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(20)));
    goto L_0893402C;
L_0893402C:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08934048:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_089340C0;
      }
      goto L_08934084;
    }
L_08934084:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08934090u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 6u, 0x08934090u, 0x088BB7D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 722u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 722u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 722u, 0x088BB7D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934090u) goto L_08934090;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934090:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0893409Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 7u, 0x0893409Cu, 0x08B6A5DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 391u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 391u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893409Cu) goto L_0893409C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893409C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_2);
    aot_gpr_6 = (aot_gpr_4 ^ aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08934084;
      }
      goto L_089340C0;
    }
L_089340C0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089340D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
        goto L_08934144;
    }
    goto L_08934108;
L_08934108:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08934114;
L_08934114:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
        goto L_08934134;
    }
    goto L_08934124;
L_08934124:
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08934138;
      }
      goto L_08934134;
    }
L_08934134:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08934138;
L_08934138:
    if (aot_gpr_4 != 0u) {
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08934114;
    }
    goto L_08934140;
L_08934140:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    goto L_08934144;
L_08934144:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_6 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
        goto L_08934194;
    }
    goto L_08934158;
L_08934158:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    goto L_08934164;
L_08934164:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
        goto L_08934184;
    }
    goto L_08934174;
L_08934174:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08934188;
      }
      goto L_08934184;
    }
L_08934184:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08934188;
L_08934188:
    if (aot_gpr_6 != 0u) {
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
        goto L_08934164;
    }
    goto L_08934190;
L_08934190:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    goto L_08934194;
L_08934194:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089341EC;
      }
      goto L_089341C0;
    }
L_089341C0:
    aot_gpr_31 = (0x089341C8u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 25u, 0x089341C8u, 0x08B6A5DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 391u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 391u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089341C8u) goto L_089341C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089341C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_2);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089341C0;
      }
      goto L_089341E8;
    }
L_089341E8:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_089341EC;
L_089341EC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_gpr_29 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893428C;
      }
      goto L_08934220;
    }
L_08934220:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08934290;
    }
    goto L_08934240;
L_08934240:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08934310;
      }
      goto L_0893424C;
    }
L_0893424C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08934260u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 31u, 0x08934260u, 0x08B6AA64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 462u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 462u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 462u, 0x08B6AA64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934260u) goto L_08934260;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934260:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08934310;
      }
      goto L_0893428C;
    }
L_0893428C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08934290;
L_08934290:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08934310;
      }
      goto L_089342A8;
    }
L_089342A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_31 = (0x089342B8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 35u, 0x089342B8u, 0x08B6A5DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 391u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 391u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089342B8u) goto L_089342B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089342B8:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x089342D4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 36u, 0x089342D4u, 0x08B6AC34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 484u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 484u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 484u, 0x08B6AC34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089342D4u) goto L_089342D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089342D4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089342EC;
    }
    goto L_089342E0;
L_089342E0:
    aot_gpr_31 = (0x089342E8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089342E8u) goto L_089342E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089342E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089342EC;
L_089342EC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089342A8;
      }
      goto L_08934310;
    }
L_08934310:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934334:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08934348u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_089340D4;
L_08934348:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934354:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08934378u);
    aot_gpr_4 = (0u | 20u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 44u, 0x08934378u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934378u) goto L_08934378;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934378:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08934390;
      }
      goto L_08934384;
    }
L_08934384:
    aot_gpr_31 = (0x0893438Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 384u, 0x08B19834u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893438Cu) goto L_0893438C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893438C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08934390;
L_08934390:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_089343AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089343C8;
      }
      goto L_089343C0;
    }
L_089343C0:
    aot_gpr_31 = (0x089343C8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089343C8u) goto L_089343C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089343C8:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089343D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089343F4;
      }
      goto L_089343EC;
    }
L_089343EC:
    aot_gpr_31 = (0x089343F4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 53u, 0x089343F4u, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089343F4u) goto L_089343F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089343F4:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934404:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893440C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934414:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893441C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0893442Cu);
    ctx.pc = 0x08B73224u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893442C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934438:
    aot_gpr_2 = (0u | 1u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4189), static_cast<std::uint8_t>(aot_gpr_2));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934444:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08934458u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 61u, 0x08934458u, 0x08AD3610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 598u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 598u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934458u) goto L_08934458;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934458:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    ctx.gpr[16] = (2236u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(31984));
      if (branch_taken) {
          goto L_08934470;
      }
      goto L_08934468;
    }
L_08934468:
    aot_gpr_31 = (0x08934470u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934470u) goto L_08934470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934470:
    aot_gpr_31 = (0x08934478u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0084.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 64u, 0x08934478u, 0x08954778u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0084_entry(rt, ctx, 121u, aot_mem);
#else
        recomp_unit_0084_entry(rt, ctx, 121u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0084_entry, 84u, 121u, 0x08954778u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934478u) goto L_08934478;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934478:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0893448C;
      }
      goto L_08934480;
    }
L_08934480:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    aot_gpr_31 = (0x0893448Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0084.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 66u, 0x0893448Cu, 0x089567C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0084_entry(rt, ctx, 507u, aot_mem);
#else
        recomp_unit_0084_entry(rt, ctx, 507u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0084_entry, 84u, 507u, 0x089567C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893448Cu) goto L_0893448C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893448C:
    aot_gpr_31 = (0x08934494u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 67u, 0x08934494u, 0x08A07508u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 787u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 787u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934494u) goto L_08934494;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934494:
    aot_gpr_31 = (0x0893449Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 68u, 0x0893449Cu, 0x08ABEFDCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 641u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 641u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 641u, 0x08ABEFDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893449Cu) goto L_0893449C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893449C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089344AC;
      }
      goto L_089344A4;
    }
L_089344A4:
    aot_gpr_31 = (0x089344ACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 70u, 0x089344ACu, 0x08ABF048u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 650u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 650u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 650u, 0x08ABF048u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089344ACu) goto L_089344AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089344AC:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089344BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19632)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08934538;
      }
      goto L_089344D4;
    }
L_089344D4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x089344E8u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19632), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08934444;
L_089344E8:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    aot_gpr_31 = (0x089344F8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 74u, 0x089344F8u, 0x08ABEE2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 620u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 620u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 620u, 0x08ABEE2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089344F8u) goto L_089344F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089344F8:
    aot_gpr_31 = (0x08934500u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 75u, 0x08934500u, 0x0887F804u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 746u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 746u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 746u, 0x0887F804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934500u) goto L_08934500;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934500:
    aot_gpr_31 = (0x08934508u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 76u, 0x08934508u, 0x08AD3BD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 694u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 694u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 694u, 0x08AD3BD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934508u) goto L_08934508;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934508:
    aot_gpr_31 = (0x08934510u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 77u, 0x08934510u, 0x08A07508u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 787u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 787u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934510u) goto L_08934510;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934510:
    aot_gpr_31 = (0x08934518u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 78u, 0x08934518u, 0x08ABEE2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 620u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 620u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 620u, 0x08ABEE2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934518u) goto L_08934518;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934518:
    aot_gpr_31 = (0x08934520u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 79u, 0x08934520u, 0x0887F804u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 746u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 746u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 746u, 0x0887F804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934520u) goto L_08934520;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934520:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19632), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08934530u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 80u, 0x08934530u, 0x08ABE57Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934530u) goto L_08934530;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934530:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08934540;
      }
      goto L_08934538;
    }
L_08934538:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19632), static_cast<std::uint8_t>(0u));
    aot_gpr_2 = (0u | 0u);
    goto L_08934540;
L_08934540:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934550:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08934580u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 84u, 0x08934580u, 0x089B9BA0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 336u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 336u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934580u) goto L_08934580;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934580:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893458Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 85u, 0x0893458Cu, 0x089B9ABCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 323u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 323u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893458Cu) goto L_0893458C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893458C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08934598u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 86u, 0x08934598u, 0x08ABE57Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934598u) goto L_08934598;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934598:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_089345B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19631)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08934704;
      }
      goto L_089345DC;
    }
L_089345DC:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19631), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08934668;
      }
      goto L_089345FC;
    }
L_089345FC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08934608u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934608u) goto L_08934608;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934608:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08934654;
      }
      goto L_08934614;
    }
L_08934614:
    aot_gpr_31 = (0x0893461Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0066.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 92u, 0x0893461Cu, 0x0890C798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0066_entry(rt, ctx, 128u, aot_mem);
#else
        recomp_unit_0066_entry(rt, ctx, 128u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 128u, 0x0890C798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893461Cu) goto L_0893461C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893461C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08934654;
      }
      goto L_08934624;
    }
L_08934624:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08934630u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 94u, 0x08934630u, 0x08891B8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934630u) goto L_08934630;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934630:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08934654;
      }
      goto L_08934638;
    }
L_08934638:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08934654u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934654u) goto L_08934654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934654:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089345FC;
      }
      goto L_08934668;
    }
L_08934668:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089346EC;
      }
      goto L_08934680;
    }
L_08934680:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0893468Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893468Cu) goto L_0893468C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893468C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_089346D8;
      }
      goto L_08934698;
    }
L_08934698:
    aot_gpr_31 = (0x089346A0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 101u, 0x089346A0u, 0x08AFF508u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 772u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 772u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 772u, 0x08AFF508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089346A0u) goto L_089346A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089346A0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089346D8;
      }
      goto L_089346A8;
    }
L_089346A8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089346B4u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 103u, 0x089346B4u, 0x08891B8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089346B4u) goto L_089346B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089346B4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_089346D8;
      }
      goto L_089346BC;
    }
L_089346BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x089346D8u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089346D8u) goto L_089346D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089346D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08934680;
      }
      goto L_089346EC;
    }
L_089346EC:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19631), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089346FCu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 107u, 0x089346FCu, 0x08ABE57Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089346FCu) goto L_089346FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089346FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893470C;
      }
      goto L_08934704;
    }
L_08934704:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19631), static_cast<std::uint8_t>(0u));
    aot_gpr_2 = (0u | 0u);
    goto L_0893470C;
L_0893470C:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893472C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934734:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6548)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08934748u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934748:
    aot_gpr_5 = (2195u << 16u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19628));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4160)));
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(26752));
    aot_gpr_31 = (0x08934768u);
    ctx.gpr[7] = (2u << 16u);
    ctx.pc = 0x08B734B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934768:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6544), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0893477Cu);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = 0x08B73464u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893477C:
    aot_gpr_31 = (0x08934784u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B734F4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934784:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934794:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089347B0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_0893472C;
L_089347B0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089347BCu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    goto L_08934438;
L_089347BC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089347CC;
      }
      goto L_089347C4;
    }
L_089347C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08934814;
      }
      goto L_089347CC;
    }
L_089347CC:
    aot_gpr_31 = (0x089347D4u);
    ctx.pc = 0x08B7347Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089347D4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6548), aot_gpr_2);
    aot_gpr_5 = (2195u << 16u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19616));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4160)));
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x089347F8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18228));
    ctx.pc = 0x08B734B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089347F8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08934808u);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = 0x08B73464u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934808:
    aot_gpr_31 = (0x08934810u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6548)));
    ctx.pc = 0x08B734F4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934810:
    aot_gpr_2 = (0u | 0u);
    goto L_08934814;
L_08934814:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934828:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0893483Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 127u, 0x0893483Cu, 0x08871430u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 367u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 367u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 367u, 0x08871430u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893483Cu) goto L_0893483C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893483C:
    aot_gpr_31 = (0x08934844u);
    goto L_08934414;
L_08934844:
    aot_gpr_31 = (0x0893484Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 129u, 0x0893484Cu, 0x08871438u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 368u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 368u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 368u, 0x08871438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893484Cu) goto L_0893484C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893484C:
    aot_gpr_31 = (0x08934854u);
    goto L_08934404;
L_08934854:
    aot_gpr_31 = (0x0893485Cu);
    goto L_0893440C;
L_0893485C:
    aot_gpr_31 = (0x08934864u);
    goto L_08934A1C;
L_08934864:
    aot_gpr_31 = (0x0893486Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 133u, 0x0893486Cu, 0x0898B354u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 819u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 819u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 819u, 0x0898B354u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893486Cu) goto L_0893486C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893486C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08934888;
      }
      goto L_08934878;
    }
L_08934878:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), aot_gpr_4);
    aot_gpr_31 = (0x08934888u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 135u, 0x08934888u, 0x089C6318u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 464u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 464u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934888u) goto L_08934888;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934888:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7864), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-1039), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-1038), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089348B0;
      }
      goto L_089348A4;
    }
L_089348A4:
    aot_gpr_31 = (0x089348ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089348ACu) goto L_089348AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089348AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_089348B0;
L_089348B0:
    aot_gpr_31 = (0x089348B8u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 139u, 0x089348B8u, 0x089C6D70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 630u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 630u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 630u, 0x089C6D70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089348B8u) goto L_089348B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089348B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089348D0;
      }
      goto L_089348C4;
    }
L_089348C4:
    aot_gpr_31 = (0x089348CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089348CCu) goto L_089348CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089348CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_089348D0;
L_089348D0:
    aot_gpr_31 = (0x089348D8u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 143u, 0x089348D8u, 0x089C6F58u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 678u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 678u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 678u, 0x089C6F58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089348D8u) goto L_089348D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089348D8:
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_31 = (0x089348E4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14560));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0011.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 144u, 0x089348E4u, 0x088301F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0011_entry(rt, ctx, 30u, aot_mem);
#else
        recomp_unit_0011_entry(rt, ctx, 30u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 30u, 0x088301F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089348E4u) goto L_089348E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089348E4:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-1038), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089348FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (90u << 16u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0893491Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20160));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 146u, 0x0893491Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893491Cu) goto L_0893491C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893491C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08934934;
      }
      goto L_08934928;
    }
L_08934928:
    aot_gpr_31 = (0x08934930u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 148u, 0x08934930u, 0x08AFDA60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 315u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 315u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 315u, 0x08AFDA60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934930u) goto L_08934930;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934930:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08934934;
L_08934934:
    aot_gpr_5 = (2232u << 16u);
    ctx.gpr[7] = (2u << 16u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-11272));
    aot_gpr_31 = (0x08934950u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-31072));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 150u, 0x08934950u, 0x08AFDEA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 376u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 376u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 376u, 0x08AFDEA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934950u) goto L_08934950;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934950:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08934968u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-11220));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 151u, 0x08934968u, 0x08AFDEA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 376u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 376u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 376u, 0x08AFDEA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934968u) goto L_08934968;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934968:
    aot_gpr_31 = (0x08934970u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 152u, 0x08934970u, 0x08AFDBC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 328u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 328u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 328u, 0x08AFDBC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934970u) goto L_08934970;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934970:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0893497Cu);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 153u, 0x0893497Cu, 0x08AFDA88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 317u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 317u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 317u, 0x08AFDA88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893497Cu) goto L_0893497C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893497C:
    aot_gpr_31 = (0x08934984u);
    ctx.pc = 0x08B7347Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934984:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4160)));
    aot_gpr_31 = (0x08934990u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.pc = 0x08B734ECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934990:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089349A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089349BCu);
    aot_gpr_5 = (0u | 0u);
    goto L_089348FC;
L_089349BC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089349C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089349F4;
      }
      goto L_089349E0;
    }
L_089349E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19670)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08934A08;
      }
      goto L_089349EC;
    }
L_089349EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08934A10;
      }
      goto L_089349F4;
    }
L_089349F4:
    aot_gpr_31 = (0x089349FCu);
    aot_gpr_4 = (0u | 0u);
    goto L_0893505C;
L_089349FC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19670), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08934A10;
      }
      goto L_08934A08;
    }
L_08934A08:
    aot_gpr_31 = (0x08934A10u);
    aot_gpr_4 = (0u | 0u);
    goto L_0893505C;
L_08934A10:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934A1C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934A24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[9]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (aot_gpr_6 | 0u);
    ctx.gpr[22] = (aot_gpr_5 | 0u);
    ctx.gpr[23] = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (ctx.gpr[17] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    aot_gpr_31 = (0x08934A78u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0092.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 167u, 0x08934A78u, 0x08975D4Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0092_entry(rt, ctx, 438u, aot_mem);
#else
        recomp_unit_0092_entry(rt, ctx, 438u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 438u, 0x08975D4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934A78u) goto L_08934A78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934A78:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16976)));
    aot_gpr_4 = (15374u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 64053u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vrot_ct<1u, 64u, 2u, 4u>();
    ctx.execute_vfpu_vec3_ct<0u, 33u, 1u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    aot_gpr_5 = (16355u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 36409u);
    aot_fpr_13 = get_effective_aspect_ratio(std::bit_cast<float>(aot_gpr_5));
    aot_fpr_12 = widen_horizontal_extent(aot_fpr_12);
    aot_gpr_31 = (0x08934AE4u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 168u, 0x08934AE4u, 0x0893A7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 586u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 586u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 586u, 0x0893A7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934AE4u) goto L_08934AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934AE4:
    aot_gpr_31 = (0x08934AECu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 169u, 0x08934AECu, 0x08946158u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 394u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 394u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 394u, 0x08946158u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934AECu) goto L_08934AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934AEC:
    aot_gpr_31 = (0x08934AF4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0119.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 170u, 0x08934AF4u, 0x089E1640u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0119_entry(rt, ctx, 276u, aot_mem);
#else
        recomp_unit_0119_entry(rt, ctx, 276u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0119_entry, 119u, 276u, 0x089E1640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934AF4u) goto L_08934AF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934AF4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08934B24;
      }
      goto L_08934AFC;
    }
L_08934AFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08934B0Cu);
    aot_gpr_6 = (0u | 6u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 172u, 0x08934B0Cu, 0x088908D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 130u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 130u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 130u, 0x088908D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934B0Cu) goto L_08934B0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934B0C:
    aot_gpr_31 = (0x08934B14u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 173u, 0x08934B14u, 0x08AF431Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 36u, 0x08AF431Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934B14u) goto L_08934B14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934B14:
    { const bool branch_taken = ctx.gpr[16] != 0u;
      if (branch_taken) {
          goto L_08934B2C;
      }
      goto L_08934B1C;
    }
L_08934B1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08934B6C;
      }
      goto L_08934B24;
    }
L_08934B24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08934B70;
      }
      goto L_08934B2C;
    }
L_08934B2C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_31 = (0x08934B54u);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934B54u) goto L_08934B54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934B54:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08934B6Cu);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 178u, 0x08934B6Cu, 0x08AF5328u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 138u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 138u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 138u, 0x08AF5328u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934B6Cu) goto L_08934B6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934B6C:
    aot_gpr_2 = (0u | 1u);
    goto L_08934B70;
L_08934B70:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934B9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    ctx.gpr[30] = (aot_gpr_5 << 16u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[23] = (aot_gpr_6 << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    ctx.gpr[22] = (ctx.gpr[7] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[21] = (ctx.gpr[8] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[20] = (ctx.gpr[9] << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[19] = (ctx.gpr[10] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16976)));
    aot_gpr_4 = (15374u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 64053u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vrot_ct<1u, 64u, 2u, 4u>();
    ctx.execute_vfpu_vec3_ct<0u, 33u, 1u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08934C44u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0092.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 181u, 0x08934C44u, 0x08975D4Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0092_entry(rt, ctx, 438u, aot_mem);
#else
        recomp_unit_0092_entry(rt, ctx, 438u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 438u, 0x08975D4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934C44u) goto L_08934C44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934C44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    aot_gpr_5 = (16355u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 36409u);
    aot_fpr_13 = get_effective_aspect_ratio(std::bit_cast<float>(aot_gpr_5));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08934C60u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = widen_horizontal_extent(aot_fpr_12);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 182u, 0x08934C60u, 0x0893A7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 586u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 586u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 586u, 0x0893A7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934C60u) goto L_08934C60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934C60:
    aot_gpr_31 = (0x08934C68u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 183u, 0x08934C68u, 0x08946158u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 394u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 394u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 394u, 0x08946158u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934C68u) goto L_08934C68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934C68:
    aot_gpr_31 = (0x08934C70u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0119.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 184u, 0x08934C70u, 0x089E1640u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0119_entry(rt, ctx, 276u, aot_mem);
#else
        recomp_unit_0119_entry(rt, ctx, 276u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0119_entry, 119u, 276u, 0x089E1640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934C70u) goto L_08934C70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934C70:
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[17] = (2236u << 16u);
      if (branch_taken) {
          goto L_08934CB8;
      }
      goto L_08934C78;
    }
L_08934C78:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(8892));
      if (branch_taken) {
          goto L_08934CC0;
      }
      goto L_08934CB0;
    }
L_08934CB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08934CF4;
      }
      goto L_08934CB8;
    }
L_08934CB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08934D60;
      }
      goto L_08934CC0;
    }
L_08934CC0:
    aot_gpr_31 = (0x08934CC8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 189u, 0x08934CC8u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934CC8u) goto L_08934CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934CC8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08934CF4;
      }
      goto L_08934CD0;
    }
L_08934CD0:
    aot_gpr_31 = (0x08934CD8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 191u, 0x08934CD8u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934CD8u) goto L_08934CD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934CD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 5u);
      if (branch_taken) {
          goto L_08934CF0;
      }
      goto L_08934CE8;
    }
L_08934CE8:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08934CF4;
      }
      goto L_08934CF0;
    }
L_08934CF0:
    ctx.gpr[16] = (0u | 1u);
    goto L_08934CF4;
L_08934CF4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
      if (branch_taken) {
          goto L_08934D10;
      }
      goto L_08934CFC;
    }
L_08934CFC:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08934D08u);
    aot_gpr_6 = (0u | 7u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 196u, 0x08934D08u, 0x088908D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 130u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 130u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 130u, 0x088908D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934D08u) goto L_08934D08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934D08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08934D1C;
      }
      goto L_08934D10;
    }
L_08934D10:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08934D1Cu);
    aot_gpr_6 = (0u | 6u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 198u, 0x08934D1Cu, 0x088908D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 130u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 130u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 130u, 0x088908D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934D1Cu) goto L_08934D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934D1C:
    aot_gpr_31 = (0x08934D24u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 199u, 0x08934D24u, 0x08A1D628u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 270u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 270u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 270u, 0x08A1D628u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934D24u) goto L_08934D24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934D24:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1360)));
    aot_gpr_31 = (0x08934D30u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934D30u) goto L_08934D30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934D30:
    aot_gpr_4 = (0u | 7u);
    aot_gpr_31 = (0x08934D3Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934D3Cu) goto L_08934D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934D3C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08934D5Cu);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0034.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 202u, 0x08934D5Cu, 0x0888DF50u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0034_entry(rt, ctx, 374u, aot_mem);
#else
        recomp_unit_0034_entry(rt, ctx, 374u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 374u, 0x0888DF50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934D5Cu) goto L_08934D5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934D5C:
    aot_gpr_2 = (0u | 1u);
    goto L_08934D60;
L_08934D60:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934D94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08934DA4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0034.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 205u, 0x08934DA4u, 0x0888CE54u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0034_entry(rt, ctx, 251u, aot_mem);
#else
        recomp_unit_0034_entry(rt, ctx, 251u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 251u, 0x0888CE54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934DA4u) goto L_08934DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934DA4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934DB0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08934DC8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 207u, 0x08934DC8u, 0x08A071F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 744u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 744u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 744u, 0x08A071F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934DC8u) goto L_08934DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934DC8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08934DFC;
      }
      goto L_08934DD0;
    }
L_08934DD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8808)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6552)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08934DFC;
      }
      goto L_08934DE0;
    }
L_08934DE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8808)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6552), aot_gpr_4);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08934E04;
      }
      goto L_08934DF4;
    }
L_08934DF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08934E2C;
      }
      goto L_08934DFC;
    }
L_08934DFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08934F14;
      }
      goto L_08934E04;
    }
L_08934E04:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08934E10u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 213u, 0x08934E10u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934E10u) goto L_08934E10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934E10:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08934E28;
      }
      goto L_08934E1C;
    }
L_08934E1C:
    aot_gpr_31 = (0x08934E24u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934E24u) goto L_08934E24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934E24:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08934E28;
L_08934E28:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08934E2C;
L_08934E2C:
    aot_gpr_31 = (0x08934E34u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 218u, 0x08934E34u, 0x089F6318u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 411u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 411u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 411u, 0x089F6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934E34u) goto L_08934E34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934E34:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08934EA4;
      }
      goto L_08934E3C;
    }
L_08934E3C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19600));
      if (branch_taken) {
          goto L_08934E74;
      }
      goto L_08934E48;
    }
L_08934E48:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08934E54u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 221u, 0x08934E54u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934E54u) goto L_08934E54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934E54:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08934E6C;
      }
      goto L_08934E60;
    }
L_08934E60:
    aot_gpr_31 = (0x08934E68u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934E68u) goto L_08934E68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934E68:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08934E6C;
L_08934E6C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19600));
    goto L_08934E74;
L_08934E74:
    aot_gpr_31 = (0x08934E7Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 226u, 0x08934E7Cu, 0x089F64FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 441u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 441u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 441u, 0x089F64FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934E7Cu) goto L_08934E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934E7C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08934EA4;
      }
      goto L_08934E84;
    }
L_08934E84:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08934EBC;
      }
      goto L_08934E9C;
    }
L_08934E9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08934EAC;
      }
      goto L_08934EA4;
    }
L_08934EA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08934F14;
      }
      goto L_08934EAC;
    }
L_08934EAC:
    aot_gpr_31 = (0x08934EB4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 231u, 0x08934EB4u, 0x08939298u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 302u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 302u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 302u, 0x08939298u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934EB4u) goto L_08934EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934EB4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08934F0C;
      }
      goto L_08934EBC;
    }
L_08934EBC:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08934EDCu);
    ctx.gpr[10] = (0u | 255u);
    goto L_08934A24;
L_08934EDC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08934F14;
      }
      goto L_08934EE4;
    }
L_08934EE4:
    aot_gpr_31 = (0x08934EECu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 235u, 0x08934EECu, 0x08AF431Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 36u, 0x08AF431Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934EECu) goto L_08934EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934EEC:
    aot_gpr_31 = (0x08934EF4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 236u, 0x08934EF4u, 0x0889E7C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 579u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 579u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934EF4u) goto L_08934EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934EF4:
    aot_gpr_31 = (0x08934EFCu);
    goto L_08936F58;
L_08934EFC:
    aot_gpr_31 = (0x08934F04u);
    goto L_089366D8;
L_08934F04:
    aot_gpr_31 = (0x08934F0Cu);
    aot_gpr_4 = (0u | 1u);
    goto L_08934F28;
L_08934F0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08934F14;
      }
      goto L_08934F14;
    }
L_08934F14:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08934F28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08934FBC;
      }
      goto L_08934F40;
    }
L_08934F40:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08934F4Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 243u, 0x08934F4Cu, 0x08A1C770u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934F4Cu) goto L_08934F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934F4C:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08934FBC;
      }
      goto L_08934F58;
    }
L_08934F58:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08934FC0;
      }
      goto L_08934F6C;
    }
L_08934F6C:
    aot_gpr_31 = (0x08934F74u);
    ctx.pc = 0x08B73514u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934F74:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08934F88u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.pc = 0x08B7343Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08934F88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (13702u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 14269u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08934FC0;
      }
      goto L_08934FBC;
    }
L_08934FBC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08934FC0;
L_08934FC0:
    aot_gpr_31 = (0x08934FC8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0075.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 250u, 0x08934FC8u, 0x08932C9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0075_entry(rt, ctx, 590u, aot_mem);
#else
        recomp_unit_0075_entry(rt, ctx, 590u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 590u, 0x08932C9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08934FC8u) goto L_08934FC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08934FC8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08934FEC;
      }
      goto L_08934FD4;
    }
L_08934FD4:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08935034;
      }
      goto L_08934FEC;
    }
L_08934FEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08935000;
      }
      goto L_08934FF8;
    }
L_08934FF8:
    aot_gpr_31 = (0x08935000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935000u) goto L_08935000;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935000:
    aot_gpr_31 = (0x08935008u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0084.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 255u, 0x08935008u, 0x08954778u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0084_entry(rt, ctx, 121u, aot_mem);
#else
        recomp_unit_0084_entry(rt, ctx, 121u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0084_entry, 84u, 121u, 0x08954778u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935008u) goto L_08935008;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935008:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
      if (branch_taken) {
          goto L_08935024;
      }
      goto L_08935010;
    }
L_08935010:
    aot_gpr_5 = (14979u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4719u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08935034;
      }
      goto L_08935024;
    }
L_08935024:
    aot_gpr_5 = (14545u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 46871u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08935034;
L_08935034:
    aot_gpr_31 = (0x0893503Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 259u, 0x0893503Cu, 0x08890618u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 97u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 97u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 97u, 0x08890618u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893503Cu) goto L_0893503C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893503C:
    aot_gpr_31 = (0x08935044u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0119.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 260u, 0x08935044u, 0x089E1620u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0119_entry(rt, ctx, 274u, aot_mem);
#else
        recomp_unit_0119_entry(rt, ctx, 274u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0119_entry, 119u, 274u, 0x089E1620u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935044u) goto L_08935044;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935044:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08935054:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 1u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893505C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0893506Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0119.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 263u, 0x0893506Cu, 0x089E17DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0119_entry(rt, ctx, 312u, aot_mem);
#else
        recomp_unit_0119_entry(rt, ctx, 312u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0119_entry, 119u, 312u, 0x089E17DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893506Cu) goto L_0893506C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893506C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08935084;
      }
      goto L_08935074;
    }
L_08935074:
    aot_gpr_31 = (0x0893507Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0175.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 265u, 0x0893507Cu, 0x08AC2FC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0175_entry(rt, ctx, 710u, aot_mem);
#else
        recomp_unit_0175_entry(rt, ctx, 710u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 710u, 0x08AC2FC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893507Cu) goto L_0893507C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893507C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08935088;
      }
      goto L_08935084;
    }
L_08935084:
    aot_gpr_2 = (0u | 0u);
    goto L_08935088;
L_08935088:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08935094:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893509C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19652));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089350F4;
      }
      goto L_089350C4;
    }
L_089350C4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19592));
    aot_gpr_31 = (0x089350D8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 271u, 0x089350D8u, 0x08AAECA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 584u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 584u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089350D8u) goto L_089350D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089350D8:
    ctx.gpr[20] = (2237u << 16u);
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_089350FC;
      }
      goto L_089350EC;
    }
L_089350EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08935108;
      }
      goto L_089350F4;
    }
L_089350F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089352C4;
      }
      goto L_089350FC;
    }
L_089350FC:
    aot_gpr_31 = (0x08935104u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 275u, 0x08935104u, 0x08AAEBC8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 571u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 571u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 571u, 0x08AAEBC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935104u) goto L_08935104;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935104:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    goto L_08935108;
L_08935108:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08935128;
      }
      goto L_08935110;
    }
L_08935110:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
        goto L_08935130;
    }
    goto L_08935124;
L_08935124:
    aot_gpr_4 = (0u | 0u);
    goto L_08935128;
L_08935128:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08935164;
      }
      goto L_08935130;
    }
L_08935130:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08935150;
    }
    goto L_08935144;
L_08935144:
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08935164;
      }
      goto L_08935150;
    }
L_08935150:
    aot_gpr_5 = (ctx.gpr[19] << 5u);
    aot_gpr_6 = (ctx.gpr[19] << 2u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08935164;
L_08935164:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08935178;
      }
      goto L_0893516C;
    }
L_0893516C:
    aot_gpr_31 = (0x08935174u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 285u, 0x08935174u, 0x08A65A24u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 359u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 359u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 359u, 0x08A65A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935174u) goto L_08935174;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935174:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    goto L_08935178;
L_08935178:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893518C;
      }
      goto L_08935180;
    }
L_08935180:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893526C;
      }
      goto L_0893518C;
    }
L_0893518C:
    aot_gpr_31 = (0x08935194u);
    goto L_089352E4;
L_08935194:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (2232u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089351B0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-11164));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 737u, 0x08B670D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089351B0u) goto L_089351B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089351B0:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089351BCu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 737u, 0x08B670D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089351BCu) goto L_089351BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089351BC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19584));
    aot_gpr_31 = (0x089351C8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 737u, 0x08B670D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089351C8u) goto L_089351C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089351C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x089351D4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 293u, 0x089351D4u, 0x08AAF4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 725u, 0x08AAF4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089351D4u) goto L_089351D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089351D4:
    if (static_cast<std::int32_t>(ctx.gpr[19]) < 0) {
    ctx.gpr[19] = (0u | 0u);
        goto L_089351F4;
    }
    goto L_089351DC;
L_089351DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
        goto L_089351FC;
    }
    goto L_089351F0;
L_089351F0:
    ctx.gpr[19] = (0u | 0u);
    goto L_089351F4;
L_089351F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08935230;
      }
      goto L_089351FC;
    }
L_089351FC:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_0893521C;
    }
    goto L_08935210;
L_08935210:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08935230;
      }
      goto L_0893521C;
    }
L_0893521C:
    aot_gpr_5 = (ctx.gpr[19] << 5u);
    aot_gpr_6 = (ctx.gpr[19] << 2u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08935230;
L_08935230:
    aot_gpr_31 = (0x08935238u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 301u, 0x08935238u, 0x08A6598Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 351u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 351u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 351u, 0x08A6598Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935238u) goto L_08935238;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935238:
    aot_gpr_31 = (0x08935240u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 302u, 0x08935240u, 0x08A65B34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 377u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 377u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 377u, 0x08A65B34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935240u) goto L_08935240;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935240:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19652), aot_gpr_2);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08935254u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 303u, 0x08935254u, 0x0887F5E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 728u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 728u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935254u) goto L_08935254;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935254:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0893526C;
      }
      goto L_08935260;
    }
L_08935260:
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0893526Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893526Cu) goto L_0893526C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893526C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_0893528C;
      }
      goto L_08935278;
    }
L_08935278:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08935284u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 307u, 0x08935284u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935284u) goto L_08935284;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935284:
    aot_gpr_31 = (0x0893528Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893528Cu) goto L_0893528C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893528C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(43)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089352C0;
      }
      goto L_08935298;
    }
L_08935298:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_089352B8;
      }
      goto L_089352A4;
    }
L_089352A4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x089352B0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 311u, 0x089352B0u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089352B0u) goto L_089352B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089352B0:
    aot_gpr_31 = (0x089352B8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089352B8u) goto L_089352B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089352B8:
    aot_gpr_31 = (0x089352C0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 313u, 0x089352C0u, 0x0882E9E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 616u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 616u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 616u, 0x0882E9E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089352C0u) goto L_089352C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089352C0:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    goto L_089352C4;
L_089352C4:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_089352E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089352FCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19592));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 316u, 0x089352FCu, 0x08AAECA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 584u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 584u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089352FCu) goto L_089352FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089352FC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_4;
      if (branch_taken) {
          goto L_08935390;
      }
      goto L_0893530C;
    }
L_0893530C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0893532C;
      }
      goto L_08935314;
    }
L_08935314:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
        goto L_08935334;
    }
    goto L_08935328;
L_08935328:
    aot_gpr_4 = (0u | 0u);
    goto L_0893532C;
L_0893532C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08935368;
      }
      goto L_08935334;
    }
L_08935334:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[16]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08935354;
    }
    goto L_08935348;
L_08935348:
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08935368;
      }
      goto L_08935354;
    }
L_08935354:
    aot_gpr_5 = (ctx.gpr[16] << 5u);
    aot_gpr_6 = (ctx.gpr[16] << 2u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08935368;
L_08935368:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08935390;
      }
      goto L_08935370;
    }
L_08935370:
    aot_gpr_31 = (0x08935378u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 326u, 0x08935378u, 0x08A07508u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 787u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 787u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935378u) goto L_08935378;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935378:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19652));
    aot_gpr_31 = (0x08935384u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 327u, 0x08935384u, 0x0887F6B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935384u) goto L_08935384;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935384:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19652), 0u);
    aot_gpr_31 = (0x08935390u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 328u, 0x08935390u, 0x08AAEEA8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 621u, 0x08AAEEA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935390u) goto L_08935390;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935390:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089353A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19564)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089353F0;
      }
      goto L_089353BC;
    }
L_089353BC:
    aot_gpr_31 = (0x089353C4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089353C4u) goto L_089353C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089353C4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19540)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19544)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089353D8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089353D8u) goto L_089353D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089353D8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19564), aot_gpr_4);
    goto L_089353F0;
L_089353F0:
    aot_gpr_31 = (0x089353F8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089353F8u) goto L_089353F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089353F8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19532)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19536)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0893540Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893540Cu) goto L_0893540C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893540C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19564)));
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[28] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-19579)));
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19564), aot_gpr_5);
      if (branch_taken) {
          goto L_08935448;
      }
      goto L_08935444;
    }
L_08935444:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19564), 0u);
    goto L_08935448;
L_08935448:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(-19296));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19560));
    aot_gpr_31 = (0x08935460u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935460u) goto L_08935460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935460:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08935474:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-9176));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08935484:
    aot_fpr_12 = std::bit_cast<float>(0u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19668), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08935490:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (16448u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (16000u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_15 = aot_fpr_13 / aot_fpr_14;
    aot_gpr_4 = (17297u << 16u);
    aot_gpr_5 = (aot_gpr_4 | 32768u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_15;
    aot_gpr_4 = (17305u << 16u);
    aot_gpr_6 = (aot_gpr_4 | 32768u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (16864u << 16u);
    ctx.gpr[8] = (17166u << 16u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_15 = ctx.fpr[16] / aot_fpr_15;
    aot_gpr_31 = (0x08935528u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935528u) goto L_08935528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935528:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08935548u);
    ctx.gpr[8] = (0u | 204u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935548u) goto L_08935548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935548:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08935558u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 344u, 0x08935558u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935558u) goto L_08935558;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935558:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_15 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_5 = (17296u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_15;
    aot_gpr_6 = (17304u << 16u);
    ctx.gpr[8] = (17163u << 16u);
    ctx.gpr[7] = (16840u << 16u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_15 = ctx.fpr[16] / aot_fpr_15;
    aot_gpr_31 = (0x089355ACu);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089355ACu) goto L_089355AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089355AC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x089355C8u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089355C8u) goto L_089355C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089355C8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089355D8u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 347u, 0x089355D8u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089355D8u) goto L_089355D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089355D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17296u << 16u);
    aot_gpr_5 = (aot_gpr_4 | 32768u);
    aot_gpr_4 = (17303u << 16u);
    aot_gpr_6 = (aot_gpr_4 | 32768u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = ctx.fpr[26] / aot_fpr_12;
    aot_fpr_15 = ctx.fpr[28] / aot_fpr_12;
    ctx.gpr[7] = (16848u << 16u);
    ctx.gpr[8] = (17162u << 16u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_31 = (0x08935638u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935638u) goto L_08935638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935638:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x08935654u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935654u) goto L_08935654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935654:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08935664u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 350u, 0x08935664u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935664u) goto L_08935664;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935664:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_15 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_13 = ctx.fpr[26] / aot_fpr_15;
    aot_gpr_5 = (17120u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_fpr_15 = ctx.fpr[28] / aot_fpr_15;
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[30];
    aot_gpr_31 = (0x089356ACu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089356ACu) goto L_089356AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089356AC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 140u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x089356C8u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089356C8u) goto L_089356C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089356C8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089356D8u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 353u, 0x089356D8u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089356D8u) goto L_089356D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089356D8:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      ctx.gpr[16] = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08935704:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19648), aot_gpr_4);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893570C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-224));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (ctx.gpr[7] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_run_words); }
    aot_gpr_31 = (0x08935744u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B73594u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935744:
    aot_gpr_31 = (0x0893574Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_0893509C;
L_0893574C:
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(96));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08935770;
      }
      goto L_08935760;
    }
L_08935760:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08935778;
      }
      goto L_08935768;
    }
L_08935768:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08935790;
      }
      goto L_08935770;
    }
L_08935770:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08935A7C;
      }
      goto L_08935778;
    }
L_08935778:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19520));
    aot_gpr_31 = (0x08935784u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 362u, 0x08935784u, 0x08B582CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935784u) goto L_08935784;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935784:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08935790;
      }
      goto L_0893578C;
    }
L_0893578C:
    ctx.gpr[19] = (0u | 1u);
    goto L_08935790;
L_08935790:
    aot_gpr_4 = (0u | 255u);
    if (ctx.gpr[19] != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_0893579C;
    }
    goto L_0893579C;
L_0893579C:
    ctx.gpr[10] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x089357BCu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08934A24;
L_089357BC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0893580C;
      }
      goto L_089357C4;
    }
L_089357C4:
    aot_gpr_31 = (0x089357CCu);
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 368u, 0x089357CCu, 0x08AF431Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 36u, 0x08AF431Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089357CCu) goto L_089357CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089357CC:
    aot_gpr_31 = (0x089357D4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 369u, 0x089357D4u, 0x0889E7C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 579u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 579u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089357D4u) goto L_089357D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089357D4:
    aot_gpr_5 = (17392u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_5 = (17288u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x089357FCu);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089357FCu) goto L_089357FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089357FC:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_08935814;
      }
      goto L_08935804;
    }
L_08935804:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893582C;
      }
      goto L_0893580C;
    }
L_0893580C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08935A7C;
      }
      goto L_08935814;
    }
L_08935814:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0893582C;
L_0893582C:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x08935848u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935848u) goto L_08935848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935848:
    aot_gpr_4 = (0u | 2u);
    aot_gpr_31 = (0x08935854u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935854u) goto L_08935854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935854:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08935864u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 377u, 0x08935864u, 0x08AF4650u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 72u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 72u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 72u, 0x08AF4650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935864u) goto L_08935864;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935864:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19648)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089359FC;
      }
      goto L_08935870;
    }
L_08935870:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x0893587Cu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893587Cu) goto L_0893587C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893587C:
    aot_gpr_31 = (0x08935884u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935884u) goto L_08935884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935884:
    aot_gpr_31 = (0x0893588Cu);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893588Cu) goto L_0893588C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893588C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19648)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_089358F0;
      }
      goto L_08935898;
    }
L_08935898:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19508));
      if (branch_taken) {
          goto L_089358D0;
      }
      goto L_089358A4;
    }
L_089358A4:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x089358B0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 384u, 0x089358B0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089358B0u) goto L_089358B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089358B0:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_089358C8;
      }
      goto L_089358BC;
    }
L_089358BC:
    aot_gpr_31 = (0x089358C4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089358C4u) goto L_089358C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089358C4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089358C8;
L_089358C8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19508));
    goto L_089358D0;
L_089358D0:
    aot_gpr_31 = (0x089358D8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 389u, 0x089358D8u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089358D8u) goto L_089358D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089358D8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089358E8u);
    aot_gpr_6 = (0u | 240u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089358E8u) goto L_089358E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089358E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089359FC;
      }
      goto L_089358F0;
    }
L_089358F0:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08935950;
      }
      goto L_089358F8;
    }
L_089358F8:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19500));
      if (branch_taken) {
          goto L_08935930;
      }
      goto L_08935904;
    }
L_08935904:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08935910u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 394u, 0x08935910u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935910u) goto L_08935910;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935910:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08935928;
      }
      goto L_0893591C;
    }
L_0893591C:
    aot_gpr_31 = (0x08935924u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935924u) goto L_08935924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935924:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08935928;
L_08935928:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19500));
    goto L_08935930;
L_08935930:
    aot_gpr_31 = (0x08935938u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 399u, 0x08935938u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935938u) goto L_08935938;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935938:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08935948u);
    aot_gpr_6 = (0u | 96u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935948u) goto L_08935948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935948:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089359FC;
      }
      goto L_08935950;
    }
L_08935950:
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089359FC;
      }
      goto L_0893595C;
    }
L_0893595C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19492));
      if (branch_taken) {
          goto L_08935994;
      }
      goto L_08935968;
    }
L_08935968:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08935974u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 404u, 0x08935974u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935974u) goto L_08935974;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935974:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0893598C;
      }
      goto L_08935980;
    }
L_08935980:
    aot_gpr_31 = (0x08935988u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935988u) goto L_08935988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935988:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0893598C;
L_0893598C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19492));
    goto L_08935994;
L_08935994:
    aot_gpr_31 = (0x0893599Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 409u, 0x0893599Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893599Cu) goto L_0893599C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893599C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089359ACu);
    aot_gpr_6 = (0u | 96u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089359ACu) goto L_089359AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089359AC:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19484));
      if (branch_taken) {
          goto L_089359E4;
      }
      goto L_089359B8;
    }
L_089359B8:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x089359C4u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 412u, 0x089359C4u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089359C4u) goto L_089359C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089359C4:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_089359DC;
      }
      goto L_089359D0;
    }
L_089359D0:
    aot_gpr_31 = (0x089359D8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089359D8u) goto L_089359D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089359D8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089359DC;
L_089359DC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19484));
    goto L_089359E4;
L_089359E4:
    aot_gpr_31 = (0x089359ECu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 417u, 0x089359ECu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089359ECu) goto L_089359EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089359EC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089359FCu);
    aot_gpr_6 = (0u | 150u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089359FCu) goto L_089359FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089359FC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08935A74;
      }
      goto L_08935A04;
    }
L_08935A04:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19668)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19668), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08935A48;
      }
      goto L_08935A1C;
    }
L_08935A1C:
    aot_gpr_4 = (16688u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08935A3C;
      }
      goto L_08935A34;
    }
L_08935A34:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19668), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08935A3C;
L_08935A3C:
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08935A54;
      }
      goto L_08935A48;
    }
L_08935A48:
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    goto L_08935A54;
L_08935A54:
    aot_gpr_31 = (0x08935A5Cu);
    goto L_08935490;
L_08935A5C:
    aot_gpr_31 = (0x08935A64u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935A64u) goto L_08935A64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935A64:
    aot_gpr_31 = (0x08935A6Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935A6Cu) goto L_08935A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935A6C:
    aot_gpr_31 = (0x08935A74u);
    aot_gpr_4 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935A74u) goto L_08935A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935A74:
    aot_gpr_31 = (0x08935A7Cu);
    aot_gpr_4 = (0u | 0u);
    goto L_08934F28;
L_08935A7C:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08935AA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_31 = (0x08935AC0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    goto L_08935474;
L_08935AC0:
    aot_gpr_31 = (0x08935AC8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_0893509C;
L_08935AC8:
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32304));
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08935AE0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 433u, 0x08935AE0u, 0x08A1C770u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935AE0u) goto L_08935AE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935AE0:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08935B08;
      }
      goto L_08935AEC;
    }
L_08935AEC:
    ctx.gpr[17] = (0u | 1u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08935B00u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 435u, 0x08935B00u, 0x08A1C044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935B00u) goto L_08935B00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935B00:
    aot_gpr_31 = (0x08935B08u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 436u, 0x08935B08u, 0x08A1C8D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 91u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 91u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935B08u) goto L_08935B08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935B08:
    aot_gpr_31 = (0x08935B10u);
    ctx.pc = 0x08B73224u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935B10:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08935B30u);
    ctx.gpr[10] = (0u | 255u);
    goto L_08934A24;
L_08935B30:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08935C1C;
      }
      goto L_08935B38;
    }
L_08935B38:
    aot_gpr_31 = (0x08935B40u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 440u, 0x08935B40u, 0x08AF431Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 36u, 0x08AF431Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935B40u) goto L_08935B40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935B40:
    aot_gpr_31 = (0x08935B48u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 441u, 0x08935B48u, 0x0889E7C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 579u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 579u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935B48u) goto L_08935B48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935B48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08935B5Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0199.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 442u, 0x08935B5Cu, 0x08B217D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0199_entry(rt, ctx, 283u, aot_mem);
#else
        recomp_unit_0199_entry(rt, ctx, 283u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 283u, 0x08B217D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935B5Cu) goto L_08935B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935B5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_gpr_6 = (2236u << 16u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(29552)));
    ctx.gpr[8] = (54272u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 & 1023u);
    aot_gpr_5 = (aot_gpr_5 << 10u);
    ctx.gpr[8] = (54528u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_4 & 1023u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(29552), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(29552));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(10))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(11))))));
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 & 63u);
    ctx.gpr[11] = (aot_gpr_6 & 63u);
    aot_gpr_2 = (ctx.gpr[7] << (aot_gpr_5 & 31u));
    ctx.gpr[11] = (ctx.gpr[7] << (ctx.gpr[11] & 31u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_2);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08935BF4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0054.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 443u, 0x08935BF4u, 0x088DFA08u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0054_entry(rt, ctx, 499u, aot_mem);
#else
        recomp_unit_0054_entry(rt, ctx, 499u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 499u, 0x088DFA08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935BF4u) goto L_08935BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935BF4:
    aot_gpr_31 = (0x08935BFCu);
    aot_gpr_4 = (0u | 0u);
    goto L_08934F28;
L_08935BFC:
    aot_gpr_31 = (0x08935C04u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 445u, 0x08935C04u, 0x08A07508u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 787u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 787u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935C04u) goto L_08935C04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935C04:
    aot_gpr_31 = (0x08935C0Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 446u, 0x08935C0Cu, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935C0Cu) goto L_08935C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935C0C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08935C24;
      }
      goto L_08935C14;
    }
L_08935C14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08935C3C;
      }
      goto L_08935C1C;
    }
L_08935C1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08935C3C;
      }
      goto L_08935C24;
    }
L_08935C24:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08935C34u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 450u, 0x08935C34u, 0x08A1C044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935C34u) goto L_08935C34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935C34:
    aot_gpr_31 = (0x08935C3Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 451u, 0x08935C3Cu, 0x08A1C8D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 91u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 91u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935C3Cu) goto L_08935C3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935C3C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08935C54:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08935C5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_31);
    aot_gpr_31 = (0x08935C70u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935C70u) goto L_08935C70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935C70:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(2));
    aot_gpr_5 = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (0u | 12u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[16] = (aot_gpr_29 | 0u);
    goto L_08935C88;
L_08935C88:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (ctx.gpr[8] + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[16] = (aot_gpr_29 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08935C88;
      }
      goto L_08935CAC;
    }
L_08935CAC:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[16] = (0u | 1u);
    goto L_08935CB4;
L_08935CB4:
    aot_gpr_31 = (0x08935CBCu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935CBCu) goto L_08935CBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935CBC:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08935CDC;
      }
      goto L_08935CCC;
    }
L_08935CCC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08935CE0;
      }
      goto L_08935CD8;
    }
L_08935CD8:
    aot_gpr_4 = (0u | 1u);
    goto L_08935CDC;
L_08935CDC:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08935CE0;
L_08935CE0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08935D80;
      }
      goto L_08935CE8;
    }
L_08935CE8:
    aot_gpr_31 = (0x08935CF0u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935CF0u) goto L_08935CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935CF0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08935D80;
      }
      goto L_08935CFC;
    }
L_08935CFC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08935D10;
      }
      goto L_08935D04;
    }
L_08935D04:
    aot_gpr_31 = (0x08935D0Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 467u, 0x08935D0Cu, 0x08A11208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 127u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 127u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 127u, 0x08A11208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935D0Cu) goto L_08935D0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935D0C:
    ctx.gpr[16] = (0u | 0u);
    goto L_08935D10;
L_08935D10:
    aot_gpr_31 = (0x08935D18u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 469u, 0x08935D18u, 0x0898B448u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 829u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 829u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 829u, 0x0898B448u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935D18u) goto L_08935D18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935D18:
    aot_gpr_31 = (0x08935D20u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 470u, 0x08935D20u, 0x08890F48u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 157u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 157u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 157u, 0x08890F48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935D20u) goto L_08935D20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935D20:
    aot_gpr_31 = (0x08935D28u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 471u, 0x08935D28u, 0x08890618u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 97u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 97u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 97u, 0x08890618u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935D28u) goto L_08935D28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935D28:
    aot_gpr_31 = (0x08935D30u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935D30u) goto L_08935D30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935D30:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08935D50;
      }
      goto L_08935D40;
    }
L_08935D40:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08935D54;
      }
      goto L_08935D4C;
    }
L_08935D4C:
    aot_gpr_4 = (0u | 1u);
    goto L_08935D50;
L_08935D50:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08935D54;
L_08935D54:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08935D70;
      }
      goto L_08935D5C;
    }
L_08935D5C:
    aot_gpr_31 = (0x08935D64u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935D64u) goto L_08935D64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935D64:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08935D78;
      }
      goto L_08935D70;
    }
L_08935D70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08935D80;
      }
      goto L_08935D78;
    }
L_08935D78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08935CB4;
      }
      goto L_08935D80;
    }
L_08935D80:
    aot_gpr_31 = (0x08935D88u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935D88u) goto L_08935D88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935D88:
    ctx.gpr[9] = (aot_gpr_2 + static_cast<std::uint32_t>(52));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 12u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[9] | 0u);
    goto L_08935DA0;
L_08935DA0:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (aot_gpr_29 + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (ctx.gpr[9] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08935DA0;
      }
      goto L_08935DC4;
    }
L_08935DC4:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_31 = (0x08935DD0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935DD0u) goto L_08935DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935DD0:
    ctx.gpr[9] = (aot_gpr_2 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 12u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (ctx.gpr[9] | 0u);
    goto L_08935DE8;
L_08935DE8:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (aot_gpr_29 + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (ctx.gpr[9] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08935DE8;
      }
      goto L_08935E0C;
    }
L_08935E0C:
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08935E20:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08935E28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08935E4Cu);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672), static_cast<std::uint8_t>(0u));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0172.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 490u, 0x08935E4Cu, 0x08AB5FCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0172_entry(rt, ctx, 536u, aot_mem);
#else
        recomp_unit_0172_entry(rt, ctx, 536u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 536u, 0x08AB5FCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935E4Cu) goto L_08935E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935E4C:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08935F3C;
      }
      goto L_08935E5C;
    }
L_08935E5C:
    aot_gpr_31 = (0x08935E64u);
    aot_gpr_4 = (0u | 2u);
    goto L_08935704;
L_08935E64:
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19432));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08935E7Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893570C;
L_08935E7C:
    aot_gpr_31 = (0x08935E84u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0172.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 494u, 0x08935E84u, 0x08AB5F30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0172_entry(rt, ctx, 525u, aot_mem);
#else
        recomp_unit_0172_entry(rt, ctx, 525u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 525u, 0x08AB5F30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935E84u) goto L_08935E84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935E84:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08935EAC;
      }
      goto L_08935E90;
    }
L_08935E90:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4211), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_4 = (31u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08935EA4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-31616));
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935EA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08935F3C;
      }
      goto L_08935EAC;
    }
L_08935EAC:
    aot_gpr_4 = (15u << 16u);
    aot_gpr_31 = (0x08935EB8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16960));
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935EB8:
    aot_gpr_31 = (0x08935EC0u);
    aot_gpr_4 = (0u | 3u);
    goto L_08935704;
L_08935EC0:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08935ED4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893570C;
L_08935ED4:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(6556));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19424)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08935EE8u);
    aot_gpr_5 = (0u | 1u);
    ctx.pc = 0x08B73234u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935EE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6560)));
    aot_gpr_5 = (aot_gpr_4 ^ ctx.gpr[20]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19424), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 16384u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08935F3C;
      }
      goto L_08935F04;
    }
L_08935F04:
    aot_gpr_31 = (0x08935F0Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 503u, 0x08935F0Cu, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935F0Cu) goto L_08935F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935F0C:
    aot_gpr_31 = (0x08935F14u);
    aot_gpr_4 = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935F14:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08935F20u);
    aot_gpr_5 = (0u | 1u);
    ctx.pc = 0x08B73234u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08935F20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6560)));
    aot_gpr_5 = (aot_gpr_4 ^ ctx.gpr[20]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19424), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 16384u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08935F04;
      }
      goto L_08935F3C;
    }
L_08935F3C:
    aot_gpr_31 = (0x08935F44u);
    aot_gpr_4 = (0u | 0u);
    goto L_08935704;
L_08935F44:
    aot_gpr_31 = (0x08935F4Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 508u, 0x08935F4Cu, 0x08A11120u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 113u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 113u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 113u, 0x08A11120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935F4Cu) goto L_08935F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935F4C:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_31 = (0x08935F58u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-11116));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0175.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 509u, 0x08935F58u, 0x08AC3E5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0175_entry(rt, ctx, 1044u, aot_mem);
#else
        recomp_unit_0175_entry(rt, ctx, 1044u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 1044u, 0x08AC3E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935F58u) goto L_08935F58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935F58:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19420));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08935F6Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893570C;
L_08935F6C:
    aot_gpr_31 = (0x08935F74u);
    goto L_08935C54;
L_08935F74:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2240)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08935F90;
      }
      goto L_08935F80;
    }
L_08935F80:
    aot_gpr_31 = (0x08935F88u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    goto L_08935474;
L_08935F88:
    aot_gpr_31 = (0x08935F90u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_0893509C;
L_08935F90:
    aot_gpr_31 = (0x08935F98u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 515u, 0x08935F98u, 0x08A11214u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 128u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 128u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935F98u) goto L_08935F98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935F98:
    aot_gpr_31 = (0x08935FA0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 516u, 0x08935FA0u, 0x08809E18u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 405u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 405u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 405u, 0x08809E18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935FA0u) goto L_08935FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935FA0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    goto L_08935FA4;
L_08935FA4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08935FBC;
      }
      goto L_08935FAC;
    }
L_08935FAC:
    aot_gpr_31 = (0x08935FB4u);
    goto L_089353A0;
L_08935FB4:
    aot_gpr_31 = (0x08935FBCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_0893509C;
L_08935FBC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4212)));
    goto L_08935FC0;
L_08935FC0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_08935FF4;
      }
      goto L_08935FC8;
    }
L_08935FC8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2240)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_08935FF4;
      }
      goto L_08935FD4;
    }
L_08935FD4:
    aot_gpr_31 = (0x08935FDCu);
    goto L_08937A28;
L_08935FDC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08935FEC;
      }
      goto L_08935FE4;
    }
L_08935FE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08935FF4;
      }
      goto L_08935FEC;
    }
L_08935FEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4212)));
      if (branch_taken) {
          goto L_08935FC0;
      }
      goto L_08935FF4;
    }
L_08935FF4:
    aot_gpr_31 = (0x08935FFCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 528u, 0x08935FFCu, 0x0898B7D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 888u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 888u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 888u, 0x0898B7D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08935FFCu) goto L_08935FFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08935FFC:
    aot_gpr_31 = (0x08936004u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 529u, 0x08936004u, 0x0898B4F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 844u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 844u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 844u, 0x0898B4F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936004u) goto L_08936004;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936004:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08936010u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 530u, 0x08936010u, 0x08A063CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 565u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 565u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936010u) goto L_08936010;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936010:
    aot_gpr_31 = (0x08936018u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0175.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 531u, 0x08936018u, 0x08AC3168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0175_entry(rt, ctx, 746u, aot_mem);
#else
        recomp_unit_0175_entry(rt, ctx, 746u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 746u, 0x08AC3168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936018u) goto L_08936018;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936018:
    aot_gpr_31 = (0x08936020u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 532u, 0x08936020u, 0x08A11208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 127u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 127u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 127u, 0x08A11208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936020u) goto L_08936020;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936020:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4212)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[18];
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-2240)));
      if (branch_taken) {
          goto L_08936034;
      }
      goto L_0893602C;
    }
L_0893602C:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08936064;
      }
      goto L_08936034;
    }
L_08936034:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08936044;
      }
      goto L_0893603C;
    }
L_0893603C:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4212), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4211), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08936044;
L_08936044:
    aot_gpr_31 = (0x0893604Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0175.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 537u, 0x0893604Cu, 0x08AC327Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0175_entry(rt, ctx, 772u, aot_mem);
#else
        recomp_unit_0175_entry(rt, ctx, 772u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 772u, 0x08AC327Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893604Cu) goto L_0893604C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893604C:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4212), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0893605Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 538u, 0x0893605Cu, 0x08A063CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 565u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 565u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893605Cu) goto L_0893605C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893605C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
      if (branch_taken) {
          goto L_08935FA4;
      }
      goto L_08936064;
    }
L_08936064:
    aot_gpr_31 = (0x0893606Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 540u, 0x0893606Cu, 0x08A05EDCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 493u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 493u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 493u, 0x08A05EDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893606Cu) goto L_0893606C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893606C:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893608C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0893609Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0034.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 542u, 0x0893609Cu, 0x0888D05Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0034_entry(rt, ctx, 260u, aot_mem);
#else
        recomp_unit_0034_entry(rt, ctx, 260u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 260u, 0x0888D05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893609Cu) goto L_0893609C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893609C:
    aot_gpr_31 = (0x089360A4u);
    goto L_08934D94;
L_089360A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089360BC;
      }
      goto L_089360B0;
    }
L_089360B0:
    aot_gpr_31 = (0x089360B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 399u, 0x08B65A54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089360B8u) goto L_089360B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089360B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    goto L_089360BC;
L_089360BC:
    aot_gpr_31 = (0x089360C4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 547u, 0x089360C4u, 0x08805D18u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 200u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 200u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 200u, 0x08805D18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089360C4u) goto L_089360C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089360C4:
    aot_gpr_31 = (0x089360CCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 548u, 0x089360CCu, 0x08805310u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 158u, 0x08805310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089360CCu) goto L_089360CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089360CC:
    aot_gpr_31 = (0x089360D4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 549u, 0x089360D4u, 0x0889E7C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 579u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 579u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089360D4u) goto L_089360D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089360D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089360EC;
      }
      goto L_089360E0;
    }
L_089360E0:
    aot_gpr_31 = (0x089360E8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 399u, 0x08B65A54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089360E8u) goto L_089360E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089360E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    goto L_089360EC;
L_089360EC:
    aot_gpr_31 = (0x089360F4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 553u, 0x089360F4u, 0x08805630u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 199u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 199u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 199u, 0x08805630u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089360F4u) goto L_089360F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089360F4:
    aot_gpr_31 = (0x089360FCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0157.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 554u, 0x089360FCu, 0x08A7A300u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0157_entry(rt, ctx, 450u, aot_mem);
#else
        recomp_unit_0157_entry(rt, ctx, 450u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0157_entry, 157u, 450u, 0x08A7A300u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089360FCu) goto L_089360FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089360FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08936114;
      }
      goto L_08936108;
    }
L_08936108:
    aot_gpr_31 = (0x08936110u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 399u, 0x08B65A54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936110u) goto L_08936110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936110:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    goto L_08936114;
L_08936114:
    aot_gpr_31 = (0x0893611Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 558u, 0x0893611Cu, 0x08805F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 215u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 215u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 215u, 0x08805F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893611Cu) goto L_0893611C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893611C:
    aot_gpr_31 = (0x08936124u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 559u, 0x08936124u, 0x08944FE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 136u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 136u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 136u, 0x08944FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936124u) goto L_08936124;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936124:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08936130:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08936138:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08936148u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0008.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 562u, 0x08936148u, 0x088277C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0008_entry(rt, ctx, 520u, aot_mem);
#else
        recomp_unit_0008_entry(rt, ctx, 520u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0008_entry, 8u, 520u, 0x088277C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936148u) goto L_08936148;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936148:
    aot_gpr_31 = (0x08936150u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 563u, 0x08936150u, 0x08A96B48u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 410u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 410u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 410u, 0x08A96B48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936150u) goto L_08936150;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936150:
    aot_gpr_31 = (0x08936158u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0157.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 564u, 0x08936158u, 0x08A7BB14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0157_entry(rt, ctx, 793u, aot_mem);
#else
        recomp_unit_0157_entry(rt, ctx, 793u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0157_entry, 157u, 793u, 0x08A7BB14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936158u) goto L_08936158;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936158:
    aot_gpr_31 = (0x08936160u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0165.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 565u, 0x08936160u, 0x08A98334u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0165_entry(rt, ctx, 35u, aot_mem);
#else
        recomp_unit_0165_entry(rt, ctx, 35u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 35u, 0x08A98334u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936160u) goto L_08936160;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936160:
    aot_gpr_31 = (0x08936168u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0199.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 566u, 0x08936168u, 0x08B201E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0199_entry(rt, ctx, 29u, aot_mem);
#else
        recomp_unit_0199_entry(rt, ctx, 29u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 29u, 0x08B201E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936168u) goto L_08936168;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936168:
    aot_gpr_31 = (0x08936170u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 567u, 0x08936170u, 0x08A9100Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 134u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 134u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 134u, 0x08A9100Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936170u) goto L_08936170;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936170:
    aot_gpr_31 = (0x08936178u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0157.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 568u, 0x08936178u, 0x08A7A94Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0157_entry(rt, ctx, 540u, aot_mem);
#else
        recomp_unit_0157_entry(rt, ctx, 540u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0157_entry, 157u, 540u, 0x08A7A94Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936178u) goto L_08936178;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936178:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
        goto L_08936190;
    }
    goto L_08936184;
L_08936184:
    aot_gpr_31 = (0x0893618Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893618Cu) goto L_0893618C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893618C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_08936190;
L_08936190:
    aot_gpr_31 = (0x08936198u);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 572u, 0x08936198u, 0x08958D28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 127u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 127u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 127u, 0x08958D28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936198u) goto L_08936198;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936198:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089361AC;
      }
      goto L_089361A4;
    }
L_089361A4:
    aot_gpr_31 = (0x089361ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 399u, 0x08B65A54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089361ACu) goto L_089361AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089361AC:
    aot_gpr_31 = (0x089361B4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 575u, 0x089361B4u, 0x08805630u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 199u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 199u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 199u, 0x08805630u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089361B4u) goto L_089361B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089361B4:
    aot_gpr_31 = (0x089361BCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0157.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 576u, 0x089361BCu, 0x08A7ADA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0157_entry(rt, ctx, 592u, aot_mem);
#else
        recomp_unit_0157_entry(rt, ctx, 592u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0157_entry, 157u, 592u, 0x08A7ADA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089361BCu) goto L_089361BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089361BC:
    aot_gpr_31 = (0x089361C4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 577u, 0x089361C4u, 0x08944FE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 136u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 136u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 136u, 0x08944FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089361C4u) goto L_089361C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089361C4:
    aot_gpr_31 = (0x089361CCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 578u, 0x089361CCu, 0x08AFD054u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 193u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 193u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 193u, 0x08AFD054u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089361CCu) goto L_089361CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089361CC:
    aot_gpr_31 = (0x089361D4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 579u, 0x089361D4u, 0x089832B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 605u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 605u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 605u, 0x089832B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089361D4u) goto L_089361D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089361D4:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (5888u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24632), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x089361FCu);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0160.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 580u, 0x089361FCu, 0x08A8626Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0160_entry(rt, ctx, 332u, aot_mem);
#else
        recomp_unit_0160_entry(rt, ctx, 332u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 332u, 0x08A8626Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089361FCu) goto L_089361FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089361FC:
    aot_gpr_31 = (0x08936204u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0114.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 581u, 0x08936204u, 0x089CF240u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0114_entry(rt, ctx, 567u, aot_mem);
#else
        recomp_unit_0114_entry(rt, ctx, 567u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0114_entry, 114u, 567u, 0x089CF240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936204u) goto L_08936204;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936204:
    aot_gpr_31 = (0x0893620Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0041.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 582u, 0x0893620Cu, 0x088ABE04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0041_entry(rt, ctx, 608u, aot_mem);
#else
        recomp_unit_0041_entry(rt, ctx, 608u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 608u, 0x088ABE04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893620Cu) goto L_0893620C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893620C:
    aot_gpr_31 = (0x08936214u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0078.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 583u, 0x08936214u, 0x0893FA34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0078_entry(rt, ctx, 823u, aot_mem);
#else
        recomp_unit_0078_entry(rt, ctx, 823u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 823u, 0x0893FA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936214u) goto L_08936214;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936214:
    aot_gpr_31 = (0x0893621Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0095.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 584u, 0x0893621Cu, 0x0898231Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0095_entry(rt, ctx, 470u, aot_mem);
#else
        recomp_unit_0095_entry(rt, ctx, 470u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 470u, 0x0898231Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893621Cu) goto L_0893621C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893621C:
    aot_gpr_31 = (0x08936224u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 585u, 0x08936224u, 0x089023F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 426u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 426u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 426u, 0x089023F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936224u) goto L_08936224;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936224:
    aot_gpr_31 = (0x0893622Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0132.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 586u, 0x0893622Cu, 0x08A17A18u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0132_entry(rt, ctx, 607u, aot_mem);
#else
        recomp_unit_0132_entry(rt, ctx, 607u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 607u, 0x08A17A18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893622Cu) goto L_0893622C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893622C:
    aot_gpr_31 = (0x08936234u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 587u, 0x08936234u, 0x08B261A8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 448u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 448u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 448u, 0x08B261A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936234u) goto L_08936234;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936234:
    aot_gpr_31 = (0x0893623Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0086.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 588u, 0x0893623Cu, 0x0895CF40u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0086_entry(rt, ctx, 120u, aot_mem);
#else
        recomp_unit_0086_entry(rt, ctx, 120u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0086_entry, 86u, 120u, 0x0895CF40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893623Cu) goto L_0893623C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893623C:
    aot_gpr_31 = (0x08936244u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0157.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 589u, 0x08936244u, 0x08A7A5B8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0157_entry(rt, ctx, 484u, aot_mem);
#else
        recomp_unit_0157_entry(rt, ctx, 484u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0157_entry, 157u, 484u, 0x08A7A5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936244u) goto L_08936244;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936244:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08936250:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_gpr_4 = (0u | 4u);
    { const std::uint32_t aot_run_words[7]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_gpr_31 = (0x0893627Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893627Cu) goto L_0893627C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893627C:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08936288u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936288u) goto L_08936288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936288:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08936294u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936294u) goto L_08936294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936294:
    ctx.gpr[17] = (0u | 8u);
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x089362A4u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089362A4u) goto L_089362A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089362A4:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x089362B0u);
    aot_gpr_5 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089362B0u) goto L_089362B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089362B0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24904)));
    ctx.gpr[16] = (2236u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_089362C8;
      }
      goto L_089362C0;
    }
L_089362C0:
    aot_gpr_31 = (0x089362C8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0043.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 597u, 0x089362C8u, 0x088B01E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0043_entry(rt, ctx, 19u, aot_mem);
#else
        recomp_unit_0043_entry(rt, ctx, 19u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 19u, 0x088B01E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089362C8u) goto L_089362C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089362C8:
    aot_gpr_31 = (0x089362D0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0060.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 598u, 0x089362D0u, 0x088F6E68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0060_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0060_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0060_entry, 60u, 600u, 0x088F6E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089362D0u) goto L_089362D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089362D0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089362E4;
      }
      goto L_089362DC;
    }
L_089362DC:
    aot_gpr_31 = (0x089362E4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 600u, 0x089362E4u, 0x08A1BF34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 616u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 616u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 616u, 0x08A1BF34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089362E4u) goto L_089362E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089362E4:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089362F0u);
    ctx.gpr[16] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089362F0u) goto L_089362F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089362F0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
      if (branch_taken) {
          goto L_08936338;
      }
      goto L_0893631C;
    }
L_0893631C:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (aot_gpr_6 << 5u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1396));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    goto L_08936338;
L_08936338:
    aot_gpr_6 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08936370;
      }
      goto L_08936344;
    }
L_08936344:
    aot_gpr_6 = (0u | 39u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
      if (branch_taken) {
          goto L_08936370;
      }
      goto L_08936350;
    }
L_08936350:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    aot_gpr_6 = (0u | 40u);
      if (branch_taken) {
          goto L_08936370;
      }
      goto L_08936358;
    }
L_08936358:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    aot_gpr_6 = (0u | 46u);
      if (branch_taken) {
          goto L_08936370;
      }
      goto L_08936360;
    }
L_08936360:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    aot_gpr_6 = (0u | 47u);
      if (branch_taken) {
          goto L_08936370;
      }
      goto L_08936368;
    }
L_08936368:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_08936374;
      }
      goto L_08936370;
    }
L_08936370:
    aot_gpr_5 = (0u | 1u);
    goto L_08936374;
L_08936374:
    aot_gpr_4 = (0u | 30u);
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_4;
    aot_gpr_4 = (0u | 18u);
      if (branch_taken) {
          goto L_08936390;
      }
      goto L_08936380;
    }
L_08936380:
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_4;
    aot_gpr_4 = (0u | 31u);
      if (branch_taken) {
          goto L_08936390;
      }
      goto L_08936388;
    }
L_08936388:
    if (ctx.gpr[16] != aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_0893639C;
    }
    goto L_08936390;
L_08936390:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089363BC;
      }
      goto L_08936398;
    }
L_08936398:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0893639C;
L_0893639C:
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(11244)));
        goto L_089363B4;
    }
    goto L_089363A4;
L_089363A4:
    aot_gpr_31 = (0x089363ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089363ACu) goto L_089363AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089363AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(11244)));
    goto L_089363B4;
L_089363B4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08936510;
      }
      goto L_089363BC;
    }
L_089363BC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x089363DCu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089363DCu) goto L_089363DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089363DC:
    aot_gpr_5 = (17392u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (0u | 18u);
    aot_gpr_5 = (17288u << 16u);
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_0893645C;
      }
      goto L_089363F8;
    }
L_089363F8:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (49712u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08936418u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936418u) goto L_08936418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936418:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08936428u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 623u, 0x08936428u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936428u) goto L_08936428;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936428:
    aot_gpr_5 = (17305u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x08936444u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936444u) goto L_08936444;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936444:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08936454u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 625u, 0x08936454u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936454u) goto L_08936454;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936454:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089364B8;
      }
      goto L_0893645C;
    }
L_0893645C:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (49812u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0893647Cu);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893647Cu) goto L_0893647C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893647C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0893648Cu);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 628u, 0x0893648Cu, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893648Cu) goto L_0893648C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893648C:
    aot_gpr_5 = (17325u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x089364A8u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089364A8u) goto L_089364A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089364A8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089364B8u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 630u, 0x089364B8u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089364B8u) goto L_089364B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089364B8:
    aot_gpr_5 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x089364D4u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089364D4u) goto L_089364D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089364D4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089364E4u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 632u, 0x089364E4u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089364E4u) goto L_089364E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089364E4:
    aot_gpr_5 = (17377u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x08936500u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936500u) goto L_08936500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936500:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08936510u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 634u, 0x08936510u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936510u) goto L_08936510;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936510:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x0893651Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1008));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0033.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 635u, 0x0893651Cu, 0x0888AC84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0033_entry(rt, ctx, 748u, aot_mem);
#else
        recomp_unit_0033_entry(rt, ctx, 748u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 748u, 0x0888AC84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893651Cu) goto L_0893651C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893651C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08936530;
      }
      goto L_08936528;
    }
L_08936528:
    aot_gpr_31 = (0x08936530u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 748u, 0x08B671D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936530u) goto L_08936530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936530:
    aot_gpr_31 = (0x08936538u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0026.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 638u, 0x08936538u, 0x0886DADCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0026_entry(rt, ctx, 275u, aot_mem);
#else
        recomp_unit_0026_entry(rt, ctx, 275u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 275u, 0x0886DADCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936538u) goto L_08936538;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08936550;
      }
      goto L_08936544;
    }
L_08936544:
    aot_gpr_31 = (0x0893654Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893654Cu) goto L_0893654C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893654C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08936550;
L_08936550:
    aot_gpr_31 = (0x08936558u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 642u, 0x08936558u, 0x089BA6ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 480u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 480u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 480u, 0x089BA6ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936558u) goto L_08936558;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936558:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24904)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893656C;
      }
      goto L_08936564;
    }
L_08936564:
    aot_gpr_31 = (0x0893656Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0043.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 644u, 0x0893656Cu, 0x088B01E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0043_entry(rt, ctx, 19u, aot_mem);
#else
        recomp_unit_0043_entry(rt, ctx, 19u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 19u, 0x088B01E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893656Cu) goto L_0893656C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893656C:
    aot_gpr_4 = (2240u << 16u);
    aot_gpr_31 = (0x08936578u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-25888));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0167.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 645u, 0x08936578u, 0x08AA3A9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0167_entry(rt, ctx, 891u, aot_mem);
#else
        recomp_unit_0167_entry(rt, ctx, 891u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 891u, 0x08AA3A9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936578u) goto L_08936578;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936578:
    aot_gpr_31 = (0x08936580u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0173.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 646u, 0x08936580u, 0x08AB8E04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0173_entry(rt, ctx, 187u, aot_mem);
#else
        recomp_unit_0173_entry(rt, ctx, 187u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 187u, 0x08AB8E04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936580u) goto L_08936580;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936580:
    aot_gpr_31 = (0x08936588u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 647u, 0x08936588u, 0x08A367F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 643u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 643u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 643u, 0x08A367F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936588u) goto L_08936588;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936588:
    aot_gpr_31 = (0x08936590u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0090.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 648u, 0x08936590u, 0x0896D128u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0090_entry(rt, ctx, 294u, aot_mem);
#else
        recomp_unit_0090_entry(rt, ctx, 294u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 294u, 0x0896D128u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936590u) goto L_08936590;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936590:
    aot_gpr_31 = (0x08936598u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 649u, 0x08936598u, 0x0898B4F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 845u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 845u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 845u, 0x0898B4F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936598u) goto L_08936598;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936598:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089365BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_089365F0;
      }
      goto L_089365D8;
    }
L_089365D8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x089365E8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 652u, 0x089365E8u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089365E8u) goto L_089365E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089365E8:
    aot_gpr_31 = (0x089365F0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089365F0u) goto L_089365F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089365F0:
    aot_gpr_31 = (0x089365F8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 654u, 0x089365F8u, 0x0882E9B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 611u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 611u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089365F8u) goto L_089365F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089365F8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089366C8;
      }
      goto L_08936600;
    }
L_08936600:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08936620;
      }
      goto L_0893660C;
    }
L_0893660C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08936618u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 657u, 0x08936618u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936618u) goto L_08936618;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936618:
    aot_gpr_31 = (0x08936620u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936620u) goto L_08936620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936620:
    aot_gpr_31 = (0x08936628u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 659u, 0x08936628u, 0x0882E518u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 524u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 524u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 524u, 0x0882E518u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936628u) goto L_08936628;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936628:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893663C;
      }
      goto L_08936634;
    }
L_08936634:
    aot_gpr_31 = (0x0893663Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893663Cu) goto L_0893663C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893663C:
    aot_gpr_31 = (0x08936644u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 662u, 0x08936644u, 0x089C6D78u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 631u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 631u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936644u) goto L_08936644;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936644:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(-128));
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(127));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08936674;
      }
      goto L_08936660;
    }
L_08936660:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 255u);
        goto L_08936674;
    }
    goto L_08936674;
L_08936674:
    ctx.gpr[8] = (aot_gpr_4 & 255u);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08936690u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936690u) goto L_08936690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936690:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_31 = (0x089366B8u);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089366B8u) goto L_089366B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089366B8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089366C8u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 667u, 0x089366C8u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089366C8u) goto L_089366C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089366C8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089366D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08936708;
      }
      goto L_089366EC;
    }
L_089366EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08936700;
      }
      goto L_089366F8;
    }
L_089366F8:
    aot_gpr_31 = (0x08936700u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936700u) goto L_08936700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936700:
    aot_gpr_31 = (0x08936708u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0110.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 672u, 0x08936708u, 0x089BDF2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0110_entry(rt, ctx, 403u, aot_mem);
#else
        recomp_unit_0110_entry(rt, ctx, 403u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 403u, 0x089BDF2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936708u) goto L_08936708;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936708:
    aot_gpr_31 = (0x08936710u);
    goto L_089372C0;
L_08936710:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893671C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_4 < static_cast<std::uint32_t>(22) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08936800;
      }
      goto L_08936730;
    }
L_08936730:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-11072)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08936748:
    aot_gpr_31 = (0x08936750u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0175.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 677u, 0x08936750u, 0x08AC2FA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0175_entry(rt, ctx, 708u, aot_mem);
#else
        recomp_unit_0175_entry(rt, ctx, 708u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 708u, 0x08AC2FA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936750u) goto L_08936750;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936750:
    aot_gpr_31 = (0x08936758u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0119.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 678u, 0x08936758u, 0x089E18E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0119_entry(rt, ctx, 339u, aot_mem);
#else
        recomp_unit_0119_entry(rt, ctx, 339u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0119_entry, 119u, 339u, 0x089E18E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936758u) goto L_08936758;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936758:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08936768;
      }
      goto L_08936760;
    }
L_08936760:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_08936768;
    }
L_08936768:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_08936770;
    }
L_08936770:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16976)));
    aot_gpr_4 = (15374u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 64053u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vrot_ct<1u, 64u, 2u, 4u>();
    ctx.execute_vfpu_vec3_ct<0u, 33u, 1u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    aot_gpr_6 = (16355u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 36409u);
    aot_gpr_31 = (0x089367B8u);
    aot_fpr_13 = get_effective_aspect_ratio(std::bit_cast<float>(aot_gpr_6));
    aot_fpr_12 = widen_horizontal_extent(aot_fpr_12);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 682u, 0x089367B8u, 0x0893A7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 586u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 586u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 586u, 0x0893A7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089367B8u) goto L_089367B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089367B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_089367C0;
    }
L_089367C0:
    aot_gpr_31 = (0x089367C8u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_0893505C;
L_089367C8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089367D8;
      }
      goto L_089367D0;
    }
L_089367D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_089367D8;
    }
L_089367D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_089367E0;
    }
L_089367E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_089367E8;
    }
L_089367E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_089367F0;
    }
L_089367F0:
    aot_gpr_31 = (0x089367F8u);
    goto L_08935054;
L_089367F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08936804;
      }
      goto L_08936800;
    }
L_08936800:
    aot_gpr_2 = (0u | 2u);
    goto L_08936804;
L_08936804:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08936810:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19660), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19681), static_cast<std::uint8_t>(0u));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893681C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08936838;
      }
      goto L_08936834;
    }
L_08936834:
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    goto L_08936838;
L_08936838:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    aot_gpr_31 = (0x08936850u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 80u, 0x08B64728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936850u) goto L_08936850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936850:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893685C:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08936864:
    aot_fpr_14 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = aot_fpr_12 - ctx.fpr[0];
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08936880:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-784));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(768), aot_run_words); }
    aot_gpr_31 = (0x08936898u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0205.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 701u, 0x08936898u, 0x08B3AE5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0205_entry(rt, ctx, 815u, aot_mem);
#else
        recomp_unit_0205_entry(rt, ctx, 815u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 815u, 0x08B3AE5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936898u) goto L_08936898;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936898:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(3688), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.fcr31);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-3969));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.fcr31 = ctx.gpr[8] & 0x0181FFFFu;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4164)));
    aot_gpr_31 = (0x089368B8u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08B73664u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089368B8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19388));
    aot_gpr_31 = (0x089368C4u);
    aot_gpr_4 = (0u | 1u);
    ctx.pc = 0x08B73134u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089368C4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_089368D4;
      }
      goto L_089368CC;
    }
L_089368CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089368CC;
      }
      goto L_089368D4;
    }
L_089368D4:
    aot_gpr_31 = (0x089368DCu);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089368DC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_089368E0;
L_089368E0:
    aot_gpr_5 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089368F8;
      }
      goto L_089368EC;
    }
L_089368EC:
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08936910;
      }
      goto L_089368F8;
    }
L_089368F8:
    aot_gpr_31 = (0x08936900u);
    aot_gpr_4 = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936900:
    aot_gpr_31 = (0x08936908u);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936908:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_089368E0;
      }
      goto L_08936910;
    }
L_08936910:
    aot_gpr_31 = (0x08936918u);
    aot_gpr_4 = (0u | 32u);
    ctx.pc = 0x08B7311Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936918:
    aot_gpr_31 = (0x08936920u);
    ctx.pc = 0x08B73104u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936920:
    aot_gpr_31 = (0x08936928u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0205.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 715u, 0x08936928u, 0x08B3AAE8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0205_entry(rt, ctx, 733u, aot_mem);
#else
        recomp_unit_0205_entry(rt, ctx, 733u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 733u, 0x08B3AAE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936928u) goto L_08936928;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936928:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08936940;
      }
      goto L_08936930;
    }
L_08936930:
    aot_gpr_31 = (0x08936938u);
    aot_gpr_4 = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936938:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08936920;
      }
      goto L_08936940;
    }
L_08936940:
    aot_gpr_31 = (0x08936948u);
    aot_gpr_4 = (0u | 32u);
    ctx.pc = 0x08B7311Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936948:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x0893695Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-11096));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 186u, 0x088B5310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893695Cu) goto L_0893695C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893695C:
    aot_gpr_31 = (0x08936964u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0205.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 721u, 0x08936964u, 0x08B3AAE8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0205_entry(rt, ctx, 733u, aot_mem);
#else
        recomp_unit_0205_entry(rt, ctx, 733u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 733u, 0x08B3AAE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936964u) goto L_08936964;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936964:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08936920;
      }
      goto L_0893696C;
    }
L_0893696C:
    aot_gpr_31 = (0x08936974u);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936974:
    aot_gpr_4 = (aot_gpr_2 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08936920;
      }
      goto L_08936980;
    }
L_08936980:
    aot_gpr_31 = (0x08936988u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 761u, 0x08B1B36Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936988u) goto L_08936988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936988:
    aot_gpr_31 = (0x08936990u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 726u, 0x08936990u, 0x08B60838u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 96u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 96u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 96u, 0x08B60838u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936990u) goto L_08936990;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936990:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_31 = (0x089369A8u);
    aot_gpr_6 = (0u | 8192u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 727u, 0x089369A8u, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089369A8u) goto L_089369A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089369A8:
    aot_gpr_6 = (1u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_31 = (0x089369BCu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1024));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 728u, 0x089369BCu, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089369BCu) goto L_089369BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089369BC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 12u);
    aot_gpr_31 = (0x089369CCu);
    aot_gpr_6 = (0u | 6144u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 729u, 0x089369CCu, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089369CCu) goto L_089369CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089369CC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x089369DCu);
    aot_gpr_6 = (0u | 6144u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 730u, 0x089369DCu, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089369DCu) goto L_089369DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089369DC:
    aot_gpr_6 = (2u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 24u);
    aot_gpr_31 = (0x089369F0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-11264));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 731u, 0x089369F0u, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089369F0u) goto L_089369F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089369F0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 32u);
    aot_gpr_31 = (0x08936A00u);
    aot_gpr_6 = (0u | 11264u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 732u, 0x08936A00u, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936A00u) goto L_08936A00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936A00:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 40u);
    aot_gpr_31 = (0x08936A10u);
    aot_gpr_6 = (0u | 1024u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 733u, 0x08936A10u, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936A10u) goto L_08936A10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936A10:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 48u);
    aot_gpr_31 = (0x08936A20u);
    aot_gpr_6 = (0u | 3072u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 734u, 0x08936A20u, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936A20u) goto L_08936A20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936A20:
    aot_gpr_6 = (0u | 46080u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08936A30u);
    aot_gpr_5 = (0u | 56u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 735u, 0x08936A30u, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936A30u) goto L_08936A30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936A30:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 64u);
    aot_gpr_31 = (0x08936A40u);
    aot_gpr_6 = (0u | 1024u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 736u, 0x08936A40u, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936A40u) goto L_08936A40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936A40:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 80u);
    aot_gpr_31 = (0x08936A50u);
    aot_gpr_6 = (0u | 4096u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 737u, 0x08936A50u, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936A50u) goto L_08936A50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936A50:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 96u);
    aot_gpr_31 = (0x08936A60u);
    aot_gpr_6 = (0u | 2048u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 738u, 0x08936A60u, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936A60u) goto L_08936A60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936A60:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 112u);
    aot_gpr_31 = (0x08936A70u);
    aot_gpr_6 = (0u | 30720u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 739u, 0x08936A70u, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936A70u) goto L_08936A70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936A70:
    aot_gpr_6 = (3u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 176u);
    aot_gpr_31 = (0x08936A84u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8192));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 740u, 0x08936A84u, 0x08ABF268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 681u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 681u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 681u, 0x08ABF268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936A84u) goto L_08936A84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936A84:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08936A98u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 741u, 0x08936A98u, 0x089B9ABCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 323u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 323u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936A98u) goto L_08936A98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936A98:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (2195u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    aot_gpr_31 = (0x08936AACu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17596));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 742u, 0x08936AACu, 0x08ABF324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 690u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 690u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 690u, 0x08ABF324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936AACu) goto L_08936AAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936AAC:
    aot_gpr_5 = (2195u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08936ABCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17744));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 743u, 0x08936ABCu, 0x08ABF324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 690u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 690u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 690u, 0x08ABF324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936ABCu) goto L_08936ABC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936ABC:
    aot_gpr_5 = (2195u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08936ACCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17840));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 744u, 0x08936ACCu, 0x08ABF324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 690u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 690u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 690u, 0x08ABF324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936ACCu) goto L_08936ACC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936ACC:
    aot_gpr_31 = (0x08936AD4u);
    ctx.pc = 0x08B73494u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936AD4:
    aot_gpr_31 = (0x08936ADCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0199.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 746u, 0x08936ADCu, 0x08B2090Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0199_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0199_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 107u, 0x08B2090Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936ADCu) goto L_08936ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936ADC:
    aot_gpr_31 = (0x08936AE4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 747u, 0x08936AE4u, 0x08939238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 294u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 294u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 294u, 0x08939238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936AE4u) goto L_08936AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936AE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08936AF8;
      }
      goto L_08936AF0;
    }
L_08936AF0:
    aot_gpr_31 = (0x08936AF8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936AF8u) goto L_08936AF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936AF8:
    aot_gpr_31 = (0x08936B00u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0083.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 750u, 0x08936B00u, 0x08953E60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0083_entry(rt, ctx, 874u, aot_mem);
#else
        recomp_unit_0083_entry(rt, ctx, 874u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 874u, 0x08953E60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936B00u) goto L_08936B00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936B00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08936B14;
      }
      goto L_08936B0C;
    }
L_08936B0C:
    aot_gpr_31 = (0x08936B14u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936B14u) goto L_08936B14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936B14:
    aot_gpr_31 = (0x08936B1Cu);
    goto L_089343AC;
L_08936B1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08936B30;
      }
      goto L_08936B28;
    }
L_08936B28:
    aot_gpr_31 = (0x08936B30u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 755u, 0x08936B30u, 0x08B68290u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936B30u) goto L_08936B30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936B30:
    aot_gpr_31 = (0x08936B38u);
    goto L_089343D8;
L_08936B38:
    aot_gpr_31 = (0x08936B40u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19661), static_cast<std::uint8_t>(0u));
    goto L_08934828;
L_08936B40:
    aot_gpr_4 = (0u | 20u);
    aot_gpr_31 = (0x08936B4Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0119.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 758u, 0x08936B4Cu, 0x089E16B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0119_entry(rt, ctx, 285u, aot_mem);
#else
        recomp_unit_0119_entry(rt, ctx, 285u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0119_entry, 119u, 285u, 0x089E16B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936B4Cu) goto L_08936B4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936B4C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08936B5C;
      }
      goto L_08936B54;
    }
L_08936B54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08936F44;
      }
      goto L_08936B5C;
    }
L_08936B5C:
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(8888));
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-32));
    aot_gpr_31 = (0x08936B78u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0172.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 761u, 0x08936B78u, 0x08AB5E04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0172_entry(rt, ctx, 502u, aot_mem);
#else
        recomp_unit_0172_entry(rt, ctx, 502u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 502u, 0x08AB5E04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936B78u) goto L_08936B78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936B78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8888)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08936EA4;
      }
      goto L_08936B84;
    }
L_08936B84:
    aot_gpr_31 = (0x08936B8Cu);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936B8C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_08936B90;
L_08936B90:
    aot_gpr_5 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08936BA8;
      }
      goto L_08936B9C;
    }
L_08936B9C:
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08936BC0;
      }
      goto L_08936BA8;
    }
L_08936BA8:
    aot_gpr_31 = (0x08936BB0u);
    aot_gpr_4 = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936BB0:
    aot_gpr_31 = (0x08936BB8u);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936BB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08936B90;
      }
      goto L_08936BC0;
    }
L_08936BC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08936BF4;
      }
      goto L_08936BCC;
    }
L_08936BCC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08936BD8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 771u, 0x08936BD8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936BD8u) goto L_08936BD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936BD8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08936BF0;
      }
      goto L_08936BE4;
    }
L_08936BE4:
    aot_gpr_31 = (0x08936BECu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936BECu) goto L_08936BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936BEC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08936BF0;
L_08936BF0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08936BF4;
L_08936BF4:
    aot_gpr_31 = (0x08936BFCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 776u, 0x08936BFCu, 0x089F656Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 447u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 447u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 447u, 0x089F656Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936BFCu) goto L_08936BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936BFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8888)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08936CC8;
      }
      goto L_08936C0C;
    }
L_08936C0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08936C44;
    }
    goto L_08936C18;
L_08936C18:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08936C24u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 779u, 0x08936C24u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936C24u) goto L_08936C24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936C24:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08936C3C;
      }
      goto L_08936C30;
    }
L_08936C30:
    aot_gpr_31 = (0x08936C38u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936C38u) goto L_08936C38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936C38:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08936C3C;
L_08936C3C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08936C44;
L_08936C44:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19380));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08936C54u);
    ctx.gpr[7] = (0u | 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 784u, 0x08936C54u, 0x089F63FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 426u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 426u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936C54u) goto L_08936C54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936C54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_08936C8C;
      }
      goto L_08936C60;
    }
L_08936C60:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08936C6Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 786u, 0x08936C6Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936C6Cu) goto L_08936C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936C6C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08936C84;
      }
      goto L_08936C78;
    }
L_08936C78:
    aot_gpr_31 = (0x08936C80u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936C80u) goto L_08936C80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936C80:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08936C84;
L_08936C84:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    goto L_08936C8C;
L_08936C8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19372));
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08936CA0u);
    ctx.gpr[7] = (0u | 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 791u, 0x08936CA0u, 0x089F63FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 426u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 426u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936CA0u) goto L_08936CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936CA0:
    aot_gpr_4 = (2247u << 16u);
    ctx.gpr[7] = (2247u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19364));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-544));
    aot_gpr_31 = (0x08936CC0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936CC0u) goto L_08936CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936CC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08936DA0;
      }
      goto L_08936CC8;
    }
L_08936CC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8888)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08936D94;
      }
      goto L_08936CD8;
    }
L_08936CD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08936D10;
    }
    goto L_08936CE4;
L_08936CE4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08936CF0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 796u, 0x08936CF0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936CF0u) goto L_08936CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936CF0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08936D08;
      }
      goto L_08936CFC;
    }
L_08936CFC:
    aot_gpr_31 = (0x08936D04u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936D04u) goto L_08936D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936D04:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08936D08;
L_08936D08:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08936D10;
L_08936D10:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19352));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08936D20u);
    ctx.gpr[7] = (0u | 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 801u, 0x08936D20u, 0x089F63FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 426u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 426u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936D20u) goto L_08936D20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936D20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_08936D58;
      }
      goto L_08936D2C;
    }
L_08936D2C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08936D38u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 803u, 0x08936D38u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936D38u) goto L_08936D38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936D38:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08936D50;
      }
      goto L_08936D44;
    }
L_08936D44:
    aot_gpr_31 = (0x08936D4Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936D4Cu) goto L_08936D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936D4C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08936D50;
L_08936D50:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    goto L_08936D58;
L_08936D58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19344));
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08936D6Cu);
    ctx.gpr[7] = (0u | 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 808u, 0x08936D6Cu, 0x089F63FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 426u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 426u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 426u, 0x089F63FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936D6Cu) goto L_08936D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936D6C:
    aot_gpr_4 = (2247u << 16u);
    ctx.gpr[7] = (2247u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19364));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-544));
    aot_gpr_31 = (0x08936D8Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936D8Cu) goto L_08936D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936D8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08936DA0;
      }
      goto L_08936D94;
    }
L_08936D94:
    aot_gpr_4 = (2247u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(-544), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 0u);
    goto L_08936DA0;
L_08936DA0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08936E68;
      }
      goto L_08936DA8;
    }
L_08936DA8:
    aot_gpr_31 = (0x08936DB0u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 813u, 0x08936DB0u, 0x08860C08u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 149u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 149u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 149u, 0x08860C08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936DB0u) goto L_08936DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936DB0:
    aot_gpr_31 = (0x08936DB8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 814u, 0x08936DB8u, 0x08A06D3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 704u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 704u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 704u, 0x08A06D3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936DB8u) goto L_08936DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936DB8:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29552));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08936DD8u);
    ctx.gpr[9] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0054.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 815u, 0x08936DD8u, 0x088DFE80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0054_entry(rt, ctx, 525u, aot_mem);
#else
        recomp_unit_0054_entry(rt, ctx, 525u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936DD8u) goto L_08936DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936DD8:
    aot_gpr_31 = (0x08936DE0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 816u, 0x08936DE0u, 0x08A06FE0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 723u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 723u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 723u, 0x08A06FE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936DE0u) goto L_08936DE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936DE0:
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-544));
    aot_gpr_31 = (0x08936DF0u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0172.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 817u, 0x08936DF0u, 0x08AB650Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0172_entry(rt, ctx, 636u, aot_mem);
#else
        recomp_unit_0172_entry(rt, ctx, 636u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 636u, 0x08AB650Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936DF0u) goto L_08936DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936DF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08936E60;
      }
      goto L_08936E04;
    }
L_08936E04:
    aot_gpr_31 = (0x08936E0Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 819u, 0x08936E0Cu, 0x08A06D3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 704u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 704u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 704u, 0x08A06D3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936E0Cu) goto L_08936E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936E0C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29552));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08936E2Cu);
    ctx.gpr[9] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0054.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 820u, 0x08936E2Cu, 0x088DFE80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0054_entry(rt, ctx, 525u, aot_mem);
#else
        recomp_unit_0054_entry(rt, ctx, 525u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936E2Cu) goto L_08936E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936E2C:
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08936E44u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 821u, 0x08936E44u, 0x08A06FE0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 723u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 723u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 723u, 0x08A06FE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936E44u) goto L_08936E44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936E44:
    aot_gpr_31 = (0x08936E4Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 822u, 0x08936E4Cu, 0x08A07508u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 787u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 787u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936E4Cu) goto L_08936E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936E4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08936E04;
      }
      goto L_08936E60;
    }
L_08936E60:
    aot_gpr_31 = (0x08936E68u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 824u, 0x08936E68u, 0x08A06CBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 691u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 691u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 691u, 0x08A06CBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936E68u) goto L_08936E68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936E68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08936E9C;
      }
      goto L_08936E74;
    }
L_08936E74:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08936E80u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 826u, 0x08936E80u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936E80u) goto L_08936E80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936E80:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08936E98;
      }
      goto L_08936E8C;
    }
L_08936E8C:
    aot_gpr_31 = (0x08936E94u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936E94u) goto L_08936E94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936E94:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08936E98;
L_08936E98:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08936E9C;
L_08936E9C:
    aot_gpr_31 = (0x08936EA4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 831u, 0x08936EA4u, 0x089F6324u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 412u, 0x089F6324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936EA4u) goto L_08936EA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936EA4:
    ctx.gpr[16] = (0u | 0u);
    goto L_08936EA8;
L_08936EA8:
    aot_gpr_31 = (0x08936EB0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0205.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 833u, 0x08936EB0u, 0x08B3AAE8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0205_entry(rt, ctx, 733u, aot_mem);
#else
        recomp_unit_0205_entry(rt, ctx, 733u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 733u, 0x08B3AAE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936EB0u) goto L_08936EB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936EB0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08936EC8;
      }
      goto L_08936EB8;
    }
L_08936EB8:
    aot_gpr_31 = (0x08936EC0u);
    aot_gpr_4 = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08936EA8;
      }
      goto L_08936EC8;
    }
L_08936EC8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08936ED8;
      }
      goto L_08936ED0;
    }
L_08936ED0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08936B78;
      }
      goto L_08936ED8;
    }
L_08936ED8:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    ctx.gpr[16] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08936EFC;
      }
      goto L_08936EEC;
    }
L_08936EEC:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08936EFCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 840u, 0x08936EFCu, 0x089B9BA0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 336u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 336u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936EFCu) goto L_08936EFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936EFC:
    aot_gpr_31 = (0x08936F04u);
    goto L_089349A8;
L_08936F04:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08936F1C;
      }
      goto L_08936F0C;
    }
L_08936F0C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08936F1Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 843u, 0x08936F1Cu, 0x089B9ABCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 323u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 323u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936F1Cu) goto L_08936F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936F1C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08936F28u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 844u, 0x08936F28u, 0x0887F14Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 659u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 659u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 659u, 0x0887F14Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936F28u) goto L_08936F28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936F28:
    aot_gpr_31 = (0x08936F30u);
    aot_gpr_4 = (0u | 0u);
    goto L_089349C8;
L_08936F30:
    aot_gpr_31 = (0x08936F38u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0175.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 846u, 0x08936F38u, 0x08AC30B8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0175_entry(rt, ctx, 731u, aot_mem);
#else
        recomp_unit_0175_entry(rt, ctx, 731u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 731u, 0x08AC30B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936F38u) goto L_08936F38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936F38:
    aot_gpr_31 = (0x08936F40u);
    goto L_08935E28;
L_08936F40:
    aot_gpr_2 = (0u | 0u);
    goto L_08936F44;
L_08936F44:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(768), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(784));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08936F58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_run_words); }
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08936FA8;
      }
      goto L_08936F90;
    }
L_08936F90:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08936FA0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 851u, 0x08936FA0u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936FA0u) goto L_08936FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936FA0:
    aot_gpr_31 = (0x08936FA8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936FA8u) goto L_08936FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936FA8:
    aot_gpr_31 = (0x08936FB0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 853u, 0x08936FB0u, 0x0882E9B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 611u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 611u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936FB0u) goto L_08936FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936FB0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08936FE4;
      }
      goto L_08936FB8;
    }
L_08936FB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08936FD8;
      }
      goto L_08936FC4;
    }
L_08936FC4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08936FD0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 856u, 0x08936FD0u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936FD0u) goto L_08936FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08936FD0:
    aot_gpr_31 = (0x08936FD8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08936FD8u) goto L_08936FD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08936FD8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937000;
      }
      goto L_08936FE4;
    }
L_08936FE4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16965)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08937030;
      }
      goto L_08936FF8;
    }
L_08936FF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
      if (branch_taken) {
          goto L_08937008;
      }
      goto L_08937000;
    }
L_08937000:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08937294;
      }
      goto L_08937008;
    }
L_08937008:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893701C;
      }
      goto L_08937010;
    }
L_08937010:
    aot_gpr_31 = (0x08937018u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937018u) goto L_08937018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937018:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0893701C;
L_0893701C:
    aot_gpr_31 = (0x08937024u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 865u, 0x08937024u, 0x089C6D78u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 631u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 631u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937024u) goto L_08937024;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937024:
    aot_gpr_4 = (aot_gpr_2 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937294;
      }
      goto L_08937030;
    }
L_08937030:
    aot_gpr_31 = (0x08937038u);
    aot_gpr_4 = (0u | 0u);
    goto L_0893509C;
L_08937038:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16965)));
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0893704Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0115.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 868u, 0x0893704Cu, 0x089D1AECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0115_entry(rt, ctx, 291u, aot_mem);
#else
        recomp_unit_0115_entry(rt, ctx, 291u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 291u, 0x089D1AECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893704Cu) goto L_0893704C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893704C:
    aot_gpr_4 = (17392u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[19] = (2236u << 16u);
    aot_gpr_4 = (17288u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32304));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08937080;
      }
      goto L_08937074;
    }
L_08937074:
    aot_gpr_31 = (0x0893707Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893707Cu) goto L_0893707C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893707C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08937080;
L_08937080:
    aot_gpr_31 = (0x08937088u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 872u, 0x08937088u, 0x089C6D78u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 631u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 631u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937088u) goto L_08937088;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937088:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_4 = (0u | 256u);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (0u | 256u);
        goto L_0893709C;
    }
    goto L_0893709C;
L_0893709C:
    aot_gpr_4 = (0u | 50u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_089370AC;
    }
    goto L_089370AC;
L_089370AC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1948)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089370BC;
      }
      goto L_089370B8;
    }
L_089370B8:
    ctx.gpr[17] = (0u | 0u);
    goto L_089370BC;
L_089370BC:
    aot_gpr_5 = (ctx.gpr[17] - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(256));
    if (aot_gpr_5 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16968)));
        goto L_089370E0;
    }
    goto L_089370CC;
L_089370CC:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089371D0;
      }
      goto L_089370E0;
    }
L_089370E0:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16967)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16966)));
    ctx.gpr[8] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_6 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (0u | 256u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[17]);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[7] = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_gpr_5 = (aot_gpr_5 >> 24u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    ctx.gpr[17] = (ctx.gpr[9] - ctx.gpr[17]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 0 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 0u);
        goto L_08937188;
    }
    goto L_08937188;
L_08937188:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[17] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(27)));
    aot_gpr_4 = (15232u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17008u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (0u | 255u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (0u | 255u);
        goto L_089371CC;
    }
    goto L_089371CC;
L_089371CC:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_089371D0;
L_089371D0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x089371E8u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089371E8u) goto L_089371E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089371E8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08937228u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 883u, 0x08937228u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937228u) goto L_08937228;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937228:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16965)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08937290;
      }
      goto L_08937234;
    }
L_08937234:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1948)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937290;
      }
      goto L_08937240;
    }
L_08937240:
    aot_gpr_4 = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_31 = (0x0893726Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(60));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893726Cu) goto L_0893726C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893726C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08937288u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 887u, 0x08937288u, 0x08AF46A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 76u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 76u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 76u, 0x08AF46A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937288u) goto L_08937288;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937288:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08937294;
      }
      goto L_08937290;
    }
L_08937290:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19682), static_cast<std::uint8_t>(0u));
    goto L_08937294;
L_08937294:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089372C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words); }
    { const bool branch_taken = ctx.gpr[16] != 0u;
      if (branch_taken) {
          goto L_08937320;
      }
      goto L_089372F8;
    }
L_089372F8:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08937304u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 892u, 0x08937304u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937304u) goto L_08937304;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937304:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0893731C;
      }
      goto L_08937310;
    }
L_08937310:
    aot_gpr_31 = (0x08937318u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937318u) goto L_08937318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937318:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0893731C;
L_0893731C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08937320;
L_08937320:
    aot_gpr_31 = (0x08937328u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 897u, 0x08937328u, 0x089F6318u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 411u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 411u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 411u, 0x089F6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937328u) goto L_08937328;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937328:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089373A8;
      }
      goto L_08937330;
    }
L_08937330:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19600));
      if (branch_taken) {
          goto L_08937364;
      }
      goto L_0893733C;
    }
L_0893733C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08937348u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 900u, 0x08937348u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937348u) goto L_08937348;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937348:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08937360;
      }
      goto L_08937354;
    }
L_08937354:
    aot_gpr_31 = (0x0893735Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893735Cu) goto L_0893735C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893735C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08937360;
L_08937360:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08937364;
L_08937364:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08937370u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 905u, 0x08937370u, 0x089F64FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 441u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 441u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 441u, 0x089F64FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937370u) goto L_08937370;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937370:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089373A8;
      }
      goto L_08937378;
    }
L_08937378:
    aot_gpr_31 = (0x08937380u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 907u, 0x08937380u, 0x08939298u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 302u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 302u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 302u, 0x08939298u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937380u) goto L_08937380;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937380:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19332)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7713), static_cast<std::uint8_t>(aot_gpr_2));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19332), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16968)));
    aot_gpr_4 = (0u | 255u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089373B0;
      }
      goto L_089373A0;
    }
L_089373A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089373CC;
      }
      goto L_089373A8;
    }
L_089373A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089379F8;
      }
      goto L_089373B0;
    }
L_089373B0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16967)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_089373CC;
      }
      goto L_089373BC;
    }
L_089373BC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16966)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_089373CC;
      }
      goto L_089373C8;
    }
L_089373C8:
    ctx.gpr[17] = (0u | 1u);
    goto L_089373CC;
L_089373CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08937570;
      }
      goto L_089373E0;
    }
L_089373E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[19] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08937408;
      }
      goto L_089373F0;
    }
L_089373F0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08937400u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 916u, 0x08937400u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937400u) goto L_08937400;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937400:
    aot_gpr_31 = (0x08937408u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937408u) goto L_08937408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937408:
    aot_gpr_31 = (0x08937410u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 918u, 0x08937410u, 0x0882E9B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 611u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 611u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937410u) goto L_08937410;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937410:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08937570;
      }
      goto L_08937418;
    }
L_08937418:
    aot_gpr_4 = (13702u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 14269u);
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08937494;
      }
      goto L_0893742C;
    }
L_0893742C:
    aot_gpr_31 = (0x08937434u);
    ctx.gpr[19] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937434u) goto L_08937434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937434:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08937494;
      }
      goto L_0893743C;
    }
L_0893743C:
    aot_gpr_31 = (0x08937444u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937444u) goto L_08937444;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937444:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08937490;
      }
      goto L_08937458;
    }
L_08937458:
    aot_gpr_31 = (0x08937460u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937460u) goto L_08937460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937460:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08937490;
      }
      goto L_08937474;
    }
L_08937474:
    aot_gpr_31 = (0x0893747Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893747Cu) goto L_0893747C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893747C:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 65u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08937494;
      }
      goto L_08937490;
    }
L_08937490:
    ctx.gpr[19] = (0u | 1u);
    goto L_08937494;
L_08937494:
    aot_gpr_31 = (0x0893749Cu);
    ctx.pc = 0x08B73514u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893749C:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x089374B0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.pc = 0x08B7343Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089374B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[22] = aot_fpr_12 - ctx.fpr[22];
      if (branch_taken) {
          goto L_08937570;
      }
      goto L_089374DC;
    }
L_089374DC:
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08937570;
      }
      goto L_089374F4;
    }
L_089374F4:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19332), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08937544;
      }
      goto L_08937500;
    }
L_08937500:
    aot_gpr_31 = (0x08937508u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.pc = 0x08B73514u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937508:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x0893751Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.pc = 0x08B7343Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893751C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[22];
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08937544;
L_08937544:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08937558u);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[24];
    goto L_08936864;
L_08937558:
    aot_fpr_12 = ctx.fpr[0] - ctx.fpr[24];
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08937570;
L_08937570:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19332)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089375B0;
      }
      goto L_0893757C;
    }
L_0893757C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089375B0;
      }
      goto L_08937590;
    }
L_08937590:
    aot_gpr_4 = (16896u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089375B0;
      }
      goto L_089375AC;
    }
L_089375AC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089375B0;
L_089375B0:
    aot_gpr_31 = (0x089375B8u);
    ctx.gpr[18] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 944u, 0x089375B8u, 0x08939298u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 302u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 302u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 302u, 0x08939298u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089375B8u) goto L_089375B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089375B8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08937680;
      }
      goto L_089375C0;
    }
L_089375C0:
    aot_gpr_4 = (13702u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 14269u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19328)));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16384u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08937624;
      }
      goto L_089375E4;
    }
L_089375E4:
    aot_gpr_31 = (0x089375ECu);
    ctx.pc = 0x08B73514u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089375EC:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08937600u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.pc = 0x08B7343Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937600:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19328), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08937624;
L_08937624:
    aot_gpr_31 = (0x0893762Cu);
    ctx.gpr[18] = (0u | 0u);
    ctx.pc = 0x08B73514u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893762C:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08937640u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.pc = 0x08B7343Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937640:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19328)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08937678;
    }
    goto L_08937678;
L_08937678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08937684;
      }
      goto L_08937680;
    }
L_08937680:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19328), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08937684;
L_08937684:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_089376A0;
      }
      goto L_0893768C;
    }
L_0893768C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08937900;
      }
      goto L_089376A0;
    }
L_089376A0:
    aot_gpr_31 = (0x089376A8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089376A8u) goto L_089376A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089376A8:
    aot_gpr_31 = (0x089376B0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089376B0u) goto L_089376B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089376B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08937818;
      }
      goto L_089376B8;
    }
L_089376B8:
    ctx.gpr[20] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_089376F4;
      }
      goto L_089376C4;
    }
L_089376C4:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x089376ECu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089376ECu) goto L_089376EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089376EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893771C;
      }
      goto L_089376F4;
    }
L_089376F4:
    aot_gpr_4 = (0u | 237u);
    aot_gpr_5 = (0u | 130u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 180u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x0893771Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893771Cu) goto L_0893771C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893771C:
    aot_gpr_31 = (0x08937724u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937724u) goto L_08937724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937724:
    aot_gpr_31 = (0x0893772Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 965u, 0x0893772Cu, 0x089392C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 306u, 0x089392C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893772Cu) goto L_0893772C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893772C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08937798;
      }
      goto L_08937734;
    }
L_08937734:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19332)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089377E8;
      }
      goto L_08937740;
    }
L_08937740:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19324));
      if (branch_taken) {
          goto L_08937774;
      }
      goto L_0893774C;
    }
L_0893774C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08937758u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 969u, 0x08937758u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937758u) goto L_08937758;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937758:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08937770;
      }
      goto L_08937764;
    }
L_08937764:
    aot_gpr_31 = (0x0893776Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893776Cu) goto L_0893776C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893776C:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08937770;
L_08937770:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    goto L_08937774;
L_08937774:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08937780u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 974u, 0x08937780u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937780u) goto L_08937780;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937780:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08937790u);
    aot_gpr_6 = (0u | 136u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937790u) goto L_08937790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937790:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089377E8;
      }
      goto L_08937798;
    }
L_08937798:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089377D0;
      }
      goto L_089377A4;
    }
L_089377A4:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x089377B0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 978u, 0x089377B0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089377B0u) goto L_089377B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089377B0:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_089377C8;
      }
      goto L_089377BC;
    }
L_089377BC:
    aot_gpr_31 = (0x089377C4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089377C4u) goto L_089377C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089377C4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089377C8;
L_089377C8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_089377D0;
L_089377D0:
    aot_gpr_31 = (0x089377D8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 983u, 0x089377D8u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089377D8u) goto L_089377D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089377D8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089377E8u);
    aot_gpr_6 = (0u | 136u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089377E8u) goto L_089377E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089377E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08937810;
      }
      goto L_089377F4;
    }
L_089377F4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08937804u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 986u, 0x08937804u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937804u) goto L_08937804;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937804:
    aot_gpr_31 = (0x0893780Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893780Cu) goto L_0893780C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893780C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_08937810;
L_08937810:
    aot_gpr_31 = (0x08937818u);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 989u, 0x08937818u, 0x0882E9D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 615u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 615u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 615u, 0x0882E9D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937818u) goto L_08937818;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937818:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089379F8;
      }
      goto L_0893782C;
    }
L_0893782C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08937838u);
    aot_gpr_4 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937838u) goto L_08937838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937838:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19336)));
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-19324));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08937880;
      }
      goto L_08937850;
    }
L_08937850:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08937878u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937878u) goto L_08937878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_089378AC;
      }
      goto L_08937880;
    }
L_08937880:
    aot_gpr_5 = (0u | 237u);
    aot_gpr_6 = (0u | 130u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 180u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x089378A8u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089378A8u) goto L_089378A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089378A8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_089378AC;
L_089378AC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089378E0;
      }
      goto L_089378B4;
    }
L_089378B4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x089378C0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 998u, 0x089378C0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089378C0u) goto L_089378C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089378C0:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_089378D8;
      }
      goto L_089378CC;
    }
L_089378CC:
    aot_gpr_31 = (0x089378D4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089378D4u) goto L_089378D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089378D4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089378D8;
L_089378D8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089378E0;
L_089378E0:
    aot_gpr_31 = (0x089378E8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1003u, 0x089378E8u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089378E8u) goto L_089378E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089378E8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089378F8u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089378F8u) goto L_089378F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089378F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089379F8;
      }
      goto L_08937900;
    }
L_08937900:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08937928;
      }
      goto L_08937910;
    }
L_08937910:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08937920u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1007u, 0x08937920u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937920u) goto L_08937920;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937920:
    aot_gpr_31 = (0x08937928u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937928u) goto L_08937928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937928:
    aot_gpr_31 = (0x08937930u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1009u, 0x08937930u, 0x0882E9B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 611u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 611u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937930u) goto L_08937930;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937930:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089379F8;
      }
      goto L_08937938;
    }
L_08937938:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08937958;
      }
      goto L_08937944;
    }
L_08937944:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08937950u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1012u, 0x08937950u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937950u) goto L_08937950;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937950:
    aot_gpr_31 = (0x08937958u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937958u) goto L_08937958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937958:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089379F8;
      }
      goto L_08937964;
    }
L_08937964:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43)));
        goto L_08937990;
    }
    goto L_08937970;
L_08937970:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08937980u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1016u, 0x08937980u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937980u) goto L_08937980;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937980:
    aot_gpr_31 = (0x08937988u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937988u) goto L_08937988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937988:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43)));
    goto L_08937990;
L_08937990:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089379CC;
      }
      goto L_08937998;
    }
L_08937998:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089379BC;
      }
      goto L_089379A0;
    }
L_089379A0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x089379B0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1021u, 0x089379B0u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089379B0u) goto L_089379B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089379B0:
    aot_gpr_31 = (0x089379B8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089379B8u) goto L_089379B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089379B8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089379BC;
L_089379BC:
    aot_gpr_31 = (0x089379C4u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1024u, 0x089379C4u, 0x0882E9D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 615u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 615u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 615u, 0x0882E9D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089379C4u) goto L_089379C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089379C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089379F8;
      }
      goto L_089379CC;
    }
L_089379CC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089379F0;
      }
      goto L_089379D4;
    }
L_089379D4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x089379E4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1027u, 0x089379E4u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089379E4u) goto L_089379E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089379E4:
    aot_gpr_31 = (0x089379ECu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089379ECu) goto L_089379EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089379EC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089379F0;
L_089379F0:
    aot_gpr_31 = (0x089379F8u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1030u, 0x089379F8u, 0x0882E9D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 615u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 615u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 615u, 0x0882E9D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089379F8u) goto L_089379F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089379F8:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.gpr[16] = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08937A28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (2236u << 16u);
    { const std::uint32_t aot_run_words[8]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08937A58u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1032u, 0x08937A58u, 0x08ABEFD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 640u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 640u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937A58u) goto L_08937A58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937A58:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08937A64u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1033u, 0x08937A64u, 0x08ABEFD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 640u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 640u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937A64u) goto L_08937A64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937A64:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(301)));
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32304));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[22] = (0u | 2u);
      if (branch_taken) {
          goto L_08937A8C;
      }
      goto L_08937A84;
    }
L_08937A84:
    aot_gpr_31 = (0x08937A8Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1035u, 0x08937A8Cu, 0x08ABEFD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 640u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 640u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937A8Cu) goto L_08937A8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937A8C:
    aot_gpr_31 = (0x08937A94u);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937A94:
    aot_gpr_4 = (aot_gpr_2 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08937B9C;
      }
      goto L_08937AA0;
    }
L_08937AA0:
    aot_gpr_31 = (0x08937AA8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1038u, 0x08937AA8u, 0x08939268u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 298u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 298u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 298u, 0x08939268u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937AA8u) goto L_08937AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937AA8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08937B9C;
      }
      goto L_08937AB0;
    }
L_08937AB0:
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28320));
    goto L_08937AC4;
L_08937AC4:
    aot_gpr_5 = (ctx.gpr[16] & 255u);
    aot_gpr_31 = (0x08937AD0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0049.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1041u, 0x08937AD0u, 0x088CA2F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0049_entry(rt, ctx, 425u, aot_mem);
#else
        recomp_unit_0049_entry(rt, ctx, 425u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 425u, 0x088CA2F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937AD0u) goto L_08937AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937AD0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08937AE4;
      }
      goto L_08937AD8;
    }
L_08937AD8:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(22));
    aot_gpr_31 = (0x08937AE4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1043u, 0x08937AE4u, 0x0880A680u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 550u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 550u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937AE4u) goto L_08937AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937AE4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08937AC4;
      }
      goto L_08937AF4;
    }
L_08937AF4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08937B00u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1045u, 0x08937B00u, 0x08A0611Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 528u, 0x08A0611Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937B00u) goto L_08937B00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937B00:
    aot_gpr_31 = (0x08937B08u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1046u, 0x08937B08u, 0x08A05EFCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 495u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 495u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A05EFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937B08u) goto L_08937B08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937B08:
    aot_gpr_31 = (0x08937B10u);
    aot_gpr_4 = (0u | 1u);
    goto L_08935704;
L_08937B10:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937B38;
      }
      goto L_08937B1C;
    }
L_08937B1C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19520));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08937B30u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893570C;
L_08937B30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08937B4C;
      }
      goto L_08937B38;
    }
L_08937B38:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08937B4Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893570C;
L_08937B4C:
    ctx.gpr[16] = (0u | 0u);
    goto L_08937B50;
L_08937B50:
    aot_gpr_31 = (0x08937B58u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1053u, 0x08937B58u, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937B58u) goto L_08937B58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937B58:
    aot_gpr_4 = (0u | 32u);
    aot_gpr_31 = (0x08937B64u);
    aot_gpr_5 = (0u | 1000u);
    ctx.pc = 0x08B7310Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937B64:
    aot_gpr_31 = (0x08937B6Cu);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    ctx.pc = 0x08B73114u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937B6C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_4 = (aot_gpr_2 & 32u);
      if (branch_taken) {
          goto L_08937B80;
      }
      goto L_08937B74;
    }
L_08937B74:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937B80;
      }
      goto L_08937B7C;
    }
L_08937B7C:
    ctx.gpr[16] = (0u | 1u);
    goto L_08937B80;
L_08937B80:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08937B50;
      }
      goto L_08937B88;
    }
L_08937B88:
    aot_gpr_31 = (0x08937B90u);
    aot_gpr_4 = (0u | 0u);
    goto L_08935704;
L_08937B90:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08937B9Cu);
    aot_gpr_5 = (0u | 127u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1061u, 0x08937B9Cu, 0x08A0611Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 528u, 0x08A0611Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937B9Cu) goto L_08937B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937B9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_08937BB4;
    }
    goto L_08937BA8;
L_08937BA8:
    aot_gpr_31 = (0x08937BB0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937BB0u) goto L_08937BB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937BB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08937BB4;
L_08937BB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08937BCC;
      }
      goto L_08937BC0;
    }
L_08937BC0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937BD8;
      }
      goto L_08937BCC;
    }
L_08937BCC:
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8752), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08937BE0;
      }
      goto L_08937BD8;
    }
L_08937BD8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8752), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08937BE0;
L_08937BE0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937BF4;
      }
      goto L_08937BEC;
    }
L_08937BEC:
    aot_gpr_31 = (0x08937BF4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1070u, 0x08937BF4u, 0x08A30754u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 65u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 65u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 65u, 0x08A30754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937BF4u) goto L_08937BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937BF4:
    aot_gpr_31 = (0x08937BFCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1071u, 0x08937BFCu, 0x08AF431Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 36u, 0x08AF431Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937BFCu) goto L_08937BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937BFC:
    aot_gpr_31 = (0x08937C04u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7908), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1072u, 0x08937C04u, 0x08AC4318u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 71u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 71u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 71u, 0x08AC4318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937C04u) goto L_08937C04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937C04:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937C18;
      }
      goto L_08937C10;
    }
L_08937C10:
    aot_gpr_31 = (0x08937C18u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1074u, 0x08937C18u, 0x08A30774u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 67u, 0x08A30774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937C18u) goto L_08937C18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937C18:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08937C38;
      }
      goto L_08937C24;
    }
L_08937C24:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08937C38;
      }
      goto L_08937C30;
    }
L_08937C30:
    aot_gpr_31 = (0x08937C38u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1077u, 0x08937C38u, 0x08A05EFCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 495u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 495u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A05EFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937C38u) goto L_08937C38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937C38:
    aot_gpr_31 = (0x08937C40u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1078u, 0x08937C40u, 0x088B81D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 17u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 17u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 17u, 0x088B81D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937C40u) goto L_08937C40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937C40:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19683)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937C7C;
      }
      goto L_08937C4C;
    }
L_08937C4C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08937C5Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1080u, 0x08937C5Cu, 0x08A1C044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937C5Cu) goto L_08937C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937C5C:
    aot_gpr_31 = (0x08937C64u);
    goto L_089353A0;
L_08937C64:
    aot_gpr_31 = (0x08937C6Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_0893509C;
L_08937C6C:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19683), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1948), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16965), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08937C7C;
L_08937C7C:
    aot_gpr_31 = (0x08937C84u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1084u, 0x08937C84u, 0x08A1C770u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937C84u) goto L_08937C84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937C84:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[22];
      if (branch_taken) {
          goto L_08937CAC;
      }
      goto L_08937C8C;
    }
L_08937C8C:
    aot_gpr_31 = (0x08937C94u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0173.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1086u, 0x08937C94u, 0x08ABAAD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0173_entry(rt, ctx, 483u, aot_mem);
#else
        recomp_unit_0173_entry(rt, ctx, 483u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 483u, 0x08ABAAD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937C94u) goto L_08937C94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937C94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937CAC;
      }
      goto L_08937CA0;
    }
L_08937CA0:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4211), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4212), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19672), static_cast<std::uint8_t>(0u));
    goto L_08937CAC;
L_08937CAC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4212)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08937CD4;
      }
      goto L_08937CB8;
    }
L_08937CB8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19660)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19681)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937D14;
      }
      goto L_08937CCC;
    }
L_08937CCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08937F34;
      }
      goto L_08937CD4;
    }
L_08937CD4:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19681), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-19656), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08937CECu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1092u, 0x08937CECu, 0x08A1C044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937CECu) goto L_08937CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937CEC:
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1948), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_gpr_31 = (0x08937CF8u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1093u, 0x08937CF8u, 0x08A1C8D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 91u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 91u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937CF8u) goto L_08937CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937CF8:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08937D0Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_0893570C;
L_08937D0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08937FA0;
      }
      goto L_08937D14;
    }
L_08937D14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08937D3C;
      }
      goto L_08937D24;
    }
L_08937D24:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08937D34u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1097u, 0x08937D34u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937D34u) goto L_08937D34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937D34:
    aot_gpr_31 = (0x08937D3Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19644));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937D3Cu) goto L_08937D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937D3C:
    aot_gpr_31 = (0x08937D44u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1099u, 0x08937D44u, 0x0882E9B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 611u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 611u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937D44u) goto L_08937D44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937D44:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08937E64;
      }
      goto L_08937D4C;
    }
L_08937D4C:
    aot_gpr_31 = (0x08937D54u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1101u, 0x08937D54u, 0x08A1C770u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937D54u) goto L_08937D54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937D54:
    { const bool branch_taken = aot_gpr_2 == ctx.gpr[22];
      if (branch_taken) {
          goto L_08937E64;
      }
      goto L_08937D5C;
    }
L_08937D5C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08937D78;
      }
      goto L_08937D68;
    }
L_08937D68:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937E64;
      }
      goto L_08937D78;
    }
L_08937D78:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8592)));
    if (aot_gpr_4 == 0u) {
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
        goto L_08937DBC;
    }
    goto L_08937D84;
L_08937D84:
    aot_gpr_31 = (0x08937D8Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1106u, 0x08937D8Cu, 0x08AAE9C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 538u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 538u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937D8Cu) goto L_08937D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937D8C:
    if (aot_gpr_2 != 0u) {
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
        goto L_08937DBC;
    }
    goto L_08937D94;
L_08937D94:
    aot_gpr_4 = (0u | 255u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    aot_gpr_31 = (0x08937DB4u);
    ctx.gpr[10] = (0u | 255u);
    goto L_08934B9C;
L_08937DB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08937E0C;
      }
      goto L_08937DBC;
    }
L_08937DBC:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[7] + static_cast<std::uint32_t>(11068), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
      ctx.gpr[8] = aot_run_words[3];
      ctx.gpr[9] = aot_run_words[4];
    }
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11088)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[9] << 16u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_6 = (aot_gpr_6 << 16u);
    ctx.gpr[9] = (ctx.gpr[10] << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    aot_gpr_31 = (0x08937E0Cu);
    ctx.gpr[10] = (0u | 255u);
    goto L_08934B9C;
L_08937E0C:
    aot_gpr_31 = (0x08937E14u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1111u, 0x08937E14u, 0x0889E7C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 579u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 579u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937E14u) goto L_08937E14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937E14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11148)));
    aot_gpr_31 = (0x08937E24u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1112u, 0x08937E24u, 0x088907E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 117u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 117u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 117u, 0x088907E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937E24u) goto L_08937E24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937E24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11152)));
    aot_gpr_31 = (0x08937E34u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1113u, 0x08937E34u, 0x08890970u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 137u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 137u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 137u, 0x08890970u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937E34u) goto L_08937E34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937E34:
    aot_gpr_31 = (0x08937E3Cu);
    goto L_0893608C;
L_08937E3C:
    aot_gpr_31 = (0x08937E44u);
    goto L_08936138;
L_08937E44:
    aot_gpr_31 = (0x08937E4Cu);
    goto L_08936130;
L_08937E4C:
    aot_gpr_31 = (0x08937E54u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1117u, 0x08937E54u, 0x08A1C9E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 107u, 0x08A1C9E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937E54u) goto L_08937E54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937E54:
    aot_gpr_31 = (0x08937E5Cu);
    goto L_08936250;
L_08937E5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08937ED8;
      }
      goto L_08937E64;
    }
L_08937E64:
    aot_gpr_31 = (0x08937E6Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0092.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1120u, 0x08937E6Cu, 0x08975D4Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0092_entry(rt, ctx, 438u, aot_mem);
#else
        recomp_unit_0092_entry(rt, ctx, 438u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 438u, 0x08975D4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937E6Cu) goto L_08937E6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937E6C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16976)));
    aot_gpr_4 = (15374u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 64053u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vrot_ct<1u, 64u, 2u, 4u>();
    ctx.execute_vfpu_vec3_ct<0u, 33u, 1u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    aot_gpr_5 = (16355u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 36409u);
    aot_fpr_13 = get_effective_aspect_ratio(std::bit_cast<float>(aot_gpr_5));
    aot_fpr_12 = widen_horizontal_extent(aot_fpr_12);
    aot_gpr_31 = (0x08937EB8u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1121u, 0x08937EB8u, 0x0893A7A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 586u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 586u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 586u, 0x0893A7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937EB8u) goto L_08937EB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937EB8:
    aot_gpr_31 = (0x08937EC0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1122u, 0x08937EC0u, 0x08946158u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 394u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 394u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 394u, 0x08946158u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937EC0u) goto L_08937EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937EC0:
    aot_gpr_31 = (0x08937EC8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0119.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1123u, 0x08937EC8u, 0x089E1640u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0119_entry(rt, ctx, 276u, aot_mem);
#else
        recomp_unit_0119_entry(rt, ctx, 276u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0119_entry, 119u, 276u, 0x089E1640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937EC8u) goto L_08937EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937EC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(8892));
    aot_gpr_31 = (0x08937ED8u);
    aot_gpr_6 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1124u, 0x08937ED8u, 0x088908D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 130u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 130u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 130u, 0x088908D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937ED8u) goto L_08937ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937ED8:
    aot_gpr_31 = (0x08937EE0u);
    goto L_089365BC;
L_08937EE0:
    aot_gpr_31 = (0x08937EE8u);
    goto L_08936F58;
L_08937EE8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19683)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08937F04;
      }
      goto L_08937EF4;
    }
L_08937EF4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08937F24;
      }
      goto L_08937F04;
    }
L_08937F04:
    aot_gpr_31 = (0x08937F0Cu);
    goto L_089366D8;
L_08937F0C:
    aot_gpr_31 = (0x08937F14u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0094.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1130u, 0x08937F14u, 0x0897EE30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0094_entry(rt, ctx, 747u, aot_mem);
#else
        recomp_unit_0094_entry(rt, ctx, 747u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0094_entry, 94u, 747u, 0x0897EE30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937F14u) goto L_08937F14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937F14:
    aot_gpr_31 = (0x08937F1Cu);
    aot_gpr_4 = (0u | 1u);
    goto L_08934F28;
L_08937F1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08937F3C;
      }
      goto L_08937F24;
    }
L_08937F24:
    aot_gpr_31 = (0x08937F2Cu);
    aot_gpr_4 = (0u | 1u);
    goto L_08934F28;
L_08937F2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08937FA0;
      }
      goto L_08937F34;
    }
L_08937F34:
    aot_gpr_31 = (0x08937F3Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1135u, 0x08937F3Cu, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937F3Cu) goto L_08937F3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937F3C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19683)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937F78;
      }
      goto L_08937F48;
    }
L_08937F48:
    aot_gpr_31 = (0x08937F50u);
    goto L_089353A0;
L_08937F50:
    aot_gpr_31 = (0x08937F58u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_0893509C;
L_08937F58:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08937F68u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1139u, 0x08937F68u, 0x08A1C044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937F68u) goto L_08937F68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937F68:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19683), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1948), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16965), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08937F78;
L_08937F78:
    aot_gpr_31 = (0x08937F80u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0076->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0076_entry, 1141u, 0x08937F80u, 0x08A11214u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 128u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 128u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937F80u) goto L_08937F80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08937F80:
    aot_gpr_31 = (0x08937F88u);
    goto L_08935E20;
L_08937F88:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16160)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08937F9C;
      }
      goto L_08937F94;
    }
L_08937F94:
    aot_gpr_31 = (0x08937F9Cu);
    goto L_08935C5C;
L_08937F9C:
    aot_gpr_2 = (ctx.gpr[21] | 0u);
    goto L_08937FA0;
L_08937FA0:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08937FC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08937FD8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19652));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF42C4, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937FD8u) goto L_08937FD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937FD8:
    aot_gpr_31 = (0x08937FE0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19316));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08937FE0u) goto L_08937FE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08937FE0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08937FEC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1360)));
    ctx.gpr[7] = (aot_gpr_6 ^ 13u);
    aot_gpr_6 = (aot_gpr_6 ^ 15u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.pc = 0x08938000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0076(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0076_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_76(Runtime &runtime) {
    runtime.register_generated_unit(76u, 0x08934000u, 16384u, &recomp_unit_0076, &recomp_unit_0076_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08934000u, &recomp_unit_0076, "recomp_unit_0076",
                                          kEntryMasks_recomp_unit_0076, 64u);
}
} // namespace psprecomp
