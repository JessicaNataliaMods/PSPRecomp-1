#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0097[64] = {
    0x2046A80105090001ull, 0x040100A05042A804ull, 0x00020043000108AAull, 0x0081200048222023ull,
    0x8410610002300100ull, 0x8002400000200010ull, 0x2102080048288800ull, 0x0000000000000414ull,
    0x4491A21000041000ull, 0x04C0944580000881ull, 0x0000450002004800ull, 0x6000022051246884ull,
    0x5100240001302511ull, 0x840B428A42200200ull, 0x44444409D25AA502ull, 0x142850A142854444ull,
    0x6A940822AAAA850Aull, 0x1511111111102749ull, 0x55542850A142850Aull, 0x88813A4B54A04115ull,
    0x0A142850A8888888ull, 0x5A0208AAAAA14285ull, 0x27496900800409D2ull, 0x8008A28A294AAA18ull,
    0x4969542827492800ull, 0x0001624900254827ull, 0x2440010084000000ull, 0x685144209D25A012ull,
    0x2104E92500408402ull, 0x00A09D25A020051Aull, 0x1000813A4B40400Aull, 0xB4040088104E92D0ull,
    0xE92D0100220413A4ull, 0x13A4B40200000204ull, 0x82A09D25A0200208ull, 0x2009409D25A02004ull,
    0xA4B40401409D25A0ull, 0x0502749680802813ull, 0x5A0200A04E92D010ull, 0x813A4B40401409D2ull,
    0x0400204E92D01000ull, 0xE92D01000813A4B4ull, 0x00813A4B40400204ull, 0xB40400204E92D010ull,
    0xE92D0100402813A4ull, 0x00204E92D0100204ull, 0x4A80200204E92D01ull, 0xA4B48900102254A9ull,
    0x204E92D010084413ull, 0x2A54A95299409500ull, 0x0002D4A952A54A95ull, 0x1002048A80210400ull,
    0x52A44912AA440404ull, 0x5440800055115480ull, 0x080004A0015A4901ull, 0x04420015A4901544ull,
    0x925C92A548200000ull, 0x92E4952A54A9724Bull, 0x080902682140225Cull, 0x004B004B004AA200ull,
    0xB24B4B4B4B4B004Bull, 0xC92E4B24B92C92E4ull, 0xAA84354455100B92ull, 0x246AA11AA846AA11ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0097[64] = {
    1u, 14u, 26u, 36u, 47u, 57u, 62u, 72u, 75u, 86u, 99u, 105u, 119u, 132u, 146u, 167u,
    185u, 208u, 227u, 248u, 270u, 287u, 309u, 328u, 348u, 369u, 385u, 391u, 412u, 427u, 445u, 460u,
    478u, 497u, 510u, 527u, 543u, 563u, 581u, 599u, 619u, 632u, 653u, 667u, 684u, 703u, 717u, 734u,
    754u, 772u, 794u, 817u, 827u, 846u, 861u, 874u, 890u, 907u, 936u, 952u, 966u, 994u, 1023u, 1046u,
};

// PSPRECOMP_V813_HOT_DENSE_DISPATCH: one indexed load on the measured hot units;
// masks remain for exact registration/correctness proof.
alignas(64) static constexpr std::uint16_t kEntryIdsV813_recomp_unit_0097[4094] = {
    1u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 2u, 0u, 0u, 3u, 0u, 0u, 0u, 0u, 4u, 0u, 5u, 0u, 0u, 0u, 0u, 0u,
    6u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 7u, 0u, 8u, 0u, 9u, 0u, 10u, 11u, 0u, 0u, 0u, 12u, 0u, 0u, 0u, 0u, 0u, 0u, 13u, 0u, 0u,
    0u, 0u, 14u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 15u, 0u, 16u, 0u, 17u, 0u, 18u, 0u, 0u, 0u, 0u, 19u, 0u, 0u, 0u, 0u, 0u, 20u, 0u, 21u, 0u,
    0u, 0u, 0u, 0u, 0u, 22u, 0u, 23u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 24u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 25u, 0u, 0u, 0u, 0u, 0u,
    0u, 26u, 0u, 27u, 0u, 28u, 0u, 29u, 0u, 0u, 0u, 30u, 0u, 0u, 0u, 0u, 31u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    32u, 33u, 0u, 0u, 0u, 0u, 34u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 35u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    36u, 37u, 0u, 0u, 0u, 38u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 39u, 0u, 0u, 0u, 40u, 0u, 0u, 0u, 41u, 0u, 0u, 0u, 0u, 0u, 42u, 0u, 0u, 43u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 44u, 0u, 0u, 45u, 0u, 0u, 0u, 0u, 0u, 0u, 46u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 47u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 48u, 49u, 0u, 0u, 0u, 50u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 51u, 0u, 0u, 0u, 0u, 52u, 53u, 0u, 0u, 0u, 0u, 0u, 54u, 0u, 0u, 0u, 0u, 0u, 55u, 0u, 0u, 0u, 0u, 56u,
    0u, 0u, 0u, 0u, 57u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 58u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 59u, 0u, 0u, 60u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 61u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 62u, 0u, 0u, 0u, 63u, 0u, 0u, 0u, 64u, 0u, 65u, 0u, 0u, 0u, 0u, 0u, 66u, 0u, 0u, 67u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 68u, 0u, 0u, 0u, 0u, 0u, 69u, 0u, 0u, 0u, 0u, 0u, 0u, 70u, 0u, 0u, 0u, 0u, 71u, 0u, 0u,
    0u, 0u, 72u, 0u, 73u, 0u, 0u, 0u, 0u, 0u, 74u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 75u, 0u, 0u, 0u, 0u, 0u, 76u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 77u, 0u, 0u, 0u, 0u, 78u, 0u, 0u, 0u, 79u, 0u, 80u, 81u, 0u, 0u, 0u, 82u, 0u, 0u, 83u, 0u, 0u, 84u, 0u, 0u, 0u, 85u, 0u,
    86u, 0u, 0u, 0u, 0u, 0u, 0u, 87u, 0u, 0u, 0u, 88u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 89u,
    90u, 0u, 91u, 0u, 0u, 0u, 92u, 0u, 0u, 0u, 93u, 0u, 94u, 0u, 0u, 95u, 0u, 0u, 0u, 0u, 0u, 0u, 96u, 97u, 0u, 0u, 98u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 99u, 0u, 0u, 100u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 101u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 102u, 0u, 103u, 0u, 0u, 0u, 104u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 105u, 0u, 0u, 0u, 0u, 106u, 0u, 0u, 0u, 107u, 0u, 108u, 109u, 0u, 0u, 0u, 110u, 0u, 0u, 111u, 0u, 0u, 112u, 0u, 0u, 0u, 113u, 0u, 114u, 0u,
    0u, 0u, 0u, 0u, 0u, 115u, 0u, 0u, 0u, 116u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 117u, 118u, 0u,
    119u, 0u, 0u, 0u, 120u, 0u, 0u, 0u, 121u, 0u, 122u, 0u, 0u, 123u, 0u, 0u, 0u, 0u, 0u, 0u, 124u, 125u, 0u, 0u, 126u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 127u, 0u, 0u, 128u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 129u, 0u, 0u, 0u, 130u, 0u, 131u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 132u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 133u, 0u, 0u, 0u, 134u, 0u, 0u, 0u, 0u, 135u, 0u,
    0u, 136u, 0u, 137u, 0u, 0u, 0u, 138u, 0u, 139u, 0u, 0u, 0u, 0u, 140u, 0u, 141u, 142u, 0u, 143u, 0u, 0u, 0u, 0u, 0u, 0u, 144u, 0u, 0u, 0u, 0u, 145u,
    0u, 146u, 0u, 0u, 0u, 0u, 0u, 0u, 147u, 0u, 148u, 0u, 0u, 149u, 0u, 150u, 0u, 151u, 0u, 152u, 153u, 0u, 154u, 0u, 0u, 155u, 0u, 0u, 156u, 0u, 157u, 158u,
    159u, 0u, 0u, 160u, 0u, 0u, 0u, 0u, 0u, 0u, 161u, 0u, 0u, 0u, 162u, 0u, 0u, 0u, 163u, 0u, 0u, 0u, 164u, 0u, 0u, 0u, 165u, 0u, 0u, 0u, 166u, 0u,
    0u, 0u, 167u, 0u, 0u, 0u, 168u, 0u, 0u, 0u, 169u, 0u, 0u, 0u, 170u, 0u, 171u, 0u, 172u, 0u, 0u, 0u, 0u, 173u, 0u, 174u, 0u, 0u, 0u, 0u, 175u, 0u,
    176u, 0u, 0u, 0u, 0u, 177u, 0u, 178u, 0u, 0u, 0u, 0u, 179u, 0u, 180u, 0u, 0u, 0u, 0u, 181u, 0u, 182u, 0u, 0u, 0u, 0u, 183u, 0u, 184u, 0u, 0u, 0u,
    0u, 185u, 0u, 186u, 0u, 0u, 0u, 0u, 187u, 0u, 188u, 0u, 0u, 0u, 0u, 189u, 0u, 190u, 0u, 191u, 0u, 192u, 0u, 193u, 0u, 194u, 0u, 195u, 0u, 196u, 0u, 197u,
    0u, 198u, 0u, 0u, 0u, 199u, 0u, 0u, 0u, 0u, 0u, 200u, 0u, 0u, 0u, 0u, 0u, 0u, 201u, 0u, 202u, 0u, 0u, 203u, 0u, 204u, 0u, 205u, 0u, 206u, 207u, 0u,
    208u, 0u, 0u, 209u, 0u, 0u, 210u, 0u, 211u, 212u, 213u, 0u, 0u, 214u, 0u, 0u, 0u, 0u, 0u, 0u, 215u, 0u, 0u, 0u, 216u, 0u, 0u, 0u, 217u, 0u, 0u, 0u,
    218u, 0u, 0u, 0u, 219u, 0u, 0u, 0u, 220u, 0u, 0u, 0u, 221u, 0u, 0u, 0u, 222u, 0u, 0u, 0u, 223u, 0u, 0u, 0u, 224u, 0u, 225u, 0u, 226u, 0u, 0u, 0u,
    0u, 227u, 0u, 228u, 0u, 0u, 0u, 0u, 229u, 0u, 230u, 0u, 0u, 0u, 0u, 231u, 0u, 232u, 0u, 0u, 0u, 0u, 233u, 0u, 234u, 0u, 0u, 0u, 0u, 235u, 0u, 236u,
    0u, 0u, 0u, 0u, 237u, 0u, 238u, 0u, 0u, 0u, 0u, 239u, 0u, 240u, 0u, 0u, 0u, 0u, 241u, 0u, 242u, 0u, 243u, 0u, 244u, 0u, 245u, 0u, 246u, 0u, 247u, 0u,
    248u, 0u, 249u, 0u, 250u, 0u, 0u, 0u, 251u, 0u, 0u, 0u, 0u, 0u, 252u, 0u, 0u, 0u, 0u, 0u, 0u, 253u, 0u, 254u, 0u, 0u, 255u, 0u, 256u, 0u, 257u, 0u,
    258u, 259u, 0u, 260u, 0u, 0u, 261u, 0u, 0u, 262u, 0u, 263u, 264u, 265u, 0u, 0u, 266u, 0u, 0u, 0u, 0u, 0u, 0u, 267u, 0u, 0u, 0u, 268u, 0u, 0u, 0u, 269u,
    0u, 0u, 0u, 270u, 0u, 0u, 0u, 271u, 0u, 0u, 0u, 272u, 0u, 0u, 0u, 273u, 0u, 0u, 0u, 274u, 0u, 0u, 0u, 275u, 0u, 0u, 0u, 276u, 0u, 277u, 0u, 278u,
    0u, 0u, 0u, 0u, 279u, 0u, 280u, 0u, 0u, 0u, 0u, 281u, 0u, 282u, 0u, 0u, 0u, 0u, 283u, 0u, 284u, 0u, 0u, 0u, 0u, 285u, 0u, 286u, 0u, 0u, 0u, 0u,
    287u, 0u, 288u, 0u, 0u, 0u, 0u, 289u, 0u, 290u, 0u, 0u, 0u, 0u, 291u, 0u, 292u, 0u, 0u, 0u, 0u, 293u, 0u, 294u, 0u, 295u, 0u, 296u, 0u, 297u, 0u, 298u,
    0u, 299u, 0u, 300u, 0u, 301u, 0u, 302u, 0u, 0u, 0u, 303u, 0u, 0u, 0u, 0u, 0u, 304u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 305u, 0u, 306u, 307u, 0u, 308u, 0u,
    0u, 309u, 0u, 0u, 310u, 0u, 311u, 312u, 313u, 0u, 0u, 314u, 0u, 0u, 0u, 0u, 0u, 0u, 315u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 316u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 317u, 0u, 0u, 318u, 0u, 319u, 320u, 0u, 321u, 0u, 0u, 322u, 0u, 0u, 323u, 0u, 324u, 325u, 326u, 0u, 0u, 327u, 0u, 0u,
    0u, 0u, 0u, 328u, 329u, 0u, 0u, 0u, 0u, 330u, 0u, 331u, 0u, 332u, 0u, 333u, 0u, 334u, 0u, 335u, 0u, 0u, 336u, 0u, 337u, 0u, 0u, 338u, 0u, 339u, 0u, 0u,
    0u, 340u, 0u, 341u, 0u, 0u, 0u, 342u, 0u, 343u, 0u, 0u, 0u, 344u, 0u, 345u, 0u, 0u, 0u, 346u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 347u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 348u, 0u, 349u, 0u, 0u, 350u, 0u, 0u, 351u, 0u, 0u, 352u, 0u, 353u, 354u, 355u, 0u, 0u, 356u, 0u, 0u,
    0u, 0u, 0u, 357u, 0u, 358u, 0u, 0u, 0u, 0u, 359u, 0u, 360u, 0u, 361u, 0u, 362u, 0u, 0u, 363u, 0u, 364u, 365u, 0u, 366u, 0u, 0u, 367u, 0u, 0u, 368u, 0u,
    369u, 370u, 371u, 0u, 0u, 372u, 0u, 0u, 0u, 0u, 0u, 373u, 0u, 0u, 374u, 0u, 375u, 0u, 376u, 0u, 0u, 377u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    378u, 0u, 0u, 379u, 0u, 0u, 380u, 0u, 0u, 381u, 0u, 0u, 0u, 382u, 383u, 0u, 384u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 385u, 0u, 0u, 0u, 0u, 386u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 387u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 388u, 0u, 0u, 0u, 389u, 0u, 0u, 390u, 0u, 0u,
    0u, 391u, 0u, 0u, 392u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 393u, 0u, 394u, 395u, 0u, 396u, 0u, 0u, 397u, 0u, 0u, 398u, 0u, 399u, 400u, 401u, 0u, 0u, 402u,
    0u, 0u, 0u, 0u, 0u, 403u, 0u, 0u, 0u, 0u, 404u, 0u, 0u, 0u, 405u, 0u, 406u, 0u, 0u, 0u, 407u, 0u, 408u, 0u, 0u, 0u, 0u, 409u, 0u, 410u, 411u, 0u,
    0u, 412u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 413u, 0u, 0u, 0u, 0u, 414u, 0u, 0u, 0u, 0u, 0u, 0u, 415u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    416u, 0u, 417u, 0u, 0u, 418u, 0u, 0u, 419u, 0u, 0u, 420u, 0u, 421u, 422u, 423u, 0u, 0u, 424u, 0u, 0u, 0u, 0u, 0u, 425u, 0u, 0u, 0u, 0u, 426u, 0u, 0u,
    0u, 427u, 0u, 428u, 429u, 0u, 0u, 0u, 430u, 0u, 431u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 432u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 433u, 0u, 434u,
    435u, 0u, 436u, 0u, 0u, 437u, 0u, 0u, 438u, 0u, 439u, 440u, 441u, 0u, 0u, 442u, 0u, 0u, 0u, 0u, 0u, 443u, 0u, 444u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 445u, 0u, 446u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 447u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 448u, 0u, 449u, 450u, 0u, 451u, 0u, 0u, 452u, 0u,
    0u, 453u, 0u, 454u, 455u, 456u, 0u, 0u, 457u, 0u, 0u, 0u, 0u, 0u, 0u, 458u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 459u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 460u, 0u, 461u, 462u, 0u, 463u, 0u, 0u, 464u, 0u, 0u, 465u, 0u, 466u, 467u, 468u, 0u, 0u, 469u, 0u, 0u, 0u, 0u, 0u, 470u, 0u, 0u, 0u,
    0u, 0u, 0u, 471u, 0u, 0u, 0u, 472u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 473u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 474u, 0u, 475u, 476u, 0u, 477u,
    0u, 0u, 478u, 0u, 0u, 479u, 0u, 480u, 481u, 482u, 0u, 0u, 483u, 0u, 0u, 0u, 0u, 0u, 484u, 0u, 0u, 0u, 0u, 0u, 0u, 485u, 0u, 0u, 0u, 486u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 487u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 488u, 0u, 489u, 490u, 0u, 491u, 0u, 0u, 492u, 0u, 0u, 493u, 0u, 494u, 495u, 496u,
    0u, 0u, 497u, 0u, 0u, 0u, 0u, 0u, 0u, 498u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 499u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 500u, 0u, 501u, 502u, 0u, 503u, 0u, 0u, 504u, 0u, 0u, 505u, 0u, 506u, 507u, 508u, 0u, 0u, 509u, 0u, 0u, 0u,
    0u, 0u, 0u, 510u, 0u, 0u, 0u, 0u, 0u, 511u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 512u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 513u, 0u, 514u,
    515u, 0u, 516u, 0u, 0u, 517u, 0u, 0u, 518u, 0u, 519u, 520u, 521u, 0u, 0u, 522u, 0u, 0u, 0u, 0u, 0u, 523u, 0u, 524u, 0u, 525u, 0u, 0u, 0u, 0u, 0u, 526u,
    0u, 0u, 527u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 528u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 529u, 0u, 530u, 531u, 0u, 532u, 0u, 0u, 533u, 0u, 0u,
    534u, 0u, 535u, 536u, 537u, 0u, 0u, 538u, 0u, 0u, 0u, 0u, 0u, 0u, 539u, 0u, 540u, 0u, 0u, 541u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 542u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 543u, 0u, 544u, 545u, 0u, 546u, 0u, 0u, 547u, 0u, 0u, 548u, 0u, 549u, 550u, 551u, 0u, 0u, 552u, 0u, 0u, 0u, 0u, 0u, 0u, 553u, 0u,
    554u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 555u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 556u, 0u, 557u, 558u, 0u, 559u, 0u, 0u, 560u, 0u, 0u, 561u, 0u, 562u,
    563u, 564u, 0u, 0u, 565u, 0u, 0u, 0u, 0u, 0u, 0u, 566u, 0u, 567u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 568u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 569u,
    0u, 570u, 571u, 0u, 572u, 0u, 0u, 573u, 0u, 0u, 574u, 0u, 575u, 576u, 577u, 0u, 0u, 578u, 0u, 0u, 0u, 0u, 0u, 0u, 579u, 0u, 580u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 581u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 582u, 0u, 583u, 584u, 0u, 585u, 0u, 0u, 586u, 0u, 0u, 587u, 0u, 588u, 589u, 590u, 0u, 0u, 591u, 0u,
    0u, 0u, 0u, 0u, 0u, 592u, 0u, 593u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 594u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 595u, 0u, 596u, 597u, 0u, 598u, 0u,
    0u, 599u, 0u, 0u, 600u, 0u, 601u, 602u, 603u, 0u, 0u, 604u, 0u, 0u, 0u, 0u, 0u, 0u, 605u, 0u, 606u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 607u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 608u, 0u, 609u, 610u, 0u, 611u, 0u, 0u, 612u, 0u, 0u, 613u, 0u, 614u, 615u, 616u, 0u, 0u, 617u, 0u, 0u, 0u, 0u, 0u, 0u, 618u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 619u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 620u, 0u, 621u, 622u, 0u, 623u, 0u, 0u, 624u, 0u, 0u, 625u,
    0u, 626u, 627u, 628u, 0u, 0u, 629u, 0u, 0u, 0u, 0u, 0u, 0u, 630u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 631u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 632u, 0u, 633u, 634u, 0u, 635u, 0u, 0u, 636u, 0u, 0u, 637u, 0u, 638u, 639u, 640u, 0u, 0u, 641u, 0u, 0u, 0u, 0u, 0u, 0u, 642u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 643u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 644u, 0u, 645u, 646u, 0u, 647u, 0u, 0u, 648u, 0u, 0u, 649u, 0u, 650u, 651u, 652u,
    0u, 0u, 653u, 0u, 0u, 0u, 0u, 0u, 0u, 654u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 655u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 656u, 0u,
    657u, 658u, 0u, 659u, 0u, 0u, 660u, 0u, 0u, 661u, 0u, 662u, 663u, 664u, 0u, 0u, 665u, 0u, 0u, 0u, 0u, 0u, 0u, 666u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 667u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 668u, 0u, 669u, 670u, 0u, 671u, 0u, 0u, 672u, 0u, 0u, 673u, 0u, 674u, 675u, 676u, 0u, 0u, 677u, 0u,
    0u, 0u, 0u, 0u, 0u, 678u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 679u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 680u, 0u, 681u, 682u, 0u, 683u,
    0u, 0u, 684u, 0u, 0u, 685u, 0u, 686u, 687u, 688u, 0u, 0u, 689u, 0u, 0u, 0u, 0u, 0u, 0u, 690u, 0u, 691u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 692u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 693u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 694u, 0u, 695u, 696u, 0u, 697u, 0u, 0u, 698u, 0u, 0u, 699u, 0u, 700u, 701u, 702u,
    0u, 0u, 703u, 0u, 0u, 0u, 0u, 0u, 0u, 704u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 705u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 706u, 0u, 707u, 708u,
    0u, 709u, 0u, 0u, 710u, 0u, 0u, 711u, 0u, 712u, 713u, 714u, 0u, 0u, 715u, 0u, 0u, 0u, 0u, 0u, 0u, 716u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    717u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 718u, 0u, 719u, 720u, 0u, 721u, 0u, 0u, 722u, 0u, 0u, 723u, 0u, 724u, 725u, 726u, 0u, 0u, 727u, 0u, 0u, 0u, 0u, 0u,
    0u, 728u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 729u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 730u, 0u, 731u, 0u, 732u, 0u, 0u, 733u, 0u,
    734u, 0u, 0u, 735u, 0u, 736u, 0u, 737u, 0u, 0u, 738u, 0u, 739u, 0u, 740u, 0u, 0u, 741u, 0u, 0u, 0u, 742u, 0u, 0u, 0u, 0u, 0u, 0u, 743u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 744u, 0u, 0u, 745u, 0u, 0u, 0u, 746u, 0u, 0u, 747u, 0u, 748u, 749u, 0u, 750u, 0u, 0u, 751u, 0u, 0u, 752u, 0u, 753u,
    754u, 755u, 0u, 0u, 756u, 0u, 0u, 0u, 0u, 0u, 757u, 0u, 0u, 0u, 758u, 0u, 0u, 0u, 0u, 759u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 760u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 761u, 0u, 762u, 763u, 0u, 764u, 0u, 0u, 765u, 0u, 0u, 766u, 0u, 767u, 768u, 769u, 0u, 0u, 770u, 0u, 0u, 0u, 0u, 0u, 0u, 771u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 772u, 0u, 773u, 0u, 774u, 0u, 0u, 775u, 0u, 0u, 0u, 0u, 0u, 0u, 776u, 0u, 777u, 0u, 0u, 778u, 779u, 0u, 0u, 780u,
    0u, 781u, 0u, 0u, 782u, 0u, 783u, 0u, 784u, 0u, 0u, 785u, 0u, 786u, 0u, 787u, 0u, 0u, 788u, 0u, 789u, 0u, 790u, 0u, 0u, 791u, 0u, 792u, 0u, 793u, 0u, 0u,
    794u, 0u, 795u, 0u, 796u, 0u, 0u, 797u, 0u, 798u, 0u, 799u, 0u, 0u, 800u, 0u, 801u, 0u, 802u, 0u, 0u, 803u, 0u, 804u, 0u, 805u, 0u, 0u, 806u, 0u, 807u, 0u,
    808u, 0u, 0u, 809u, 0u, 810u, 0u, 811u, 0u, 0u, 812u, 0u, 813u, 0u, 814u, 815u, 0u, 816u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 817u, 0u, 0u, 0u, 0u, 0u, 818u, 0u, 0u, 0u, 0u, 819u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 820u,
    0u, 821u, 0u, 822u, 0u, 0u, 0u, 823u, 0u, 0u, 824u, 0u, 0u, 0u, 0u, 0u, 0u, 825u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 826u, 0u, 0u, 0u,
    0u, 0u, 827u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 828u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 829u, 0u, 0u, 0u, 830u, 0u, 0u, 831u, 0u, 832u, 0u, 833u, 0u, 834u,
    0u, 835u, 0u, 0u, 836u, 0u, 0u, 0u, 837u, 0u, 0u, 838u, 0u, 0u, 839u, 0u, 0u, 0u, 840u, 0u, 0u, 841u, 0u, 842u, 0u, 843u, 0u, 0u, 844u, 0u, 845u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 846u, 0u, 0u, 847u, 0u, 848u, 0u, 849u, 0u, 850u, 0u, 0u, 0u, 851u, 0u, 0u, 0u, 852u, 0u, 853u, 0u, 854u, 0u, 855u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 856u, 0u, 0u, 0u, 0u, 0u, 0u, 857u, 0u, 0u, 0u, 858u, 0u, 859u, 0u, 860u, 0u,
    861u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 862u, 0u, 0u, 863u, 0u, 0u, 864u, 0u, 0u, 865u, 0u, 866u, 867u, 0u, 868u, 0u, 869u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 870u, 0u, 871u, 0u, 0u, 872u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 873u, 0u, 0u, 0u, 0u,
    0u, 0u, 874u, 0u, 0u, 0u, 875u, 0u, 876u, 0u, 877u, 0u, 878u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 879u, 0u, 0u, 880u, 0u, 0u, 881u, 0u, 0u, 882u, 0u, 883u,
    884u, 0u, 885u, 0u, 886u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 887u, 0u, 0u, 0u, 0u, 888u, 0u, 0u, 0u, 889u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 890u, 0u, 0u, 0u, 0u, 0u, 891u, 0u, 0u, 892u, 0u,
    893u, 0u, 894u, 0u, 0u, 895u, 0u, 896u, 0u, 897u, 0u, 0u, 898u, 0u, 0u, 899u, 0u, 0u, 900u, 901u, 902u, 0u, 903u, 0u, 0u, 904u, 0u, 0u, 905u, 0u, 0u, 906u,
    907u, 908u, 0u, 909u, 0u, 0u, 910u, 0u, 0u, 911u, 0u, 0u, 912u, 913u, 914u, 0u, 915u, 0u, 0u, 916u, 0u, 917u, 0u, 918u, 0u, 0u, 919u, 0u, 920u, 0u, 921u, 0u,
    0u, 922u, 0u, 923u, 0u, 924u, 0u, 0u, 925u, 0u, 926u, 0u, 927u, 0u, 0u, 928u, 0u, 0u, 929u, 0u, 0u, 930u, 931u, 932u, 0u, 933u, 0u, 0u, 934u, 0u, 0u, 935u,
    0u, 0u, 936u, 937u, 938u, 0u, 939u, 0u, 0u, 940u, 0u, 0u, 0u, 941u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 942u, 0u, 943u, 0u, 0u, 0u, 0u, 944u, 0u, 0u,
    0u, 0u, 0u, 945u, 0u, 946u, 947u, 0u, 0u, 948u, 0u, 0u, 0u, 0u, 0u, 0u, 949u, 0u, 0u, 950u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 951u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 952u, 0u, 0u, 0u, 953u, 0u, 954u, 0u, 955u, 0u, 956u, 0u, 0u, 957u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    958u, 959u, 0u, 960u, 0u, 0u, 961u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 962u, 963u, 0u, 964u, 0u, 0u, 965u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    966u, 967u, 0u, 968u, 0u, 0u, 969u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 970u, 971u, 0u, 972u, 0u, 0u, 973u, 0u, 974u, 975u, 0u, 976u, 0u, 0u, 977u, 0u,
    978u, 979u, 0u, 980u, 0u, 0u, 981u, 0u, 982u, 983u, 0u, 984u, 0u, 0u, 985u, 0u, 986u, 987u, 0u, 988u, 0u, 0u, 989u, 0u, 0u, 990u, 0u, 0u, 991u, 992u, 0u, 993u,
    0u, 0u, 994u, 0u, 0u, 995u, 996u, 997u, 0u, 998u, 0u, 0u, 999u, 0u, 0u, 1000u, 0u, 0u, 1001u, 1002u, 0u, 1003u, 0u, 0u, 1004u, 0u, 0u, 1005u, 1006u, 1007u, 0u, 1008u,
    0u, 0u, 1009u, 0u, 0u, 1010u, 0u, 0u, 1011u, 1012u, 0u, 1013u, 0u, 0u, 1014u, 0u, 0u, 1015u, 1016u, 1017u, 0u, 1018u, 0u, 0u, 1019u, 0u, 0u, 1020u, 0u, 0u, 1021u, 1022u,
    0u, 1023u, 0u, 0u, 1024u, 0u, 0u, 1025u, 1026u, 1027u, 0u, 1028u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 1029u, 0u, 0u, 0u, 1030u, 0u, 1031u, 0u, 1032u, 0u, 1033u, 0u,
    0u, 0u, 1034u, 0u, 0u, 0u, 1035u, 0u, 1036u, 0u, 1037u, 0u, 1038u, 1039u, 0u, 0u, 0u, 0u, 1040u, 0u, 0u, 0u, 0u, 1041u, 0u, 1042u, 0u, 1043u, 0u, 1044u, 0u, 1045u,
    1046u, 0u, 0u, 0u, 1047u, 0u, 0u, 0u, 0u, 1048u, 0u, 1049u, 0u, 1050u, 0u, 1051u, 0u, 1052u, 1053u, 0u, 0u, 0u, 1054u, 0u, 0u, 0u, 0u, 1055u, 0u, 1056u, 0u, 1057u,
    0u, 1058u, 0u, 1059u, 1060u, 0u, 0u, 0u, 1061u, 0u, 0u, 0u, 0u, 1062u, 0u, 1063u, 0u, 1064u, 0u, 1065u, 0u, 1066u, 1067u, 0u, 0u, 0u, 1068u, 0u, 0u, 1069u,
};
void recomp_unit_0097_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,31,5,6,2,28 fprs=12,20,13,14 gpr_occ=3610 fpr_occ=159 gpr_total=5718 fpr_total=195
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_28 = ctx.gpr[28];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[31] = aot_gpr_31; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[2] = aot_gpr_2; ctx.gpr[28] = aot_gpr_28; ctx.fpr[12] = aot_fpr_12; ctx.fpr[20] = aot_fpr_20; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_28 = ctx.gpr[28]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08988000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u)
            ? kEntryIdsV813_recomp_unit_0097[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08988000;
    case 2u: goto L_08988040;
    case 3u: goto L_0898804C;
    case 4u: goto L_08988060;
    case 5u: goto L_08988068;
    case 6u: goto L_08988080;
    case 7u: goto L_089880AC;
    case 8u: goto L_089880B4;
    case 9u: goto L_089880BC;
    case 10u: goto L_089880C4;
    case 11u: goto L_089880C8;
    case 12u: goto L_089880D8;
    case 13u: goto L_089880F4;
    case 14u: goto L_08988108;
    case 15u: goto L_0898812C;
    case 16u: goto L_08988134;
    case 17u: goto L_0898813C;
    case 18u: goto L_08988144;
    case 19u: goto L_08988158;
    case 20u: goto L_08988170;
    case 21u: goto L_08988178;
    case 22u: goto L_08988194;
    case 23u: goto L_0898819C;
    case 24u: goto L_089881C0;
    case 25u: goto L_089881E8;
    case 26u: goto L_08988204;
    case 27u: goto L_0898820C;
    case 28u: goto L_08988214;
    case 29u: goto L_0898821C;
    case 30u: goto L_0898822C;
    case 31u: goto L_08988240;
    case 32u: goto L_08988280;
    case 33u: goto L_08988284;
    case 34u: goto L_08988298;
    case 35u: goto L_089882C4;
    case 36u: goto L_08988300;
    case 37u: goto L_08988304;
    case 38u: goto L_08988314;
    case 39u: goto L_08988334;
    case 40u: goto L_08988344;
    case 41u: goto L_08988354;
    case 42u: goto L_0898836C;
    case 43u: goto L_08988378;
    case 44u: goto L_089883B4;
    case 45u: goto L_089883C0;
    case 46u: goto L_089883DC;
    case 47u: goto L_08988420;
    case 48u: goto L_08988450;
    case 49u: goto L_08988454;
    case 50u: goto L_08988464;
    case 51u: goto L_089884A0;
    case 52u: goto L_089884B4;
    case 53u: goto L_089884B8;
    case 54u: goto L_089884D0;
    case 55u: goto L_089884E8;
    case 56u: goto L_089884FC;
    case 57u: goto L_08988510;
    case 58u: goto L_08988554;
    case 59u: goto L_089885B8;
    case 60u: goto L_089885C4;
    case 61u: goto L_089885FC;
    case 62u: goto L_0898862C;
    case 63u: goto L_0898863C;
    case 64u: goto L_0898864C;
    case 65u: goto L_08988654;
    case 66u: goto L_0898866C;
    case 67u: goto L_08988678;
    case 68u: goto L_089886AC;
    case 69u: goto L_089886C4;
    case 70u: goto L_089886E0;
    case 71u: goto L_089886F4;
    case 72u: goto L_08988708;
    case 73u: goto L_08988710;
    case 74u: goto L_08988728;
    case 75u: goto L_08988830;
    case 76u: goto L_08988848;
    case 77u: goto L_08988890;
    case 78u: goto L_089888A4;
    case 79u: goto L_089888B4;
    case 80u: goto L_089888BC;
    case 81u: goto L_089888C0;
    case 82u: goto L_089888D0;
    case 83u: goto L_089888DC;
    case 84u: goto L_089888E8;
    case 85u: goto L_089888F8;
    case 86u: goto L_08988900;
    case 87u: goto L_0898891C;
    case 88u: goto L_0898892C;
    case 89u: goto L_0898897C;
    case 90u: goto L_08988980;
    case 91u: goto L_08988988;
    case 92u: goto L_08988998;
    case 93u: goto L_089889A8;
    case 94u: goto L_089889B0;
    case 95u: goto L_089889BC;
    case 96u: goto L_089889D8;
    case 97u: goto L_089889DC;
    case 98u: goto L_089889E8;
    case 99u: goto L_08988A2C;
    case 100u: goto L_08988A38;
    case 101u: goto L_08988A64;
    case 102u: goto L_08988AA0;
    case 103u: goto L_08988AA8;
    case 104u: goto L_08988AB8;
    case 105u: goto L_08988B08;
    case 106u: goto L_08988B1C;
    case 107u: goto L_08988B2C;
    case 108u: goto L_08988B34;
    case 109u: goto L_08988B38;
    case 110u: goto L_08988B48;
    case 111u: goto L_08988B54;
    case 112u: goto L_08988B60;
    case 113u: goto L_08988B70;
    case 114u: goto L_08988B78;
    case 115u: goto L_08988B94;
    case 116u: goto L_08988BA4;
    case 117u: goto L_08988BF4;
    case 118u: goto L_08988BF8;
    case 119u: goto L_08988C00;
    case 120u: goto L_08988C10;
    case 121u: goto L_08988C20;
    case 122u: goto L_08988C28;
    case 123u: goto L_08988C34;
    case 124u: goto L_08988C50;
    case 125u: goto L_08988C54;
    case 126u: goto L_08988C60;
    case 127u: goto L_08988CA8;
    case 128u: goto L_08988CB4;
    case 129u: goto L_08988CE0;
    case 130u: goto L_08988CF0;
    case 131u: goto L_08988CF8;
    case 132u: goto L_08988D24;
    case 133u: goto L_08988D54;
    case 134u: goto L_08988D64;
    case 135u: goto L_08988D78;
    case 136u: goto L_08988D84;
    case 137u: goto L_08988D8C;
    case 138u: goto L_08988D9C;
    case 139u: goto L_08988DA4;
    case 140u: goto L_08988DB8;
    case 141u: goto L_08988DC0;
    case 142u: goto L_08988DC4;
    case 143u: goto L_08988DCC;
    case 144u: goto L_08988DE8;
    case 145u: goto L_08988DFC;
    case 146u: goto L_08988E04;
    case 147u: goto L_08988E20;
    case 148u: goto L_08988E28;
    case 149u: goto L_08988E34;
    case 150u: goto L_08988E3C;
    case 151u: goto L_08988E44;
    case 152u: goto L_08988E4C;
    case 153u: goto L_08988E50;
    case 154u: goto L_08988E58;
    case 155u: goto L_08988E64;
    case 156u: goto L_08988E70;
    case 157u: goto L_08988E78;
    case 158u: goto L_08988E7C;
    case 159u: goto L_08988E80;
    case 160u: goto L_08988E8C;
    case 161u: goto L_08988EA8;
    case 162u: goto L_08988EB8;
    case 163u: goto L_08988EC8;
    case 164u: goto L_08988ED8;
    case 165u: goto L_08988EE8;
    case 166u: goto L_08988EF8;
    case 167u: goto L_08988F08;
    case 168u: goto L_08988F18;
    case 169u: goto L_08988F28;
    case 170u: goto L_08988F38;
    case 171u: goto L_08988F40;
    case 172u: goto L_08988F48;
    case 173u: goto L_08988F5C;
    case 174u: goto L_08988F64;
    case 175u: goto L_08988F78;
    case 176u: goto L_08988F80;
    case 177u: goto L_08988F94;
    case 178u: goto L_08988F9C;
    case 179u: goto L_08988FB0;
    case 180u: goto L_08988FB8;
    case 181u: goto L_08988FCC;
    case 182u: goto L_08988FD4;
    case 183u: goto L_08988FE8;
    case 184u: goto L_08988FF0;
    case 185u: goto L_08989004;
    case 186u: goto L_0898900C;
    case 187u: goto L_08989020;
    case 188u: goto L_08989028;
    case 189u: goto L_0898903C;
    case 190u: goto L_08989044;
    case 191u: goto L_0898904C;
    case 192u: goto L_08989054;
    case 193u: goto L_0898905C;
    case 194u: goto L_08989064;
    case 195u: goto L_0898906C;
    case 196u: goto L_08989074;
    case 197u: goto L_0898907C;
    case 198u: goto L_08989084;
    case 199u: goto L_08989094;
    case 200u: goto L_089890AC;
    case 201u: goto L_089890C8;
    case 202u: goto L_089890D0;
    case 203u: goto L_089890DC;
    case 204u: goto L_089890E4;
    case 205u: goto L_089890EC;
    case 206u: goto L_089890F4;
    case 207u: goto L_089890F8;
    case 208u: goto L_08989100;
    case 209u: goto L_0898910C;
    case 210u: goto L_08989118;
    case 211u: goto L_08989120;
    case 212u: goto L_08989124;
    case 213u: goto L_08989128;
    case 214u: goto L_08989134;
    case 215u: goto L_08989150;
    case 216u: goto L_08989160;
    case 217u: goto L_08989170;
    case 218u: goto L_08989180;
    case 219u: goto L_08989190;
    case 220u: goto L_089891A0;
    case 221u: goto L_089891B0;
    case 222u: goto L_089891C0;
    case 223u: goto L_089891D0;
    case 224u: goto L_089891E0;
    case 225u: goto L_089891E8;
    case 226u: goto L_089891F0;
    case 227u: goto L_08989204;
    case 228u: goto L_0898920C;
    case 229u: goto L_08989220;
    case 230u: goto L_08989228;
    case 231u: goto L_0898923C;
    case 232u: goto L_08989244;
    case 233u: goto L_08989258;
    case 234u: goto L_08989260;
    case 235u: goto L_08989274;
    case 236u: goto L_0898927C;
    case 237u: goto L_08989290;
    case 238u: goto L_08989298;
    case 239u: goto L_089892AC;
    case 240u: goto L_089892B4;
    case 241u: goto L_089892C8;
    case 242u: goto L_089892D0;
    case 243u: goto L_089892D8;
    case 244u: goto L_089892E0;
    case 245u: goto L_089892E8;
    case 246u: goto L_089892F0;
    case 247u: goto L_089892F8;
    case 248u: goto L_08989300;
    case 249u: goto L_08989308;
    case 250u: goto L_08989310;
    case 251u: goto L_08989320;
    case 252u: goto L_08989338;
    case 253u: goto L_08989354;
    case 254u: goto L_0898935C;
    case 255u: goto L_08989368;
    case 256u: goto L_08989370;
    case 257u: goto L_08989378;
    case 258u: goto L_08989380;
    case 259u: goto L_08989384;
    case 260u: goto L_0898938C;
    case 261u: goto L_08989398;
    case 262u: goto L_089893A4;
    case 263u: goto L_089893AC;
    case 264u: goto L_089893B0;
    case 265u: goto L_089893B4;
    case 266u: goto L_089893C0;
    case 267u: goto L_089893DC;
    case 268u: goto L_089893EC;
    case 269u: goto L_089893FC;
    case 270u: goto L_0898940C;
    case 271u: goto L_0898941C;
    case 272u: goto L_0898942C;
    case 273u: goto L_0898943C;
    case 274u: goto L_0898944C;
    case 275u: goto L_0898945C;
    case 276u: goto L_0898946C;
    case 277u: goto L_08989474;
    case 278u: goto L_0898947C;
    case 279u: goto L_08989490;
    case 280u: goto L_08989498;
    case 281u: goto L_089894AC;
    case 282u: goto L_089894B4;
    case 283u: goto L_089894C8;
    case 284u: goto L_089894D0;
    case 285u: goto L_089894E4;
    case 286u: goto L_089894EC;
    case 287u: goto L_08989500;
    case 288u: goto L_08989508;
    case 289u: goto L_0898951C;
    case 290u: goto L_08989524;
    case 291u: goto L_08989538;
    case 292u: goto L_08989540;
    case 293u: goto L_08989554;
    case 294u: goto L_0898955C;
    case 295u: goto L_08989564;
    case 296u: goto L_0898956C;
    case 297u: goto L_08989574;
    case 298u: goto L_0898957C;
    case 299u: goto L_08989584;
    case 300u: goto L_0898958C;
    case 301u: goto L_08989594;
    case 302u: goto L_0898959C;
    case 303u: goto L_089895AC;
    case 304u: goto L_089895C4;
    case 305u: goto L_089895E4;
    case 306u: goto L_089895EC;
    case 307u: goto L_089895F0;
    case 308u: goto L_089895F8;
    case 309u: goto L_08989604;
    case 310u: goto L_08989610;
    case 311u: goto L_08989618;
    case 312u: goto L_0898961C;
    case 313u: goto L_08989620;
    case 314u: goto L_0898962C;
    case 315u: goto L_08989648;
    case 316u: goto L_0898967C;
    case 317u: goto L_089896A0;
    case 318u: goto L_089896AC;
    case 319u: goto L_089896B4;
    case 320u: goto L_089896B8;
    case 321u: goto L_089896C0;
    case 322u: goto L_089896CC;
    case 323u: goto L_089896D8;
    case 324u: goto L_089896E0;
    case 325u: goto L_089896E4;
    case 326u: goto L_089896E8;
    case 327u: goto L_089896F4;
    case 328u: goto L_0898970C;
    case 329u: goto L_08989710;
    case 330u: goto L_08989724;
    case 331u: goto L_0898972C;
    case 332u: goto L_08989734;
    case 333u: goto L_0898973C;
    case 334u: goto L_08989744;
    case 335u: goto L_0898974C;
    case 336u: goto L_08989758;
    case 337u: goto L_08989760;
    case 338u: goto L_0898976C;
    case 339u: goto L_08989774;
    case 340u: goto L_08989784;
    case 341u: goto L_0898978C;
    case 342u: goto L_0898979C;
    case 343u: goto L_089897A4;
    case 344u: goto L_089897B4;
    case 345u: goto L_089897BC;
    case 346u: goto L_089897CC;
    case 347u: goto L_089897FC;
    case 348u: goto L_0898982C;
    case 349u: goto L_08989834;
    case 350u: goto L_08989840;
    case 351u: goto L_0898984C;
    case 352u: goto L_08989858;
    case 353u: goto L_08989860;
    case 354u: goto L_08989864;
    case 355u: goto L_08989868;
    case 356u: goto L_08989874;
    case 357u: goto L_0898988C;
    case 358u: goto L_08989894;
    case 359u: goto L_089898A8;
    case 360u: goto L_089898B0;
    case 361u: goto L_089898B8;
    case 362u: goto L_089898C0;
    case 363u: goto L_089898CC;
    case 364u: goto L_089898D4;
    case 365u: goto L_089898D8;
    case 366u: goto L_089898E0;
    case 367u: goto L_089898EC;
    case 368u: goto L_089898F8;
    case 369u: goto L_08989900;
    case 370u: goto L_08989904;
    case 371u: goto L_08989908;
    case 372u: goto L_08989914;
    case 373u: goto L_0898992C;
    case 374u: goto L_08989938;
    case 375u: goto L_08989940;
    case 376u: goto L_08989948;
    case 377u: goto L_08989954;
    case 378u: goto L_08989980;
    case 379u: goto L_0898998C;
    case 380u: goto L_08989998;
    case 381u: goto L_089899A4;
    case 382u: goto L_089899B4;
    case 383u: goto L_089899B8;
    case 384u: goto L_089899C0;
    case 385u: goto L_08989A68;
    case 386u: goto L_08989A7C;
    case 387u: goto L_08989AA0;
    case 388u: goto L_08989AD8;
    case 389u: goto L_08989AE8;
    case 390u: goto L_08989AF4;
    case 391u: goto L_08989B04;
    case 392u: goto L_08989B10;
    case 393u: goto L_08989B34;
    case 394u: goto L_08989B3C;
    case 395u: goto L_08989B40;
    case 396u: goto L_08989B48;
    case 397u: goto L_08989B54;
    case 398u: goto L_08989B60;
    case 399u: goto L_08989B68;
    case 400u: goto L_08989B6C;
    case 401u: goto L_08989B70;
    case 402u: goto L_08989B7C;
    case 403u: goto L_08989B94;
    case 404u: goto L_08989BA8;
    case 405u: goto L_08989BB8;
    case 406u: goto L_08989BC0;
    case 407u: goto L_08989BD0;
    case 408u: goto L_08989BD8;
    case 409u: goto L_08989BEC;
    case 410u: goto L_08989BF4;
    case 411u: goto L_08989BF8;
    case 412u: goto L_08989C04;
    case 413u: goto L_08989C28;
    case 414u: goto L_08989C3C;
    case 415u: goto L_08989C58;
    case 416u: goto L_08989C80;
    case 417u: goto L_08989C88;
    case 418u: goto L_08989C94;
    case 419u: goto L_08989CA0;
    case 420u: goto L_08989CAC;
    case 421u: goto L_08989CB4;
    case 422u: goto L_08989CB8;
    case 423u: goto L_08989CBC;
    case 424u: goto L_08989CC8;
    case 425u: goto L_08989CE0;
    case 426u: goto L_08989CF4;
    case 427u: goto L_08989D04;
    case 428u: goto L_08989D0C;
    case 429u: goto L_08989D10;
    case 430u: goto L_08989D20;
    case 431u: goto L_08989D28;
    case 432u: goto L_08989D54;
    case 433u: goto L_08989D74;
    case 434u: goto L_08989D7C;
    case 435u: goto L_08989D80;
    case 436u: goto L_08989D88;
    case 437u: goto L_08989D94;
    case 438u: goto L_08989DA0;
    case 439u: goto L_08989DA8;
    case 440u: goto L_08989DAC;
    case 441u: goto L_08989DB0;
    case 442u: goto L_08989DBC;
    case 443u: goto L_08989DD4;
    case 444u: goto L_08989DDC;
    case 445u: goto L_08989E04;
    case 446u: goto L_08989E0C;
    case 447u: goto L_08989E38;
    case 448u: goto L_08989E58;
    case 449u: goto L_08989E60;
    case 450u: goto L_08989E64;
    case 451u: goto L_08989E6C;
    case 452u: goto L_08989E78;
    case 453u: goto L_08989E84;
    case 454u: goto L_08989E8C;
    case 455u: goto L_08989E90;
    case 456u: goto L_08989E94;
    case 457u: goto L_08989EA0;
    case 458u: goto L_08989EBC;
    case 459u: goto L_08989EF0;
    case 460u: goto L_08989F10;
    case 461u: goto L_08989F18;
    case 462u: goto L_08989F1C;
    case 463u: goto L_08989F24;
    case 464u: goto L_08989F30;
    case 465u: goto L_08989F3C;
    case 466u: goto L_08989F44;
    case 467u: goto L_08989F48;
    case 468u: goto L_08989F4C;
    case 469u: goto L_08989F58;
    case 470u: goto L_08989F70;
    case 471u: goto L_08989F8C;
    case 472u: goto L_08989F9C;
    case 473u: goto L_08989FC8;
    case 474u: goto L_08989FE8;
    case 475u: goto L_08989FF0;
    case 476u: goto L_08989FF4;
    case 477u: goto L_08989FFC;
    case 478u: goto L_0898A008;
    case 479u: goto L_0898A014;
    case 480u: goto L_0898A01C;
    case 481u: goto L_0898A020;
    case 482u: goto L_0898A024;
    case 483u: goto L_0898A030;
    case 484u: goto L_0898A048;
    case 485u: goto L_0898A064;
    case 486u: goto L_0898A074;
    case 487u: goto L_0898A0A0;
    case 488u: goto L_0898A0C0;
    case 489u: goto L_0898A0C8;
    case 490u: goto L_0898A0CC;
    case 491u: goto L_0898A0D4;
    case 492u: goto L_0898A0E0;
    case 493u: goto L_0898A0EC;
    case 494u: goto L_0898A0F4;
    case 495u: goto L_0898A0F8;
    case 496u: goto L_0898A0FC;
    case 497u: goto L_0898A108;
    case 498u: goto L_0898A124;
    case 499u: goto L_0898A184;
    case 500u: goto L_0898A1A8;
    case 501u: goto L_0898A1B0;
    case 502u: goto L_0898A1B4;
    case 503u: goto L_0898A1BC;
    case 504u: goto L_0898A1C8;
    case 505u: goto L_0898A1D4;
    case 506u: goto L_0898A1DC;
    case 507u: goto L_0898A1E0;
    case 508u: goto L_0898A1E4;
    case 509u: goto L_0898A1F0;
    case 510u: goto L_0898A20C;
    case 511u: goto L_0898A224;
    case 512u: goto L_0898A254;
    case 513u: goto L_0898A274;
    case 514u: goto L_0898A27C;
    case 515u: goto L_0898A280;
    case 516u: goto L_0898A288;
    case 517u: goto L_0898A294;
    case 518u: goto L_0898A2A0;
    case 519u: goto L_0898A2A8;
    case 520u: goto L_0898A2AC;
    case 521u: goto L_0898A2B0;
    case 522u: goto L_0898A2BC;
    case 523u: goto L_0898A2D4;
    case 524u: goto L_0898A2DC;
    case 525u: goto L_0898A2E4;
    case 526u: goto L_0898A2FC;
    case 527u: goto L_0898A308;
    case 528u: goto L_0898A334;
    case 529u: goto L_0898A354;
    case 530u: goto L_0898A35C;
    case 531u: goto L_0898A360;
    case 532u: goto L_0898A368;
    case 533u: goto L_0898A374;
    case 534u: goto L_0898A380;
    case 535u: goto L_0898A388;
    case 536u: goto L_0898A38C;
    case 537u: goto L_0898A390;
    case 538u: goto L_0898A39C;
    case 539u: goto L_0898A3B8;
    case 540u: goto L_0898A3C0;
    case 541u: goto L_0898A3CC;
    case 542u: goto L_0898A3F4;
    case 543u: goto L_0898A414;
    case 544u: goto L_0898A41C;
    case 545u: goto L_0898A420;
    case 546u: goto L_0898A428;
    case 547u: goto L_0898A434;
    case 548u: goto L_0898A440;
    case 549u: goto L_0898A448;
    case 550u: goto L_0898A44C;
    case 551u: goto L_0898A450;
    case 552u: goto L_0898A45C;
    case 553u: goto L_0898A478;
    case 554u: goto L_0898A480;
    case 555u: goto L_0898A4A8;
    case 556u: goto L_0898A4C8;
    case 557u: goto L_0898A4D0;
    case 558u: goto L_0898A4D4;
    case 559u: goto L_0898A4DC;
    case 560u: goto L_0898A4E8;
    case 561u: goto L_0898A4F4;
    case 562u: goto L_0898A4FC;
    case 563u: goto L_0898A500;
    case 564u: goto L_0898A504;
    case 565u: goto L_0898A510;
    case 566u: goto L_0898A52C;
    case 567u: goto L_0898A534;
    case 568u: goto L_0898A55C;
    case 569u: goto L_0898A57C;
    case 570u: goto L_0898A584;
    case 571u: goto L_0898A588;
    case 572u: goto L_0898A590;
    case 573u: goto L_0898A59C;
    case 574u: goto L_0898A5A8;
    case 575u: goto L_0898A5B0;
    case 576u: goto L_0898A5B4;
    case 577u: goto L_0898A5B8;
    case 578u: goto L_0898A5C4;
    case 579u: goto L_0898A5E0;
    case 580u: goto L_0898A5E8;
    case 581u: goto L_0898A610;
    case 582u: goto L_0898A630;
    case 583u: goto L_0898A638;
    case 584u: goto L_0898A63C;
    case 585u: goto L_0898A644;
    case 586u: goto L_0898A650;
    case 587u: goto L_0898A65C;
    case 588u: goto L_0898A664;
    case 589u: goto L_0898A668;
    case 590u: goto L_0898A66C;
    case 591u: goto L_0898A678;
    case 592u: goto L_0898A694;
    case 593u: goto L_0898A69C;
    case 594u: goto L_0898A6C4;
    case 595u: goto L_0898A6E4;
    case 596u: goto L_0898A6EC;
    case 597u: goto L_0898A6F0;
    case 598u: goto L_0898A6F8;
    case 599u: goto L_0898A704;
    case 600u: goto L_0898A710;
    case 601u: goto L_0898A718;
    case 602u: goto L_0898A71C;
    case 603u: goto L_0898A720;
    case 604u: goto L_0898A72C;
    case 605u: goto L_0898A748;
    case 606u: goto L_0898A750;
    case 607u: goto L_0898A778;
    case 608u: goto L_0898A798;
    case 609u: goto L_0898A7A0;
    case 610u: goto L_0898A7A4;
    case 611u: goto L_0898A7AC;
    case 612u: goto L_0898A7B8;
    case 613u: goto L_0898A7C4;
    case 614u: goto L_0898A7CC;
    case 615u: goto L_0898A7D0;
    case 616u: goto L_0898A7D4;
    case 617u: goto L_0898A7E0;
    case 618u: goto L_0898A7FC;
    case 619u: goto L_0898A830;
    case 620u: goto L_0898A850;
    case 621u: goto L_0898A858;
    case 622u: goto L_0898A85C;
    case 623u: goto L_0898A864;
    case 624u: goto L_0898A870;
    case 625u: goto L_0898A87C;
    case 626u: goto L_0898A884;
    case 627u: goto L_0898A888;
    case 628u: goto L_0898A88C;
    case 629u: goto L_0898A898;
    case 630u: goto L_0898A8B4;
    case 631u: goto L_0898A8E8;
    case 632u: goto L_0898A908;
    case 633u: goto L_0898A910;
    case 634u: goto L_0898A914;
    case 635u: goto L_0898A91C;
    case 636u: goto L_0898A928;
    case 637u: goto L_0898A934;
    case 638u: goto L_0898A93C;
    case 639u: goto L_0898A940;
    case 640u: goto L_0898A944;
    case 641u: goto L_0898A950;
    case 642u: goto L_0898A96C;
    case 643u: goto L_0898A9A0;
    case 644u: goto L_0898A9C0;
    case 645u: goto L_0898A9C8;
    case 646u: goto L_0898A9CC;
    case 647u: goto L_0898A9D4;
    case 648u: goto L_0898A9E0;
    case 649u: goto L_0898A9EC;
    case 650u: goto L_0898A9F4;
    case 651u: goto L_0898A9F8;
    case 652u: goto L_0898A9FC;
    case 653u: goto L_0898AA08;
    case 654u: goto L_0898AA24;
    case 655u: goto L_0898AA58;
    case 656u: goto L_0898AA78;
    case 657u: goto L_0898AA80;
    case 658u: goto L_0898AA84;
    case 659u: goto L_0898AA8C;
    case 660u: goto L_0898AA98;
    case 661u: goto L_0898AAA4;
    case 662u: goto L_0898AAAC;
    case 663u: goto L_0898AAB0;
    case 664u: goto L_0898AAB4;
    case 665u: goto L_0898AAC0;
    case 666u: goto L_0898AADC;
    case 667u: goto L_0898AB10;
    case 668u: goto L_0898AB30;
    case 669u: goto L_0898AB38;
    case 670u: goto L_0898AB3C;
    case 671u: goto L_0898AB44;
    case 672u: goto L_0898AB50;
    case 673u: goto L_0898AB5C;
    case 674u: goto L_0898AB64;
    case 675u: goto L_0898AB68;
    case 676u: goto L_0898AB6C;
    case 677u: goto L_0898AB78;
    case 678u: goto L_0898AB94;
    case 679u: goto L_0898ABC8;
    case 680u: goto L_0898ABE8;
    case 681u: goto L_0898ABF0;
    case 682u: goto L_0898ABF4;
    case 683u: goto L_0898ABFC;
    case 684u: goto L_0898AC08;
    case 685u: goto L_0898AC14;
    case 686u: goto L_0898AC1C;
    case 687u: goto L_0898AC20;
    case 688u: goto L_0898AC24;
    case 689u: goto L_0898AC30;
    case 690u: goto L_0898AC4C;
    case 691u: goto L_0898AC54;
    case 692u: goto L_0898AC78;
    case 693u: goto L_0898ACA0;
    case 694u: goto L_0898ACC0;
    case 695u: goto L_0898ACC8;
    case 696u: goto L_0898ACCC;
    case 697u: goto L_0898ACD4;
    case 698u: goto L_0898ACE0;
    case 699u: goto L_0898ACEC;
    case 700u: goto L_0898ACF4;
    case 701u: goto L_0898ACF8;
    case 702u: goto L_0898ACFC;
    case 703u: goto L_0898AD08;
    case 704u: goto L_0898AD24;
    case 705u: goto L_0898AD50;
    case 706u: goto L_0898AD70;
    case 707u: goto L_0898AD78;
    case 708u: goto L_0898AD7C;
    case 709u: goto L_0898AD84;
    case 710u: goto L_0898AD90;
    case 711u: goto L_0898AD9C;
    case 712u: goto L_0898ADA4;
    case 713u: goto L_0898ADA8;
    case 714u: goto L_0898ADAC;
    case 715u: goto L_0898ADB8;
    case 716u: goto L_0898ADD4;
    case 717u: goto L_0898AE00;
    case 718u: goto L_0898AE20;
    case 719u: goto L_0898AE28;
    case 720u: goto L_0898AE2C;
    case 721u: goto L_0898AE34;
    case 722u: goto L_0898AE40;
    case 723u: goto L_0898AE4C;
    case 724u: goto L_0898AE54;
    case 725u: goto L_0898AE58;
    case 726u: goto L_0898AE5C;
    case 727u: goto L_0898AE68;
    case 728u: goto L_0898AE84;
    case 729u: goto L_0898AEB4;
    case 730u: goto L_0898AEDC;
    case 731u: goto L_0898AEE4;
    case 732u: goto L_0898AEEC;
    case 733u: goto L_0898AEF8;
    case 734u: goto L_0898AF00;
    case 735u: goto L_0898AF0C;
    case 736u: goto L_0898AF14;
    case 737u: goto L_0898AF1C;
    case 738u: goto L_0898AF28;
    case 739u: goto L_0898AF30;
    case 740u: goto L_0898AF38;
    case 741u: goto L_0898AF44;
    case 742u: goto L_0898AF54;
    case 743u: goto L_0898AF70;
    case 744u: goto L_0898AFA0;
    case 745u: goto L_0898AFAC;
    case 746u: goto L_0898AFBC;
    case 747u: goto L_0898AFC8;
    case 748u: goto L_0898AFD0;
    case 749u: goto L_0898AFD4;
    case 750u: goto L_0898AFDC;
    case 751u: goto L_0898AFE8;
    case 752u: goto L_0898AFF4;
    case 753u: goto L_0898AFFC;
    case 754u: goto L_0898B000;
    case 755u: goto L_0898B004;
    case 756u: goto L_0898B010;
    case 757u: goto L_0898B028;
    case 758u: goto L_0898B038;
    case 759u: goto L_0898B04C;
    case 760u: goto L_0898B070;
    case 761u: goto L_0898B090;
    case 762u: goto L_0898B098;
    case 763u: goto L_0898B09C;
    case 764u: goto L_0898B0A4;
    case 765u: goto L_0898B0B0;
    case 766u: goto L_0898B0BC;
    case 767u: goto L_0898B0C4;
    case 768u: goto L_0898B0C8;
    case 769u: goto L_0898B0CC;
    case 770u: goto L_0898B0D8;
    case 771u: goto L_0898B0F4;
    case 772u: goto L_0898B120;
    case 773u: goto L_0898B128;
    case 774u: goto L_0898B130;
    case 775u: goto L_0898B13C;
    case 776u: goto L_0898B158;
    case 777u: goto L_0898B160;
    case 778u: goto L_0898B16C;
    case 779u: goto L_0898B170;
    case 780u: goto L_0898B17C;
    case 781u: goto L_0898B184;
    case 782u: goto L_0898B190;
    case 783u: goto L_0898B198;
    case 784u: goto L_0898B1A0;
    case 785u: goto L_0898B1AC;
    case 786u: goto L_0898B1B4;
    case 787u: goto L_0898B1BC;
    case 788u: goto L_0898B1C8;
    case 789u: goto L_0898B1D0;
    case 790u: goto L_0898B1D8;
    case 791u: goto L_0898B1E4;
    case 792u: goto L_0898B1EC;
    case 793u: goto L_0898B1F4;
    case 794u: goto L_0898B200;
    case 795u: goto L_0898B208;
    case 796u: goto L_0898B210;
    case 797u: goto L_0898B21C;
    case 798u: goto L_0898B224;
    case 799u: goto L_0898B22C;
    case 800u: goto L_0898B238;
    case 801u: goto L_0898B240;
    case 802u: goto L_0898B248;
    case 803u: goto L_0898B254;
    case 804u: goto L_0898B25C;
    case 805u: goto L_0898B264;
    case 806u: goto L_0898B270;
    case 807u: goto L_0898B278;
    case 808u: goto L_0898B280;
    case 809u: goto L_0898B28C;
    case 810u: goto L_0898B294;
    case 811u: goto L_0898B29C;
    case 812u: goto L_0898B2A8;
    case 813u: goto L_0898B2B0;
    case 814u: goto L_0898B2B8;
    case 815u: goto L_0898B2BC;
    case 816u: goto L_0898B2C4;
    case 817u: goto L_0898B328;
    case 818u: goto L_0898B340;
    case 819u: goto L_0898B354;
    case 820u: goto L_0898B37C;
    case 821u: goto L_0898B384;
    case 822u: goto L_0898B38C;
    case 823u: goto L_0898B39C;
    case 824u: goto L_0898B3A8;
    case 825u: goto L_0898B3C4;
    case 826u: goto L_0898B3F0;
    case 827u: goto L_0898B408;
    case 828u: goto L_0898B428;
    case 829u: goto L_0898B448;
    case 830u: goto L_0898B458;
    case 831u: goto L_0898B464;
    case 832u: goto L_0898B46C;
    case 833u: goto L_0898B474;
    case 834u: goto L_0898B47C;
    case 835u: goto L_0898B484;
    case 836u: goto L_0898B490;
    case 837u: goto L_0898B4A0;
    case 838u: goto L_0898B4AC;
    case 839u: goto L_0898B4B8;
    case 840u: goto L_0898B4C8;
    case 841u: goto L_0898B4D4;
    case 842u: goto L_0898B4DC;
    case 843u: goto L_0898B4E4;
    case 844u: goto L_0898B4F0;
    case 845u: goto L_0898B4F8;
    case 846u: goto L_0898B51C;
    case 847u: goto L_0898B528;
    case 848u: goto L_0898B530;
    case 849u: goto L_0898B538;
    case 850u: goto L_0898B540;
    case 851u: goto L_0898B550;
    case 852u: goto L_0898B560;
    case 853u: goto L_0898B568;
    case 854u: goto L_0898B570;
    case 855u: goto L_0898B578;
    case 856u: goto L_0898B5BC;
    case 857u: goto L_0898B5D8;
    case 858u: goto L_0898B5E8;
    case 859u: goto L_0898B5F0;
    case 860u: goto L_0898B5F8;
    case 861u: goto L_0898B600;
    case 862u: goto L_0898B620;
    case 863u: goto L_0898B62C;
    case 864u: goto L_0898B638;
    case 865u: goto L_0898B644;
    case 866u: goto L_0898B64C;
    case 867u: goto L_0898B650;
    case 868u: goto L_0898B658;
    case 869u: goto L_0898B660;
    case 870u: goto L_0898B694;
    case 871u: goto L_0898B69C;
    case 872u: goto L_0898B6A8;
    case 873u: goto L_0898B6EC;
    case 874u: goto L_0898B708;
    case 875u: goto L_0898B718;
    case 876u: goto L_0898B720;
    case 877u: goto L_0898B728;
    case 878u: goto L_0898B730;
    case 879u: goto L_0898B750;
    case 880u: goto L_0898B75C;
    case 881u: goto L_0898B768;
    case 882u: goto L_0898B774;
    case 883u: goto L_0898B77C;
    case 884u: goto L_0898B780;
    case 885u: goto L_0898B788;
    case 886u: goto L_0898B790;
    case 887u: goto L_0898B7C4;
    case 888u: goto L_0898B7D8;
    case 889u: goto L_0898B7E8;
    case 890u: goto L_0898B854;
    case 891u: goto L_0898B86C;
    case 892u: goto L_0898B878;
    case 893u: goto L_0898B880;
    case 894u: goto L_0898B888;
    case 895u: goto L_0898B894;
    case 896u: goto L_0898B89C;
    case 897u: goto L_0898B8A4;
    case 898u: goto L_0898B8B0;
    case 899u: goto L_0898B8BC;
    case 900u: goto L_0898B8C8;
    case 901u: goto L_0898B8CC;
    case 902u: goto L_0898B8D0;
    case 903u: goto L_0898B8D8;
    case 904u: goto L_0898B8E4;
    case 905u: goto L_0898B8F0;
    case 906u: goto L_0898B8FC;
    case 907u: goto L_0898B900;
    case 908u: goto L_0898B904;
    case 909u: goto L_0898B90C;
    case 910u: goto L_0898B918;
    case 911u: goto L_0898B924;
    case 912u: goto L_0898B930;
    case 913u: goto L_0898B934;
    case 914u: goto L_0898B938;
    case 915u: goto L_0898B940;
    case 916u: goto L_0898B94C;
    case 917u: goto L_0898B954;
    case 918u: goto L_0898B95C;
    case 919u: goto L_0898B968;
    case 920u: goto L_0898B970;
    case 921u: goto L_0898B978;
    case 922u: goto L_0898B984;
    case 923u: goto L_0898B98C;
    case 924u: goto L_0898B994;
    case 925u: goto L_0898B9A0;
    case 926u: goto L_0898B9A8;
    case 927u: goto L_0898B9B0;
    case 928u: goto L_0898B9BC;
    case 929u: goto L_0898B9C8;
    case 930u: goto L_0898B9D4;
    case 931u: goto L_0898B9D8;
    case 932u: goto L_0898B9DC;
    case 933u: goto L_0898B9E4;
    case 934u: goto L_0898B9F0;
    case 935u: goto L_0898B9FC;
    case 936u: goto L_0898BA08;
    case 937u: goto L_0898BA0C;
    case 938u: goto L_0898BA10;
    case 939u: goto L_0898BA18;
    case 940u: goto L_0898BA24;
    case 941u: goto L_0898BA34;
    case 942u: goto L_0898BA58;
    case 943u: goto L_0898BA60;
    case 944u: goto L_0898BA74;
    case 945u: goto L_0898BA8C;
    case 946u: goto L_0898BA94;
    case 947u: goto L_0898BA98;
    case 948u: goto L_0898BAA4;
    case 949u: goto L_0898BAC0;
    case 950u: goto L_0898BACC;
    case 951u: goto L_0898BAEC;
    case 952u: goto L_0898BB24;
    case 953u: goto L_0898BB34;
    case 954u: goto L_0898BB3C;
    case 955u: goto L_0898BB44;
    case 956u: goto L_0898BB4C;
    case 957u: goto L_0898BB58;
    case 958u: goto L_0898BB80;
    case 959u: goto L_0898BB84;
    case 960u: goto L_0898BB8C;
    case 961u: goto L_0898BB98;
    case 962u: goto L_0898BBC0;
    case 963u: goto L_0898BBC4;
    case 964u: goto L_0898BBCC;
    case 965u: goto L_0898BBD8;
    case 966u: goto L_0898BC00;
    case 967u: goto L_0898BC04;
    case 968u: goto L_0898BC0C;
    case 969u: goto L_0898BC18;
    case 970u: goto L_0898BC40;
    case 971u: goto L_0898BC44;
    case 972u: goto L_0898BC4C;
    case 973u: goto L_0898BC58;
    case 974u: goto L_0898BC60;
    case 975u: goto L_0898BC64;
    case 976u: goto L_0898BC6C;
    case 977u: goto L_0898BC78;
    case 978u: goto L_0898BC80;
    case 979u: goto L_0898BC84;
    case 980u: goto L_0898BC8C;
    case 981u: goto L_0898BC98;
    case 982u: goto L_0898BCA0;
    case 983u: goto L_0898BCA4;
    case 984u: goto L_0898BCAC;
    case 985u: goto L_0898BCB8;
    case 986u: goto L_0898BCC0;
    case 987u: goto L_0898BCC4;
    case 988u: goto L_0898BCCC;
    case 989u: goto L_0898BCD8;
    case 990u: goto L_0898BCE4;
    case 991u: goto L_0898BCF0;
    case 992u: goto L_0898BCF4;
    case 993u: goto L_0898BCFC;
    case 994u: goto L_0898BD08;
    case 995u: goto L_0898BD14;
    case 996u: goto L_0898BD18;
    case 997u: goto L_0898BD1C;
    case 998u: goto L_0898BD24;
    case 999u: goto L_0898BD30;
    case 1000u: goto L_0898BD3C;
    case 1001u: goto L_0898BD48;
    case 1002u: goto L_0898BD4C;
    case 1003u: goto L_0898BD54;
    case 1004u: goto L_0898BD60;
    case 1005u: goto L_0898BD6C;
    case 1006u: goto L_0898BD70;
    case 1007u: goto L_0898BD74;
    case 1008u: goto L_0898BD7C;
    case 1009u: goto L_0898BD88;
    case 1010u: goto L_0898BD94;
    case 1011u: goto L_0898BDA0;
    case 1012u: goto L_0898BDA4;
    case 1013u: goto L_0898BDAC;
    case 1014u: goto L_0898BDB8;
    case 1015u: goto L_0898BDC4;
    case 1016u: goto L_0898BDC8;
    case 1017u: goto L_0898BDCC;
    case 1018u: goto L_0898BDD4;
    case 1019u: goto L_0898BDE0;
    case 1020u: goto L_0898BDEC;
    case 1021u: goto L_0898BDF8;
    case 1022u: goto L_0898BDFC;
    case 1023u: goto L_0898BE04;
    case 1024u: goto L_0898BE10;
    case 1025u: goto L_0898BE1C;
    case 1026u: goto L_0898BE20;
    case 1027u: goto L_0898BE24;
    case 1028u: goto L_0898BE2C;
    case 1029u: goto L_0898BE50;
    case 1030u: goto L_0898BE60;
    case 1031u: goto L_0898BE68;
    case 1032u: goto L_0898BE70;
    case 1033u: goto L_0898BE78;
    case 1034u: goto L_0898BE88;
    case 1035u: goto L_0898BE98;
    case 1036u: goto L_0898BEA0;
    case 1037u: goto L_0898BEA8;
    case 1038u: goto L_0898BEB0;
    case 1039u: goto L_0898BEB4;
    case 1040u: goto L_0898BEC8;
    case 1041u: goto L_0898BEDC;
    case 1042u: goto L_0898BEE4;
    case 1043u: goto L_0898BEEC;
    case 1044u: goto L_0898BEF4;
    case 1045u: goto L_0898BEFC;
    case 1046u: goto L_0898BF00;
    case 1047u: goto L_0898BF10;
    case 1048u: goto L_0898BF24;
    case 1049u: goto L_0898BF2C;
    case 1050u: goto L_0898BF34;
    case 1051u: goto L_0898BF3C;
    case 1052u: goto L_0898BF44;
    case 1053u: goto L_0898BF48;
    case 1054u: goto L_0898BF58;
    case 1055u: goto L_0898BF6C;
    case 1056u: goto L_0898BF74;
    case 1057u: goto L_0898BF7C;
    case 1058u: goto L_0898BF84;
    case 1059u: goto L_0898BF8C;
    case 1060u: goto L_0898BF90;
    case 1061u: goto L_0898BFA0;
    case 1062u: goto L_0898BFB4;
    case 1063u: goto L_0898BFBC;
    case 1064u: goto L_0898BFC4;
    case 1065u: goto L_0898BFCC;
    case 1066u: goto L_0898BFD4;
    case 1067u: goto L_0898BFD8;
    case 1068u: goto L_0898BFE8;
    case 1069u: goto L_0898BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08988000u;
        if (local_delta_v813 >= 16376u || (local_delta_v813 & 3u) != 0u) {
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
L_08988000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(31984));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(31984)));
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_6 = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(28));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0898804C;
      }
      goto L_08988040;
    }
L_08988040:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0898804Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 3u, 0x0898804Cu, 0x0887F6B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898804Cu) goto L_0898804C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898804C:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08988060u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 4u, 0x08988060u, 0x0887F5E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 728u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 728u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988060u) goto L_08988060;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988060:
    aot_gpr_31 = (0x08988068u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 5u, 0x08988068u, 0x0887F7E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 744u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 744u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 744u, 0x0887F7E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988068u) goto L_08988068;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988068:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08988080:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 & 32768u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089880BC;
      }
      goto L_089880AC;
    }
L_089880AC:
    aot_gpr_31 = (0x089880B4u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 8u, 0x089880B4u, 0x0887F7E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 744u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 744u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 744u, 0x0887F7E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089880B4u) goto L_089880B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089880B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089880C8;
      }
      goto L_089880BC;
    }
L_089880BC:
    aot_gpr_31 = (0x089880C4u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 10u, 0x089880C4u, 0x0887F7E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 744u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 744u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 744u, 0x0887F7E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089880C4u) goto L_089880C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089880C4:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_089880C8;
L_089880C8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089880D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089880F4u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08988080;
L_089880F4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08988134;
      }
      goto L_08988108;
    }
L_08988108:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 & 2u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[10] = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[10];
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08988158;
      }
      goto L_0898812C;
    }
L_0898812C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898813C;
      }
      goto L_08988134;
    }
L_08988134:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08988284;
      }
      goto L_0898813C;
    }
L_0898813C:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08988178;
      }
      goto L_08988144;
    }
L_08988144:
    ctx.gpr[10] = (aot_gpr_5 << 4u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08988194;
      }
      goto L_08988158;
    }
L_08988158:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08988170u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08988678;
L_08988170:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08988284;
      }
      goto L_08988178;
    }
L_08988178:
    ctx.gpr[10] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[10] << 3u);
    ctx.gpr[11] = (ctx.gpr[10] + aot_gpr_5);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_gpr_5 = (0u | 10u);
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(10));
    goto L_08988194;
L_08988194:
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    aot_gpr_2 = (aot_mem.aot_direct_load16(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    goto L_0898819C;
L_0898819C:
    ctx.gpr[3] = (aot_gpr_2 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[3]);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08988240;
      }
      goto L_089881C0;
    }
L_089881C0:
    ctx.gpr[8] = (aot_gpr_2 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    ctx.gpr[8] = (ctx.gpr[11] + aot_gpr_5);
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_0898822C;
      }
      goto L_089881E8;
    }
L_089881E8:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08988214;
      }
      goto L_08988204;
    }
L_08988204:
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[11] = (ctx.gpr[7] - aot_gpr_5);
      if (branch_taken) {
          goto L_0898822C;
      }
      goto L_0898820C;
    }
L_0898820C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[7] - aot_gpr_5);
      if (branch_taken) {
          goto L_0898822C;
      }
      goto L_08988214;
    }
L_08988214:
    aot_gpr_31 = (0x0898821Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08988678;
L_0898821C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_2 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08988284;
      }
      goto L_0898822C;
    }
L_0898822C:
    ctx.gpr[8] = (ctx.gpr[11] | 0u);
    ctx.gpr[10] = (ctx.gpr[8] + aot_gpr_5);
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_mem.aot_direct_load16(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0898819C;
      }
      goto L_08988240;
    }
L_08988240:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[10] - aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[8] - aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08988280u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08988678;
L_08988280:
    aot_gpr_2 = (0u | 1u);
    goto L_08988284;
L_08988284:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08988298:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(68), aot_run_words); }
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x089882C4u);
    goto L_08988080;
L_089882C4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 & 16u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08988304;
      }
      goto L_08988300;
    }
L_08988300:
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08988304;
L_08988304:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089883C0;
      }
      goto L_08988314;
    }
L_08988314:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (aot_gpr_5 & 2u);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u < ctx.gpr[7] ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (aot_gpr_5 << 3u);
      if (branch_taken) {
          goto L_08988344;
      }
      goto L_08988334;
    }
L_08988334:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
      if (branch_taken) {
          goto L_08988354;
      }
      goto L_08988344;
    }
L_08988344:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    goto L_08988354;
L_08988354:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089883C0;
      }
      goto L_0898836C;
    }
L_0898836C:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08988378u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 43u, 0x08988378u, 0x08987DD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 946u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 946u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 946u, 0x08987DD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988378u) goto L_08988378;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988378:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_2 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089883C0;
      }
      goto L_089883B4;
    }
L_089883B4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089883C0;
L_089883C0:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(68), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089883DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[8]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(148), aot_run_words); }
    aot_gpr_31 = (0x08988420u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    goto L_08988080;
L_08988420:
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 & 16u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08988454;
      }
      goto L_08988450;
    }
L_08988450:
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08988454;
L_08988454:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089885C4;
      }
      goto L_08988464;
    }
L_08988464:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[19]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[22]) || std::isnan(aot_fpr_12)) && ctx.fpr[22] == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089884B4;
      }
      goto L_089884A0;
    }
L_089884A0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    ctx.fpr[22] = aot_fpr_12 / ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089884B8;
      }
      goto L_089884B4;
    }
L_089884B4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089884B8;
L_089884B8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089885C4;
      }
      goto L_089884D0;
    }
L_089884D0:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x089884E8u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 55u, 0x089884E8u, 0x08987D6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 945u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 945u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 945u, 0x08987D6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089884E8u) goto L_089884E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089884E8:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(82));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x089884FCu);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 56u, 0x089884FCu, 0x08987D6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 945u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 945u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 945u, 0x08987D6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089884FCu) goto L_089884FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089884FC:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(14));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(14));
    aot_gpr_31 = (0x08988510u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 57u, 0x08988510u, 0x08987D6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 945u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 945u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 945u, 0x08987D6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988510u) goto L_08988510;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988510:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store16(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[20] = (aot_mem.aot_direct_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[20]));
    ctx.gpr[20] = (aot_mem.aot_direct_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(3), ctx.gpr[20]));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[20]);
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_gpr_4);
    ctx.execute_vfpu_vh2f_ct<1u, 0u, 2u>();
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08988554u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 58u, 0x08988554u, 0x08987DD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 946u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 946u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 946u, 0x08987DD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988554u) goto L_08988554;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988554:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_2 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089885C4;
      }
      goto L_089885B8;
    }
L_089885B8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089885C4;
L_089885C4:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(132), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      ctx.gpr[23] = aot_run_words[9];
      ctx.gpr[30] = aot_run_words[10];
      aot_gpr_31 = aot_run_words[11];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089885FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 & 32768u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    ctx.gpr[9] = (aot_gpr_6 & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_4 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0898863C;
      }
      goto L_0898862C;
    }
L_0898862C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[9] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
      if (branch_taken) {
          goto L_08988654;
      }
      goto L_0898863C;
    }
L_0898863C:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0898864Cu);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    goto L_08988848;
L_0898864C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898866C;
      }
      goto L_08988654;
    }
L_08988654:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    aot_gpr_31 = (0x0898866Cu);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08988AB8;
L_0898866C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08988678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 & 32768u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(68), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08988710;
      }
      goto L_089886AC;
    }
L_089886AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08988830;
      }
      goto L_089886C4;
    }
L_089886C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_31 = (0x089886E0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 70u, 0x089886E0u, 0x089FB44Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 514u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 514u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 514u, 0x089FB44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089886E0u) goto L_089886E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089886E0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089886F4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 71u, 0x089886F4u, 0x089FB44Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 514u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 514u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 514u, 0x089FB44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089886F4u) goto L_089886F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089886F4:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08988708u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 72u, 0x08988708u, 0x08987C88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 936u, 0x08987C88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988708u) goto L_08988708;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988708:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08988830;
      }
      goto L_08988710;
    }
L_08988710:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08988830;
      }
      goto L_08988728;
    }
L_08988728:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6)));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(ctx.fpr[15])};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(2)));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(6)));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    ctx.execute_vfpu_vh2f_ct<0u, 0u, 1u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(ctx.fpr[15])};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08988830u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 75u, 0x08988830u, 0x08987C88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 936u, 0x08987C88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988830u) goto L_08988830;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988830:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(64), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08988848:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_vfpu_scalar_bits_ct<24u>(ctx.gpr[16]);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(0));
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[13]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[25] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08988998;
      }
      goto L_08988890;
    }
L_08988890:
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    ctx.execute_vfpu_vec3_ct<0u, 0u, 32u, 1u, 1u>();
    ctx.execute_vfpu_vcmp_ct<0u, 28u, 1u, 7u>();
    if (((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<0u>());
        goto L_08988998;
    }
    goto L_089888A4;
L_089888A4:
    ctx.gpr[14] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[14]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[25] & 2u);
      if (branch_taken) {
          goto L_08988998;
      }
      goto L_089888B4;
    }
L_089888B4:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(10));
        goto L_089888C0;
    }
    goto L_089888BC;
L_089888BC:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(16));
    goto L_089888C0;
L_089888C0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[14] = (ctx.lo);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[13]);
    ctx.gpr[15] = (ctx.gpr[12] | 0u);
    goto L_089888D0;
L_089888D0:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[16]);
    if (ctx.gpr[12] != ctx.gpr[14]) {
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
        goto L_08988900;
    }
    goto L_089888DC;
L_089888DC:
    ctx.gpr[9] = (ctx.gpr[3] & 2u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
        goto L_089888F8;
    }
    goto L_089888E8;
L_089888E8:
    ctx.execute_vfpu_unary_ct<0u, 28u, 1u, 0u>();
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<28u>());
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[12] - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08988988;
      }
      goto L_089888F8;
    }
L_089888F8:
    ctx.gpr[12] = (ctx.gpr[13] | 0u);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(1));
    goto L_08988900;
L_08988900:
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(11), ctx.gpr[8]));
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f_ct<1u, 32u, 1u>();
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<0u, 28u, 1u, 2u>();
    if (((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u) {
    ctx.gpr[15] = (ctx.gpr[12] | 0u);
        goto L_089888D0;
    }
    goto L_0898891C;
L_0898891C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<0u>());
    ctx.gpr[8] = (ctx.gpr[25] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
      if (branch_taken) {
          goto L_08988988;
      }
      goto L_0898892C;
    }
L_0898892C:
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<16u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<48u>(ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<80u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<112u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f_ct<1u, 16u, 2u>();
    ctx.execute_vfpu_vh2f_ct<2u, 80u, 2u>();
    ctx.execute_vfpu_vdot_ct<16u, 1u, 2u, 4u>();
    ctx.execute_vfpu_unary_ct<16u, 16u, 1u, 5u>();
    ctx.execute_vfpu_unary_ct<16u, 16u, 1u, 23u>();
    ctx.execute_vfpu_vocp_ct<16u, 16u, 1u>();
    ctx.execute_vfpu_vcmp_ct<16u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    ctx.execute_vfpu_unary_ct<48u, 16u, 1u, 18u>();
      if (branch_taken) {
          goto L_08988980;
      }
      goto L_0898897C;
    }
L_0898897C:
    ctx.execute_vfpu_unary_ct<48u, 48u, 1u, 16u>();
    goto L_08988980;
L_08988980:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<16u>());
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<48u>());
    goto L_08988988;
L_08988988:
    ctx.gpr[8] = (ctx.gpr[12] - ctx.gpr[13]);
    ctx.gpr[9] = (ctx.gpr[15] - ctx.gpr[13]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    goto L_08988998;
L_08988998:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089889B0;
      }
      goto L_089889A8;
    }
L_089889A8:
    ctx.set_vfpu_scalar_bits_ct<44u>(ctx.gpr[8]);
    ctx.execute_vfpu_vec3_ct<12u, 12u, 44u, 1u, 2u>();
    goto L_089889B0;
L_089889B0:
    ctx.execute_vfpu_vcmp_ct<12u, 28u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
      if (branch_taken) {
          goto L_089889DC;
      }
      goto L_089889BC;
    }
L_089889BC:
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(11), ctx.gpr[8]));
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f_ct<20u, 32u, 1u>();
    ctx.execute_vfpu_vcmp_ct<20u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    ctx.execute_vfpu_vec3_ct<52u, 20u, 0u, 1u, 1u>();
      if (branch_taken) {
          goto L_089889DC;
      }
      goto L_089889D8;
    }
L_089889D8:
    ctx.execute_vfpu_vec3_ct<20u, 52u, 20u, 1u, 3u>();
    goto L_089889DC;
L_089889DC:
    ctx.gpr[8] = (ctx.gpr[25] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08988A2C;
      }
      goto L_089889E8;
    }
L_089889E8:
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(10), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[15] + static_cast<std::uint32_t>(14)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(10), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[12] + static_cast<std::uint32_t>(14)));
    ctx.set_vfpu_scalar_bits_ct<64u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<96u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f_ct<1u, 0u, 2u>();
    ctx.execute_vfpu_vh2f_ct<2u, 64u, 2u>();
    ctx.execute_vfpu_vec3_ct<2u, 2u, 1u, 3u, 1u>();
    ctx.execute_vfpu_vscl_ct<2u, 2u, 20u, 3u>();
    ctx.execute_vfpu_vec3_ct<1u, 1u, 2u, 3u, 0u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 12u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08988A2C;
L_08988A2C:
    ctx.gpr[8] = (ctx.gpr[25] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08988AA8;
      }
      goto L_08988A38;
    }
L_08988A38:
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[9]);
    ctx.execute_vfpu_vcmp_ct<16u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    ctx.execute_vfpu_vh2f_ct<1u, 0u, 2u>();
      if (branch_taken) {
          goto L_08988AA0;
      }
      goto L_08988A64;
    }
L_08988A64:
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<64u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<96u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f_ct<2u, 64u, 2u>();
    ctx.execute_vfpu_vocp_ct<52u, 20u, 1u>();
    ctx.execute_vfpu_vec3_ct<4u, 16u, 20u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<36u, 16u, 52u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<8u, 4u, 2u, 18u>();
    ctx.execute_vfpu_vscl_ct<4u, 8u, 48u, 2u>();
    ctx.execute_vfpu_vscl_ct<2u, 2u, 4u, 4u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 36u, 4u>();
    ctx.execute_vfpu_vec3_ct<1u, 1u, 2u, 4u, 0u>();
    goto L_08988AA0;
L_08988AA0:
    ctx.execute_vfpu_vscl_ct<1u, 1u, 12u, 4u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08988AA8;
L_08988AA8:
    ctx.gpr[16] = (ctx.vfpu_scalar_bits_ct<24u>());
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08988AB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_vfpu_scalar_bits_ct<24u>(ctx.gpr[16]);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(0));
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[13]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[25] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[24] = (ctx.gpr[24] & 255u);
    ctx.gpr[10] = (ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08988C10;
      }
      goto L_08988B08;
    }
L_08988B08:
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    ctx.execute_vfpu_vec3_ct<0u, 0u, 32u, 1u, 1u>();
    ctx.execute_vfpu_vcmp_ct<0u, 28u, 1u, 7u>();
    if (((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<0u>());
        goto L_08988C10;
    }
    goto L_08988B1C;
L_08988B1C:
    ctx.gpr[14] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[14]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[25] & 2u);
      if (branch_taken) {
          goto L_08988C10;
      }
      goto L_08988B2C;
    }
L_08988B2C:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(10));
        goto L_08988B38;
    }
    goto L_08988B34;
L_08988B34:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(16));
    goto L_08988B38;
L_08988B38:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[14] = (ctx.lo);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[13]);
    ctx.gpr[15] = (ctx.gpr[12] | 0u);
    goto L_08988B48;
L_08988B48:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[16]);
    if (ctx.gpr[12] != ctx.gpr[14]) {
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
        goto L_08988B78;
    }
    goto L_08988B54;
L_08988B54:
    ctx.gpr[9] = (ctx.gpr[3] & 2u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
        goto L_08988B70;
    }
    goto L_08988B60;
L_08988B60:
    ctx.execute_vfpu_unary_ct<0u, 28u, 1u, 0u>();
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<28u>());
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[12] - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08988C00;
      }
      goto L_08988B70;
    }
L_08988B70:
    ctx.gpr[12] = (ctx.gpr[13] | 0u);
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(1));
    goto L_08988B78;
L_08988B78:
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(11), ctx.gpr[8]));
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f_ct<1u, 32u, 1u>();
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<0u, 28u, 1u, 2u>();
    if (((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u) {
    ctx.gpr[15] = (ctx.gpr[12] | 0u);
        goto L_08988B48;
    }
    goto L_08988B94;
L_08988B94:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<0u>());
    ctx.gpr[8] = (ctx.gpr[25] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
      if (branch_taken) {
          goto L_08988C00;
      }
      goto L_08988BA4;
    }
L_08988BA4:
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<16u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<48u>(ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<80u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<112u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f_ct<1u, 16u, 2u>();
    ctx.execute_vfpu_vh2f_ct<2u, 80u, 2u>();
    ctx.execute_vfpu_vdot_ct<16u, 1u, 2u, 4u>();
    ctx.execute_vfpu_unary_ct<16u, 16u, 1u, 5u>();
    ctx.execute_vfpu_unary_ct<16u, 16u, 1u, 23u>();
    ctx.execute_vfpu_vocp_ct<16u, 16u, 1u>();
    ctx.execute_vfpu_vcmp_ct<16u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    ctx.execute_vfpu_unary_ct<48u, 16u, 1u, 18u>();
      if (branch_taken) {
          goto L_08988BF8;
      }
      goto L_08988BF4;
    }
L_08988BF4:
    ctx.execute_vfpu_unary_ct<48u, 48u, 1u, 16u>();
    goto L_08988BF8;
L_08988BF8:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<16u>());
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<48u>());
    goto L_08988C00;
L_08988C00:
    ctx.gpr[8] = (ctx.gpr[12] - ctx.gpr[13]);
    ctx.gpr[9] = (ctx.gpr[15] - ctx.gpr[13]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    goto L_08988C10;
L_08988C10:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08988C28;
      }
      goto L_08988C20;
    }
L_08988C20:
    ctx.set_vfpu_scalar_bits_ct<44u>(ctx.gpr[8]);
    ctx.execute_vfpu_vec3_ct<12u, 12u, 44u, 1u, 2u>();
    goto L_08988C28;
L_08988C28:
    ctx.execute_vfpu_vcmp_ct<12u, 28u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
      if (branch_taken) {
          goto L_08988C54;
      }
      goto L_08988C34;
    }
L_08988C34:
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(11), ctx.gpr[8]));
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f_ct<20u, 32u, 1u>();
    ctx.execute_vfpu_vcmp_ct<20u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    ctx.execute_vfpu_vec3_ct<52u, 20u, 0u, 1u, 1u>();
      if (branch_taken) {
          goto L_08988C54;
      }
      goto L_08988C50;
    }
L_08988C50:
    ctx.execute_vfpu_vec3_ct<20u, 52u, 20u, 1u, 3u>();
    goto L_08988C54;
L_08988C54:
    ctx.gpr[8] = (ctx.gpr[25] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08988CA8;
      }
      goto L_08988C60;
    }
L_08988C60:
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(10), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[15] + static_cast<std::uint32_t>(14)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(10), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[12] + static_cast<std::uint32_t>(14)));
    ctx.set_vfpu_scalar_bits_ct<64u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<96u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f_ct<1u, 0u, 2u>();
    ctx.execute_vfpu_vh2f_ct<2u, 64u, 2u>();
    ctx.execute_vfpu_vec3_ct<2u, 2u, 1u, 3u, 1u>();
    ctx.execute_vfpu_vscl_ct<2u, 2u, 20u, 3u>();
    ctx.execute_vfpu_vec3_ct<1u, 1u, 2u, 3u, 0u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 12u, 3u>();
    ctx.execute_vfpu_unary_ct<1u, 1u, 1u, 2u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08988CA8;
L_08988CA8:
    ctx.gpr[8] = (ctx.gpr[25] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08988D54;
      }
      goto L_08988CB4;
    }
L_08988CB4:
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[9]);
    ctx.execute_vfpu_vcmp_ct<16u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    ctx.execute_vfpu_vh2f_ct<1u, 0u, 2u>();
      if (branch_taken) {
          goto L_08988CF8;
      }
      goto L_08988CE0;
    }
L_08988CE0:
    ctx.execute_vfpu_unary_ct<3u, 1u, 4u, 0u>();
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08988CF0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 130u, 0x08988CF0u, 0x08987DF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 947u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 947u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 947u, 0x08987DF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988CF0u) goto L_08988CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988CF0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_unary_ct<1u, 3u, 4u, 0u>();
    goto L_08988CF8;
L_08988CF8:
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<64u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<96u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f_ct<2u, 64u, 2u>();
    ctx.execute_vfpu_unary_ct<3u, 2u, 4u, 0u>();
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08988D24u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0096.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 132u, 0x08988D24u, 0x08987DF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0096_entry(rt, ctx, 947u, aot_mem);
#else
        recomp_unit_0096_entry(rt, ctx, 947u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 947u, 0x08987DF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988D24u) goto L_08988D24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988D24:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_unary_ct<2u, 3u, 4u, 0u>();
    ctx.execute_vfpu_vocp_ct<52u, 20u, 1u>();
    ctx.execute_vfpu_vec3_ct<4u, 16u, 20u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<36u, 16u, 52u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<8u, 4u, 2u, 18u>();
    ctx.execute_vfpu_vscl_ct<4u, 8u, 48u, 2u>();
    ctx.execute_vfpu_vscl_ct<2u, 2u, 4u, 4u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 36u, 4u>();
    ctx.execute_vfpu_vec3_ct<1u, 1u, 2u, 4u, 0u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 12u, 4u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08988D54;
L_08988D54:
    ctx.gpr[16] = (ctx.vfpu_scalar_bits_ct<24u>());
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08988D64:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-15976)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[7] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08988DFC;
      }
      goto L_08988D78;
    }
L_08988D78:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (ctx.lo);
    goto L_08988D84;
L_08988D84:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) < 0;
      if (branch_taken) {
          goto L_08988D9C;
      }
      goto L_08988D8C;
    }
L_08988D8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
        goto L_08988DA4;
    }
    goto L_08988D9C;
L_08988D9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08988DC4;
      }
      goto L_08988DA4;
    }
L_08988DA4:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_08988DC0;
    }
    goto L_08988DB8;
L_08988DB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08988DC4;
      }
      goto L_08988DC0;
    }
L_08988DC0:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    goto L_08988DC4;
L_08988DC4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08988DE8;
      }
      goto L_08988DCC;
    }
L_08988DCC:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1360)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-24276)));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(684), ctx.gpr[9]);
    goto L_08988DE8;
L_08988DE8:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08988D84;
      }
      goto L_08988DFC;
    }
L_08988DFC:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08988E04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08988E20u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 147u, 0x08988E20u, 0x08A363C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 562u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 562u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988E20u) goto L_08988E20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988E20:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08988E3C;
      }
      goto L_08988E28;
    }
L_08988E28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08988E44;
      }
      goto L_08988E34;
    }
L_08988E34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_08988E50;
      }
      goto L_08988E3C;
    }
L_08988E3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08989094;
      }
      goto L_08988E44;
    }
L_08988E44:
    aot_gpr_31 = (0x08988E4Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988E4Cu) goto L_08988E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08988E4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08988E50;
L_08988E50:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08988E80;
      }
      goto L_08988E58;
    }
L_08988E58:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08988E64u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 155u, 0x08988E64u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988E64u) goto L_08988E64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988E64:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08988E7C;
      }
      goto L_08988E70;
    }
L_08988E70:
    aot_gpr_31 = (0x08988E78u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988E78u) goto L_08988E78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08988E78:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08988E7C;
L_08988E7C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08988E80;
L_08988E80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08988E8Cu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16112));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 160u, 0x08988E8Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988E8Cu) goto L_08988E8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988E8C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08988EA8u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 161u, 0x08988EA8u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988EA8u) goto L_08988EA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988EA8:
    aot_gpr_4 = (0u | 331u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08988EB8u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 162u, 0x08988EB8u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988EB8u) goto L_08988EB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988EB8:
    aot_gpr_4 = (0u | 335u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08988EC8u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 163u, 0x08988EC8u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988EC8u) goto L_08988EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988EC8:
    aot_gpr_4 = (0u | 344u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08988ED8u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 164u, 0x08988ED8u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988ED8u) goto L_08988ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988ED8:
    aot_gpr_4 = (0u | 346u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08988EE8u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 165u, 0x08988EE8u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988EE8u) goto L_08988EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988EE8:
    aot_gpr_4 = (0u | 349u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08988EF8u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 166u, 0x08988EF8u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988EF8u) goto L_08988EF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988EF8:
    aot_gpr_4 = (0u | 353u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08988F08u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 167u, 0x08988F08u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988F08u) goto L_08988F08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988F08:
    aot_gpr_4 = (0u | 348u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08988F18u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 168u, 0x08988F18u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988F18u) goto L_08988F18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988F18:
    aot_gpr_4 = (0u | 357u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08988F28u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 169u, 0x08988F28u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988F28u) goto L_08988F28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988F28:
    aot_gpr_4 = (0u | 360u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08988F38u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 170u, 0x08988F38u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988F38u) goto L_08988F38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988F38:
    aot_gpr_31 = (0x08988F40u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 171u, 0x08988F40u, 0x08AD3610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 598u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 598u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988F40u) goto L_08988F40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988F40:
    aot_gpr_31 = (0x08988F48u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988F48u) goto L_08988F48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08988F48:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08988F5Cu);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 173u, 0x08988F5Cu, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988F5Cu) goto L_08988F5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988F5C:
    aot_gpr_31 = (0x08988F64u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988F64u) goto L_08988F64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08988F64:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08988F78u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 175u, 0x08988F78u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988F78u) goto L_08988F78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988F78:
    aot_gpr_31 = (0x08988F80u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988F80u) goto L_08988F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08988F80:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 17u);
    aot_gpr_6 = (0u | 10u);
    aot_gpr_31 = (0x08988F94u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 177u, 0x08988F94u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988F94u) goto L_08988F94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988F94:
    aot_gpr_31 = (0x08988F9Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988F9Cu) goto L_08988F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08988F9C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 19u);
    aot_gpr_6 = (0u | 100u);
    aot_gpr_31 = (0x08988FB0u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 179u, 0x08988FB0u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988FB0u) goto L_08988FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988FB0:
    aot_gpr_31 = (0x08988FB8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988FB8u) goto L_08988FB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08988FB8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 21u);
    aot_gpr_6 = (0u | 50u);
    aot_gpr_31 = (0x08988FCCu);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 181u, 0x08988FCCu, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988FCCu) goto L_08988FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988FCC:
    aot_gpr_31 = (0x08988FD4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988FD4u) goto L_08988FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08988FD4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 24u);
    aot_gpr_6 = (0u | 150u);
    aot_gpr_31 = (0x08988FE8u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 183u, 0x08988FE8u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988FE8u) goto L_08988FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08988FE8:
    aot_gpr_31 = (0x08988FF0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08988FF0u) goto L_08988FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08988FF0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 29u);
    aot_gpr_6 = (0u | 120u);
    aot_gpr_31 = (0x08989004u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 185u, 0x08989004u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989004u) goto L_08989004;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989004:
    aot_gpr_31 = (0x0898900Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898900Cu) goto L_0898900C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898900C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 30u);
    aot_gpr_6 = (0u | 25u);
    aot_gpr_31 = (0x08989020u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 187u, 0x08989020u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989020u) goto L_08989020;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989020:
    aot_gpr_31 = (0x08989028u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989028u) goto L_08989028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989028:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 33u);
    aot_gpr_6 = (0u | 250u);
    aot_gpr_31 = (0x0898903Cu);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 189u, 0x0898903Cu, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898903Cu) goto L_0898903C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898903C:
    aot_gpr_31 = (0x08989044u);
    aot_gpr_4 = (0u | 331u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 190u, 0x08989044u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989044u) goto L_08989044;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989044:
    aot_gpr_31 = (0x0898904Cu);
    aot_gpr_4 = (0u | 346u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 191u, 0x0898904Cu, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898904Cu) goto L_0898904C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898904C:
    aot_gpr_31 = (0x08989054u);
    aot_gpr_4 = (0u | 353u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 192u, 0x08989054u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989054u) goto L_08989054;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989054:
    aot_gpr_31 = (0x0898905Cu);
    aot_gpr_4 = (0u | 335u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 193u, 0x0898905Cu, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898905Cu) goto L_0898905C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898905C:
    aot_gpr_31 = (0x08989064u);
    aot_gpr_4 = (0u | 344u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 194u, 0x08989064u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989064u) goto L_08989064;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989064:
    aot_gpr_31 = (0x0898906Cu);
    aot_gpr_4 = (0u | 349u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 195u, 0x0898906Cu, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898906Cu) goto L_0898906C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898906C:
    aot_gpr_31 = (0x08989074u);
    aot_gpr_4 = (0u | 348u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 196u, 0x08989074u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989074u) goto L_08989074;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989074:
    aot_gpr_31 = (0x0898907Cu);
    aot_gpr_4 = (0u | 357u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 197u, 0x0898907Cu, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898907Cu) goto L_0898907C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898907C:
    aot_gpr_31 = (0x08989084u);
    aot_gpr_4 = (0u | 360u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 198u, 0x08989084u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989084u) goto L_08989084;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989084:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    goto L_08989094;
L_08989094:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089890AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x089890C8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 201u, 0x089890C8u, 0x08A363C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 562u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 562u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089890C8u) goto L_089890C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089890C8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089890E4;
      }
      goto L_089890D0;
    }
L_089890D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089890EC;
      }
      goto L_089890DC;
    }
L_089890DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_089890F8;
      }
      goto L_089890E4;
    }
L_089890E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08989320;
      }
      goto L_089890EC;
    }
L_089890EC:
    aot_gpr_31 = (0x089890F4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089890F4u) goto L_089890F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089890F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_089890F8;
L_089890F8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989128;
      }
      goto L_08989100;
    }
L_08989100:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898910Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 209u, 0x0898910Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898910Cu) goto L_0898910C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898910C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08989124;
      }
      goto L_08989118;
    }
L_08989118:
    aot_gpr_31 = (0x08989120u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989120u) goto L_08989120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989120:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08989124;
L_08989124:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08989128;
L_08989128:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08989134u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16112));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 214u, 0x08989134u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989134u) goto L_08989134;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989134:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08989150u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 215u, 0x08989150u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989150u) goto L_08989150;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989150:
    aot_gpr_4 = (0u | 340u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08989160u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 216u, 0x08989160u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989160u) goto L_08989160;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989160:
    aot_gpr_4 = (0u | 342u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08989170u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 217u, 0x08989170u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989170u) goto L_08989170;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989170:
    aot_gpr_4 = (0u | 363u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08989180u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 218u, 0x08989180u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989180u) goto L_08989180;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989180:
    aot_gpr_4 = (0u | 347u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08989190u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 219u, 0x08989190u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989190u) goto L_08989190;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989190:
    aot_gpr_4 = (0u | 351u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x089891A0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 220u, 0x089891A0u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089891A0u) goto L_089891A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089891A0:
    aot_gpr_4 = (0u | 355u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x089891B0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 221u, 0x089891B0u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089891B0u) goto L_089891B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089891B0:
    aot_gpr_4 = (0u | 352u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x089891C0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 222u, 0x089891C0u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089891C0u) goto L_089891C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089891C0:
    aot_gpr_4 = (0u | 358u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x089891D0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 223u, 0x089891D0u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089891D0u) goto L_089891D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089891D0:
    aot_gpr_4 = (0u | 359u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x089891E0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 224u, 0x089891E0u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089891E0u) goto L_089891E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089891E0:
    aot_gpr_31 = (0x089891E8u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 225u, 0x089891E8u, 0x08AD3610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 598u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 598u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089891E8u) goto L_089891E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089891E8:
    aot_gpr_31 = (0x089891F0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089891F0u) goto L_089891F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089891F0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08989204u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 227u, 0x08989204u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989204u) goto L_08989204;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989204:
    aot_gpr_31 = (0x0898920Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898920Cu) goto L_0898920C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898920C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 13u);
    aot_gpr_6 = (0u | 10u);
    aot_gpr_31 = (0x08989220u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 229u, 0x08989220u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989220u) goto L_08989220;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989220:
    aot_gpr_31 = (0x08989228u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989228u) goto L_08989228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989228:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 20u);
    aot_gpr_6 = (0u | 40u);
    aot_gpr_31 = (0x0898923Cu);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 231u, 0x0898923Cu, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898923Cu) goto L_0898923C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898923C:
    aot_gpr_31 = (0x08989244u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989244u) goto L_08989244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989244:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 23u);
    aot_gpr_6 = (0u | 25u);
    aot_gpr_31 = (0x08989258u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 233u, 0x08989258u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989258u) goto L_08989258;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989258:
    aot_gpr_31 = (0x08989260u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989260u) goto L_08989260;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989260:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 26u);
    aot_gpr_6 = (0u | 100u);
    aot_gpr_31 = (0x08989274u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 235u, 0x08989274u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989274u) goto L_08989274;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989274:
    aot_gpr_31 = (0x0898927Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898927Cu) goto L_0898927C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898927C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 28u);
    aot_gpr_6 = (0u | 150u);
    aot_gpr_31 = (0x08989290u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 237u, 0x08989290u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989290u) goto L_08989290;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989290:
    aot_gpr_31 = (0x08989298u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989298u) goto L_08989298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989298:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 31u);
    aot_gpr_6 = (0u | 21u);
    aot_gpr_31 = (0x089892ACu);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 239u, 0x089892ACu, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089892ACu) goto L_089892AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089892AC:
    aot_gpr_31 = (0x089892B4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089892B4u) goto L_089892B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089892B4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 32u);
    aot_gpr_6 = (0u | 5u);
    aot_gpr_31 = (0x089892C8u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 241u, 0x089892C8u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089892C8u) goto L_089892C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089892C8:
    aot_gpr_31 = (0x089892D0u);
    aot_gpr_4 = (0u | 340u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 242u, 0x089892D0u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089892D0u) goto L_089892D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089892D0:
    aot_gpr_31 = (0x089892D8u);
    aot_gpr_4 = (0u | 342u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 243u, 0x089892D8u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089892D8u) goto L_089892D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089892D8:
    aot_gpr_31 = (0x089892E0u);
    aot_gpr_4 = (0u | 363u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 244u, 0x089892E0u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089892E0u) goto L_089892E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089892E0:
    aot_gpr_31 = (0x089892E8u);
    aot_gpr_4 = (0u | 347u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 245u, 0x089892E8u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089892E8u) goto L_089892E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089892E8:
    aot_gpr_31 = (0x089892F0u);
    aot_gpr_4 = (0u | 351u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 246u, 0x089892F0u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089892F0u) goto L_089892F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089892F0:
    aot_gpr_31 = (0x089892F8u);
    aot_gpr_4 = (0u | 355u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 247u, 0x089892F8u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089892F8u) goto L_089892F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089892F8:
    aot_gpr_31 = (0x08989300u);
    aot_gpr_4 = (0u | 352u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 248u, 0x08989300u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989300u) goto L_08989300;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989300:
    aot_gpr_31 = (0x08989308u);
    aot_gpr_4 = (0u | 358u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 249u, 0x08989308u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989308u) goto L_08989308;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989308:
    aot_gpr_31 = (0x08989310u);
    aot_gpr_4 = (0u | 359u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 250u, 0x08989310u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989310u) goto L_08989310;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989310:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    goto L_08989320;
L_08989320:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08989338:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08989354u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 253u, 0x08989354u, 0x08A363C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 562u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 562u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989354u) goto L_08989354;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989354:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08989370;
      }
      goto L_0898935C;
    }
L_0898935C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08989378;
      }
      goto L_08989368;
    }
L_08989368:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_08989384;
      }
      goto L_08989370;
    }
L_08989370:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089895AC;
      }
      goto L_08989378;
    }
L_08989378:
    aot_gpr_31 = (0x08989380u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989380u) goto L_08989380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989380:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08989384;
L_08989384:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_089893B4;
      }
      goto L_0898938C;
    }
L_0898938C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08989398u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 261u, 0x08989398u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989398u) goto L_08989398;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989398:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_089893B0;
      }
      goto L_089893A4;
    }
L_089893A4:
    aot_gpr_31 = (0x089893ACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089893ACu) goto L_089893AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089893AC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089893B0;
L_089893B0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_089893B4;
L_089893B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x089893C0u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16112));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 266u, 0x089893C0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089893C0u) goto L_089893C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089893C0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x089893DCu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 267u, 0x089893DCu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089893DCu) goto L_089893DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089893DC:
    aot_gpr_4 = (0u | 341u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x089893ECu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 268u, 0x089893ECu, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089893ECu) goto L_089893EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089893EC:
    aot_gpr_4 = (0u | 342u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x089893FCu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 269u, 0x089893FCu, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089893FCu) goto L_089893FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089893FC:
    aot_gpr_4 = (0u | 347u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0898940Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 270u, 0x0898940Cu, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898940Cu) goto L_0898940C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898940C:
    aot_gpr_4 = (0u | 350u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0898941Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 271u, 0x0898941Cu, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898941Cu) goto L_0898941C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898941C:
    aot_gpr_4 = (0u | 356u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0898942Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 272u, 0x0898942Cu, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898942Cu) goto L_0898942C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898942C:
    aot_gpr_4 = (0u | 352u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0898943Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 273u, 0x0898943Cu, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898943Cu) goto L_0898943C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898943C:
    aot_gpr_4 = (0u | 358u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0898944Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 274u, 0x0898944Cu, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898944Cu) goto L_0898944C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898944C:
    aot_gpr_4 = (0u | 362u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0898945Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 275u, 0x0898945Cu, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898945Cu) goto L_0898945C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898945C:
    aot_gpr_4 = (0u | 366u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0898946Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 276u, 0x0898946Cu, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898946Cu) goto L_0898946C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898946C:
    aot_gpr_31 = (0x08989474u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 277u, 0x08989474u, 0x08AD3610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 598u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 598u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989474u) goto L_08989474;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989474:
    aot_gpr_31 = (0x0898947Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898947Cu) goto L_0898947C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898947C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 11u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08989490u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 279u, 0x08989490u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989490u) goto L_08989490;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989490:
    aot_gpr_31 = (0x08989498u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989498u) goto L_08989498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989498:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 12u);
    aot_gpr_6 = (0u | 10u);
    aot_gpr_31 = (0x089894ACu);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 281u, 0x089894ACu, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089894ACu) goto L_089894AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089894AC:
    aot_gpr_31 = (0x089894B4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089894B4u) goto L_089894B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089894B4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 20u);
    aot_gpr_6 = (0u | 40u);
    aot_gpr_31 = (0x089894C8u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 283u, 0x089894C8u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089894C8u) goto L_089894C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089894C8:
    aot_gpr_31 = (0x089894D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089894D0u) goto L_089894D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089894D0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 22u);
    aot_gpr_6 = (0u | 30u);
    aot_gpr_31 = (0x089894E4u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 285u, 0x089894E4u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089894E4u) goto L_089894E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089894E4:
    aot_gpr_31 = (0x089894ECu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089894ECu) goto L_089894EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089894EC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 27u);
    aot_gpr_6 = (0u | 100u);
    aot_gpr_31 = (0x08989500u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 287u, 0x08989500u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989500u) goto L_08989500;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989500:
    aot_gpr_31 = (0x08989508u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989508u) goto L_08989508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989508:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 28u);
    aot_gpr_6 = (0u | 150u);
    aot_gpr_31 = (0x0898951Cu);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 289u, 0x0898951Cu, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898951Cu) goto L_0898951C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898951C:
    aot_gpr_31 = (0x08989524u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989524u) goto L_08989524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989524:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 31u);
    aot_gpr_6 = (0u | 21u);
    aot_gpr_31 = (0x08989538u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 291u, 0x08989538u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989538u) goto L_08989538;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989538:
    aot_gpr_31 = (0x08989540u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989540u) goto L_08989540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989540:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 35u);
    aot_gpr_6 = (0u | 500u);
    aot_gpr_31 = (0x08989554u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0069.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 293u, 0x08989554u, 0x0891B7DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0069_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0069_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989554u) goto L_08989554;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989554:
    aot_gpr_31 = (0x0898955Cu);
    aot_gpr_4 = (0u | 341u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 294u, 0x0898955Cu, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898955Cu) goto L_0898955C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898955C:
    aot_gpr_31 = (0x08989564u);
    aot_gpr_4 = (0u | 342u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 295u, 0x08989564u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989564u) goto L_08989564;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989564:
    aot_gpr_31 = (0x0898956Cu);
    aot_gpr_4 = (0u | 347u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 296u, 0x0898956Cu, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898956Cu) goto L_0898956C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898956C:
    aot_gpr_31 = (0x08989574u);
    aot_gpr_4 = (0u | 350u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 297u, 0x08989574u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989574u) goto L_08989574;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989574:
    aot_gpr_31 = (0x0898957Cu);
    aot_gpr_4 = (0u | 356u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 298u, 0x0898957Cu, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898957Cu) goto L_0898957C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898957C:
    aot_gpr_31 = (0x08989584u);
    aot_gpr_4 = (0u | 352u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 299u, 0x08989584u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989584u) goto L_08989584;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989584:
    aot_gpr_31 = (0x0898958Cu);
    aot_gpr_4 = (0u | 358u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 300u, 0x0898958Cu, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898958Cu) goto L_0898958C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898958C:
    aot_gpr_31 = (0x08989594u);
    aot_gpr_4 = (0u | 362u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 301u, 0x08989594u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989594u) goto L_08989594;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989594:
    aot_gpr_31 = (0x0898959Cu);
    aot_gpr_4 = (0u | 366u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 302u, 0x0898959Cu, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898959Cu) goto L_0898959C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898959C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    goto L_089895AC;
L_089895AC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089895C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_089895F0;
    }
    goto L_089895E4;
L_089895E4:
    aot_gpr_31 = (0x089895ECu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089895ECu) goto L_089895EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089895EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_089895F0;
L_089895F0:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989620;
      }
      goto L_089895F8;
    }
L_089895F8:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08989604u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 309u, 0x08989604u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989604u) goto L_08989604;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989604:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898961C;
      }
      goto L_08989610;
    }
L_08989610:
    aot_gpr_31 = (0x08989618u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989618u) goto L_08989618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989618:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898961C;
L_0898961C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08989620;
L_08989620:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898962Cu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 314u, 0x0898962Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898962Cu) goto L_0898962C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898962C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08989648u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 315u, 0x08989648u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989648u) goto L_08989648;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989648:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-17674)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-17674), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898967C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_08989710;
      }
      goto L_089896A0;
    }
L_089896A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_089896B8;
    }
    goto L_089896AC;
L_089896AC:
    aot_gpr_31 = (0x089896B4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089896B4u) goto L_089896B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089896B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_089896B8;
L_089896B8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_089896E8;
      }
      goto L_089896C0;
    }
L_089896C0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x089896CCu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 322u, 0x089896CCu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089896CCu) goto L_089896CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089896CC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_089896E4;
      }
      goto L_089896D8;
    }
L_089896D8:
    aot_gpr_31 = (0x089896E0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089896E0u) goto L_089896E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089896E0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089896E4;
L_089896E4:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_089896E8;
L_089896E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x089896F4u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16096));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 327u, 0x089896F4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089896F4u) goto L_089896F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089896F4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898970Cu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 328u, 0x0898970Cu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898970Cu) goto L_0898970C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898970C:
    aot_gpr_4 = (2238u << 16u);
    goto L_08989710;
L_08989710:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(336)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08989724u);
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989724u) goto L_08989724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989724:
    aot_gpr_31 = (0x0898972Cu);
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 331u, 0x0898972Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898972Cu) goto L_0898972C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898972C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089897CC;
      }
      goto L_08989734;
    }
L_08989734:
    aot_gpr_31 = (0x0898973Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 333u, 0x0898973Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898973Cu) goto L_0898973C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898973C:
    aot_gpr_31 = (0x08989744u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(632)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 334u, 0x08989744u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989744u) goto L_08989744;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989744:
    aot_gpr_31 = (0x0898974Cu);
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 335u, 0x0898974Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898974Cu) goto L_0898974C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898974C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089897CC;
      }
      goto L_08989758;
    }
L_08989758:
    aot_gpr_31 = (0x08989760u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 337u, 0x08989760u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989760u) goto L_08989760;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989760:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0898976Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 338u, 0x0898976Cu, 0x08B0D94Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 383u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 383u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 383u, 0x08B0D94Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898976Cu) goto L_0898976C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898976C:
    aot_gpr_31 = (0x08989774u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 339u, 0x08989774u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989774u) goto L_08989774;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989774:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(944));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08989784u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 340u, 0x08989784u, 0x08B0D8ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 375u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 375u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 375u, 0x08B0D8ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989784u) goto L_08989784;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989784:
    aot_gpr_31 = (0x0898978Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 341u, 0x0898978Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898978Cu) goto L_0898978C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898978C:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(944));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0898979Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 342u, 0x0898979Cu, 0x08B0D8ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 375u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 375u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 375u, 0x08B0D8ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898979Cu) goto L_0898979C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898979C:
    aot_gpr_31 = (0x089897A4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 343u, 0x089897A4u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089897A4u) goto L_089897A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089897A4:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(944));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x089897B4u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 344u, 0x089897B4u, 0x08B0D8ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 375u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 375u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 375u, 0x08B0D8ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089897B4u) goto L_089897B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089897B4:
    aot_gpr_31 = (0x089897BCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 345u, 0x089897BCu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089897BCu) goto L_089897BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089897BC:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(944));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_31 = (0x089897CCu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 346u, 0x089897CCu, 0x08B0D8ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 375u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 375u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 375u, 0x08B0D8ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089897CCu) goto L_089897CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089897CC:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089897FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(60), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08989834;
      }
      goto L_0898982C;
    }
L_0898982C:
    aot_gpr_31 = (0x08989834u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989834u) goto L_08989834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989834:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989868;
      }
      goto L_08989840;
    }
L_08989840:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898984Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 351u, 0x0898984Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898984Cu) goto L_0898984C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898984C:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08989864;
      }
      goto L_08989858;
    }
L_08989858:
    aot_gpr_31 = (0x08989860u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989860u) goto L_08989860;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989860:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    goto L_08989864;
L_08989864:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08989868;
L_08989868:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08989874u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 356u, 0x08989874u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989874u) goto L_08989874;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989874:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898988Cu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 357u, 0x0898988Cu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898988Cu) goto L_0898988C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898988C:
    aot_gpr_31 = (0x08989894u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 358u, 0x08989894u, 0x08AD3708u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 614u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 614u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989894u) goto L_08989894;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989894:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x089898A8u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 359u, 0x089898A8u, 0x08AD3258u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 546u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 546u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089898A8u) goto L_089898A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089898A8:
    aot_gpr_31 = (0x089898B0u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 360u, 0x089898B0u, 0x08AD3610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 598u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 598u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089898B0u) goto L_089898B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089898B0:
    aot_gpr_31 = (0x089898B8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 361u, 0x089898B8u, 0x08AD3698u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 607u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 607u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089898B8u) goto L_089898B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089898B8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08989AA0;
      }
      goto L_089898C0;
    }
L_089898C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_089898D8;
    }
    goto L_089898CC;
L_089898CC:
    aot_gpr_31 = (0x089898D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089898D4u) goto L_089898D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089898D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_089898D8;
L_089898D8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989908;
      }
      goto L_089898E0;
    }
L_089898E0:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_31 = (0x089898ECu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 367u, 0x089898ECu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089898ECu) goto L_089898EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089898EC:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08989904;
      }
      goto L_089898F8;
    }
L_089898F8:
    aot_gpr_31 = (0x08989900u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989900u) goto L_08989900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989900:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08989904;
L_08989904:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    goto L_08989908;
L_08989908:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08989914u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 372u, 0x08989914u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989914u) goto L_08989914;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989914:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898992Cu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 373u, 0x0898992Cu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898992Cu) goto L_0898992C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898992C:
    aot_gpr_4 = (ctx.gpr[19] & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08989948;
      }
      goto L_08989938;
    }
L_08989938:
    aot_gpr_31 = (0x08989940u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 375u, 0x08989940u, 0x08AD3780u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989940u) goto L_08989940;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989940:
    aot_gpr_31 = (0x08989948u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 376u, 0x08989948u, 0x08AD37A0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 623u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 623u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 623u, 0x08AD37A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989948u) goto L_08989948;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989948:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-16928)));
    aot_gpr_31 = (0x08989954u);
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 377u, 0x08989954u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989954u) goto L_08989954;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989954:
    aot_gpr_2 = (17096u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08989980u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0092.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 378u, 0x08989980u, 0x08976FBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0092_entry(rt, ctx, 650u, aot_mem);
#else
        recomp_unit_0092_entry(rt, ctx, 650u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989980u) goto L_08989980;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989980:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
      if (branch_taken) {
          goto L_08989AA0;
      }
      goto L_0898998C;
    }
L_0898998C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08989998u);
    aot_gpr_4 = (0u | 1920u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 380u, 0x08989998u, 0x08AFF2C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 732u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 732u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989998u) goto L_08989998;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989998:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089899B8;
      }
      goto L_089899A4;
    }
L_089899A4:
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x089899B4u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0012.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 382u, 0x089899B4u, 0x08834A84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0012_entry(rt, ctx, 92u, aot_mem);
#else
        recomp_unit_0012_entry(rt, ctx, 92u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089899B4u) goto L_089899B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089899B4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089899B8;
L_089899B8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08989AA0;
      }
      goto L_089899C0;
    }
L_089899C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    ctx.gpr[10] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(ctx.gpr[18] + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (16479u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26355u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08989A68u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 385u, 0x08989A68u, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989A68u) goto L_08989A68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989A68:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08989A7Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 386u, 0x08989A7Cu, 0x08860094u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989A7Cu) goto L_08989A7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989A7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(680), aot_gpr_4);
    aot_gpr_31 = (0x08989AA0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 387u, 0x08989AA0u, 0x08891A2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 224u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 224u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989AA0u) goto L_08989AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989AA0:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(48), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08989AD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08989AE8u);
    aot_gpr_4 = (0u | 246u);
    goto L_089897FC;
L_08989AE8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08989AF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08989B04u);
    aot_gpr_4 = (0u | 241u);
    goto L_089897FC;
L_08989B04:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08989B10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08989B40;
    }
    goto L_08989B34;
L_08989B34:
    aot_gpr_31 = (0x08989B3Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989B3Cu) goto L_08989B3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989B3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08989B40;
L_08989B40:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989B70;
      }
      goto L_08989B48;
    }
L_08989B48:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08989B54u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 397u, 0x08989B54u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989B54u) goto L_08989B54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989B54:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08989B6C;
      }
      goto L_08989B60;
    }
L_08989B60:
    aot_gpr_31 = (0x08989B68u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989B68u) goto L_08989B68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989B68:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08989B6C;
L_08989B6C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08989B70;
L_08989B70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08989B7Cu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 402u, 0x08989B7Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989B7Cu) goto L_08989B7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989B7C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08989B94u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 403u, 0x08989B94u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989B94u) goto L_08989B94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989B94:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-15972)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08989C3C;
      }
      goto L_08989BA8;
    }
L_08989BA8:
    aot_gpr_4 = (ctx.gpr[16] << 5u);
    ctx.gpr[19] = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    goto L_08989BB8;
L_08989BB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
      if (branch_taken) {
          goto L_08989BD0;
      }
      goto L_08989BC0;
    }
L_08989BC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08989BD8;
    }
    goto L_08989BD0;
L_08989BD0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08989BF8;
      }
      goto L_08989BD8;
    }
L_08989BD8:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08989BF4;
    }
    goto L_08989BEC;
L_08989BEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08989BF8;
      }
      goto L_08989BF4;
    }
L_08989BF4:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    goto L_08989BF8;
L_08989BF8:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08989C28;
      }
      goto L_08989C04;
    }
L_08989C04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(328));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (0u | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x08989C28u);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989C28u) goto L_08989C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989C28:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08989BB8;
      }
      goto L_08989C3C;
    }
L_08989C3C:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08989C58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16151)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16151), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08989C88;
      }
      goto L_08989C80;
    }
L_08989C80:
    aot_gpr_31 = (0x08989C88u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989C88u) goto L_08989C88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989C88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989CBC;
      }
      goto L_08989C94;
    }
L_08989C94:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08989CA0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 419u, 0x08989CA0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989CA0u) goto L_08989CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989CA0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08989CB8;
      }
      goto L_08989CAC;
    }
L_08989CAC:
    aot_gpr_31 = (0x08989CB4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989CB4u) goto L_08989CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989CB4:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08989CB8;
L_08989CB8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08989CBC;
L_08989CBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08989CC8u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 424u, 0x08989CC8u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989CC8u) goto L_08989CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989CC8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08989CE0u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 425u, 0x08989CE0u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989CE0u) goto L_08989CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989CE0:
    aot_gpr_4 = (16u << 16u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16151)));
    ctx.gpr[16] = (0u | 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    goto L_08989CF4;
L_08989CF4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-24276)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08989D0C;
      }
      goto L_08989D04;
    }
L_08989D04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08989D10;
      }
      goto L_08989D0C;
    }
L_08989D0C:
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    goto L_08989D10;
L_08989D10:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08989CF4;
      }
      goto L_08989D20;
    }
L_08989D20:
    aot_gpr_31 = (0x08989D28u);
    goto L_08988D64;
L_08989D28:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08989D54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08989D80;
    }
    goto L_08989D74;
L_08989D74:
    aot_gpr_31 = (0x08989D7Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989D7Cu) goto L_08989D7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989D7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08989D80;
L_08989D80:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989DB0;
      }
      goto L_08989D88;
    }
L_08989D88:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08989D94u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 437u, 0x08989D94u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989D94u) goto L_08989D94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989D94:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08989DAC;
      }
      goto L_08989DA0;
    }
L_08989DA0:
    aot_gpr_31 = (0x08989DA8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989DA8u) goto L_08989DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989DA8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08989DAC;
L_08989DAC:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08989DB0;
L_08989DB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08989DBCu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 442u, 0x08989DBCu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989DBCu) goto L_08989DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989DBC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08989DD4u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 443u, 0x08989DD4u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989DD4u) goto L_08989DD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989DD4:
    aot_gpr_4 = (0u | 4u);
    ctx.gpr[16] = (0u | 16u);
    goto L_08989DDC;
L_08989DDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-24276)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[16]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08989DDC;
      }
      goto L_08989E04;
    }
L_08989E04:
    aot_gpr_31 = (0x08989E0Cu);
    goto L_08988D64;
L_08989E0C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08989E38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08989E64;
    }
    goto L_08989E58;
L_08989E58:
    aot_gpr_31 = (0x08989E60u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989E60u) goto L_08989E60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989E60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08989E64;
L_08989E64:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989E94;
      }
      goto L_08989E6C;
    }
L_08989E6C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08989E78u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 452u, 0x08989E78u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989E78u) goto L_08989E78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989E78:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08989E90;
      }
      goto L_08989E84;
    }
L_08989E84:
    aot_gpr_31 = (0x08989E8Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989E8Cu) goto L_08989E8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989E8C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08989E90;
L_08989E90:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08989E94;
L_08989E94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08989EA0u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 457u, 0x08989EA0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989EA0u) goto L_08989EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989EA0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08989EBCu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 458u, 0x08989EBCu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989EBCu) goto L_08989EBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989EBC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-11828)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-11828), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08989EF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08989F1C;
    }
    goto L_08989F10;
L_08989F10:
    aot_gpr_31 = (0x08989F18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989F18u) goto L_08989F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989F18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08989F1C;
L_08989F1C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989F4C;
      }
      goto L_08989F24;
    }
L_08989F24:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08989F30u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 464u, 0x08989F30u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989F30u) goto L_08989F30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989F30:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08989F48;
      }
      goto L_08989F3C;
    }
L_08989F3C:
    aot_gpr_31 = (0x08989F44u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989F44u) goto L_08989F44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989F44:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08989F48;
L_08989F48:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08989F4C;
L_08989F4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08989F58u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 469u, 0x08989F58u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989F58u) goto L_08989F58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989F58:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08989F70u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 470u, 0x08989F70u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989F70u) goto L_08989F70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08989F70:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7672)));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08989F9C;
      }
      goto L_08989F8C;
    }
L_08989F8C:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08989F9C;
L_08989F9C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08989FC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_08989FF4;
    }
    goto L_08989FE8;
L_08989FE8:
    aot_gpr_31 = (0x08989FF0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08989FF0u) goto L_08989FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08989FF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_08989FF4;
L_08989FF4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A024;
      }
      goto L_08989FFC;
    }
L_08989FFC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898A008u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 478u, 0x0898A008u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A008u) goto L_0898A008;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A008:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898A020;
      }
      goto L_0898A014;
    }
L_0898A014:
    aot_gpr_31 = (0x0898A01Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A01Cu) goto L_0898A01C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A01C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A020;
L_0898A020:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A024;
L_0898A024:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898A030u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 483u, 0x0898A030u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A030u) goto L_0898A030;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A030:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898A048u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 484u, 0x0898A048u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A048u) goto L_0898A048;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A048:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7672)));
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0898A074;
      }
      goto L_0898A064;
    }
L_0898A064:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0898A074;
L_0898A074:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898A0A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898A0CC;
    }
    goto L_0898A0C0;
L_0898A0C0:
    aot_gpr_31 = (0x0898A0C8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A0C8u) goto L_0898A0C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A0C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898A0CC;
L_0898A0CC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A0FC;
      }
      goto L_0898A0D4;
    }
L_0898A0D4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898A0E0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 492u, 0x0898A0E0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A0E0u) goto L_0898A0E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A0E0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898A0F8;
      }
      goto L_0898A0EC;
    }
L_0898A0EC:
    aot_gpr_31 = (0x0898A0F4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A0F4u) goto L_0898A0F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A0F4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A0F8;
L_0898A0F8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A0FC;
L_0898A0FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898A108u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16072));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 497u, 0x0898A108u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A108u) goto L_0898A108;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A108:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898A124u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 498u, 0x0898A124u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A124u) goto L_0898A124;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A124:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    aot_gpr_6 = (4u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-12144));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(172), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898A184:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898A1B4;
    }
    goto L_0898A1A8;
L_0898A1A8:
    aot_gpr_31 = (0x0898A1B0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A1B0u) goto L_0898A1B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A1B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898A1B4;
L_0898A1B4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A1E4;
      }
      goto L_0898A1BC;
    }
L_0898A1BC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898A1C8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 504u, 0x0898A1C8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A1C8u) goto L_0898A1C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A1C8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898A1E0;
      }
      goto L_0898A1D4;
    }
L_0898A1D4:
    aot_gpr_31 = (0x0898A1DCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A1DCu) goto L_0898A1DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A1DC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A1E0;
L_0898A1E0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A1E4;
L_0898A1E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898A1F0u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16064));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 509u, 0x0898A1F0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A1F0u) goto L_0898A1F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A1F0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898A20Cu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 510u, 0x0898A20Cu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A20Cu) goto L_0898A20C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A20C:
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(337)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0898A224u);
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A224u) goto L_0898A224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A224:
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898A254:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898A280;
    }
    goto L_0898A274;
L_0898A274:
    aot_gpr_31 = (0x0898A27Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A27Cu) goto L_0898A27C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A27C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898A280;
L_0898A280:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A2B0;
      }
      goto L_0898A288;
    }
L_0898A288:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0898A294u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 517u, 0x0898A294u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A294u) goto L_0898A294;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A294:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0898A2AC;
      }
      goto L_0898A2A0;
    }
L_0898A2A0:
    aot_gpr_31 = (0x0898A2A8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A2A8u) goto L_0898A2A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A2A8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0898A2AC;
L_0898A2AC:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_0898A2B0;
L_0898A2B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898A2BCu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16056));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 522u, 0x0898A2BCu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A2BCu) goto L_0898A2BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A2BC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898A2D4u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 523u, 0x0898A2D4u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A2D4u) goto L_0898A2D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A2D4:
    aot_gpr_31 = (0x0898A2DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A2DCu) goto L_0898A2DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A2DC:
    aot_gpr_31 = (0x0898A2E4u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A2E4u) goto L_0898A2E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A2E4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2320)));
    aot_gpr_4 = (0u | 6u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 6 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_0898A2FC;
    }
    goto L_0898A2FC;
L_0898A2FC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0898A308u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 527u, 0x0898A308u, 0x0894748Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 657u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 657u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 657u, 0x0894748Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A308u) goto L_0898A308;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A308:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898A334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898A360;
    }
    goto L_0898A354;
L_0898A354:
    aot_gpr_31 = (0x0898A35Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A35Cu) goto L_0898A35C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A35C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898A360;
L_0898A360:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A390;
      }
      goto L_0898A368;
    }
L_0898A368:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898A374u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 533u, 0x0898A374u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A374u) goto L_0898A374;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A374:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898A38C;
      }
      goto L_0898A380;
    }
L_0898A380:
    aot_gpr_31 = (0x0898A388u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A388u) goto L_0898A388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A388:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A38C;
L_0898A38C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A390;
L_0898A390:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898A39Cu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16056));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 538u, 0x0898A39Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A39Cu) goto L_0898A39C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A39C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898A3B8u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 539u, 0x0898A3B8u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A3B8u) goto L_0898A3B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A3B8:
    aot_gpr_31 = (0x0898A3C0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A3C0u) goto L_0898A3C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A3C0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0898A3CCu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 541u, 0x0898A3CCu, 0x0894748Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 657u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 657u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 657u, 0x0894748Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A3CCu) goto L_0898A3CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A3CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898A3F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898A420;
    }
    goto L_0898A414;
L_0898A414:
    aot_gpr_31 = (0x0898A41Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A41Cu) goto L_0898A41C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A41C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898A420;
L_0898A420:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A450;
      }
      goto L_0898A428;
    }
L_0898A428:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898A434u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 547u, 0x0898A434u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A434u) goto L_0898A434;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A434:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898A44C;
      }
      goto L_0898A440;
    }
L_0898A440:
    aot_gpr_31 = (0x0898A448u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A448u) goto L_0898A448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A448:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A44C;
L_0898A44C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A450;
L_0898A450:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898A45Cu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16048));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 552u, 0x0898A45Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A45Cu) goto L_0898A45C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A45C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898A478u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 553u, 0x0898A478u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A478u) goto L_0898A478;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A478:
    aot_gpr_31 = (0x0898A480u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 554u, 0x0898A480u, 0x08AFB4E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFB4E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A480u) goto L_0898A480;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A480:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898A4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898A4D4;
    }
    goto L_0898A4C8;
L_0898A4C8:
    aot_gpr_31 = (0x0898A4D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A4D0u) goto L_0898A4D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A4D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898A4D4;
L_0898A4D4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A504;
      }
      goto L_0898A4DC;
    }
L_0898A4DC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898A4E8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 560u, 0x0898A4E8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A4E8u) goto L_0898A4E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A4E8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898A500;
      }
      goto L_0898A4F4;
    }
L_0898A4F4:
    aot_gpr_31 = (0x0898A4FCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A4FCu) goto L_0898A4FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A4FC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A500;
L_0898A500:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A504;
L_0898A504:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898A510u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16048));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 565u, 0x0898A510u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A510u) goto L_0898A510;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A510:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898A52Cu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 566u, 0x0898A52Cu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A52Cu) goto L_0898A52C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A52C:
    aot_gpr_31 = (0x0898A534u);
    aot_gpr_4 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 567u, 0x0898A534u, 0x08AFB4E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFB4E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A534u) goto L_0898A534;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A534:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898A55C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898A588;
    }
    goto L_0898A57C;
L_0898A57C:
    aot_gpr_31 = (0x0898A584u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A584u) goto L_0898A584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898A588;
L_0898A588:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A5B8;
      }
      goto L_0898A590;
    }
L_0898A590:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898A59Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 573u, 0x0898A59Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A59Cu) goto L_0898A59C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A59C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898A5B4;
      }
      goto L_0898A5A8;
    }
L_0898A5A8:
    aot_gpr_31 = (0x0898A5B0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A5B0u) goto L_0898A5B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A5B0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A5B4;
L_0898A5B4:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A5B8;
L_0898A5B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898A5C4u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16048));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 578u, 0x0898A5C4u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A5C4u) goto L_0898A5C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A5C4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898A5E0u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 579u, 0x0898A5E0u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A5E0u) goto L_0898A5E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A5E0:
    aot_gpr_31 = (0x0898A5E8u);
    aot_gpr_4 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 580u, 0x0898A5E8u, 0x08AFB4E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFB4E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A5E8u) goto L_0898A5E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A5E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898A610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898A63C;
    }
    goto L_0898A630;
L_0898A630:
    aot_gpr_31 = (0x0898A638u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A638u) goto L_0898A638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A638:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898A63C;
L_0898A63C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A66C;
      }
      goto L_0898A644;
    }
L_0898A644:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898A650u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 586u, 0x0898A650u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A650u) goto L_0898A650;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A650:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898A668;
      }
      goto L_0898A65C;
    }
L_0898A65C:
    aot_gpr_31 = (0x0898A664u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A664u) goto L_0898A664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A664:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A668;
L_0898A668:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A66C;
L_0898A66C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898A678u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16048));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 591u, 0x0898A678u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A678u) goto L_0898A678;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A678:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898A694u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 592u, 0x0898A694u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A694u) goto L_0898A694;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A694:
    aot_gpr_31 = (0x0898A69Cu);
    aot_gpr_4 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 593u, 0x0898A69Cu, 0x08AFB4E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFB4E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A69Cu) goto L_0898A69C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A69C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898A6C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898A6F0;
    }
    goto L_0898A6E4;
L_0898A6E4:
    aot_gpr_31 = (0x0898A6ECu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A6ECu) goto L_0898A6EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A6EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898A6F0;
L_0898A6F0:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A720;
      }
      goto L_0898A6F8;
    }
L_0898A6F8:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898A704u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 599u, 0x0898A704u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A704u) goto L_0898A704;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A704:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898A71C;
      }
      goto L_0898A710;
    }
L_0898A710:
    aot_gpr_31 = (0x0898A718u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A718u) goto L_0898A718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A718:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A71C;
L_0898A71C:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A720;
L_0898A720:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898A72Cu);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16048));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 604u, 0x0898A72Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A72Cu) goto L_0898A72C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A72C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898A748u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 605u, 0x0898A748u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A748u) goto L_0898A748;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A748:
    aot_gpr_31 = (0x0898A750u);
    aot_gpr_4 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 606u, 0x0898A750u, 0x08AFB4E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFB4E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A750u) goto L_0898A750;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A750:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898A778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898A7A4;
    }
    goto L_0898A798;
L_0898A798:
    aot_gpr_31 = (0x0898A7A0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A7A0u) goto L_0898A7A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A7A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898A7A4;
L_0898A7A4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A7D4;
      }
      goto L_0898A7AC;
    }
L_0898A7AC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898A7B8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 612u, 0x0898A7B8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A7B8u) goto L_0898A7B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A7B8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898A7D0;
      }
      goto L_0898A7C4;
    }
L_0898A7C4:
    aot_gpr_31 = (0x0898A7CCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A7CCu) goto L_0898A7CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A7CC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A7D0;
L_0898A7D0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A7D4;
L_0898A7D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898A7E0u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 617u, 0x0898A7E0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A7E0u) goto L_0898A7E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A7E0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898A7FCu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 618u, 0x0898A7FCu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A7FCu) goto L_0898A7FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A7FC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(4180)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(4180), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898A830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898A85C;
    }
    goto L_0898A850;
L_0898A850:
    aot_gpr_31 = (0x0898A858u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A858u) goto L_0898A858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A858:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898A85C;
L_0898A85C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A88C;
      }
      goto L_0898A864;
    }
L_0898A864:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898A870u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 624u, 0x0898A870u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A870u) goto L_0898A870;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A870:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898A888;
      }
      goto L_0898A87C;
    }
L_0898A87C:
    aot_gpr_31 = (0x0898A884u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A884u) goto L_0898A884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A884:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A888;
L_0898A888:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A88C;
L_0898A88C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898A898u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 629u, 0x0898A898u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A898u) goto L_0898A898;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A898:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898A8B4u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 630u, 0x0898A8B4u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A8B4u) goto L_0898A8B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A8B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(1778)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(1778), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898A8E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898A914;
    }
    goto L_0898A908;
L_0898A908:
    aot_gpr_31 = (0x0898A910u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A910u) goto L_0898A910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A910:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898A914;
L_0898A914:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A944;
      }
      goto L_0898A91C;
    }
L_0898A91C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898A928u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 636u, 0x0898A928u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A928u) goto L_0898A928;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A928:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898A940;
      }
      goto L_0898A934;
    }
L_0898A934:
    aot_gpr_31 = (0x0898A93Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A93Cu) goto L_0898A93C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A93C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A940;
L_0898A940:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A944;
L_0898A944:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898A950u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 641u, 0x0898A950u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A950u) goto L_0898A950;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A950:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898A96Cu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 642u, 0x0898A96Cu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A96Cu) goto L_0898A96C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A96C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-9200)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-9200), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898A9A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898A9CC;
    }
    goto L_0898A9C0;
L_0898A9C0:
    aot_gpr_31 = (0x0898A9C8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A9C8u) goto L_0898A9C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A9C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898A9CC;
L_0898A9CC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A9FC;
      }
      goto L_0898A9D4;
    }
L_0898A9D4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898A9E0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 648u, 0x0898A9E0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A9E0u) goto L_0898A9E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898A9E0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898A9F8;
      }
      goto L_0898A9EC;
    }
L_0898A9EC:
    aot_gpr_31 = (0x0898A9F4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898A9F4u) goto L_0898A9F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898A9F4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A9F8;
L_0898A9F8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A9FC;
L_0898A9FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898AA08u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 653u, 0x0898AA08u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AA08u) goto L_0898AA08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AA08:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898AA24u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 654u, 0x0898AA24u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AA24u) goto L_0898AA24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AA24:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-9199)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-9199), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898AA58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898AA84;
    }
    goto L_0898AA78;
L_0898AA78:
    aot_gpr_31 = (0x0898AA80u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AA80u) goto L_0898AA80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AA80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898AA84;
L_0898AA84:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898AAB4;
      }
      goto L_0898AA8C;
    }
L_0898AA8C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898AA98u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 660u, 0x0898AA98u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AA98u) goto L_0898AA98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AA98:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898AAB0;
      }
      goto L_0898AAA4;
    }
L_0898AAA4:
    aot_gpr_31 = (0x0898AAACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AAACu) goto L_0898AAAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AAAC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898AAB0;
L_0898AAB0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898AAB4;
L_0898AAB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898AAC0u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 665u, 0x0898AAC0u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AAC0u) goto L_0898AAC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AAC0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898AADCu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 666u, 0x0898AADCu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AADCu) goto L_0898AADC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AADC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-9198)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-9198), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898AB10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898AB3C;
    }
    goto L_0898AB30;
L_0898AB30:
    aot_gpr_31 = (0x0898AB38u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AB38u) goto L_0898AB38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AB38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898AB3C;
L_0898AB3C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898AB6C;
      }
      goto L_0898AB44;
    }
L_0898AB44:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898AB50u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 672u, 0x0898AB50u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AB50u) goto L_0898AB50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AB50:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898AB68;
      }
      goto L_0898AB5C;
    }
L_0898AB5C:
    aot_gpr_31 = (0x0898AB64u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AB64u) goto L_0898AB64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AB64:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898AB68;
L_0898AB68:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898AB6C;
L_0898AB6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898AB78u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 677u, 0x0898AB78u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AB78u) goto L_0898AB78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AB78:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898AB94u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 678u, 0x0898AB94u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AB94u) goto L_0898AB94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AB94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-9197)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-9197), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898ABC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898ABF4;
    }
    goto L_0898ABE8;
L_0898ABE8:
    aot_gpr_31 = (0x0898ABF0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ABF0u) goto L_0898ABF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ABF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898ABF4;
L_0898ABF4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898AC24;
      }
      goto L_0898ABFC;
    }
L_0898ABFC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898AC08u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 684u, 0x0898AC08u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AC08u) goto L_0898AC08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AC08:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898AC20;
      }
      goto L_0898AC14;
    }
L_0898AC14:
    aot_gpr_31 = (0x0898AC1Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AC1Cu) goto L_0898AC1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AC1C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898AC20;
L_0898AC20:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898AC24;
L_0898AC24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898AC30u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 689u, 0x0898AC30u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AC30u) goto L_0898AC30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AC30:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898AC4Cu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 690u, 0x0898AC4Cu, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AC4Cu) goto L_0898AC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AC4C:
    aot_gpr_31 = (0x0898AC54u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AC54u) goto L_0898AC54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AC54:
    ctx.gpr[10] = (17530u << 16u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[10]);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x0898AC78u);
    ctx.gpr[9] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0057.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 692u, 0x0898AC78u, 0x088EB674u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0057_entry(rt, ctx, 692u, aot_mem);
#else
        recomp_unit_0057_entry(rt, ctx, 692u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AC78u) goto L_0898AC78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AC78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898ACA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898ACCC;
    }
    goto L_0898ACC0;
L_0898ACC0:
    aot_gpr_31 = (0x0898ACC8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ACC8u) goto L_0898ACC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ACC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898ACCC;
L_0898ACCC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898ACFC;
      }
      goto L_0898ACD4;
    }
L_0898ACD4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898ACE0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 698u, 0x0898ACE0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ACE0u) goto L_0898ACE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898ACE0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898ACF8;
      }
      goto L_0898ACEC;
    }
L_0898ACEC:
    aot_gpr_31 = (0x0898ACF4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ACF4u) goto L_0898ACF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ACF4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898ACF8;
L_0898ACF8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898ACFC;
L_0898ACFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898AD08u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 703u, 0x0898AD08u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AD08u) goto L_0898AD08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AD08:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898AD24u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 704u, 0x0898AD24u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AD24u) goto L_0898AD24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AD24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-8160), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898AD50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898AD7C;
    }
    goto L_0898AD70;
L_0898AD70:
    aot_gpr_31 = (0x0898AD78u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AD78u) goto L_0898AD78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AD78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898AD7C;
L_0898AD7C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898ADAC;
      }
      goto L_0898AD84;
    }
L_0898AD84:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898AD90u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 710u, 0x0898AD90u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AD90u) goto L_0898AD90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AD90:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898ADA8;
      }
      goto L_0898AD9C;
    }
L_0898AD9C:
    aot_gpr_31 = (0x0898ADA4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ADA4u) goto L_0898ADA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898ADA4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898ADA8;
L_0898ADA8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898ADAC;
L_0898ADAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898ADB8u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 715u, 0x0898ADB8u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ADB8u) goto L_0898ADB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898ADB8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898ADD4u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 716u, 0x0898ADD4u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898ADD4u) goto L_0898ADD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898ADD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(5480), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898AE00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898AE2C;
    }
    goto L_0898AE20;
L_0898AE20:
    aot_gpr_31 = (0x0898AE28u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AE28u) goto L_0898AE28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AE28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898AE2C;
L_0898AE2C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898AE5C;
      }
      goto L_0898AE34;
    }
L_0898AE34:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898AE40u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 722u, 0x0898AE40u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AE40u) goto L_0898AE40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AE40:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898AE58;
      }
      goto L_0898AE4C;
    }
L_0898AE4C:
    aot_gpr_31 = (0x0898AE54u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AE54u) goto L_0898AE54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AE54:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898AE58;
L_0898AE58:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898AE5C;
L_0898AE5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898AE68u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 727u, 0x0898AE68u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AE68u) goto L_0898AE68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AE68:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898AE84u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 728u, 0x0898AE84u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AE84u) goto L_0898AE84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AE84:
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-3212), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-3211), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898AEB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[7]{std::bit_cast<std::uint32_t>(aot_fpr_20), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_31 = (0x0898AEDCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 730u, 0x0898AEDCu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AEDCu) goto L_0898AEDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AEDC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898B04C;
      }
      goto L_0898AEE4;
    }
L_0898AEE4:
    aot_gpr_31 = (0x0898AEECu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 732u, 0x0898AEECu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AEECu) goto L_0898AEEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AEEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (0u | 6u);
      if (branch_taken) {
          goto L_0898AF0C;
      }
      goto L_0898AEF8;
    }
L_0898AEF8:
    aot_gpr_31 = (0x0898AF00u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 734u, 0x0898AF00u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AF00u) goto L_0898AF00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AF00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
      if (branch_taken) {
          goto L_0898B04C;
      }
      goto L_0898AF0C;
    }
L_0898AF0C:
    aot_gpr_31 = (0x0898AF14u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 736u, 0x0898AF14u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AF14u) goto L_0898AF14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AF14:
    aot_gpr_31 = (0x0898AF1Cu);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 737u, 0x0898AF1Cu, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AF1Cu) goto L_0898AF1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AF1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0898AF54;
      }
      goto L_0898AF28;
    }
L_0898AF28:
    aot_gpr_31 = (0x0898AF30u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AF30u) goto L_0898AF30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AF30:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898AF54;
      }
      goto L_0898AF38;
    }
L_0898AF38:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898AF44u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AF44u) goto L_0898AF44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AF44:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x0898AF54u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0178.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 742u, 0x0898AF54u, 0x08ACD698u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0178_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0178_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AF54u) goto L_0898AF54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AF54:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (16576u << 16u);
    aot_gpr_31 = (0x0898AF70u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AF70u) goto L_0898AF70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AF70:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x0898AFA0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0037.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 744u, 0x0898AFA0u, 0x0889ACD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0037_entry(rt, ctx, 487u, aot_mem);
#else
        recomp_unit_0037_entry(rt, ctx, 487u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AFA0u) goto L_0898AFA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AFA0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_0898B04C;
      }
      goto L_0898AFAC;
    }
L_0898AFAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0898B04C;
      }
      goto L_0898AFBC;
    }
L_0898AFBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898AFD4;
    }
    goto L_0898AFC8;
L_0898AFC8:
    aot_gpr_31 = (0x0898AFD0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AFD0u) goto L_0898AFD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AFD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898AFD4;
L_0898AFD4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898B004;
      }
      goto L_0898AFDC;
    }
L_0898AFDC:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x0898AFE8u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 751u, 0x0898AFE8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AFE8u) goto L_0898AFE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898AFE8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0898B000;
      }
      goto L_0898AFF4;
    }
L_0898AFF4:
    aot_gpr_31 = (0x0898AFFCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898AFFCu) goto L_0898AFFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898AFFC:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0898B000;
L_0898B000:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_0898B004;
L_0898B004:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898B010u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 756u, 0x0898B010u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B010u) goto L_0898B010;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B010:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898B028u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 757u, 0x0898B028u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B028u) goto L_0898B028;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B028:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 17u);
    aot_gpr_31 = (0x0898B038u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0178.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 758u, 0x0898B038u, 0x08ACD698u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0178_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0178_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B038u) goto L_0898B038;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B038:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    goto L_0898B04C;
L_0898B04C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
        goto L_0898B09C;
    }
    goto L_0898B090;
L_0898B090:
    aot_gpr_31 = (0x0898B098u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B098u) goto L_0898B098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B098:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    goto L_0898B09C;
L_0898B09C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898B0CC;
      }
      goto L_0898B0A4;
    }
L_0898B0A4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0898B0B0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 765u, 0x0898B0B0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B0B0u) goto L_0898B0B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B0B0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0898B0C8;
      }
      goto L_0898B0BC;
    }
L_0898B0BC:
    aot_gpr_31 = (0x0898B0C4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B0C4u) goto L_0898B0C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B0C4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898B0C8;
L_0898B0C8:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898B0CC;
L_0898B0CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x0898B0D8u);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16104));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 770u, 0x0898B0D8u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B0D8u) goto L_0898B0D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B0D8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0898B0F4u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 771u, 0x0898B0F4u, 0x089BB028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 646u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 646u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B0F4u) goto L_0898B0F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B0F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-20331), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9288), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B120:
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    goto L_0898B128;
L_0898B128:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_0898B158;
      }
      goto L_0898B130;
    }
L_0898B130:
    ctx.gpr[8] = (ctx.gpr[7] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] + aot_gpr_4);
      if (branch_taken) {
          goto L_0898B2B8;
      }
      goto L_0898B13C;
    }
L_0898B13C:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5056)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    jump_target = ctx.gpr[1];
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B158:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B160;
    }
L_0898B160:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_0898B17C;
      }
      goto L_0898B16C;
    }
L_0898B16C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0898B170;
L_0898B170:
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0898B128;
      }
      goto L_0898B17C;
    }
L_0898B17C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B184;
    }
L_0898B184:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_0898B198;
      }
      goto L_0898B190;
    }
L_0898B190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B198;
    }
L_0898B198:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B1A0;
    }
L_0898B1A0:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_0898B1B4;
      }
      goto L_0898B1AC;
    }
L_0898B1AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B1B4;
    }
L_0898B1B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B1BC;
    }
L_0898B1BC:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_0898B1D0;
      }
      goto L_0898B1C8;
    }
L_0898B1C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B1D0;
    }
L_0898B1D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B1D8;
    }
L_0898B1D8:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-7));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_0898B1EC;
      }
      goto L_0898B1E4;
    }
L_0898B1E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B1EC;
    }
L_0898B1EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B1F4;
    }
L_0898B1F4:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_0898B208;
      }
      goto L_0898B200;
    }
L_0898B200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B208;
    }
L_0898B208:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B210;
    }
L_0898B210:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_0898B224;
      }
      goto L_0898B21C;
    }
L_0898B21C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B224;
    }
L_0898B224:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B22C;
    }
L_0898B22C:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-11));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_0898B240;
      }
      goto L_0898B238;
    }
L_0898B238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B240;
    }
L_0898B240:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B248;
    }
L_0898B248:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-7));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_0898B25C;
      }
      goto L_0898B254;
    }
L_0898B254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B25C;
    }
L_0898B25C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B264;
    }
L_0898B264:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-9));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_0898B278;
      }
      goto L_0898B270;
    }
L_0898B270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B278;
    }
L_0898B278:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B280;
    }
L_0898B280:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_0898B294;
      }
      goto L_0898B28C;
    }
L_0898B28C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B294;
    }
L_0898B294:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B29C;
    }
L_0898B29C:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_0898B2B0;
      }
      goto L_0898B2A8;
    }
L_0898B2A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B2B0;
    }
L_0898B2B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B2B8;
    }
L_0898B2B8:
    aot_gpr_2 = (0u | 1u);
    goto L_0898B2BC;
L_0898B2BC:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B2C4:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(0u));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898B340u);
    aot_gpr_5 = (0u | 1u);
    goto L_0898BA34;
L_0898B340:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5900)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (2238u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6640));
      if (branch_taken) {
          goto L_0898B384;
      }
      goto L_0898B37C;
    }
L_0898B37C:
    aot_gpr_31 = (0x0898B384u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 821u, 0x0898B384u, 0x08B6833Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 46u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 46u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B384u) goto L_0898B384;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B384:
    aot_gpr_31 = (0x0898B38Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(5900)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 822u, 0x0898B38Cu, 0x0889E57Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 541u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 541u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 541u, 0x0889E57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B38Cu) goto L_0898B38C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B38C:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 2u);
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    goto L_0898B39C;
L_0898B39C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0898B3A8u);
    aot_gpr_5 = (0u | 1u);
    goto L_0898BA34;
L_0898B3A8:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16128), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
      if (branch_taken) {
          goto L_0898B39C;
      }
      goto L_0898B3C4;
    }
L_0898B3C4:
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(9287), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(9286), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(9285), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16132), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16131), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (16128u << 16u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x0898B3F0u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    goto L_0898B428;
L_0898B3F0:
    aot_gpr_5 = (16262u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 | 26214u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x0898B408u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    goto L_0898B428;
L_0898B408:
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B428:
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_2 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6640));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_2 + aot_gpr_4);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898B458u);
    aot_gpr_4 = (0u | 0u);
    goto L_0898B428;
L_0898B458:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0898B464u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 831u, 0x0898B464u, 0x0898E288u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 761u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 761u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 761u, 0x0898E288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B464u) goto L_0898B464;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B464:
    aot_gpr_31 = (0x0898B46Cu);
    aot_gpr_4 = (0u | 1u);
    goto L_0898B428;
L_0898B46C:
    aot_gpr_31 = (0x0898B474u);
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2));
    goto L_0898B2C4;
L_0898B474:
    aot_gpr_31 = (0x0898B47Cu);
    aot_gpr_4 = (0u | 1u);
    goto L_0898B428;
L_0898B47C:
    aot_gpr_31 = (0x0898B484u);
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(52));
    goto L_0898B2C4;
L_0898B484:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B490:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898B4A0u);
    aot_gpr_4 = (0u | 0u);
    goto L_0898B428;
L_0898B4A0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0898B4ACu);
    aot_gpr_5 = (0u | 0u);
    goto L_0898B854;
L_0898B4AC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B4B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898B4C8u);
    goto L_0898B448;
L_0898B4C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(9287)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898B4E4;
      }
      goto L_0898B4D4;
    }
L_0898B4D4:
    aot_gpr_31 = (0x0898B4DCu);
    aot_gpr_4 = (0u | 0u);
    goto L_0898B428;
L_0898B4DC:
    aot_mem.aot_direct_store16(aot_gpr_2 + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(9287), static_cast<std::uint8_t>(0u));
    goto L_0898B4E4;
L_0898B4E4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B4F0:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B4F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2052)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(48), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898B530;
      }
      goto L_0898B51C;
    }
L_0898B51C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(9285)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-1036)));
        goto L_0898B538;
    }
    goto L_0898B528;
L_0898B528:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898B69C;
      }
      goto L_0898B530;
    }
L_0898B530:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898B7C4;
      }
      goto L_0898B538;
    }
L_0898B538:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898B69C;
      }
      goto L_0898B540;
    }
L_0898B540:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7688)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_0898B568;
      }
      goto L_0898B550;
    }
L_0898B550:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x0898B560u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 852u, 0x0898B560u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B560u) goto L_0898B560;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B560:
    aot_gpr_31 = (0x0898B568u);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-16124));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B568u) goto L_0898B568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B568:
    aot_gpr_31 = (0x0898B570u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 854u, 0x0898B570u, 0x0882E9B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 611u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 611u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B570u) goto L_0898B570;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B570:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898B69C;
      }
      goto L_0898B578;
    }
L_0898B578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-8740)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-20));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (16800u << 16u);
    aot_gpr_4 = (17172u << 16u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_4 = (aot_gpr_4 | 37450u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = ctx.fpr[15] - aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17184u << 16u);
    aot_gpr_31 = (0x0898B5BCu);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B5BCu) goto L_0898B5BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B5BC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (0u | 50u);
    aot_gpr_6 = (0u | 50u);
    ctx.gpr[7] = (0u | 50u);
    aot_gpr_31 = (0x0898B5D8u);
    ctx.gpr[8] = (0u | 210u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B5D8u) goto L_0898B5D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B5D8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0898B5E8u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 858u, 0x0898B5E8u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B5E8u) goto L_0898B5E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B5E8:
    aot_gpr_31 = (0x0898B5F0u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B5F0u) goto L_0898B5F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B5F0:
    aot_gpr_31 = (0x0898B5F8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B5F8u) goto L_0898B5F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B5F8:
    aot_gpr_31 = (0x0898B600u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B600u) goto L_0898B600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B600:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (0u | 200u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x0898B620u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B620u) goto L_0898B620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B620:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16040));
      if (branch_taken) {
          goto L_0898B658;
      }
      goto L_0898B62C;
    }
L_0898B62C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0898B638u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 864u, 0x0898B638u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B638u) goto L_0898B638;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B638:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0898B650;
      }
      goto L_0898B644;
    }
L_0898B644:
    aot_gpr_31 = (0x0898B64Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B64Cu) goto L_0898B64C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B64C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0898B650;
L_0898B650:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16040));
    goto L_0898B658;
L_0898B658:
    aot_gpr_31 = (0x0898B660u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 869u, 0x0898B660u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B660u) goto L_0898B660;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B660:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-8744)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-8740)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[7] >> 31u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-40));
    aot_gpr_31 = (0x0898B694u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B694u) goto L_0898B694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B694:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898B7C4;
      }
      goto L_0898B69C;
    }
L_0898B69C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(9287)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898B7C4;
      }
      goto L_0898B6A8;
    }
L_0898B6A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-8740)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-20));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (17172u << 16u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_5 = (aot_gpr_5 | 37450u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16800u << 16u);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17184u << 16u);
    aot_gpr_31 = (0x0898B6ECu);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B6ECu) goto L_0898B6EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B6EC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (0u | 50u);
    aot_gpr_6 = (0u | 50u);
    ctx.gpr[7] = (0u | 50u);
    aot_gpr_31 = (0x0898B708u);
    ctx.gpr[8] = (0u | 210u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B708u) goto L_0898B708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B708:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0898B718u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 875u, 0x0898B718u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B718u) goto L_0898B718;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B718:
    aot_gpr_31 = (0x0898B720u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B720u) goto L_0898B720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B720:
    aot_gpr_31 = (0x0898B728u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B728u) goto L_0898B728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B728:
    aot_gpr_31 = (0x0898B730u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B730u) goto L_0898B730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B730:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (0u | 200u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x0898B750u);
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_28, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B750u) goto L_0898B750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B750:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16032));
      if (branch_taken) {
          goto L_0898B788;
      }
      goto L_0898B75C;
    }
L_0898B75C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x0898B768u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 881u, 0x0898B768u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B768u) goto L_0898B768;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B768:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0898B780;
      }
      goto L_0898B774;
    }
L_0898B774:
    aot_gpr_31 = (0x0898B77Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B77Cu) goto L_0898B77C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B77C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0898B780;
L_0898B780:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(-16032));
    goto L_0898B788;
L_0898B788:
    aot_gpr_31 = (0x0898B790u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 886u, 0x0898B790u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B790u) goto L_0898B790;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B790:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-8744)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-8740)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[7] >> 31u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-40));
    aot_gpr_31 = (0x0898B7C4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_28, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B7C4u) goto L_0898B7C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898B7C4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(48), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B7D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0898B7E8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 889u, 0x0898B7E8u, 0x08AFB4F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 475u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 475u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 475u, 0x08AFB4F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B7E8u) goto L_0898B7E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B7E8:
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(4180), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-11828), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(1776), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(1777), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(1778), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(1779), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(1780), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(1781), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(1782), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(1783), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(1784), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(1785), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-3212), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-3211), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(5480), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-8160), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(9292), 0u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-20332), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-20329), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-20331), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-20330), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898B854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0898B880;
      }
      goto L_0898B86C;
    }
L_0898B86C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898B888;
      }
      goto L_0898B878;
    }
L_0898B878:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898B89C;
      }
      goto L_0898B880;
    }
L_0898B880:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898BA24;
      }
      goto L_0898B888;
    }
L_0898B888:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898B89C;
      }
      goto L_0898B894;
    }
L_0898B894:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0898B89C;
L_0898B89C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898B8B0;
      }
      goto L_0898B8A4;
    }
L_0898B8A4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898B8B0u);
    aot_gpr_5 = (0u | 84u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 898u, 0x0898B8B0u, 0x0898EBBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 915u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 915u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B8B0u) goto L_0898B8B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B8B0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898B8CC;
      }
      goto L_0898B8BC;
    }
L_0898B8BC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898B8D0;
      }
      goto L_0898B8C8;
    }
L_0898B8C8:
    aot_gpr_4 = (0u | 1u);
    goto L_0898B8CC;
L_0898B8CC:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0898B8D0;
L_0898B8D0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898B8E4;
      }
      goto L_0898B8D8;
    }
L_0898B8D8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898B8E4u);
    aot_gpr_5 = (0u | 67u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 904u, 0x0898B8E4u, 0x0898EBBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 915u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 915u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B8E4u) goto L_0898B8E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B8E4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898B900;
      }
      goto L_0898B8F0;
    }
L_0898B8F0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898B904;
      }
      goto L_0898B8FC;
    }
L_0898B8FC:
    aot_gpr_4 = (0u | 1u);
    goto L_0898B900;
L_0898B900:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0898B904;
L_0898B904:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898B918;
      }
      goto L_0898B90C;
    }
L_0898B90C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898B918u);
    aot_gpr_5 = (0u | 88u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 910u, 0x0898B918u, 0x0898EBBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 915u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 915u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B918u) goto L_0898B918;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B918:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898B934;
      }
      goto L_0898B924;
    }
L_0898B924:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898B938;
      }
      goto L_0898B930;
    }
L_0898B930:
    aot_gpr_4 = (0u | 1u);
    goto L_0898B934;
L_0898B934:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0898B938;
L_0898B938:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898B94C;
      }
      goto L_0898B940;
    }
L_0898B940:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898B94Cu);
    aot_gpr_5 = (0u | 83u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 916u, 0x0898B94Cu, 0x0898EBBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 915u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 915u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B94Cu) goto L_0898B94C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B94C:
    aot_gpr_31 = (0x0898B954u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0898BCCC;
L_0898B954:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898B968;
      }
      goto L_0898B95C;
    }
L_0898B95C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898B968u);
    aot_gpr_5 = (0u | 85u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 919u, 0x0898B968u, 0x0898EBBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 915u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 915u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B968u) goto L_0898B968;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B968:
    aot_gpr_31 = (0x0898B970u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0898BD24;
L_0898B970:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898B984;
      }
      goto L_0898B978;
    }
L_0898B978:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898B984u);
    aot_gpr_5 = (0u | 68u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 922u, 0x0898B984u, 0x0898EBBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 915u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 915u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B984u) goto L_0898B984;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B984:
    aot_gpr_31 = (0x0898B98Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0898BD7C;
L_0898B98C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898B9A0;
      }
      goto L_0898B994;
    }
L_0898B994:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898B9A0u);
    aot_gpr_5 = (0u | 76u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 925u, 0x0898B9A0u, 0x0898EBBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 915u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 915u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B9A0u) goto L_0898B9A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B9A0:
    aot_gpr_31 = (0x0898B9A8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0898BDD4;
L_0898B9A8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898B9BC;
      }
      goto L_0898B9B0;
    }
L_0898B9B0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898B9BCu);
    aot_gpr_5 = (0u | 82u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 928u, 0x0898B9BCu, 0x0898EBBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 915u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 915u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B9BCu) goto L_0898B9BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B9BC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898B9D8;
      }
      goto L_0898B9C8;
    }
L_0898B9C8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898B9DC;
      }
      goto L_0898B9D4;
    }
L_0898B9D4:
    aot_gpr_4 = (0u | 1u);
    goto L_0898B9D8;
L_0898B9D8:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0898B9DC;
L_0898B9DC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898B9F0;
      }
      goto L_0898B9E4;
    }
L_0898B9E4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898B9F0u);
    aot_gpr_5 = (0u | 49u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 934u, 0x0898B9F0u, 0x0898EBBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 915u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 915u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898B9F0u) goto L_0898B9F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898B9F0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0898BA0C;
      }
      goto L_0898B9FC;
    }
L_0898B9FC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0898BA10;
      }
      goto L_0898BA08;
    }
L_0898BA08:
    aot_gpr_4 = (0u | 1u);
    goto L_0898BA0C;
L_0898BA0C:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0898BA10;
L_0898BA10:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0898BA24;
      }
      goto L_0898BA18;
    }
L_0898BA18:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0898BA24u);
    aot_gpr_5 = (0u | 50u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 940u, 0x0898BA24u, 0x0898EBBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 915u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 915u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898BA24u) goto L_0898BA24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898BA24:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BA34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr_31 = (0x0898BA58u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    goto L_0898B2C4;
L_0898BA58:
    aot_gpr_31 = (0x0898BA60u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    goto L_0898B2C4;
L_0898BA60:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0898BA74;
L_0898BA74:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(122), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898BA74;
      }
      goto L_0898BA8C;
    }
L_0898BA8C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
      if (branch_taken) {
          goto L_0898BA98;
      }
      goto L_0898BA94;
    }
L_0898BA94:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(0u));
    goto L_0898BA98;
L_0898BA98:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 0u);
    goto L_0898BAA4;
L_0898BAA4:
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(158), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0898BAA4;
      }
      goto L_0898BAC0;
    }
L_0898BAC0:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (0u | 32u);
    goto L_0898BACC;
L_0898BACC:
    aot_gpr_6 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0898BACC;
      }
      goto L_0898BAEC;
    }
L_0898BAEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-10000));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BB24:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(184)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 - aot_gpr_2);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BB34:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(144), aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BB3C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BB44:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BB4C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898BB80;
      }
      goto L_0898BB58;
    }
L_0898BB58:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(24))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(22))))));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898BB84;
      }
      goto L_0898BB80;
    }
L_0898BB80:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    goto L_0898BB84;
L_0898BB84:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BB8C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898BBC0;
      }
      goto L_0898BB98;
    }
L_0898BB98:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(20))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(18))))));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898BBC4;
      }
      goto L_0898BBC0;
    }
L_0898BBC0:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    goto L_0898BBC4;
L_0898BBC4:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BBCC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898BC00;
      }
      goto L_0898BBD8;
    }
L_0898BBD8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(74))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(72))))));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898BC04;
      }
      goto L_0898BC00;
    }
L_0898BC00:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52))))));
    goto L_0898BC04;
L_0898BC04:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BC0C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898BC40;
      }
      goto L_0898BC18;
    }
L_0898BC18:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(70))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(68))))));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_2 = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 16u));
      if (branch_taken) {
          goto L_0898BC44;
      }
      goto L_0898BC40;
    }
L_0898BC40:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(54))))));
    goto L_0898BC44;
L_0898BC44:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BC4C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898BC60;
      }
      goto L_0898BC58;
    }
L_0898BC58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(26))))));
      if (branch_taken) {
          goto L_0898BC64;
      }
      goto L_0898BC60;
    }
L_0898BC60:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(18))))));
    goto L_0898BC64;
L_0898BC64:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BC6C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898BC80;
      }
      goto L_0898BC78;
    }
L_0898BC78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(28))))));
      if (branch_taken) {
          goto L_0898BC84;
      }
      goto L_0898BC80;
    }
L_0898BC80:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(20))))));
    goto L_0898BC84;
L_0898BC84:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BC8C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898BCA0;
      }
      goto L_0898BC98;
    }
L_0898BC98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_0898BCA4;
      }
      goto L_0898BCA0;
    }
L_0898BCA0:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(22))))));
    goto L_0898BCA4;
L_0898BCA4:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BCAC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898BCC0;
      }
      goto L_0898BCB8;
    }
L_0898BCB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_0898BCC4;
      }
      goto L_0898BCC0;
    }
L_0898BCC0:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(24))))));
    goto L_0898BCC4;
L_0898BCC4:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BCCC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898BCFC;
      }
      goto L_0898BCD8;
    }
L_0898BCD8:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(26))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898BCF4;
      }
      goto L_0898BCE4;
    }
L_0898BCE4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(76))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898BCF4;
      }
      goto L_0898BCF0;
    }
L_0898BCF0:
    aot_gpr_5 = (0u | 1u);
    goto L_0898BCF4;
L_0898BCF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898BD1C;
      }
      goto L_0898BCFC;
    }
L_0898BCFC:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898BD18;
      }
      goto L_0898BD08;
    }
L_0898BD08:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(68))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898BD18;
      }
      goto L_0898BD14;
    }
L_0898BD14:
    aot_gpr_5 = (0u | 1u);
    goto L_0898BD18;
L_0898BD18:
    aot_gpr_2 = (aot_gpr_5 & 255u);
    goto L_0898BD1C;
L_0898BD1C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BD24:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898BD54;
      }
      goto L_0898BD30;
    }
L_0898BD30:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898BD4C;
      }
      goto L_0898BD3C;
    }
L_0898BD3C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(78))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898BD4C;
      }
      goto L_0898BD48;
    }
L_0898BD48:
    aot_gpr_5 = (0u | 1u);
    goto L_0898BD4C;
L_0898BD4C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898BD74;
      }
      goto L_0898BD54;
    }
L_0898BD54:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898BD70;
      }
      goto L_0898BD60;
    }
L_0898BD60:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(70))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898BD70;
      }
      goto L_0898BD6C;
    }
L_0898BD6C:
    aot_gpr_5 = (0u | 1u);
    goto L_0898BD70;
L_0898BD70:
    aot_gpr_2 = (aot_gpr_5 & 255u);
    goto L_0898BD74;
L_0898BD74:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BD7C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898BDAC;
      }
      goto L_0898BD88;
    }
L_0898BD88:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898BDA4;
      }
      goto L_0898BD94;
    }
L_0898BD94:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898BDA4;
      }
      goto L_0898BDA0;
    }
L_0898BDA0:
    aot_gpr_5 = (0u | 1u);
    goto L_0898BDA4;
L_0898BDA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898BDCC;
      }
      goto L_0898BDAC;
    }
L_0898BDAC:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898BDC8;
      }
      goto L_0898BDB8;
    }
L_0898BDB8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(72))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898BDC8;
      }
      goto L_0898BDC4;
    }
L_0898BDC4:
    aot_gpr_5 = (0u | 1u);
    goto L_0898BDC8;
L_0898BDC8:
    aot_gpr_2 = (aot_gpr_5 & 255u);
    goto L_0898BDCC;
L_0898BDCC:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BDD4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898BE04;
      }
      goto L_0898BDE0;
    }
L_0898BDE0:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898BDFC;
      }
      goto L_0898BDEC;
    }
L_0898BDEC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(82))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898BDFC;
      }
      goto L_0898BDF8;
    }
L_0898BDF8:
    aot_gpr_5 = (0u | 1u);
    goto L_0898BDFC;
L_0898BDFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0898BE24;
      }
      goto L_0898BE04;
    }
L_0898BE04:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0898BE20;
      }
      goto L_0898BE10;
    }
L_0898BE10:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898BE20;
      }
      goto L_0898BE1C;
    }
L_0898BE1C:
    aot_gpr_5 = (0u | 1u);
    goto L_0898BE20;
L_0898BE20:
    aot_gpr_2 = (aot_gpr_5 & 255u);
    goto L_0898BE24;
L_0898BE24:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BE2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0898BE68;
      }
      goto L_0898BE50;
    }
L_0898BE50:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x0898BE60u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 1030u, 0x0898BE60u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898BE60u) goto L_0898BE60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898BE60:
    aot_gpr_31 = (0x0898BE68u);
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(-16124));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898BE68u) goto L_0898BE68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898BE68:
    aot_gpr_31 = (0x0898BE70u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 1032u, 0x0898BE70u, 0x0882E9B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 611u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 611u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898BE70u) goto L_0898BE70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898BE70:
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_0898BE88;
      }
      goto L_0898BE78;
    }
L_0898BE78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-8144)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(321) ? 1u : 0u);
      if (branch_taken) {
          goto L_0898BE98;
      }
      goto L_0898BE88;
    }
L_0898BE88:
    aot_gpr_4 = (2201u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7552));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(321) ? 1u : 0u);
    goto L_0898BE98;
L_0898BE98:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0898BEB0;
      }
      goto L_0898BEA0;
    }
L_0898BEA0:
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_4;
      if (branch_taken) {
          goto L_0898BEB0;
      }
      goto L_0898BEA8;
    }
L_0898BEA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898BEB4;
      }
      goto L_0898BEB0;
    }
L_0898BEB0:
    aot_gpr_2 = (0u | 0u);
    goto L_0898BEB4;
L_0898BEB4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BEC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898BEDCu);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 1041u, 0x0898BEDCu, 0x0898DA00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 591u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 591u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 591u, 0x0898DA00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898BEDCu) goto L_0898BEDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898BEDC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898BEF4;
      }
      goto L_0898BEE4;
    }
L_0898BEE4:
    aot_gpr_31 = (0x0898BEECu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0898BD7C;
L_0898BEEC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898BEFC;
      }
      goto L_0898BEF4;
    }
L_0898BEF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898BF00;
      }
      goto L_0898BEFC;
    }
L_0898BEFC:
    aot_gpr_2 = (0u | 0u);
    goto L_0898BF00;
L_0898BF00:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BF10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898BF24u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 1048u, 0x0898BF24u, 0x0898DA58u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 598u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 598u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 598u, 0x0898DA58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898BF24u) goto L_0898BF24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898BF24:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898BF3C;
      }
      goto L_0898BF2C;
    }
L_0898BF2C:
    aot_gpr_31 = (0x0898BF34u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0898BDD4;
L_0898BF34:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898BF44;
      }
      goto L_0898BF3C;
    }
L_0898BF3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898BF48;
      }
      goto L_0898BF44;
    }
L_0898BF44:
    aot_gpr_2 = (0u | 0u);
    goto L_0898BF48;
L_0898BF48:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BF58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898BF6Cu);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 1055u, 0x0898BF6Cu, 0x0898D950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 577u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 577u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 577u, 0x0898D950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898BF6Cu) goto L_0898BF6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898BF6C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898BF84;
      }
      goto L_0898BF74;
    }
L_0898BF74:
    aot_gpr_31 = (0x0898BF7Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0898BCCC;
L_0898BF7C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898BF8C;
      }
      goto L_0898BF84;
    }
L_0898BF84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898BF90;
      }
      goto L_0898BF8C;
    }
L_0898BF8C:
    aot_gpr_2 = (0u | 0u);
    goto L_0898BF90;
L_0898BF90:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BFA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0898BFB4u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0097->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0097_entry, 1062u, 0x0898BFB4u, 0x0898D9A8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 584u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 584u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 584u, 0x0898D9A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898BFB4u) goto L_0898BFB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0898BFB4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_0898BFCC;
      }
      goto L_0898BFBC;
    }
L_0898BFBC:
    aot_gpr_31 = (0x0898BFC4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_0898BD24;
L_0898BFC4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_0898BFD4;
      }
      goto L_0898BFCC;
    }
L_0898BFCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0898BFD8;
      }
      goto L_0898BFD4;
    }
L_0898BFD4:
    aot_gpr_2 = (0u | 0u);
    goto L_0898BFD8;
L_0898BFD8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BFE8:
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0898BFF4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(40))))));
    aot_gpr_2 = (aot_gpr_5 | aot_gpr_4);
    ctx.pc = 0x0898C000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0097(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0097_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_97(Runtime &runtime) {
    runtime.register_generated_unit(97u, 0x08988000u, 16384u, &recomp_unit_0097, &recomp_unit_0097_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08988000u, &recomp_unit_0097, "recomp_unit_0097",
                                          kEntryMasks_recomp_unit_0097, 64u);
}
} // namespace psprecomp
