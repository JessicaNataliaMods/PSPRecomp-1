#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0213[64] = {
    0xA890480B5A504555ull, 0x062A0A28A0854110ull, 0x912D4A940822290Aull, 0x842082994CA04048ull,
    0x0842108421084210ull, 0x1084210842108421ull, 0x2108421084210842ull, 0x4210842108421084ull,
    0x8421084210842108ull, 0xA8D1112992A84210ull, 0x3148503155434128ull, 0xA0941898A8955509ull,
    0x00014525A2566294ull, 0x4864C4CA30480000ull, 0x61248960A1611412ull, 0x5290512C62424522ull,
    0x29296AA20A1562AAull, 0x0109000952211002ull, 0x0D50009320052010ull, 0x8A8240202924A2D0ull,
    0x414040A492095000ull, 0x04048020DA01A020ull, 0x4415290542A21011ull, 0xA888249020CB2CB1ull,
    0x081210A803502442ull, 0x50206B0905404A81ull, 0x2108008A90209284ull, 0x0852521424218840ull,
    0x4D0D428612429421ull, 0x40800D48C924C092ull, 0x8954A84A8A0A9482ull, 0x0208CAD412154688ull,
    0x0000248500094850ull, 0x224A8051450A4000ull, 0x4042104802481283ull, 0x904A090142500186ull,
    0x81080D2440424142ull, 0x0C40800508284084ull, 0x1220C4A828828041ull, 0x0151885120849454ull,
    0x8801800408880020ull, 0x0489496010020044ull, 0x1000008001204C81ull, 0x222A088111124904ull,
    0x8454824920A20625ull, 0x4449100328801140ull, 0x2A40A0A028820009ull, 0x5014031004028400ull,
    0x112055A685400A52ull, 0x140510420A090092ull, 0x9224A0080022A414ull, 0x021520A0A0284092ull,
    0xA0D410A905050141ull, 0x48A800100A522AA0ull, 0x0020020002000600ull, 0x72A0202B21234004ull,
    0x44514750110088A9ull, 0x10088A6445201100ull, 0x5202201112489501ull, 0x451540440222A8A2ull,
    0x088A8512A0220111ull, 0x0110044514550110ull, 0x1244A8220222912Aull, 0x088A28AA02201114ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0213[64] = {
    1u, 24u, 41u, 62u, 79u, 91u, 104u, 117u, 130u, 143u, 164u, 185u, 208u, 228u, 244u, 264u,
    285u, 310u, 322u, 336u, 354u, 368u, 381u, 399u, 421u, 436u, 454u, 468u, 484u, 505u, 523u, 545u,
    565u, 576u, 591u, 605u, 621u, 636u, 648u, 664u, 682u, 691u, 704u, 713u, 729u, 748u, 762u, 776u,
    787u, 807u, 821u, 836u, 851u, 869u, 885u, 890u, 908u, 927u, 941u, 957u, 975u, 991u, 1005u, 1023u,
};

// PSPRECOMP_V813_HOT_DENSE_DISPATCH: one indexed load on the measured hot units;
// masks remain for exact registration/correctness proof.
alignas(64) static constexpr std::uint16_t kEntryIdsV813_recomp_unit_0213[4092] = {
    1u, 0u, 2u, 0u, 3u, 0u, 4u, 0u, 5u, 0u, 6u, 0u, 0u, 0u, 7u, 0u, 0u, 0u, 0u, 0u, 8u, 0u, 9u, 0u, 0u, 10u, 0u, 11u, 12u, 0u, 13u, 0u,
    14u, 15u, 0u, 16u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 17u, 0u, 0u, 18u, 0u, 0u, 0u, 0u, 0u, 19u, 0u, 0u, 20u, 0u, 0u, 0u, 21u, 0u, 22u, 0u, 23u,
    0u, 0u, 0u, 0u, 24u, 0u, 0u, 0u, 25u, 0u, 0u, 0u, 0u, 0u, 26u, 0u, 27u, 0u, 28u, 0u, 0u, 0u, 0u, 29u, 0u, 0u, 0u, 0u, 0u, 30u, 0u, 31u,
    0u, 0u, 0u, 32u, 0u, 33u, 0u, 0u, 0u, 34u, 0u, 35u, 0u, 0u, 0u, 0u, 0u, 36u, 0u, 37u, 0u, 38u, 0u, 0u, 0u, 39u, 40u, 0u, 0u, 0u, 0u, 0u,
    0u, 41u, 0u, 42u, 0u, 0u, 0u, 0u, 43u, 0u, 0u, 44u, 0u, 45u, 0u, 0u, 0u, 46u, 0u, 0u, 0u, 47u, 0u, 0u, 0u, 0u, 0u, 48u, 0u, 0u, 0u, 0u,
    0u, 0u, 49u, 0u, 50u, 0u, 0u, 51u, 0u, 52u, 0u, 53u, 0u, 0u, 54u, 0u, 55u, 0u, 56u, 57u, 0u, 58u, 0u, 0u, 59u, 0u, 0u, 0u, 60u, 0u, 0u, 61u,
    0u, 0u, 0u, 62u, 0u, 0u, 63u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 64u, 0u, 0u, 0u, 0u, 0u, 0u, 65u, 0u, 66u, 0u, 0u, 67u, 68u, 0u, 0u, 69u, 0u,
    70u, 0u, 0u, 71u, 72u, 0u, 0u, 73u, 0u, 74u, 0u, 0u, 0u, 0u, 0u, 75u, 0u, 0u, 0u, 0u, 0u, 76u, 0u, 0u, 0u, 0u, 77u, 0u, 0u, 0u, 0u, 78u,
    0u, 0u, 0u, 0u, 79u, 0u, 0u, 0u, 0u, 80u, 0u, 0u, 0u, 0u, 81u, 0u, 0u, 0u, 0u, 82u, 0u, 0u, 0u, 0u, 83u, 0u, 0u, 0u, 0u, 84u, 0u, 0u,
    0u, 0u, 85u, 0u, 0u, 0u, 0u, 86u, 0u, 0u, 0u, 0u, 87u, 0u, 0u, 0u, 0u, 88u, 0u, 0u, 0u, 0u, 89u, 0u, 0u, 0u, 0u, 90u, 0u, 0u, 0u, 0u,
    91u, 0u, 0u, 0u, 0u, 92u, 0u, 0u, 0u, 0u, 93u, 0u, 0u, 0u, 0u, 94u, 0u, 0u, 0u, 0u, 95u, 0u, 0u, 0u, 0u, 96u, 0u, 0u, 0u, 0u, 97u, 0u,
    0u, 0u, 0u, 98u, 0u, 0u, 0u, 0u, 99u, 0u, 0u, 0u, 0u, 100u, 0u, 0u, 0u, 0u, 101u, 0u, 0u, 0u, 0u, 102u, 0u, 0u, 0u, 0u, 103u, 0u, 0u, 0u,
    0u, 104u, 0u, 0u, 0u, 0u, 105u, 0u, 0u, 0u, 0u, 106u, 0u, 0u, 0u, 0u, 107u, 0u, 0u, 0u, 0u, 108u, 0u, 0u, 0u, 0u, 109u, 0u, 0u, 0u, 0u, 110u,
    0u, 0u, 0u, 0u, 111u, 0u, 0u, 0u, 0u, 112u, 0u, 0u, 0u, 0u, 113u, 0u, 0u, 0u, 0u, 114u, 0u, 0u, 0u, 0u, 115u, 0u, 0u, 0u, 0u, 116u, 0u, 0u,
    0u, 0u, 117u, 0u, 0u, 0u, 0u, 118u, 0u, 0u, 0u, 0u, 119u, 0u, 0u, 0u, 0u, 120u, 0u, 0u, 0u, 0u, 121u, 0u, 0u, 0u, 0u, 122u, 0u, 0u, 0u, 0u,
    123u, 0u, 0u, 0u, 0u, 124u, 0u, 0u, 0u, 0u, 125u, 0u, 0u, 0u, 0u, 126u, 0u, 0u, 0u, 0u, 127u, 0u, 0u, 0u, 0u, 128u, 0u, 0u, 0u, 0u, 129u, 0u,
    0u, 0u, 0u, 130u, 0u, 0u, 0u, 0u, 131u, 0u, 0u, 0u, 0u, 132u, 0u, 0u, 0u, 0u, 133u, 0u, 0u, 0u, 0u, 134u, 0u, 0u, 0u, 0u, 135u, 0u, 0u, 0u,
    0u, 136u, 0u, 0u, 0u, 0u, 137u, 0u, 0u, 0u, 0u, 138u, 0u, 0u, 0u, 0u, 139u, 0u, 0u, 0u, 0u, 140u, 0u, 0u, 0u, 0u, 141u, 0u, 0u, 0u, 0u, 142u,
    0u, 0u, 0u, 0u, 143u, 0u, 0u, 0u, 0u, 144u, 0u, 0u, 0u, 0u, 145u, 0u, 0u, 0u, 0u, 146u, 0u, 147u, 0u, 148u, 0u, 149u, 0u, 0u, 150u, 0u, 0u, 151u,
    152u, 0u, 0u, 153u, 0u, 154u, 0u, 0u, 155u, 0u, 0u, 0u, 156u, 0u, 0u, 0u, 157u, 0u, 0u, 0u, 158u, 0u, 159u, 160u, 0u, 0u, 0u, 161u, 0u, 162u, 0u, 163u,
    0u, 0u, 0u, 164u, 0u, 165u, 0u, 0u, 166u, 0u, 0u, 0u, 0u, 0u, 167u, 0u, 168u, 169u, 0u, 0u, 0u, 0u, 170u, 0u, 171u, 0u, 172u, 0u, 173u, 0u, 174u, 0u,
    175u, 0u, 0u, 0u, 176u, 177u, 0u, 0u, 0u, 0u, 0u, 0u, 178u, 0u, 179u, 0u, 0u, 0u, 0u, 180u, 0u, 0u, 181u, 0u, 182u, 0u, 0u, 0u, 183u, 184u, 0u, 0u,
    185u, 0u, 0u, 186u, 0u, 0u, 0u, 0u, 187u, 0u, 188u, 0u, 189u, 0u, 190u, 0u, 191u, 0u, 192u, 0u, 193u, 0u, 0u, 194u, 0u, 0u, 0u, 195u, 0u, 196u, 0u, 197u,
    0u, 0u, 0u, 198u, 199u, 0u, 0u, 200u, 0u, 0u, 0u, 201u, 202u, 0u, 0u, 0u, 0u, 0u, 203u, 0u, 204u, 0u, 0u, 205u, 0u, 0u, 0u, 0u, 0u, 206u, 0u, 207u,
    0u, 0u, 208u, 0u, 209u, 0u, 0u, 210u, 0u, 211u, 0u, 0u, 0u, 212u, 213u, 0u, 0u, 214u, 215u, 0u, 216u, 0u, 217u, 0u, 0u, 218u, 0u, 0u, 0u, 219u, 0u, 220u,
    221u, 0u, 222u, 0u, 0u, 223u, 0u, 0u, 224u, 0u, 225u, 0u, 0u, 0u, 226u, 0u, 227u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 228u, 0u, 0u, 229u, 0u, 0u, 0u, 0u, 0u, 230u, 231u, 0u, 0u,
    0u, 232u, 0u, 233u, 0u, 0u, 234u, 235u, 0u, 0u, 236u, 0u, 0u, 0u, 237u, 238u, 0u, 0u, 239u, 0u, 0u, 240u, 241u, 0u, 0u, 0u, 0u, 242u, 0u, 0u, 243u, 0u,
    0u, 244u, 0u, 0u, 245u, 0u, 0u, 0u, 0u, 0u, 246u, 0u, 247u, 0u, 0u, 0u, 248u, 0u, 0u, 0u, 0u, 249u, 250u, 0u, 251u, 0u, 0u, 0u, 0u, 252u, 0u, 253u,
    0u, 0u, 0u, 0u, 0u, 254u, 255u, 0u, 256u, 0u, 0u, 257u, 0u, 0u, 0u, 258u, 0u, 0u, 259u, 0u, 0u, 260u, 0u, 0u, 261u, 0u, 0u, 0u, 0u, 262u, 263u, 0u,
    0u, 264u, 0u, 0u, 0u, 265u, 0u, 0u, 266u, 0u, 267u, 0u, 0u, 0u, 268u, 0u, 0u, 269u, 0u, 0u, 0u, 0u, 270u, 0u, 0u, 271u, 0u, 0u, 0u, 272u, 273u, 0u,
    0u, 0u, 274u, 275u, 0u, 276u, 0u, 0u, 277u, 0u, 0u, 0u, 278u, 0u, 279u, 0u, 0u, 0u, 0u, 0u, 280u, 0u, 0u, 281u, 0u, 282u, 0u, 0u, 283u, 0u, 284u, 0u,
    0u, 285u, 0u, 286u, 0u, 287u, 0u, 288u, 0u, 289u, 0u, 0u, 0u, 290u, 291u, 0u, 292u, 0u, 293u, 0u, 294u, 0u, 0u, 0u, 0u, 295u, 0u, 296u, 0u, 0u, 0u, 0u,
    0u, 297u, 0u, 0u, 0u, 298u, 0u, 299u, 0u, 300u, 0u, 301u, 0u, 302u, 303u, 0u, 304u, 0u, 0u, 305u, 0u, 306u, 0u, 0u, 307u, 0u, 0u, 308u, 0u, 309u, 0u, 0u,
    0u, 310u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 311u, 0u, 0u, 0u, 312u, 0u, 0u, 0u, 0u, 313u, 0u, 0u, 0u, 314u, 0u, 0u, 315u, 0u, 316u, 0u,
    317u, 0u, 0u, 318u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 319u, 0u, 0u, 320u, 0u, 0u, 0u, 0u, 321u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 322u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 323u, 0u, 0u, 324u, 0u, 325u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 326u, 0u, 0u,
    327u, 328u, 0u, 0u, 329u, 0u, 0u, 330u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 331u, 0u, 332u, 0u, 333u, 0u, 334u, 335u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 336u, 0u, 337u, 338u, 0u, 339u, 0u, 0u, 0u, 340u, 0u, 341u, 0u, 0u, 342u, 0u, 0u, 343u, 0u, 0u, 344u, 0u, 0u, 345u, 0u, 346u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 347u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 348u, 0u, 0u, 349u, 0u, 0u, 0u, 0u, 0u, 350u, 0u, 351u, 0u, 352u, 0u, 0u, 0u, 353u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 354u, 0u, 355u, 0u, 356u, 0u, 0u, 357u, 0u, 0u, 0u, 0u, 0u, 358u, 0u, 0u, 359u, 0u, 0u, 360u,
    0u, 0u, 361u, 0u, 0u, 362u, 0u, 363u, 0u, 0u, 0u, 0u, 0u, 0u, 364u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 365u, 0u, 366u, 0u, 0u, 0u, 0u, 0u, 367u, 0u,
    0u, 0u, 0u, 0u, 0u, 368u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 369u, 0u, 370u, 371u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 372u, 0u, 373u, 374u, 0u, 375u, 376u,
    0u, 0u, 0u, 0u, 0u, 377u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 378u, 0u, 0u, 379u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 380u, 0u, 0u, 0u, 0u, 0u,
    381u, 0u, 0u, 0u, 382u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 383u, 0u, 0u, 0u, 0u, 384u, 0u, 0u, 0u, 385u, 0u, 386u, 0u, 387u, 0u, 0u, 0u, 0u, 388u, 0u,
    389u, 0u, 390u, 0u, 0u, 0u, 0u, 0u, 391u, 0u, 0u, 392u, 0u, 393u, 0u, 0u, 394u, 0u, 395u, 0u, 396u, 0u, 0u, 0u, 0u, 0u, 397u, 0u, 0u, 0u, 398u, 0u,
    399u, 0u, 0u, 0u, 400u, 401u, 0u, 402u, 0u, 0u, 403u, 404u, 0u, 405u, 0u, 0u, 406u, 407u, 0u, 408u, 0u, 0u, 409u, 410u, 0u, 0u, 0u, 0u, 0u, 411u, 0u, 0u,
    0u, 0u, 0u, 0u, 412u, 0u, 0u, 413u, 0u, 0u, 414u, 0u, 0u, 415u, 0u, 0u, 0u, 0u, 0u, 416u, 0u, 0u, 0u, 417u, 0u, 0u, 0u, 418u, 0u, 419u, 0u, 420u,
    0u, 421u, 0u, 0u, 0u, 0u, 422u, 0u, 0u, 0u, 423u, 0u, 0u, 424u, 0u, 0u, 0u, 0u, 0u, 0u, 425u, 0u, 426u, 0u, 427u, 428u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 429u, 0u, 430u, 0u, 431u, 0u, 0u, 0u, 0u, 432u, 0u, 0u, 0u, 0u, 433u, 0u, 0u, 434u, 0u, 0u, 0u, 0u, 0u, 0u, 435u, 0u, 0u, 0u, 0u,
    436u, 0u, 0u, 0u, 0u, 0u, 0u, 437u, 0u, 438u, 0u, 439u, 0u, 0u, 440u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 441u, 0u, 442u, 0u, 443u, 0u, 0u, 0u, 0u, 0u,
    444u, 0u, 0u, 445u, 0u, 0u, 0u, 0u, 446u, 447u, 0u, 448u, 0u, 449u, 450u, 0u, 0u, 0u, 0u, 0u, 0u, 451u, 0u, 0u, 0u, 0u, 0u, 0u, 452u, 0u, 453u, 0u,
    0u, 0u, 454u, 0u, 0u, 0u, 0u, 455u, 0u, 456u, 0u, 0u, 457u, 0u, 0u, 458u, 0u, 0u, 0u, 0u, 0u, 459u, 0u, 0u, 0u, 0u, 0u, 0u, 460u, 0u, 0u, 461u,
    0u, 462u, 0u, 463u, 0u, 0u, 0u, 464u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 465u, 0u, 0u, 0u, 0u, 466u, 0u, 0u, 0u, 0u, 467u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 468u, 0u, 0u, 0u, 0u, 469u, 0u, 0u, 0u, 470u, 471u, 0u, 0u, 0u, 0u, 472u, 0u, 0u, 0u, 0u, 473u, 0u, 0u, 474u, 0u, 0u,
    0u, 0u, 475u, 0u, 476u, 0u, 0u, 0u, 0u, 477u, 0u, 0u, 478u, 0u, 479u, 0u, 0u, 480u, 0u, 0u, 481u, 0u, 482u, 0u, 0u, 0u, 0u, 483u, 0u, 0u, 0u, 0u,
    484u, 0u, 0u, 0u, 0u, 485u, 0u, 0u, 0u, 0u, 486u, 0u, 487u, 0u, 0u, 488u, 0u, 489u, 0u, 0u, 0u, 0u, 490u, 0u, 0u, 491u, 0u, 0u, 492u, 0u, 0u, 0u,
    0u, 493u, 494u, 0u, 0u, 0u, 0u, 495u, 0u, 496u, 0u, 0u, 0u, 0u, 497u, 0u, 498u, 0u, 499u, 500u, 0u, 0u, 0u, 0u, 501u, 0u, 502u, 503u, 0u, 0u, 504u, 0u,
    0u, 505u, 0u, 0u, 506u, 0u, 0u, 507u, 0u, 0u, 0u, 0u, 0u, 0u, 508u, 509u, 0u, 0u, 510u, 0u, 0u, 511u, 0u, 0u, 512u, 0u, 0u, 513u, 0u, 0u, 514u, 515u,
    0u, 0u, 0u, 516u, 0u, 0u, 517u, 0u, 518u, 0u, 519u, 520u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 521u, 0u, 0u, 0u, 0u, 0u, 0u, 522u, 0u,
    0u, 523u, 0u, 0u, 0u, 0u, 0u, 524u, 0u, 0u, 525u, 0u, 526u, 0u, 0u, 527u, 0u, 528u, 0u, 529u, 0u, 0u, 0u, 0u, 0u, 530u, 0u, 531u, 0u, 0u, 0u, 532u,
    0u, 533u, 0u, 534u, 0u, 0u, 535u, 0u, 0u, 0u, 0u, 536u, 0u, 537u, 0u, 538u, 0u, 0u, 539u, 0u, 540u, 0u, 541u, 0u, 542u, 0u, 0u, 543u, 0u, 0u, 0u, 544u,
    0u, 0u, 0u, 545u, 0u, 0u, 0u, 546u, 0u, 547u, 548u, 0u, 0u, 0u, 549u, 0u, 550u, 0u, 551u, 0u, 552u, 0u, 0u, 0u, 0u, 553u, 0u, 0u, 554u, 0u, 0u, 0u,
    0u, 0u, 555u, 0u, 556u, 0u, 557u, 558u, 0u, 559u, 0u, 560u, 0u, 0u, 561u, 562u, 0u, 0u, 0u, 563u, 0u, 0u, 0u, 0u, 0u, 564u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 565u, 0u, 566u, 0u, 0u, 0u, 0u, 567u, 0u, 0u, 568u, 0u, 569u, 0u, 0u, 570u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    571u, 0u, 572u, 0u, 0u, 0u, 0u, 573u, 0u, 0u, 574u, 0u, 0u, 575u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 576u, 0u, 0u, 577u, 0u, 578u, 0u, 0u, 0u, 0u, 579u, 0u, 580u, 0u, 0u, 0u, 581u, 0u,
    582u, 0u, 0u, 0u, 583u, 0u, 584u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 585u, 0u, 586u, 0u, 587u, 0u, 0u, 588u, 0u, 0u, 589u, 0u, 0u, 0u, 590u, 0u, 0u,
    591u, 592u, 0u, 0u, 0u, 0u, 0u, 593u, 0u, 594u, 0u, 0u, 595u, 0u, 0u, 0u, 0u, 0u, 0u, 596u, 0u, 0u, 597u, 0u, 0u, 598u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 599u, 0u, 0u, 600u, 0u, 0u, 0u, 0u, 0u, 601u, 0u, 0u, 0u, 0u, 602u, 0u, 0u, 0u, 0u, 603u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 604u, 0u,
    0u, 605u, 606u, 0u, 0u, 0u, 0u, 607u, 608u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 609u, 0u, 610u, 0u, 0u, 611u, 0u, 0u, 0u, 0u, 612u, 0u,
    613u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 614u, 0u, 0u, 615u, 0u, 0u, 0u, 0u, 0u, 616u, 0u, 617u, 0u, 0u, 618u, 0u, 0u, 0u, 0u, 0u, 619u, 0u, 0u, 620u,
    0u, 621u, 0u, 0u, 0u, 0u, 622u, 0u, 623u, 0u, 0u, 0u, 0u, 0u, 624u, 0u, 0u, 625u, 0u, 0u, 0u, 0u, 626u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 627u, 0u,
    0u, 0u, 628u, 0u, 0u, 629u, 0u, 0u, 630u, 0u, 631u, 632u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 633u, 0u, 0u, 0u, 0u, 634u, 0u, 0u, 0u, 0u, 0u, 0u, 635u,
    0u, 0u, 636u, 0u, 0u, 0u, 0u, 637u, 0u, 0u, 0u, 0u, 0u, 0u, 638u, 0u, 0u, 0u, 0u, 639u, 0u, 640u, 0u, 0u, 0u, 0u, 0u, 641u, 0u, 0u, 0u, 0u,
    642u, 0u, 643u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 644u, 0u, 0u, 0u, 0u, 0u, 0u, 645u, 0u, 0u, 0u, 646u, 647u, 0u, 0u, 0u, 0u,
    648u, 0u, 0u, 0u, 0u, 0u, 649u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 650u, 0u, 651u, 0u, 0u, 0u, 0u, 0u, 652u, 0u, 0u, 0u, 653u, 0u, 654u, 0u, 0u,
    0u, 0u, 0u, 655u, 0u, 656u, 0u, 657u, 0u, 0u, 658u, 0u, 0u, 0u, 659u, 660u, 0u, 0u, 0u, 0u, 0u, 661u, 0u, 0u, 0u, 662u, 0u, 0u, 663u, 0u, 0u, 0u,
    0u, 0u, 664u, 0u, 665u, 0u, 666u, 0u, 0u, 0u, 667u, 0u, 668u, 0u, 0u, 669u, 0u, 0u, 670u, 0u, 0u, 0u, 0u, 671u, 0u, 0u, 0u, 0u, 0u, 672u, 0u, 0u,
    673u, 0u, 0u, 0u, 674u, 0u, 675u, 0u, 0u, 0u, 0u, 676u, 0u, 0u, 0u, 677u, 678u, 0u, 0u, 0u, 679u, 0u, 680u, 0u, 681u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 682u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 683u, 0u, 0u, 0u, 684u, 0u, 0u, 0u, 685u, 0u, 0u, 0u, 0u,
    0u, 0u, 686u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 687u, 688u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 689u, 0u, 0u, 0u, 690u,
    0u, 0u, 691u, 0u, 0u, 0u, 692u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 693u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 694u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 695u, 696u, 0u, 697u, 0u, 0u, 698u, 0u, 0u, 699u, 0u, 700u, 0u, 0u, 701u, 0u, 0u, 0u, 702u, 0u, 0u, 703u, 0u, 0u, 0u, 0u, 0u,
    704u, 0u, 0u, 0u, 0u, 0u, 0u, 705u, 0u, 0u, 706u, 707u, 0u, 0u, 708u, 0u, 0u, 0u, 0u, 0u, 0u, 709u, 0u, 0u, 710u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 711u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 712u, 0u, 0u, 0u,
    0u, 0u, 713u, 0u, 0u, 0u, 0u, 0u, 714u, 0u, 0u, 715u, 0u, 0u, 716u, 0u, 0u, 717u, 0u, 0u, 718u, 0u, 0u, 0u, 719u, 0u, 0u, 0u, 720u, 0u, 0u, 0u,
    721u, 0u, 0u, 0u, 0u, 0u, 0u, 722u, 0u, 0u, 0u, 723u, 0u, 0u, 0u, 0u, 0u, 724u, 0u, 725u, 0u, 726u, 0u, 0u, 0u, 727u, 0u, 0u, 0u, 728u, 0u, 0u,
    729u, 0u, 730u, 0u, 0u, 731u, 0u, 0u, 0u, 732u, 733u, 0u, 0u, 0u, 0u, 0u, 0u, 734u, 0u, 0u, 0u, 735u, 0u, 736u, 0u, 0u, 0u, 0u, 0u, 737u, 0u, 0u,
    738u, 0u, 0u, 739u, 0u, 0u, 740u, 0u, 0u, 741u, 0u, 0u, 0u, 0u, 0u, 742u, 0u, 0u, 743u, 0u, 744u, 0u, 745u, 0u, 0u, 0u, 746u, 0u, 0u, 0u, 0u, 747u,
    0u, 0u, 0u, 0u, 0u, 0u, 748u, 0u, 749u, 0u, 0u, 0u, 750u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 751u, 0u, 0u, 0u, 752u, 0u, 753u, 0u, 0u,
    754u, 755u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 756u, 0u, 0u, 0u, 757u, 0u, 0u, 758u, 0u, 0u, 759u, 0u, 0u, 0u, 760u, 0u, 0u, 0u, 761u, 0u,
    762u, 0u, 0u, 763u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 764u, 0u, 0u, 0u, 0u, 0u, 765u, 0u, 0u, 0u, 766u, 0u, 767u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 768u, 0u, 769u, 0u, 0u, 0u, 0u, 0u, 770u, 0u, 771u, 0u, 0u, 0u, 0u, 0u, 0u, 772u, 0u, 0u, 773u, 0u, 774u, 0u, 775u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 776u, 0u, 0u, 0u, 0u, 777u, 0u, 778u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 779u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 780u, 0u, 0u, 0u, 781u, 782u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 783u, 0u, 784u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 785u, 0u, 786u, 0u,
    0u, 787u, 0u, 0u, 788u, 0u, 789u, 0u, 0u, 790u, 0u, 791u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 792u, 0u, 793u, 0u, 794u, 0u, 0u, 0u, 0u, 795u,
    0u, 796u, 797u, 0u, 0u, 798u, 0u, 799u, 800u, 0u, 801u, 0u, 802u, 0u, 803u, 0u, 0u, 0u, 0u, 0u, 0u, 804u, 0u, 0u, 805u, 0u, 0u, 0u, 806u, 0u, 0u, 0u,
    0u, 807u, 0u, 0u, 808u, 0u, 0u, 809u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 810u, 0u, 0u, 811u, 0u, 0u, 0u, 0u, 0u, 812u, 0u, 813u, 0u, 0u, 0u, 0u,
    0u, 814u, 0u, 0u, 0u, 0u, 815u, 0u, 0u, 0u, 0u, 0u, 816u, 0u, 0u, 0u, 817u, 0u, 818u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 819u, 0u, 820u, 0u, 0u, 0u,
    0u, 0u, 821u, 0u, 822u, 0u, 0u, 0u, 0u, 0u, 823u, 0u, 0u, 824u, 0u, 825u, 0u, 826u, 0u, 0u, 0u, 827u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 828u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 829u, 0u, 830u, 0u, 0u, 831u, 0u, 0u, 832u, 0u, 0u, 0u, 833u, 0u, 0u, 834u, 0u, 0u, 835u,
    0u, 836u, 0u, 0u, 837u, 0u, 0u, 838u, 0u, 0u, 0u, 0u, 0u, 0u, 839u, 0u, 0u, 0u, 0u, 840u, 0u, 841u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 842u, 0u, 843u,
    0u, 0u, 0u, 0u, 0u, 844u, 0u, 845u, 0u, 0u, 0u, 0u, 0u, 846u, 0u, 0u, 847u, 0u, 848u, 0u, 849u, 0u, 0u, 0u, 0u, 850u, 0u, 0u, 0u, 0u, 0u, 0u,
    851u, 0u, 0u, 0u, 0u, 0u, 852u, 0u, 853u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 854u, 0u, 855u, 0u, 0u, 0u, 0u, 0u, 856u, 0u, 857u, 0u, 0u, 0u, 0u, 0u,
    858u, 0u, 0u, 859u, 0u, 860u, 0u, 861u, 0u, 0u, 0u, 0u, 862u, 0u, 0u, 0u, 0u, 0u, 863u, 0u, 864u, 0u, 865u, 866u, 0u, 0u, 0u, 0u, 0u, 867u, 0u, 868u,
    0u, 0u, 0u, 0u, 0u, 869u, 0u, 870u, 0u, 871u, 0u, 872u, 0u, 873u, 0u, 0u, 0u, 874u, 0u, 0u, 875u, 0u, 876u, 0u, 0u, 877u, 0u, 878u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 879u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 880u, 0u, 881u, 0u, 882u, 0u, 0u, 0u, 883u, 0u, 0u, 884u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 885u, 886u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 887u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 888u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 889u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 890u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 891u, 0u, 892u, 893u, 0u, 0u, 0u, 894u, 0u, 0u, 895u, 0u, 0u, 0u, 0u, 896u, 0u, 0u,
    897u, 898u, 0u, 899u, 0u, 900u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 901u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 902u, 0u, 903u, 0u, 904u, 0u, 0u, 905u, 906u, 907u, 0u,
    908u, 0u, 0u, 909u, 0u, 910u, 0u, 911u, 0u, 0u, 0u, 912u, 0u, 0u, 0u, 913u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 914u, 0u, 0u, 0u, 915u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 916u, 0u, 917u, 0u, 918u, 919u, 920u, 0u, 0u, 0u, 921u, 0u, 922u, 0u, 0u, 0u, 923u, 0u, 924u, 0u, 0u, 0u, 925u, 0u, 0u, 0u, 926u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 927u, 0u, 0u, 0u, 928u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 929u, 0u, 0u, 930u, 0u, 931u, 0u, 0u, 0u, 932u, 0u,
    0u, 0u, 933u, 0u, 0u, 934u, 935u, 0u, 0u, 936u, 0u, 937u, 0u, 0u, 0u, 938u, 0u, 0u, 0u, 939u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 940u, 0u, 0u, 0u,
    941u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 942u, 0u, 943u, 0u, 944u, 0u, 0u, 945u, 0u, 0u, 0u, 946u, 0u, 0u, 947u, 0u, 0u, 948u, 0u, 0u, 949u, 0u, 0u, 0u,
    950u, 0u, 0u, 0u, 951u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 952u, 0u, 0u, 0u, 953u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 954u, 0u, 0u, 955u, 0u, 956u, 0u,
    0u, 957u, 0u, 0u, 0u, 958u, 0u, 959u, 0u, 0u, 0u, 960u, 0u, 961u, 0u, 962u, 0u, 963u, 0u, 0u, 0u, 964u, 0u, 0u, 0u, 965u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 966u, 0u, 0u, 0u, 967u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 968u, 0u, 969u, 0u, 970u, 0u, 971u, 0u, 0u, 0u, 972u, 0u, 973u, 0u, 0u, 0u, 974u, 0u,
    975u, 0u, 0u, 0u, 976u, 0u, 0u, 0u, 977u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 978u, 0u, 0u, 0u, 979u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 980u, 0u, 981u,
    0u, 982u, 0u, 0u, 983u, 0u, 0u, 0u, 984u, 0u, 985u, 0u, 0u, 0u, 0u, 986u, 0u, 987u, 0u, 988u, 0u, 0u, 0u, 989u, 0u, 0u, 0u, 990u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 991u, 0u, 0u, 0u, 992u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 993u, 0u, 994u, 0u, 995u, 0u, 996u, 0u, 0u, 0u, 997u, 0u, 998u, 0u, 0u, 0u,
    999u, 0u, 1000u, 0u, 0u, 0u, 1001u, 0u, 0u, 0u, 1002u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 1003u, 0u, 0u, 0u, 1004u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 1005u, 0u, 1006u, 0u, 1007u, 0u, 0u, 1008u, 0u, 0u, 0u, 1009u, 0u, 0u, 1010u, 0u, 1011u, 0u, 0u, 0u, 1012u, 0u, 0u, 0u, 1013u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 1014u, 0u, 0u, 0u, 1015u, 0u, 0u, 0u, 0u, 0u, 1016u, 0u, 1017u, 0u, 1018u, 0u, 0u, 1019u, 0u, 0u, 0u, 1020u, 0u, 0u, 1021u, 0u, 0u, 1022u, 0u, 0u, 0u,
    0u, 0u, 1023u, 0u, 1024u, 0u, 0u, 0u, 1025u, 0u, 0u, 0u, 1026u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 1027u, 0u, 0u, 0u, 1028u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 1029u, 0u, 1030u, 0u, 1031u, 0u, 1032u, 0u, 0u, 0u, 1033u, 0u, 1034u, 0u, 0u, 0u, 1035u, 0u, 1036u, 0u, 0u, 0u, 1037u, 0u, 0u, 0u, 1038u,
};
void recomp_unit_0213_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,6,7,2 fprs= gpr_occ=4728 fpr_occ=0 gpr_total=7537 fpr_total=0
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[7] = aot_gpr_7; ctx.gpr[2] = aot_gpr_2; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_7 = ctx.gpr[7]; aot_gpr_2 = ctx.gpr[2]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B58004u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u)
            ? kEntryIdsV813_recomp_unit_0213[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B58004;
    case 2u: goto L_08B5800C;
    case 3u: goto L_08B58014;
    case 4u: goto L_08B5801C;
    case 5u: goto L_08B58024;
    case 6u: goto L_08B5802C;
    case 7u: goto L_08B5803C;
    case 8u: goto L_08B58054;
    case 9u: goto L_08B5805C;
    case 10u: goto L_08B58068;
    case 11u: goto L_08B58070;
    case 12u: goto L_08B58074;
    case 13u: goto L_08B5807C;
    case 14u: goto L_08B58084;
    case 15u: goto L_08B58088;
    case 16u: goto L_08B58090;
    case 17u: goto L_08B580B0;
    case 18u: goto L_08B580BC;
    case 19u: goto L_08B580D4;
    case 20u: goto L_08B580E0;
    case 21u: goto L_08B580F0;
    case 22u: goto L_08B580F8;
    case 23u: goto L_08B58100;
    case 24u: goto L_08B58114;
    case 25u: goto L_08B58124;
    case 26u: goto L_08B5813C;
    case 27u: goto L_08B58144;
    case 28u: goto L_08B5814C;
    case 29u: goto L_08B58160;
    case 30u: goto L_08B58178;
    case 31u: goto L_08B58180;
    case 32u: goto L_08B58190;
    case 33u: goto L_08B58198;
    case 34u: goto L_08B581A8;
    case 35u: goto L_08B581B0;
    case 36u: goto L_08B581C8;
    case 37u: goto L_08B581D0;
    case 38u: goto L_08B581D8;
    case 39u: goto L_08B581E8;
    case 40u: goto L_08B581EC;
    case 41u: goto L_08B58208;
    case 42u: goto L_08B58210;
    case 43u: goto L_08B58224;
    case 44u: goto L_08B58230;
    case 45u: goto L_08B58238;
    case 46u: goto L_08B58248;
    case 47u: goto L_08B58258;
    case 48u: goto L_08B58270;
    case 49u: goto L_08B5828C;
    case 50u: goto L_08B58294;
    case 51u: goto L_08B582A0;
    case 52u: goto L_08B582A8;
    case 53u: goto L_08B582B0;
    case 54u: goto L_08B582BC;
    case 55u: goto L_08B582C4;
    case 56u: goto L_08B582CC;
    case 57u: goto L_08B582D0;
    case 58u: goto L_08B582D8;
    case 59u: goto L_08B582E4;
    case 60u: goto L_08B582F4;
    case 61u: goto L_08B58300;
    case 62u: goto L_08B58310;
    case 63u: goto L_08B5831C;
    case 64u: goto L_08B5833C;
    case 65u: goto L_08B58358;
    case 66u: goto L_08B58360;
    case 67u: goto L_08B5836C;
    case 68u: goto L_08B58370;
    case 69u: goto L_08B5837C;
    case 70u: goto L_08B58384;
    case 71u: goto L_08B58390;
    case 72u: goto L_08B58394;
    case 73u: goto L_08B583A0;
    case 74u: goto L_08B583A8;
    case 75u: goto L_08B583C0;
    case 76u: goto L_08B583D8;
    case 77u: goto L_08B583EC;
    case 78u: goto L_08B58400;
    case 79u: goto L_08B58414;
    case 80u: goto L_08B58428;
    case 81u: goto L_08B5843C;
    case 82u: goto L_08B58450;
    case 83u: goto L_08B58464;
    case 84u: goto L_08B58478;
    case 85u: goto L_08B5848C;
    case 86u: goto L_08B584A0;
    case 87u: goto L_08B584B4;
    case 88u: goto L_08B584C8;
    case 89u: goto L_08B584DC;
    case 90u: goto L_08B584F0;
    case 91u: goto L_08B58504;
    case 92u: goto L_08B58518;
    case 93u: goto L_08B5852C;
    case 94u: goto L_08B58540;
    case 95u: goto L_08B58554;
    case 96u: goto L_08B58568;
    case 97u: goto L_08B5857C;
    case 98u: goto L_08B58590;
    case 99u: goto L_08B585A4;
    case 100u: goto L_08B585B8;
    case 101u: goto L_08B585CC;
    case 102u: goto L_08B585E0;
    case 103u: goto L_08B585F4;
    case 104u: goto L_08B58608;
    case 105u: goto L_08B5861C;
    case 106u: goto L_08B58630;
    case 107u: goto L_08B58644;
    case 108u: goto L_08B58658;
    case 109u: goto L_08B5866C;
    case 110u: goto L_08B58680;
    case 111u: goto L_08B58694;
    case 112u: goto L_08B586A8;
    case 113u: goto L_08B586BC;
    case 114u: goto L_08B586D0;
    case 115u: goto L_08B586E4;
    case 116u: goto L_08B586F8;
    case 117u: goto L_08B5870C;
    case 118u: goto L_08B58720;
    case 119u: goto L_08B58734;
    case 120u: goto L_08B58748;
    case 121u: goto L_08B5875C;
    case 122u: goto L_08B58770;
    case 123u: goto L_08B58784;
    case 124u: goto L_08B58798;
    case 125u: goto L_08B587AC;
    case 126u: goto L_08B587C0;
    case 127u: goto L_08B587D4;
    case 128u: goto L_08B587E8;
    case 129u: goto L_08B587FC;
    case 130u: goto L_08B58810;
    case 131u: goto L_08B58824;
    case 132u: goto L_08B58838;
    case 133u: goto L_08B5884C;
    case 134u: goto L_08B58860;
    case 135u: goto L_08B58874;
    case 136u: goto L_08B58888;
    case 137u: goto L_08B5889C;
    case 138u: goto L_08B588B0;
    case 139u: goto L_08B588C4;
    case 140u: goto L_08B588D8;
    case 141u: goto L_08B588EC;
    case 142u: goto L_08B58900;
    case 143u: goto L_08B58914;
    case 144u: goto L_08B58928;
    case 145u: goto L_08B5893C;
    case 146u: goto L_08B58950;
    case 147u: goto L_08B58958;
    case 148u: goto L_08B58960;
    case 149u: goto L_08B58968;
    case 150u: goto L_08B58974;
    case 151u: goto L_08B58980;
    case 152u: goto L_08B58984;
    case 153u: goto L_08B58990;
    case 154u: goto L_08B58998;
    case 155u: goto L_08B589A4;
    case 156u: goto L_08B589B4;
    case 157u: goto L_08B589C4;
    case 158u: goto L_08B589D4;
    case 159u: goto L_08B589DC;
    case 160u: goto L_08B589E0;
    case 161u: goto L_08B589F0;
    case 162u: goto L_08B589F8;
    case 163u: goto L_08B58A00;
    case 164u: goto L_08B58A10;
    case 165u: goto L_08B58A18;
    case 166u: goto L_08B58A24;
    case 167u: goto L_08B58A3C;
    case 168u: goto L_08B58A44;
    case 169u: goto L_08B58A48;
    case 170u: goto L_08B58A5C;
    case 171u: goto L_08B58A64;
    case 172u: goto L_08B58A6C;
    case 173u: goto L_08B58A74;
    case 174u: goto L_08B58A7C;
    case 175u: goto L_08B58A84;
    case 176u: goto L_08B58A94;
    case 177u: goto L_08B58A98;
    case 178u: goto L_08B58AB4;
    case 179u: goto L_08B58ABC;
    case 180u: goto L_08B58AD0;
    case 181u: goto L_08B58ADC;
    case 182u: goto L_08B58AE4;
    case 183u: goto L_08B58AF4;
    case 184u: goto L_08B58AF8;
    case 185u: goto L_08B58B04;
    case 186u: goto L_08B58B10;
    case 187u: goto L_08B58B24;
    case 188u: goto L_08B58B2C;
    case 189u: goto L_08B58B34;
    case 190u: goto L_08B58B3C;
    case 191u: goto L_08B58B44;
    case 192u: goto L_08B58B4C;
    case 193u: goto L_08B58B54;
    case 194u: goto L_08B58B60;
    case 195u: goto L_08B58B70;
    case 196u: goto L_08B58B78;
    case 197u: goto L_08B58B80;
    case 198u: goto L_08B58B90;
    case 199u: goto L_08B58B94;
    case 200u: goto L_08B58BA0;
    case 201u: goto L_08B58BB0;
    case 202u: goto L_08B58BB4;
    case 203u: goto L_08B58BCC;
    case 204u: goto L_08B58BD4;
    case 205u: goto L_08B58BE0;
    case 206u: goto L_08B58BF8;
    case 207u: goto L_08B58C00;
    case 208u: goto L_08B58C0C;
    case 209u: goto L_08B58C14;
    case 210u: goto L_08B58C20;
    case 211u: goto L_08B58C28;
    case 212u: goto L_08B58C38;
    case 213u: goto L_08B58C3C;
    case 214u: goto L_08B58C48;
    case 215u: goto L_08B58C4C;
    case 216u: goto L_08B58C54;
    case 217u: goto L_08B58C5C;
    case 218u: goto L_08B58C68;
    case 219u: goto L_08B58C78;
    case 220u: goto L_08B58C80;
    case 221u: goto L_08B58C84;
    case 222u: goto L_08B58C8C;
    case 223u: goto L_08B58C98;
    case 224u: goto L_08B58CA4;
    case 225u: goto L_08B58CAC;
    case 226u: goto L_08B58CBC;
    case 227u: goto L_08B58CC4;
    case 228u: goto L_08B58D50;
    case 229u: goto L_08B58D5C;
    case 230u: goto L_08B58D74;
    case 231u: goto L_08B58D78;
    case 232u: goto L_08B58D88;
    case 233u: goto L_08B58D90;
    case 234u: goto L_08B58D9C;
    case 235u: goto L_08B58DA0;
    case 236u: goto L_08B58DAC;
    case 237u: goto L_08B58DBC;
    case 238u: goto L_08B58DC0;
    case 239u: goto L_08B58DCC;
    case 240u: goto L_08B58DD8;
    case 241u: goto L_08B58DDC;
    case 242u: goto L_08B58DF0;
    case 243u: goto L_08B58DFC;
    case 244u: goto L_08B58E08;
    case 245u: goto L_08B58E14;
    case 246u: goto L_08B58E2C;
    case 247u: goto L_08B58E34;
    case 248u: goto L_08B58E44;
    case 249u: goto L_08B58E58;
    case 250u: goto L_08B58E5C;
    case 251u: goto L_08B58E64;
    case 252u: goto L_08B58E78;
    case 253u: goto L_08B58E80;
    case 254u: goto L_08B58E98;
    case 255u: goto L_08B58E9C;
    case 256u: goto L_08B58EA4;
    case 257u: goto L_08B58EB0;
    case 258u: goto L_08B58EC0;
    case 259u: goto L_08B58ECC;
    case 260u: goto L_08B58ED8;
    case 261u: goto L_08B58EE4;
    case 262u: goto L_08B58EF8;
    case 263u: goto L_08B58EFC;
    case 264u: goto L_08B58F08;
    case 265u: goto L_08B58F18;
    case 266u: goto L_08B58F24;
    case 267u: goto L_08B58F2C;
    case 268u: goto L_08B58F3C;
    case 269u: goto L_08B58F48;
    case 270u: goto L_08B58F5C;
    case 271u: goto L_08B58F68;
    case 272u: goto L_08B58F78;
    case 273u: goto L_08B58F7C;
    case 274u: goto L_08B58F8C;
    case 275u: goto L_08B58F90;
    case 276u: goto L_08B58F98;
    case 277u: goto L_08B58FA4;
    case 278u: goto L_08B58FB4;
    case 279u: goto L_08B58FBC;
    case 280u: goto L_08B58FD4;
    case 281u: goto L_08B58FE0;
    case 282u: goto L_08B58FE8;
    case 283u: goto L_08B58FF4;
    case 284u: goto L_08B58FFC;
    case 285u: goto L_08B59008;
    case 286u: goto L_08B59010;
    case 287u: goto L_08B59018;
    case 288u: goto L_08B59020;
    case 289u: goto L_08B59028;
    case 290u: goto L_08B59038;
    case 291u: goto L_08B5903C;
    case 292u: goto L_08B59044;
    case 293u: goto L_08B5904C;
    case 294u: goto L_08B59054;
    case 295u: goto L_08B59068;
    case 296u: goto L_08B59070;
    case 297u: goto L_08B59088;
    case 298u: goto L_08B59098;
    case 299u: goto L_08B590A0;
    case 300u: goto L_08B590A8;
    case 301u: goto L_08B590B0;
    case 302u: goto L_08B590B8;
    case 303u: goto L_08B590BC;
    case 304u: goto L_08B590C4;
    case 305u: goto L_08B590D0;
    case 306u: goto L_08B590D8;
    case 307u: goto L_08B590E4;
    case 308u: goto L_08B590F0;
    case 309u: goto L_08B590F8;
    case 310u: goto L_08B59108;
    case 311u: goto L_08B59134;
    case 312u: goto L_08B59144;
    case 313u: goto L_08B59158;
    case 314u: goto L_08B59168;
    case 315u: goto L_08B59174;
    case 316u: goto L_08B5917C;
    case 317u: goto L_08B59184;
    case 318u: goto L_08B59190;
    case 319u: goto L_08B591C4;
    case 320u: goto L_08B591D0;
    case 321u: goto L_08B591E4;
    case 322u: goto L_08B59214;
    case 323u: goto L_08B59238;
    case 324u: goto L_08B59244;
    case 325u: goto L_08B5924C;
    case 326u: goto L_08B59278;
    case 327u: goto L_08B59284;
    case 328u: goto L_08B59288;
    case 329u: goto L_08B59294;
    case 330u: goto L_08B592A0;
    case 331u: goto L_08B592D4;
    case 332u: goto L_08B592DC;
    case 333u: goto L_08B592E4;
    case 334u: goto L_08B592EC;
    case 335u: goto L_08B592F0;
    case 336u: goto L_08B59314;
    case 337u: goto L_08B5931C;
    case 338u: goto L_08B59320;
    case 339u: goto L_08B59328;
    case 340u: goto L_08B59338;
    case 341u: goto L_08B59340;
    case 342u: goto L_08B5934C;
    case 343u: goto L_08B59358;
    case 344u: goto L_08B59364;
    case 345u: goto L_08B59370;
    case 346u: goto L_08B59378;
    case 347u: goto L_08B59398;
    case 348u: goto L_08B593BC;
    case 349u: goto L_08B593C8;
    case 350u: goto L_08B593E0;
    case 351u: goto L_08B593E8;
    case 352u: goto L_08B593F0;
    case 353u: goto L_08B59400;
    case 354u: goto L_08B59434;
    case 355u: goto L_08B5943C;
    case 356u: goto L_08B59444;
    case 357u: goto L_08B59450;
    case 358u: goto L_08B59468;
    case 359u: goto L_08B59474;
    case 360u: goto L_08B59480;
    case 361u: goto L_08B5948C;
    case 362u: goto L_08B59498;
    case 363u: goto L_08B594A0;
    case 364u: goto L_08B594BC;
    case 365u: goto L_08B594DC;
    case 366u: goto L_08B594E4;
    case 367u: goto L_08B594FC;
    case 368u: goto L_08B59518;
    case 369u: goto L_08B59538;
    case 370u: goto L_08B59540;
    case 371u: goto L_08B59544;
    case 372u: goto L_08B59568;
    case 373u: goto L_08B59570;
    case 374u: goto L_08B59574;
    case 375u: goto L_08B5957C;
    case 376u: goto L_08B59580;
    case 377u: goto L_08B59598;
    case 378u: goto L_08B595C0;
    case 379u: goto L_08B595CC;
    case 380u: goto L_08B595EC;
    case 381u: goto L_08B59604;
    case 382u: goto L_08B59614;
    case 383u: goto L_08B59634;
    case 384u: goto L_08B59648;
    case 385u: goto L_08B59658;
    case 386u: goto L_08B59660;
    case 387u: goto L_08B59668;
    case 388u: goto L_08B5967C;
    case 389u: goto L_08B59684;
    case 390u: goto L_08B5968C;
    case 391u: goto L_08B596A4;
    case 392u: goto L_08B596B0;
    case 393u: goto L_08B596B8;
    case 394u: goto L_08B596C4;
    case 395u: goto L_08B596CC;
    case 396u: goto L_08B596D4;
    case 397u: goto L_08B596EC;
    case 398u: goto L_08B596FC;
    case 399u: goto L_08B59704;
    case 400u: goto L_08B59714;
    case 401u: goto L_08B59718;
    case 402u: goto L_08B59720;
    case 403u: goto L_08B5972C;
    case 404u: goto L_08B59730;
    case 405u: goto L_08B59738;
    case 406u: goto L_08B59744;
    case 407u: goto L_08B59748;
    case 408u: goto L_08B59750;
    case 409u: goto L_08B5975C;
    case 410u: goto L_08B59760;
    case 411u: goto L_08B59778;
    case 412u: goto L_08B59794;
    case 413u: goto L_08B597A0;
    case 414u: goto L_08B597AC;
    case 415u: goto L_08B597B8;
    case 416u: goto L_08B597D0;
    case 417u: goto L_08B597E0;
    case 418u: goto L_08B597F0;
    case 419u: goto L_08B597F8;
    case 420u: goto L_08B59800;
    case 421u: goto L_08B59808;
    case 422u: goto L_08B5981C;
    case 423u: goto L_08B5982C;
    case 424u: goto L_08B59838;
    case 425u: goto L_08B59854;
    case 426u: goto L_08B5985C;
    case 427u: goto L_08B59864;
    case 428u: goto L_08B59868;
    case 429u: goto L_08B59890;
    case 430u: goto L_08B59898;
    case 431u: goto L_08B598A0;
    case 432u: goto L_08B598B4;
    case 433u: goto L_08B598C8;
    case 434u: goto L_08B598D4;
    case 435u: goto L_08B598F0;
    case 436u: goto L_08B59904;
    case 437u: goto L_08B59920;
    case 438u: goto L_08B59928;
    case 439u: goto L_08B59930;
    case 440u: goto L_08B5993C;
    case 441u: goto L_08B5995C;
    case 442u: goto L_08B59964;
    case 443u: goto L_08B5996C;
    case 444u: goto L_08B59984;
    case 445u: goto L_08B59990;
    case 446u: goto L_08B599A4;
    case 447u: goto L_08B599A8;
    case 448u: goto L_08B599B0;
    case 449u: goto L_08B599B8;
    case 450u: goto L_08B599BC;
    case 451u: goto L_08B599D8;
    case 452u: goto L_08B599F4;
    case 453u: goto L_08B599FC;
    case 454u: goto L_08B59A0C;
    case 455u: goto L_08B59A20;
    case 456u: goto L_08B59A28;
    case 457u: goto L_08B59A34;
    case 458u: goto L_08B59A40;
    case 459u: goto L_08B59A58;
    case 460u: goto L_08B59A74;
    case 461u: goto L_08B59A80;
    case 462u: goto L_08B59A88;
    case 463u: goto L_08B59A90;
    case 464u: goto L_08B59AA0;
    case 465u: goto L_08B59AD0;
    case 466u: goto L_08B59AE4;
    case 467u: goto L_08B59AF8;
    case 468u: goto L_08B59B1C;
    case 469u: goto L_08B59B30;
    case 470u: goto L_08B59B40;
    case 471u: goto L_08B59B44;
    case 472u: goto L_08B59B58;
    case 473u: goto L_08B59B6C;
    case 474u: goto L_08B59B78;
    case 475u: goto L_08B59B8C;
    case 476u: goto L_08B59B94;
    case 477u: goto L_08B59BA8;
    case 478u: goto L_08B59BB4;
    case 479u: goto L_08B59BBC;
    case 480u: goto L_08B59BC8;
    case 481u: goto L_08B59BD4;
    case 482u: goto L_08B59BDC;
    case 483u: goto L_08B59BF0;
    case 484u: goto L_08B59C04;
    case 485u: goto L_08B59C18;
    case 486u: goto L_08B59C2C;
    case 487u: goto L_08B59C34;
    case 488u: goto L_08B59C40;
    case 489u: goto L_08B59C48;
    case 490u: goto L_08B59C5C;
    case 491u: goto L_08B59C68;
    case 492u: goto L_08B59C74;
    case 493u: goto L_08B59C88;
    case 494u: goto L_08B59C8C;
    case 495u: goto L_08B59CA0;
    case 496u: goto L_08B59CA8;
    case 497u: goto L_08B59CBC;
    case 498u: goto L_08B59CC4;
    case 499u: goto L_08B59CCC;
    case 500u: goto L_08B59CD0;
    case 501u: goto L_08B59CE4;
    case 502u: goto L_08B59CEC;
    case 503u: goto L_08B59CF0;
    case 504u: goto L_08B59CFC;
    case 505u: goto L_08B59D08;
    case 506u: goto L_08B59D14;
    case 507u: goto L_08B59D20;
    case 508u: goto L_08B59D3C;
    case 509u: goto L_08B59D40;
    case 510u: goto L_08B59D4C;
    case 511u: goto L_08B59D58;
    case 512u: goto L_08B59D64;
    case 513u: goto L_08B59D70;
    case 514u: goto L_08B59D7C;
    case 515u: goto L_08B59D80;
    case 516u: goto L_08B59D90;
    case 517u: goto L_08B59D9C;
    case 518u: goto L_08B59DA4;
    case 519u: goto L_08B59DAC;
    case 520u: goto L_08B59DB0;
    case 521u: goto L_08B59DE0;
    case 522u: goto L_08B59DFC;
    case 523u: goto L_08B59E08;
    case 524u: goto L_08B59E20;
    case 525u: goto L_08B59E2C;
    case 526u: goto L_08B59E34;
    case 527u: goto L_08B59E40;
    case 528u: goto L_08B59E48;
    case 529u: goto L_08B59E50;
    case 530u: goto L_08B59E68;
    case 531u: goto L_08B59E70;
    case 532u: goto L_08B59E80;
    case 533u: goto L_08B59E88;
    case 534u: goto L_08B59E90;
    case 535u: goto L_08B59E9C;
    case 536u: goto L_08B59EB0;
    case 537u: goto L_08B59EB8;
    case 538u: goto L_08B59EC0;
    case 539u: goto L_08B59ECC;
    case 540u: goto L_08B59ED4;
    case 541u: goto L_08B59EDC;
    case 542u: goto L_08B59EE4;
    case 543u: goto L_08B59EF0;
    case 544u: goto L_08B59F00;
    case 545u: goto L_08B59F10;
    case 546u: goto L_08B59F20;
    case 547u: goto L_08B59F28;
    case 548u: goto L_08B59F2C;
    case 549u: goto L_08B59F3C;
    case 550u: goto L_08B59F44;
    case 551u: goto L_08B59F4C;
    case 552u: goto L_08B59F54;
    case 553u: goto L_08B59F68;
    case 554u: goto L_08B59F74;
    case 555u: goto L_08B59F8C;
    case 556u: goto L_08B59F94;
    case 557u: goto L_08B59F9C;
    case 558u: goto L_08B59FA0;
    case 559u: goto L_08B59FA8;
    case 560u: goto L_08B59FB0;
    case 561u: goto L_08B59FBC;
    case 562u: goto L_08B59FC0;
    case 563u: goto L_08B59FD0;
    case 564u: goto L_08B59FE8;
    case 565u: goto L_08B5A014;
    case 566u: goto L_08B5A01C;
    case 567u: goto L_08B5A030;
    case 568u: goto L_08B5A03C;
    case 569u: goto L_08B5A044;
    case 570u: goto L_08B5A050;
    case 571u: goto L_08B5A084;
    case 572u: goto L_08B5A08C;
    case 573u: goto L_08B5A0A0;
    case 574u: goto L_08B5A0AC;
    case 575u: goto L_08B5A0B8;
    case 576u: goto L_08B5A13C;
    case 577u: goto L_08B5A148;
    case 578u: goto L_08B5A150;
    case 579u: goto L_08B5A164;
    case 580u: goto L_08B5A16C;
    case 581u: goto L_08B5A17C;
    case 582u: goto L_08B5A184;
    case 583u: goto L_08B5A194;
    case 584u: goto L_08B5A19C;
    case 585u: goto L_08B5A1C0;
    case 586u: goto L_08B5A1C8;
    case 587u: goto L_08B5A1D0;
    case 588u: goto L_08B5A1DC;
    case 589u: goto L_08B5A1E8;
    case 590u: goto L_08B5A1F8;
    case 591u: goto L_08B5A204;
    case 592u: goto L_08B5A208;
    case 593u: goto L_08B5A220;
    case 594u: goto L_08B5A228;
    case 595u: goto L_08B5A234;
    case 596u: goto L_08B5A250;
    case 597u: goto L_08B5A25C;
    case 598u: goto L_08B5A268;
    case 599u: goto L_08B5A290;
    case 600u: goto L_08B5A29C;
    case 601u: goto L_08B5A2B4;
    case 602u: goto L_08B5A2C8;
    case 603u: goto L_08B5A2DC;
    case 604u: goto L_08B5A2FC;
    case 605u: goto L_08B5A308;
    case 606u: goto L_08B5A30C;
    case 607u: goto L_08B5A320;
    case 608u: goto L_08B5A324;
    case 609u: goto L_08B5A354;
    case 610u: goto L_08B5A35C;
    case 611u: goto L_08B5A368;
    case 612u: goto L_08B5A37C;
    case 613u: goto L_08B5A384;
    case 614u: goto L_08B5A3A4;
    case 615u: goto L_08B5A3B0;
    case 616u: goto L_08B5A3C8;
    case 617u: goto L_08B5A3D0;
    case 618u: goto L_08B5A3DC;
    case 619u: goto L_08B5A3F4;
    case 620u: goto L_08B5A400;
    case 621u: goto L_08B5A408;
    case 622u: goto L_08B5A41C;
    case 623u: goto L_08B5A424;
    case 624u: goto L_08B5A43C;
    case 625u: goto L_08B5A448;
    case 626u: goto L_08B5A45C;
    case 627u: goto L_08B5A47C;
    case 628u: goto L_08B5A48C;
    case 629u: goto L_08B5A498;
    case 630u: goto L_08B5A4A4;
    case 631u: goto L_08B5A4AC;
    case 632u: goto L_08B5A4B0;
    case 633u: goto L_08B5A4D0;
    case 634u: goto L_08B5A4E4;
    case 635u: goto L_08B5A500;
    case 636u: goto L_08B5A50C;
    case 637u: goto L_08B5A520;
    case 638u: goto L_08B5A53C;
    case 639u: goto L_08B5A550;
    case 640u: goto L_08B5A558;
    case 641u: goto L_08B5A570;
    case 642u: goto L_08B5A584;
    case 643u: goto L_08B5A58C;
    case 644u: goto L_08B5A5C0;
    case 645u: goto L_08B5A5DC;
    case 646u: goto L_08B5A5EC;
    case 647u: goto L_08B5A5F0;
    case 648u: goto L_08B5A604;
    case 649u: goto L_08B5A61C;
    case 650u: goto L_08B5A640;
    case 651u: goto L_08B5A648;
    case 652u: goto L_08B5A660;
    case 653u: goto L_08B5A670;
    case 654u: goto L_08B5A678;
    case 655u: goto L_08B5A690;
    case 656u: goto L_08B5A698;
    case 657u: goto L_08B5A6A0;
    case 658u: goto L_08B5A6AC;
    case 659u: goto L_08B5A6BC;
    case 660u: goto L_08B5A6C0;
    case 661u: goto L_08B5A6D8;
    case 662u: goto L_08B5A6E8;
    case 663u: goto L_08B5A6F4;
    case 664u: goto L_08B5A70C;
    case 665u: goto L_08B5A714;
    case 666u: goto L_08B5A71C;
    case 667u: goto L_08B5A72C;
    case 668u: goto L_08B5A734;
    case 669u: goto L_08B5A740;
    case 670u: goto L_08B5A74C;
    case 671u: goto L_08B5A760;
    case 672u: goto L_08B5A778;
    case 673u: goto L_08B5A784;
    case 674u: goto L_08B5A794;
    case 675u: goto L_08B5A79C;
    case 676u: goto L_08B5A7B0;
    case 677u: goto L_08B5A7C0;
    case 678u: goto L_08B5A7C4;
    case 679u: goto L_08B5A7D4;
    case 680u: goto L_08B5A7DC;
    case 681u: goto L_08B5A7E4;
    case 682u: goto L_08B5A818;
    case 683u: goto L_08B5A850;
    case 684u: goto L_08B5A860;
    case 685u: goto L_08B5A870;
    case 686u: goto L_08B5A88C;
    case 687u: goto L_08B5A8C0;
    case 688u: goto L_08B5A8C4;
    case 689u: goto L_08B5A8F0;
    case 690u: goto L_08B5A900;
    case 691u: goto L_08B5A90C;
    case 692u: goto L_08B5A91C;
    case 693u: goto L_08B5A948;
    case 694u: goto L_08B5A974;
    case 695u: goto L_08B5A998;
    case 696u: goto L_08B5A99C;
    case 697u: goto L_08B5A9A4;
    case 698u: goto L_08B5A9B0;
    case 699u: goto L_08B5A9BC;
    case 700u: goto L_08B5A9C4;
    case 701u: goto L_08B5A9D0;
    case 702u: goto L_08B5A9E0;
    case 703u: goto L_08B5A9EC;
    case 704u: goto L_08B5AA04;
    case 705u: goto L_08B5AA20;
    case 706u: goto L_08B5AA2C;
    case 707u: goto L_08B5AA30;
    case 708u: goto L_08B5AA3C;
    case 709u: goto L_08B5AA58;
    case 710u: goto L_08B5AA64;
    case 711u: goto L_08B5AAA0;
    case 712u: goto L_08B5AAF4;
    case 713u: goto L_08B5AB0C;
    case 714u: goto L_08B5AB24;
    case 715u: goto L_08B5AB30;
    case 716u: goto L_08B5AB3C;
    case 717u: goto L_08B5AB48;
    case 718u: goto L_08B5AB54;
    case 719u: goto L_08B5AB64;
    case 720u: goto L_08B5AB74;
    case 721u: goto L_08B5AB84;
    case 722u: goto L_08B5ABA0;
    case 723u: goto L_08B5ABB0;
    case 724u: goto L_08B5ABC8;
    case 725u: goto L_08B5ABD0;
    case 726u: goto L_08B5ABD8;
    case 727u: goto L_08B5ABE8;
    case 728u: goto L_08B5ABF8;
    case 729u: goto L_08B5AC04;
    case 730u: goto L_08B5AC0C;
    case 731u: goto L_08B5AC18;
    case 732u: goto L_08B5AC28;
    case 733u: goto L_08B5AC2C;
    case 734u: goto L_08B5AC48;
    case 735u: goto L_08B5AC58;
    case 736u: goto L_08B5AC60;
    case 737u: goto L_08B5AC78;
    case 738u: goto L_08B5AC84;
    case 739u: goto L_08B5AC90;
    case 740u: goto L_08B5AC9C;
    case 741u: goto L_08B5ACA8;
    case 742u: goto L_08B5ACC0;
    case 743u: goto L_08B5ACCC;
    case 744u: goto L_08B5ACD4;
    case 745u: goto L_08B5ACDC;
    case 746u: goto L_08B5ACEC;
    case 747u: goto L_08B5AD00;
    case 748u: goto L_08B5AD1C;
    case 749u: goto L_08B5AD24;
    case 750u: goto L_08B5AD34;
    case 751u: goto L_08B5AD60;
    case 752u: goto L_08B5AD70;
    case 753u: goto L_08B5AD78;
    case 754u: goto L_08B5AD84;
    case 755u: goto L_08B5AD88;
    case 756u: goto L_08B5ADB4;
    case 757u: goto L_08B5ADC4;
    case 758u: goto L_08B5ADD0;
    case 759u: goto L_08B5ADDC;
    case 760u: goto L_08B5ADEC;
    case 761u: goto L_08B5ADFC;
    case 762u: goto L_08B5AE04;
    case 763u: goto L_08B5AE10;
    case 764u: goto L_08B5AE48;
    case 765u: goto L_08B5AE60;
    case 766u: goto L_08B5AE70;
    case 767u: goto L_08B5AE78;
    case 768u: goto L_08B5AE98;
    case 769u: goto L_08B5AEA0;
    case 770u: goto L_08B5AEB8;
    case 771u: goto L_08B5AEC0;
    case 772u: goto L_08B5AEDC;
    case 773u: goto L_08B5AEE8;
    case 774u: goto L_08B5AEF0;
    case 775u: goto L_08B5AEF8;
    case 776u: goto L_08B5AF2C;
    case 777u: goto L_08B5AF40;
    case 778u: goto L_08B5AF48;
    case 779u: goto L_08B5AF6C;
    case 780u: goto L_08B5AF94;
    case 781u: goto L_08B5AFA4;
    case 782u: goto L_08B5AFA8;
    case 783u: goto L_08B5AFCC;
    case 784u: goto L_08B5AFD4;
    case 785u: goto L_08B5AFF4;
    case 786u: goto L_08B5AFFC;
    case 787u: goto L_08B5B008;
    case 788u: goto L_08B5B014;
    case 789u: goto L_08B5B01C;
    case 790u: goto L_08B5B028;
    case 791u: goto L_08B5B030;
    case 792u: goto L_08B5B05C;
    case 793u: goto L_08B5B064;
    case 794u: goto L_08B5B06C;
    case 795u: goto L_08B5B080;
    case 796u: goto L_08B5B088;
    case 797u: goto L_08B5B08C;
    case 798u: goto L_08B5B098;
    case 799u: goto L_08B5B0A0;
    case 800u: goto L_08B5B0A4;
    case 801u: goto L_08B5B0AC;
    case 802u: goto L_08B5B0B4;
    case 803u: goto L_08B5B0BC;
    case 804u: goto L_08B5B0D8;
    case 805u: goto L_08B5B0E4;
    case 806u: goto L_08B5B0F4;
    case 807u: goto L_08B5B108;
    case 808u: goto L_08B5B114;
    case 809u: goto L_08B5B120;
    case 810u: goto L_08B5B144;
    case 811u: goto L_08B5B150;
    case 812u: goto L_08B5B168;
    case 813u: goto L_08B5B170;
    case 814u: goto L_08B5B188;
    case 815u: goto L_08B5B19C;
    case 816u: goto L_08B5B1B4;
    case 817u: goto L_08B5B1C4;
    case 818u: goto L_08B5B1CC;
    case 819u: goto L_08B5B1EC;
    case 820u: goto L_08B5B1F4;
    case 821u: goto L_08B5B20C;
    case 822u: goto L_08B5B214;
    case 823u: goto L_08B5B22C;
    case 824u: goto L_08B5B238;
    case 825u: goto L_08B5B240;
    case 826u: goto L_08B5B248;
    case 827u: goto L_08B5B258;
    case 828u: goto L_08B5B290;
    case 829u: goto L_08B5B2B8;
    case 830u: goto L_08B5B2C0;
    case 831u: goto L_08B5B2CC;
    case 832u: goto L_08B5B2D8;
    case 833u: goto L_08B5B2E8;
    case 834u: goto L_08B5B2F4;
    case 835u: goto L_08B5B300;
    case 836u: goto L_08B5B308;
    case 837u: goto L_08B5B314;
    case 838u: goto L_08B5B320;
    case 839u: goto L_08B5B33C;
    case 840u: goto L_08B5B350;
    case 841u: goto L_08B5B358;
    case 842u: goto L_08B5B378;
    case 843u: goto L_08B5B380;
    case 844u: goto L_08B5B398;
    case 845u: goto L_08B5B3A0;
    case 846u: goto L_08B5B3B8;
    case 847u: goto L_08B5B3C4;
    case 848u: goto L_08B5B3CC;
    case 849u: goto L_08B5B3D4;
    case 850u: goto L_08B5B3E8;
    case 851u: goto L_08B5B404;
    case 852u: goto L_08B5B41C;
    case 853u: goto L_08B5B424;
    case 854u: goto L_08B5B444;
    case 855u: goto L_08B5B44C;
    case 856u: goto L_08B5B464;
    case 857u: goto L_08B5B46C;
    case 858u: goto L_08B5B484;
    case 859u: goto L_08B5B490;
    case 860u: goto L_08B5B498;
    case 861u: goto L_08B5B4A0;
    case 862u: goto L_08B5B4B4;
    case 863u: goto L_08B5B4CC;
    case 864u: goto L_08B5B4D4;
    case 865u: goto L_08B5B4DC;
    case 866u: goto L_08B5B4E0;
    case 867u: goto L_08B5B4F8;
    case 868u: goto L_08B5B500;
    case 869u: goto L_08B5B518;
    case 870u: goto L_08B5B520;
    case 871u: goto L_08B5B528;
    case 872u: goto L_08B5B530;
    case 873u: goto L_08B5B538;
    case 874u: goto L_08B5B548;
    case 875u: goto L_08B5B554;
    case 876u: goto L_08B5B55C;
    case 877u: goto L_08B5B568;
    case 878u: goto L_08B5B570;
    case 879u: goto L_08B5B594;
    case 880u: goto L_08B5B5D0;
    case 881u: goto L_08B5B5D8;
    case 882u: goto L_08B5B5E0;
    case 883u: goto L_08B5B5F0;
    case 884u: goto L_08B5B5FC;
    case 885u: goto L_08B5B628;
    case 886u: goto L_08B5B62C;
    case 887u: goto L_08B5B668;
    case 888u: goto L_08B5B6A8;
    case 889u: goto L_08B5B6D8;
    case 890u: goto L_08B5B70C;
    case 891u: goto L_08B5B73C;
    case 892u: goto L_08B5B744;
    case 893u: goto L_08B5B748;
    case 894u: goto L_08B5B758;
    case 895u: goto L_08B5B764;
    case 896u: goto L_08B5B778;
    case 897u: goto L_08B5B784;
    case 898u: goto L_08B5B788;
    case 899u: goto L_08B5B790;
    case 900u: goto L_08B5B798;
    case 901u: goto L_08B5B7B8;
    case 902u: goto L_08B5B7D8;
    case 903u: goto L_08B5B7E0;
    case 904u: goto L_08B5B7E8;
    case 905u: goto L_08B5B7F4;
    case 906u: goto L_08B5B7F8;
    case 907u: goto L_08B5B7FC;
    case 908u: goto L_08B5B804;
    case 909u: goto L_08B5B810;
    case 910u: goto L_08B5B818;
    case 911u: goto L_08B5B820;
    case 912u: goto L_08B5B830;
    case 913u: goto L_08B5B840;
    case 914u: goto L_08B5B864;
    case 915u: goto L_08B5B874;
    case 916u: goto L_08B5B894;
    case 917u: goto L_08B5B89C;
    case 918u: goto L_08B5B8A4;
    case 919u: goto L_08B5B8A8;
    case 920u: goto L_08B5B8AC;
    case 921u: goto L_08B5B8BC;
    case 922u: goto L_08B5B8C4;
    case 923u: goto L_08B5B8D4;
    case 924u: goto L_08B5B8DC;
    case 925u: goto L_08B5B8EC;
    case 926u: goto L_08B5B8FC;
    case 927u: goto L_08B5B924;
    case 928u: goto L_08B5B934;
    case 929u: goto L_08B5B958;
    case 930u: goto L_08B5B964;
    case 931u: goto L_08B5B96C;
    case 932u: goto L_08B5B97C;
    case 933u: goto L_08B5B98C;
    case 934u: goto L_08B5B998;
    case 935u: goto L_08B5B99C;
    case 936u: goto L_08B5B9A8;
    case 937u: goto L_08B5B9B0;
    case 938u: goto L_08B5B9C0;
    case 939u: goto L_08B5B9D0;
    case 940u: goto L_08B5B9F4;
    case 941u: goto L_08B5BA04;
    case 942u: goto L_08B5BA24;
    case 943u: goto L_08B5BA2C;
    case 944u: goto L_08B5BA34;
    case 945u: goto L_08B5BA40;
    case 946u: goto L_08B5BA50;
    case 947u: goto L_08B5BA5C;
    case 948u: goto L_08B5BA68;
    case 949u: goto L_08B5BA74;
    case 950u: goto L_08B5BA84;
    case 951u: goto L_08B5BA94;
    case 952u: goto L_08B5BAB8;
    case 953u: goto L_08B5BAC8;
    case 954u: goto L_08B5BAE8;
    case 955u: goto L_08B5BAF4;
    case 956u: goto L_08B5BAFC;
    case 957u: goto L_08B5BB08;
    case 958u: goto L_08B5BB18;
    case 959u: goto L_08B5BB20;
    case 960u: goto L_08B5BB30;
    case 961u: goto L_08B5BB38;
    case 962u: goto L_08B5BB40;
    case 963u: goto L_08B5BB48;
    case 964u: goto L_08B5BB58;
    case 965u: goto L_08B5BB68;
    case 966u: goto L_08B5BB8C;
    case 967u: goto L_08B5BB9C;
    case 968u: goto L_08B5BBBC;
    case 969u: goto L_08B5BBC4;
    case 970u: goto L_08B5BBCC;
    case 971u: goto L_08B5BBD4;
    case 972u: goto L_08B5BBE4;
    case 973u: goto L_08B5BBEC;
    case 974u: goto L_08B5BBFC;
    case 975u: goto L_08B5BC04;
    case 976u: goto L_08B5BC14;
    case 977u: goto L_08B5BC24;
    case 978u: goto L_08B5BC48;
    case 979u: goto L_08B5BC58;
    case 980u: goto L_08B5BC78;
    case 981u: goto L_08B5BC80;
    case 982u: goto L_08B5BC88;
    case 983u: goto L_08B5BC94;
    case 984u: goto L_08B5BCA4;
    case 985u: goto L_08B5BCAC;
    case 986u: goto L_08B5BCC0;
    case 987u: goto L_08B5BCC8;
    case 988u: goto L_08B5BCD0;
    case 989u: goto L_08B5BCE0;
    case 990u: goto L_08B5BCF0;
    case 991u: goto L_08B5BD14;
    case 992u: goto L_08B5BD24;
    case 993u: goto L_08B5BD44;
    case 994u: goto L_08B5BD4C;
    case 995u: goto L_08B5BD54;
    case 996u: goto L_08B5BD5C;
    case 997u: goto L_08B5BD6C;
    case 998u: goto L_08B5BD74;
    case 999u: goto L_08B5BD84;
    case 1000u: goto L_08B5BD8C;
    case 1001u: goto L_08B5BD9C;
    case 1002u: goto L_08B5BDAC;
    case 1003u: goto L_08B5BDD4;
    case 1004u: goto L_08B5BDE4;
    case 1005u: goto L_08B5BE08;
    case 1006u: goto L_08B5BE10;
    case 1007u: goto L_08B5BE18;
    case 1008u: goto L_08B5BE24;
    case 1009u: goto L_08B5BE34;
    case 1010u: goto L_08B5BE40;
    case 1011u: goto L_08B5BE48;
    case 1012u: goto L_08B5BE58;
    case 1013u: goto L_08B5BE68;
    case 1014u: goto L_08B5BE88;
    case 1015u: goto L_08B5BE98;
    case 1016u: goto L_08B5BEB0;
    case 1017u: goto L_08B5BEB8;
    case 1018u: goto L_08B5BEC0;
    case 1019u: goto L_08B5BECC;
    case 1020u: goto L_08B5BEDC;
    case 1021u: goto L_08B5BEE8;
    case 1022u: goto L_08B5BEF4;
    case 1023u: goto L_08B5BF0C;
    case 1024u: goto L_08B5BF14;
    case 1025u: goto L_08B5BF24;
    case 1026u: goto L_08B5BF34;
    case 1027u: goto L_08B5BF58;
    case 1028u: goto L_08B5BF68;
    case 1029u: goto L_08B5BF88;
    case 1030u: goto L_08B5BF90;
    case 1031u: goto L_08B5BF98;
    case 1032u: goto L_08B5BFA0;
    case 1033u: goto L_08B5BFB0;
    case 1034u: goto L_08B5BFB8;
    case 1035u: goto L_08B5BFC8;
    case 1036u: goto L_08B5BFD0;
    case 1037u: goto L_08B5BFE0;
    case 1038u: goto L_08B5BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08B58004u;
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
L_08B58004:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
    aot_gpr_2 = (ctx.gpr[13] < ctx.gpr[3] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B58024;
      }
      goto L_08B5800C;
    }
L_08B5800C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B58024;
      }
      goto L_08B58014;
    }
L_08B58014:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[13];
    aot_gpr_2 = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5802C;
      }
      goto L_08B5801C;
    }
L_08B5801C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08B5802C;
      }
      goto L_08B58024;
    }
L_08B58024:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5803C;
      }
      goto L_08B5802C;
    }
L_08B5802C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_7)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[10]);
    goto L_08B5803C;
L_08B5803C:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 4u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 1053u, 0x08B57FC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B58054;
    }
L_08B58054:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_gpr_7 = (0u | 34u);
      if (branch_taken) {
          goto L_08B58068;
      }
      goto L_08B5805C;
    }
L_08B5805C:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_7);
      if (branch_taken) {
          goto L_08B58074;
      }
      goto L_08B58068;
    }
L_08B58068:
    { const bool branch_taken = ctx.gpr[11] == 0u;
      if (branch_taken) {
          goto L_08B58074;
      }
      goto L_08B58070;
    }
L_08B58070:
    ctx.gpr[3] = (0u - ctx.gpr[3]);
    goto L_08B58074;
L_08B58074:
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B58088;
      }
      goto L_08B5807C;
    }
L_08B5807C:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
        goto L_08B58084;
    }
    goto L_08B58084;
L_08B58084:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08B58088;
L_08B58088:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (ctx.gpr[3] | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58090:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_7 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B580B0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 1037u, 0x08B57EDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B580B0u) goto L_08B580B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B580B0:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B580BC:
    aot_gpr_2 = (aot_gpr_4 | 0u);
    aot_gpr_7 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B580F0;
      }
      goto L_08B580D4;
    }
L_08B580D4:
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 == aot_gpr_5;
    aot_gpr_7 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B580F8;
      }
      goto L_08B580E0;
    }
L_08B580E0:
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B580D4;
      }
      goto L_08B580F0;
    }
L_08B580F0:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B580F8:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58100:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B5813C;
      }
      goto L_08B58114;
    }
L_08B58114:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
      if (branch_taken) {
          goto L_08B58144;
      }
      goto L_08B58124;
    }
L_08B58124:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B58114;
      }
      goto L_08B5813C;
    }
L_08B5813C:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58144:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (ctx.gpr[9] - ctx.gpr[8]);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5814C:
    ctx.gpr[9] = (aot_gpr_6 | 0u);
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_6 = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08B58178;
      }
      goto L_08B58160;
    }
L_08B58160:
    ctx.gpr[9] = (aot_gpr_7 | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_6 = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08B58160;
      }
      goto L_08B58178;
    }
L_08B58178:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58180:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(14520));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    goto L_08B58190;
L_08B58190:
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_7);
      if (branch_taken) {
          goto L_08B581E8;
      }
      goto L_08B58198;
    }
L_08B58198:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08B581B0;
      }
      goto L_08B581A8;
    }
L_08B581A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B581B0;
      }
      goto L_08B581B0;
    }
L_08B581B0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (aot_gpr_6 + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[9] & 1u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08B581D0;
      }
      goto L_08B581C8;
    }
L_08B581C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B581D0;
      }
      goto L_08B581D0;
    }
L_08B581D0:
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[8];
    aot_gpr_7 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B581EC;
      }
      goto L_08B581D8;
    }
L_08B581D8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B58190;
      }
      goto L_08B581E8;
    }
L_08B581E8:
    aot_gpr_7 = (aot_gpr_5 | 0u);
    goto L_08B581EC;
L_08B581EC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (ctx.gpr[8] & 1u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08B58210;
      }
      goto L_08B58208;
    }
L_08B58208:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B58210;
      }
      goto L_08B58210;
    }
L_08B58210:
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_2 = (aot_gpr_5 - aot_gpr_4);
      if (branch_taken) {
          goto L_08B58230;
      }
      goto L_08B58224;
    }
L_08B58224:
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_5 - aot_gpr_2);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58230:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58238:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_2 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_7 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58258;
      }
      goto L_08B58248;
    }
L_08B58248:
    aot_gpr_4 = (aot_gpr_7 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_7 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58248;
      }
      goto L_08B58258;
    }
L_08B58258:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_5 = (aot_gpr_6 | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_4 = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08B5828C;
      }
      goto L_08B58270;
    }
L_08B58270:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_7 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_6 | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_4 = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08B58270;
      }
      goto L_08B5828C;
    }
L_08B5828C:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58294:
    aot_gpr_2 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    goto L_08B582A0;
L_08B582A0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B582BC;
      }
      goto L_08B582A8;
    }
L_08B582A8:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B582BC;
      }
      goto L_08B582B0;
    }
L_08B582B0:
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B582A0;
      }
      goto L_08B582BC;
    }
L_08B582BC:
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_2 = (0u | 0u);
        goto L_08B582C4;
    }
    goto L_08B582C4;
L_08B582C4:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B582CC:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    goto L_08B582D0;
L_08B582D0:
    if (aot_gpr_6 == 0u) {
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08B582F4;
    }
    goto L_08B582D8;
L_08B582D8:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    if (aot_gpr_6 != aot_gpr_7) {
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08B582F4;
    }
    goto L_08B582E4;
L_08B582E4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B582D0;
      }
      goto L_08B582F4;
    }
L_08B582F4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_2 - aot_gpr_4);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58300:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B58310u);
    goto L_08B582CC;
L_08B58310:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5831C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_2 = (aot_gpr_4 | 0u);
    aot_gpr_7 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_7 | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B58358;
      }
      goto L_08B5833C;
    }
L_08B5833C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_7 | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B5833C;
      }
      goto L_08B58358;
    }
L_08B58358:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58360:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B583A0;
      }
      goto L_08B5836C;
    }
L_08B5836C:
    aot_gpr_7 = (aot_gpr_5 | 0u);
    goto L_08B58370;
L_08B58370:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B58394;
    }
    goto L_08B5837C;
L_08B5837C:
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_6;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B583A0;
      }
      goto L_08B58384;
    }
L_08B58384:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08B5837C;
      }
      goto L_08B58390;
    }
L_08B58390:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_08B58394;
L_08B58394:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_7 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B58370;
      }
      goto L_08B583A0;
    }
L_08B583A0:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_4 - ctx.gpr[9]);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B583A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(113) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B58950;
      }
      goto L_08B583C0;
    }
L_08B583C0:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27176)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B583D8:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28752));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B583EC:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28740));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58400:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28712));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58414:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28696));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58428:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28672));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5843C:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28660));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58450:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28632));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58464:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28612));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58478:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28592));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5848C:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28576));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B584A0:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28564));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B584B4:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28544));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B584C8:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28524));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B584DC:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28504));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B584F0:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28492));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58504:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28468));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58518:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28444));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5852C:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28432));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58540:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28412));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58554:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28396));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58568:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28380));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5857C:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28364));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58590:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28344));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B585A4:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28312));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B585B8:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28292));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B585CC:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28268));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B585E0:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28252));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B585F4:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28236));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58608:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28212));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5861C:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28196));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58630:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28172));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58644:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28156));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58658:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28144));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5866C:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28128));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58680:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28108));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58694:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28080));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B586A8:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28060));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B586BC:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28048));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B586D0:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28040));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B586E4:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28024));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B586F8:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-28000));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5870C:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27980));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58720:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27948));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58734:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27936));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58748:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27916));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5875C:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27892));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58770:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27876));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58784:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27860));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58798:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27840));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B587AC:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27824));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B587C0:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27804));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B587D4:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27792));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B587E8:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27752));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B587FC:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27712));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58810:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27680));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58824:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27616));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58838:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27576));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5884C:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27548));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58860:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27532));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58874:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27512));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58888:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27484));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5889C:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27460));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B588B0:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27432));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B588C4:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27384));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B588D8:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27352));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B588EC:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27320));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58900:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27296));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58914:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27260));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58928:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27240));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5893C:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27216));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58950:
    ctx.gpr[31] = (0x08B58958u);
    goto L_08B59F44;
L_08B58958:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08B58968;
      }
      goto L_08B58960;
    }
L_08B58960:
    aot_gpr_2 = (2233u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-27180));
    goto L_08B58968;
L_08B58968:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58974:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B58990;
      }
      goto L_08B58980;
    }
L_08B58980:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_08B58984;
L_08B58984:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B58984;
    }
    goto L_08B58990;
L_08B58990:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_4 - aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58998:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_2 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B589F0;
      }
      goto L_08B589A4;
    }
L_08B589A4:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(14520));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_5);
    goto L_08B589B4;
L_08B589B4:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_gpr_7 & 1u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_5);
      if (branch_taken) {
          goto L_08B589E0;
      }
      goto L_08B589C4;
    }
L_08B589C4:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_gpr_7 & 1u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08B589DC;
      }
      goto L_08B589D4;
    }
L_08B589D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B589DC;
      }
      goto L_08B589DC;
    }
L_08B589DC:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B589E0;
L_08B589E0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_5);
      if (branch_taken) {
          goto L_08B589B4;
      }
      goto L_08B589F0;
    }
L_08B589F0:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B589F8:
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_7 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B58A10;
      }
      goto L_08B58A00;
    }
L_08B58A00:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(14520));
    aot_gpr_2 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58A18;
      }
      goto L_08B58A10;
    }
L_08B58A10:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58A18:
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_6 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08B58A94;
      }
      goto L_08B58A24;
    }
L_08B58A24:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_gpr_7 + ctx.gpr[11]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B58A44;
      }
      goto L_08B58A3C;
    }
L_08B58A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B58A48;
      }
      goto L_08B58A44;
    }
L_08B58A44:
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    goto L_08B58A48;
L_08B58A48:
    ctx.gpr[8] = (aot_gpr_7 + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08B58A64;
      }
      goto L_08B58A5C;
    }
L_08B58A5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B58A64;
      }
      goto L_08B58A64;
    }
L_08B58A64:
    if (ctx.gpr[10] != ctx.gpr[8]) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08B58A98;
    }
    goto L_08B58A6C;
L_08B58A6C:
    if (aot_gpr_2 == 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08B58A98;
    }
    goto L_08B58A74;
L_08B58A74:
    if (ctx.gpr[11] == 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08B58A98;
    }
    goto L_08B58A7C;
L_08B58A7C:
    if (ctx.gpr[9] == 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08B58A98;
    }
    goto L_08B58A84;
L_08B58A84:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58A18;
      }
      goto L_08B58A94;
    }
L_08B58A94:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    goto L_08B58A98;
L_08B58A98:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_7 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[8] & 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B58ABC;
      }
      goto L_08B58AB4;
    }
L_08B58AB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B58ABC;
      }
      goto L_08B58ABC;
    }
L_08B58ABC:
    aot_gpr_6 = (aot_gpr_7 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_2 = (aot_gpr_5 - aot_gpr_4);
      if (branch_taken) {
          goto L_08B58ADC;
      }
      goto L_08B58AD0;
    }
L_08B58AD0:
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_5 - aot_gpr_2);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58ADC:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58AE4:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_2 = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58B04;
      }
      goto L_08B58AF4;
    }
L_08B58AF4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_08B58AF8;
L_08B58AF8:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[8] != 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B58AF8;
    }
    goto L_08B58B04;
L_08B58B04:
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_6 = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08B58B34;
      }
      goto L_08B58B10;
    }
L_08B58B10:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58B34;
      }
      goto L_08B58B24;
    }
L_08B58B24:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_7 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58B04;
      }
      goto L_08B58B2C;
    }
L_08B58B2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B58B04;
      }
      goto L_08B58B34;
    }
L_08B58B34:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58B3C:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B58B4C;
      }
      goto L_08B58B44;
    }
L_08B58B44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58B54;
      }
      goto L_08B58B4C;
    }
L_08B58B4C:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58B54:
    aot_gpr_7 = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_6 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B58B90;
      }
      goto L_08B58B60;
    }
L_08B58B60:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    if (aot_gpr_7 != ctx.gpr[9]) {
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08B58B94;
    }
    goto L_08B58B70;
L_08B58B70:
    if (ctx.gpr[8] == 0u) {
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08B58B94;
    }
    goto L_08B58B78;
L_08B58B78:
    if (aot_gpr_7 == 0u) {
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08B58B94;
    }
    goto L_08B58B80;
L_08B58B80:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58B54;
      }
      goto L_08B58B90;
    }
L_08B58B90:
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B58B94;
L_08B58B94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_2 - aot_gpr_4);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58BA0:
    aot_gpr_7 = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58BD4;
      }
      goto L_08B58BB0;
    }
L_08B58BB0:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    goto L_08B58BB4;
L_08B58BB4:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B58BD4;
      }
      goto L_08B58BCC;
    }
L_08B58BCC:
    if (aot_gpr_6 != 0u) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
        goto L_08B58BB4;
    }
    goto L_08B58BD4;
L_08B58BD4:
    aot_gpr_7 = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B58BF8;
      }
      goto L_08B58BE0;
    }
L_08B58BE0:
    aot_gpr_7 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B58BE0;
      }
      goto L_08B58BF8;
    }
L_08B58BF8:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58C00:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_7 != 0u;
    ctx.gpr[8] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B58C14;
      }
      goto L_08B58C0C;
    }
L_08B58C0C:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58C14:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B58C3C;
    }
    goto L_08B58C20;
L_08B58C20:
    if (aot_gpr_7 == aot_gpr_6) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
        goto L_08B58C4C;
    }
    goto L_08B58C28;
L_08B58C28:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08B58C20;
      }
      goto L_08B58C38;
    }
L_08B58C38:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_08B58C3C;
L_08B58C3C:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    if (aot_gpr_7 != 0u) {
    ctx.gpr[8] = (aot_gpr_5 | 0u);
        goto L_08B58C14;
    }
    goto L_08B58C48;
L_08B58C48:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    goto L_08B58C4C;
L_08B58C4C:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08B58C54;
    }
    goto L_08B58C54;
L_08B58C54:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58C5C:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_7 = (0u | 0u);
      if (branch_taken) {
          goto L_08B58C80;
      }
      goto L_08B58C68;
    }
L_08B58C68:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_2 = (0u | 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_2 = (aot_gpr_4 | 0u);
        goto L_08B58C78;
    }
    goto L_08B58C78;
L_08B58C78:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58C80:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    goto L_08B58C84;
L_08B58C84:
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_7);
      if (branch_taken) {
          goto L_08B58CA4;
      }
      goto L_08B58C8C;
    }
L_08B58C8C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[8];
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58CAC;
      }
      goto L_08B58C98;
    }
L_08B58C98:
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_7);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B58C84;
      }
      goto L_08B58CA4;
    }
L_08B58CA4:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58CAC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_7 = (0u | 0u);
      if (branch_taken) {
          goto L_08B58C80;
      }
      goto L_08B58CBC;
    }
L_08B58CBC:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58CC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_4);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[9]);
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    ctx.gpr[9] = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16444)));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16440)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    ctx.gpr[23] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[8]);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[12] = (0u | 0u);
    aot_gpr_2 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_7);
    { const std::uint32_t aot_run_words[7]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    goto L_08B58D50;
L_08B58D50:
    aot_gpr_7 = (aot_gpr_4 < static_cast<std::uint32_t>(46) ? 1u : 0u);
    if (aot_gpr_7 == 0u) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
        goto L_08B58DA0;
    }
    goto L_08B58D5C;
L_08B58D5C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26720)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B58D74:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_2);
    goto L_08B58D78;
L_08B58D78:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
        goto L_08B58DA0;
    }
    goto L_08B58D88;
L_08B58D88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B59D7C;
      }
      goto L_08B58D90;
    }
L_08B58D90:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B58D50;
      }
      goto L_08B58D9C;
    }
L_08B58D9C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    goto L_08B58DA0;
L_08B58DA0:
    aot_gpr_7 = (0u | 48u);
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_7;
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08B58DDC;
      }
      goto L_08B58DAC;
    }
L_08B58DAC:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_7;
    ctx.gpr[12] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08B58DCC;
      }
      goto L_08B58DBC;
    }
L_08B58DBC:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08B58DC0;
L_08B58DC0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr_4 == aot_gpr_7) {
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
        goto L_08B58DC0;
    }
    goto L_08B58DCC;
L_08B58DCC:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[8] == 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
        goto L_08B59D80;
    }
    goto L_08B58DD8;
L_08B58DD8:
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    goto L_08B58DDC;
L_08B58DDC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[8]) < 48 ? 1u : 0u);
    goto L_08B58DF0;
L_08B58DF0:
    ctx.gpr[9] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_4 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B58E58;
      }
      goto L_08B58DFC;
    }
L_08B58DFC:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 58 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u | 46u);
      if (branch_taken) {
          goto L_08B58E5C;
      }
      goto L_08B58E08;
    }
L_08B58E08:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B58E2C;
      }
      goto L_08B58E14;
    }
L_08B58E14:
    aot_gpr_4 = (ctx.gpr[19] << 3u);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_4 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_08B58E44;
      }
      goto L_08B58E2C;
    }
L_08B58E2C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_08B58E44;
      }
      goto L_08B58E34;
    }
L_08B58E34:
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    ctx.gpr[16] = (aot_gpr_4 + ctx.gpr[8]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    goto L_08B58E44;
L_08B58E44:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[8]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B58DF0;
      }
      goto L_08B58E58;
    }
L_08B58E58:
    ctx.gpr[9] = (0u | 46u);
    goto L_08B58E5C;
L_08B58E5C:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B58F8C;
      }
      goto L_08B58E64;
    }
L_08B58E64:
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_4 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B58EC0;
      }
      goto L_08B58E78;
    }
L_08B58E78:
    if (ctx.gpr[8] != aot_gpr_7) {
    aot_gpr_7 = (static_cast<std::int32_t>(ctx.gpr[8]) < 49 ? 1u : 0u);
        goto L_08B58E9C;
    }
    goto L_08B58E80;
L_08B58E80:
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_7;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58E80;
      }
      goto L_08B58E98;
    }
L_08B58E98:
    aot_gpr_7 = (static_cast<std::int32_t>(ctx.gpr[8]) < 49 ? 1u : 0u);
    goto L_08B58E9C;
L_08B58E9C:
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_7 = (0u | 101u);
      if (branch_taken) {
          goto L_08B58F90;
      }
      goto L_08B58EA4;
    }
L_08B58EA4:
    aot_gpr_7 = (static_cast<std::int32_t>(ctx.gpr[8]) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_7 = (0u | 101u);
      if (branch_taken) {
          goto L_08B58F90;
      }
      goto L_08B58EB0;
    }
L_08B58EB0:
    ctx.gpr[11] = (aot_gpr_6 | 0u);
    ctx.gpr[21] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08B58ED8;
      }
      goto L_08B58EC0;
    }
L_08B58EC0:
    aot_gpr_7 = (static_cast<std::int32_t>(ctx.gpr[8]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_7 = (0u | 101u);
      if (branch_taken) {
          goto L_08B58F90;
      }
      goto L_08B58ECC;
    }
L_08B58ECC:
    aot_gpr_7 = (static_cast<std::int32_t>(ctx.gpr[8]) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_7 = (0u | 101u);
      if (branch_taken) {
          goto L_08B58F90;
      }
      goto L_08B58ED8;
    }
L_08B58ED8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58F7C;
      }
      goto L_08B58EE4;
    }
L_08B58EE4:
    aot_gpr_7 = (aot_gpr_2 | 0u);
    ctx.gpr[11] = (ctx.gpr[11] + aot_gpr_6);
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58F3C;
      }
      goto L_08B58EF8;
    }
L_08B58EF8:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    goto L_08B58EFC;
L_08B58EFC:
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58F18;
      }
      goto L_08B58F08;
    }
L_08B58F08:
    ctx.gpr[9] = (ctx.gpr[19] << 3u);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B58F2C;
      }
      goto L_08B58F18;
    }
L_08B58F18:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[18]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_08B58F2C;
      }
      goto L_08B58F24;
    }
L_08B58F24:
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[9]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[9]);
    goto L_08B58F2C;
L_08B58F2C:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B58EFC;
      }
      goto L_08B58F3C;
    }
L_08B58F3C:
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[18] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B58F5C;
      }
      goto L_08B58F48;
    }
L_08B58F48:
    aot_gpr_4 = (ctx.gpr[19] << 3u);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B58F78;
      }
      goto L_08B58F5C;
    }
L_08B58F5C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08B58F7C;
      }
      goto L_08B58F68;
    }
L_08B58F68:
    aot_gpr_4 = (ctx.gpr[16] << 3u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    ctx.gpr[16] = (ctx.gpr[16] + aot_gpr_4);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[8]);
    goto L_08B58F78;
L_08B58F78:
    aot_gpr_6 = (0u | 0u);
    goto L_08B58F7C;
L_08B58F7C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B58EC0;
      }
      goto L_08B58F8C;
    }
L_08B58F8C:
    aot_gpr_7 = (0u | 101u);
    goto L_08B58F90;
L_08B58F90:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_7;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08B58FA4;
      }
      goto L_08B58F98;
    }
L_08B58F98:
    aot_gpr_7 = (0u | 69u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_7;
      if (branch_taken) {
          goto L_08B590BC;
      }
      goto L_08B58FA4;
    }
L_08B58FA4:
    aot_gpr_4 = (ctx.gpr[18] | aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[12]);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (ctx.gpr[23] | 0u);
        goto L_08B58FBC;
    }
    goto L_08B58FB4;
L_08B58FB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B59D7C;
      }
      goto L_08B58FBC;
    }
L_08B58FBC:
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 44 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08B58FE8;
      }
      goto L_08B58FD4;
    }
L_08B58FD4:
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 43 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B59008;
      }
      goto L_08B58FE0;
    }
L_08B58FE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B58FFC;
      }
      goto L_08B58FE8;
    }
L_08B58FE8:
    aot_gpr_7 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_7;
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B59008;
      }
      goto L_08B58FF4;
    }
L_08B58FF4:
    ctx.gpr[3] = (aot_gpr_2 | 0u);
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08B58FFC;
L_08B58FFC:
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 48 ? 1u : 0u);
    goto L_08B59008;
L_08B59008:
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B590B8;
      }
      goto L_08B59010;
    }
L_08B59010:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_7 = (0u | 48u);
      if (branch_taken) {
          goto L_08B590B8;
      }
      goto L_08B59018;
    }
L_08B59018:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_7;
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5903C;
      }
      goto L_08B59020;
    }
L_08B59020:
    aot_gpr_7 = (0u | 48u);
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08B59028;
L_08B59028:
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr_4 == aot_gpr_7) {
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
        goto L_08B59028;
    }
    goto L_08B59038;
L_08B59038:
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
    goto L_08B5903C;
L_08B5903C:
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B590B0;
      }
      goto L_08B59044;
    }
L_08B59044:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_2 = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08B590B0;
      }
      goto L_08B5904C;
    }
L_08B5904C:
    ctx.gpr[10] = (aot_gpr_4 + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08B59054;
L_08B59054:
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B59088;
      }
      goto L_08B59068;
    }
L_08B59068:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_7 = (ctx.gpr[10] << 3u);
      if (branch_taken) {
          goto L_08B59088;
      }
      goto L_08B59070;
    }
L_08B59070:
    aot_gpr_7 = (ctx.gpr[10] + aot_gpr_7);
    aot_gpr_7 = (ctx.gpr[10] + aot_gpr_7);
    ctx.gpr[10] = (aot_gpr_7 + aot_gpr_4);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B59054;
      }
      goto L_08B59088;
    }
L_08B59088:
    aot_gpr_4 = (ctx.gpr[9] - aot_gpr_2);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B590A0;
      }
      goto L_08B59098;
    }
L_08B59098:
    ctx.gpr[10] = (153u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-27009));
    goto L_08B590A0;
L_08B590A0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
      if (branch_taken) {
          goto L_08B590BC;
      }
      goto L_08B590A8;
    }
L_08B590A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u - ctx.gpr[10]);
      if (branch_taken) {
          goto L_08B590BC;
      }
      goto L_08B590B0;
    }
L_08B590B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08B590BC;
      }
      goto L_08B590B8;
    }
L_08B590B8:
    ctx.gpr[23] = (aot_gpr_5 | 0u);
    goto L_08B590BC;
L_08B590BC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[30] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B590D8;
      }
      goto L_08B590C4;
    }
L_08B590C4:
    aot_gpr_4 = (aot_gpr_6 | ctx.gpr[12]);
    if (aot_gpr_4 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
        goto L_08B59D80;
    }
    goto L_08B590D0;
L_08B590D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B59D7C;
      }
      goto L_08B590D8;
    }
L_08B590D8:
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
        goto L_08B590E4;
    }
    goto L_08B590E4;
L_08B590E4:
    ctx.gpr[17] = (0u | 16u);
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
        goto L_08B590F0;
    }
    goto L_08B590F0;
L_08B590F0:
    ctx.gpr[31] = (0x08B590F8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 351u, 0x08B553F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B590F8u) goto L_08B590F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B590F8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
      if (branch_taken) {
          goto L_08B59168;
      }
      goto L_08B59108;
    }
L_08B59108:
    aot_gpr_5 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[17] << 3u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16992));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-68)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-72)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08B59134u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59134u) goto L_08B59134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59134:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[31] = (0x08B59144u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 351u, 0x08B553F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59144u) goto L_08B59144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59144:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59158u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61EF4, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59158u) goto L_08B59158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59158:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    goto L_08B59168;
L_08B59168:
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_4);
      if (branch_taken) {
          goto L_08B59284;
      }
      goto L_08B59174;
    }
L_08B59174:
    if (ctx.gpr[30] == 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
        goto L_08B59D80;
    }
    goto L_08B5917C;
L_08B5917C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) <= 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < -22 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B59244;
      }
      goto L_08B59184;
    }
L_08B59184:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < 23 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 15u);
      if (branch_taken) {
          goto L_08B591D0;
      }
      goto L_08B59190;
    }
L_08B59190:
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_4 = (ctx.gpr[30] << 3u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16992));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_7 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B591C4u);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B591C4u) goto L_08B591C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B591C4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
      if (branch_taken) {
          goto L_08B59D7C;
      }
      goto L_08B591D0;
    }
L_08B591D0:
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[18]);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(22));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B59288;
      }
      goto L_08B591E4;
    }
L_08B591E4:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_4 << 3u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_gpr_6 + static_cast<std::uint32_t>(16992));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[16]);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[30] - aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B59214u);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59214u) goto L_08B59214;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59214:
    aot_gpr_4 = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59238u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59238u) goto L_08B59238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59238:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
      if (branch_taken) {
          goto L_08B59D7C;
      }
      goto L_08B59244;
    }
L_08B59244:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B59288;
      }
      goto L_08B5924C;
    }
L_08B5924C:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-8));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16992));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_7 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_7 + aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B59278u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 326u, 0x08B59278u, 0x08B62348u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 445u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 445u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59278u) goto L_08B59278;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59278:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
      if (branch_taken) {
          goto L_08B59D7C;
      }
      goto L_08B59284;
    }
L_08B59284:
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    goto L_08B59288;
L_08B59288:
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08B593E8;
      }
      goto L_08B59294;
    }
L_08B59294:
    aot_gpr_4 = (ctx.gpr[17] & 15u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (ctx.gpr[17] & ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B592DC;
      }
      goto L_08B592A0;
    }
L_08B592A0:
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16992));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_7 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B592D4u);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B592D4u) goto L_08B592D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B592D4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
    goto L_08B592DC;
L_08B592DC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 309 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5957C;
      }
      goto L_08B592E4;
    }
L_08B592E4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 4u));
      if (branch_taken) {
          goto L_08B59320;
      }
      goto L_08B592EC;
    }
L_08B592EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    goto L_08B592F0;
L_08B592F0:
    aot_gpr_5 = (0u | 34u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16956)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16952)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B59314;
    }
L_08B59314:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08B59D80;
      }
      goto L_08B5931C;
    }
L_08B5931C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 4u));
    goto L_08B59320;
L_08B59320:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5957C;
      }
      goto L_08B59328;
    }
L_08B59328:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17192));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (848u << 16u);
      if (branch_taken) {
          goto L_08B59378;
      }
      goto L_08B59338;
    }
L_08B59338:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    goto L_08B59340;
L_08B59340:
    aot_gpr_6 = (ctx.gpr[16] & 1u);
    if (aot_gpr_6 == 0u) {
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
        goto L_08B59364;
    }
    goto L_08B5934C;
L_08B5934C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B59358u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59358u) goto L_08B59358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59358:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    goto L_08B59364;
L_08B59364:
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B59340;
      }
      goto L_08B59370;
    }
L_08B59370:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    goto L_08B59378;
L_08B59378:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08B59398u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59398u) goto L_08B59398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59398:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (32752u << 16u);
    ctx.gpr[17] = (aot_gpr_4 & ctx.gpr[17]);
    aot_gpr_5 = (31904u << 16u);
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (31888u << 16u);
      if (branch_taken) {
          goto L_08B592EC;
      }
      goto L_08B593BC;
    }
L_08B593BC:
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B593E0;
      }
      goto L_08B593C8;
    }
L_08B593C8:
    aot_gpr_4 = (32752u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_5);
      if (branch_taken) {
          goto L_08B5957C;
      }
      goto L_08B593E0;
    }
L_08B593E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5957C;
      }
      goto L_08B593E8;
    }
L_08B593E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[16] = (0u - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B5957C;
      }
      goto L_08B593F0;
    }
L_08B593F0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[17] = (ctx.gpr[16] & 15u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & aot_gpr_4);
      if (branch_taken) {
          goto L_08B5943C;
      }
      goto L_08B59400;
    }
L_08B59400:
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_4 = (ctx.gpr[17] << 3u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16992));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_7 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B59434u);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 354u, 0x08B59434u, 0x08B62348u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 445u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 445u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59434u) goto L_08B59434;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59434:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
    goto L_08B5943C;
L_08B5943C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 4u));
      if (branch_taken) {
          goto L_08B5957C;
      }
      goto L_08B59444;
    }
L_08B59444:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59544;
      }
      goto L_08B59450;
    }
L_08B59450:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (2234u << 16u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17232));
      if (branch_taken) {
          goto L_08B594A0;
      }
      goto L_08B59468;
    }
L_08B59468:
    aot_gpr_6 = (ctx.gpr[16] & 1u);
    if (aot_gpr_6 == 0u) {
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
        goto L_08B5948C;
    }
    goto L_08B59474;
L_08B59474:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B59480u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59480u) goto L_08B59480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59480:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    goto L_08B5948C;
L_08B5948C:
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B59468;
      }
      goto L_08B59498;
    }
L_08B59498:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    goto L_08B594A0;
L_08B594A0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B594BCu);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B594BCu) goto L_08B594BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B594BC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16444)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16440)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B594DCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B594DCu) goto L_08B594DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B594DC:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
        goto L_08B59580;
    }
    goto L_08B594E4;
L_08B594E4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16452)));
    ctx.gpr[31] = (0x08B594FCu);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16448)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B594FCu) goto L_08B594FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B594FC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59518u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59518u) goto L_08B59518;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59518:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16444)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16440)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59538u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59538u) goto L_08B59538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59538:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B59574;
      }
      goto L_08B59540;
    }
L_08B59540:
    aot_gpr_4 = (2234u << 16u);
    goto L_08B59544;
L_08B59544:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16444)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16440)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_7 = (0u | 34u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_7);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B59568;
    }
L_08B59568:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08B59D80;
      }
      goto L_08B59570;
    }
L_08B59570:
    aot_gpr_4 = (0u | 1u);
    goto L_08B59574;
L_08B59574:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    goto L_08B5957C;
L_08B5957C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    goto L_08B59580;
L_08B59580:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B59598u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 377u, 0x08B59598u, 0x08B5F634u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 749u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 749u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 749u, 0x08B5F634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59598u) goto L_08B59598;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59598:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_2);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(12));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (0u - ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_6);
    goto L_08B595C0;
L_08B595C0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x08B595CCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 379u, 0x08B595CCu, 0x08B5F43Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 726u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 726u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 726u, 0x08B5F43Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B595CCu) goto L_08B595CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B595CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_2);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(12));
    aot_gpr_6 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x08B595ECu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 380u, 0x08B595ECu, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B595ECu) goto L_08B595EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B595EC:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08B59604u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 381u, 0x08B59604u, 0x08B6012Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 13u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 13u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 13u, 0x08B6012Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59604u) goto L_08B59604;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59604:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_2);
    ctx.gpr[31] = (0x08B59614u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 382u, 0x08B59614u, 0x08B5F894u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 793u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 793u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 793u, 0x08B5F894u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59614u) goto L_08B59614;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59614:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08B59648;
      }
      goto L_08B59634;
    }
L_08B59634:
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B59658;
      }
      goto L_08B59648;
    }
L_08B59648:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08B59658;
L_08B59658:
    if (static_cast<std::int32_t>(aot_gpr_4) < 0) {
    ctx.gpr[17] = (ctx.gpr[17] - aot_gpr_4);
        goto L_08B59668;
    }
    goto L_08B59660;
L_08B59660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + aot_gpr_4);
      if (branch_taken) {
          goto L_08B59668;
      }
      goto L_08B59668;
    }
L_08B59668:
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < -1022 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B59684;
      }
      goto L_08B5967C;
    }
L_08B5967C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1075));
      if (branch_taken) {
          goto L_08B5968C;
      }
      goto L_08B59684;
    }
L_08B59684:
    aot_gpr_4 = (0u | 54u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    goto L_08B5968C;
L_08B5968C:
    ctx.gpr[16] = (ctx.gpr[16] + aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[16] | 0u);
        goto L_08B596A4;
    }
    goto L_08B596A4;
L_08B596A4:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[18] | 0u);
        goto L_08B596B0;
    }
    goto L_08B596B0;
L_08B596B0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08B596C4;
      }
      goto L_08B596B8;
    }
L_08B596B8:
    ctx.gpr[16] = (ctx.gpr[16] - aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] - aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] - aot_gpr_4);
    goto L_08B596C4;
L_08B596C4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B596FC;
      }
      goto L_08B596CC;
    }
L_08B596CC:
    ctx.gpr[31] = (0x08B596D4u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 396u, 0x08B596D4u, 0x08B5FADCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 818u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 818u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 818u, 0x08B5FADCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B596D4u) goto L_08B596D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B596D4:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08B596ECu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 397u, 0x08B596ECu, 0x08B5F8D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 795u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 795u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 795u, 0x08B5F8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B596ECu) goto L_08B596EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B596EC:
    ctx.gpr[30] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B596FCu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 398u, 0x08B596FCu, 0x08B5F500u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B596FCu) goto L_08B596FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B596FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08B59718;
      }
      goto L_08B59704;
    }
L_08B59704:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08B59714u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 400u, 0x08B59714u, 0x08B5FBF0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 835u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 835u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 835u, 0x08B5FBF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59714u) goto L_08B59714;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59714:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_2);
    goto L_08B59718;
L_08B59718:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B59730;
      }
      goto L_08B59720;
    }
L_08B59720:
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5972Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 403u, 0x08B5972Cu, 0x08B5FADCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 818u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 818u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 818u, 0x08B5FADCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5972Cu) goto L_08B5972C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5972C:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    goto L_08B59730;
L_08B59730:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B59748;
      }
      goto L_08B59738;
    }
L_08B59738:
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B59744u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 406u, 0x08B59744u, 0x08B5FBF0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 835u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 835u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 835u, 0x08B5FBF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59744u) goto L_08B59744;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59744:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    goto L_08B59748;
L_08B59748:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B59760;
      }
      goto L_08B59750;
    }
L_08B59750:
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5975Cu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 409u, 0x08B5975Cu, 0x08B5FBF0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 835u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 835u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 835u, 0x08B5FBF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5975Cu) goto L_08B5975C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5975C:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    goto L_08B59760;
L_08B59760:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B59778u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 411u, 0x08B59778u, 0x08B5FDACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 857u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 857u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 857u, 0x08B5FDACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59778u) goto L_08B59778;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59778:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    ctx.gpr[30] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B59794u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 412u, 0x08B59794u, 0x08B5FD24u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 848u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 848u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 848u, 0x08B5FD24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59794u) goto L_08B59794;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59794:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08B59800;
      }
      goto L_08B597A0;
    }
L_08B597A0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B597AC;
    }
L_08B597AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
        goto L_08B59D40;
    }
    goto L_08B597B8;
L_08B597B8:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (ctx.gpr[21] & aot_gpr_4);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
        goto L_08B59D40;
    }
    goto L_08B597D0;
L_08B597D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B597E0u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 417u, 0x08B597E0u, 0x08B5FBF0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 835u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 835u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 835u, 0x08B5FBF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B597E0u) goto L_08B597E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B597E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_2);
    ctx.gpr[31] = (0x08B597F0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 418u, 0x08B597F0u, 0x08B5FD24u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 848u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 848u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 848u, 0x08B5FD24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B597F0u) goto L_08B597F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B597F0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
    aot_gpr_4 = (32752u << 16u);
      if (branch_taken) {
          goto L_08B59868;
      }
      goto L_08B597F8;
    }
L_08B597F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08B59D40;
      }
      goto L_08B59800;
    }
L_08B59800:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B59930;
      }
      goto L_08B59808;
    }
L_08B59808:
    aot_gpr_4 = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_gpr_4 = (ctx.gpr[21] & aot_gpr_4);
      if (branch_taken) {
          goto L_08B59854;
      }
      goto L_08B5981C;
    }
L_08B5981C:
    aot_gpr_6 = (16u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_5 & 1u);
      if (branch_taken) {
          goto L_08B59890;
      }
      goto L_08B5982C;
    }
L_08B5982C:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_5 & 1u);
      if (branch_taken) {
          goto L_08B59890;
      }
      goto L_08B59838;
    }
L_08B59838:
    aot_gpr_4 = (32752u << 16u);
    aot_gpr_4 = (ctx.gpr[21] & aot_gpr_4);
    aot_gpr_5 = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B59854;
    }
L_08B59854:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 1u);
      if (branch_taken) {
          goto L_08B59890;
      }
      goto L_08B5985C;
    }
L_08B5985C:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 1u);
      if (branch_taken) {
          goto L_08B59890;
      }
      goto L_08B59864;
    }
L_08B59864:
    aot_gpr_4 = (32752u << 16u);
    goto L_08B59868;
L_08B59868:
    aot_gpr_4 = (ctx.gpr[21] & aot_gpr_4);
    aot_gpr_5 = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (16u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_6);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B59890;
    }
L_08B59890:
    if (aot_gpr_4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
        goto L_08B59D40;
    }
    goto L_08B59898;
L_08B59898:
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
        goto L_08B598D4;
    }
    goto L_08B598A0;
L_08B598A0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B598B4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 432u, 0x08B598B4u, 0x08B5FF5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 873u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 873u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 873u, 0x08B5FF5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B598B4u) goto L_08B598B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B598B4:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B598C8u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61EF4, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B598C8u) goto L_08B598C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B598C8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B598D4;
    }
L_08B598D4:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16444)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16440)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B598F0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 435u, 0x08B598F0u, 0x08B5FF5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 873u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 873u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 873u, 0x08B5FF5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B598F0u) goto L_08B598F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B598F0:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59904u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 436u, 0x08B59904u, 0x08B61F5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 395u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 395u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59904u) goto L_08B59904;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59904:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B59920u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59920u) goto L_08B59920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59920:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59544;
      }
      goto L_08B59928;
    }
L_08B59928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08B59D40;
      }
      goto L_08B59930;
    }
L_08B59930:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08B5993Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 440u, 0x08B5993Cu, 0x08B6026Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 29u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 29u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 29u, 0x08B6026Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5993Cu) goto L_08B5993C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5993C:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16452)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16448)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5995Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5995Cu) goto L_08B5995C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5995C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
    aot_gpr_5 = (32752u << 16u);
      if (branch_taken) {
          goto L_08B59A40;
      }
      goto L_08B59964;
    }
L_08B59964:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59984;
      }
      goto L_08B5996C;
    }
L_08B5996C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16460)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16456)));
    ctx.gpr[20] = (ctx.gpr[21] & aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B59A90;
      }
      goto L_08B59984;
    }
L_08B59984:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (0u | 1u);
      if (branch_taken) {
          goto L_08B599A8;
      }
      goto L_08B59990;
    }
L_08B59990:
    aot_gpr_6 = (16u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (ctx.gpr[21] & aot_gpr_6);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (2234u << 16u);
        goto L_08B599D8;
    }
    goto L_08B599A4;
L_08B599A4:
    aot_gpr_6 = (0u | 1u);
    goto L_08B599A8;
L_08B599A8:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B599BC;
      }
      goto L_08B599B0;
    }
L_08B599B0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59544;
      }
      goto L_08B599B8;
    }
L_08B599B8:
    aot_gpr_4 = (2234u << 16u);
    goto L_08B599BC;
L_08B599BC:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16460)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16456)));
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16468)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16464)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[21] & aot_gpr_5);
      if (branch_taken) {
          goto L_08B59A90;
      }
      goto L_08B599D8;
    }
L_08B599D8:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16460)));
    ctx.gpr[20] = (32752u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16456)));
    ctx.gpr[20] = (ctx.gpr[21] & ctx.gpr[20]);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B599F4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B599F4u) goto L_08B599F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B599F4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59A0C;
      }
      goto L_08B599FC;
    }
L_08B599FC:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16476)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16472)));
      if (branch_taken) {
          goto L_08B59A28;
      }
      goto L_08B59A0C;
    }
L_08B59A0C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16476)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16472)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59A20u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59A20u) goto L_08B59A20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59A20:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_08B59A28;
L_08B59A28:
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B59A34u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 457u, 0x08B59A34u, 0x08B62778u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 510u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 510u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 510u, 0x08B62778u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59A34u) goto L_08B59A34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59A34:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08B59A90;
      }
      goto L_08B59A40;
    }
L_08B59A40:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16476)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16472)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59A58u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59A58u) goto L_08B59A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59A58:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[20] = (32752u << 16u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[20] = (ctx.gpr[21] & ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B59A88;
      }
      goto L_08B59A74;
    }
L_08B59A74:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B59A80u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 461u, 0x08B59A80u, 0x08B62778u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 510u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 510u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 510u, 0x08B62778u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59A80u) goto L_08B59A80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59A80:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_08B59A88;
L_08B59A88:
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    goto L_08B59A90;
L_08B59A90:
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (32736u << 16u);
    { const bool branch_taken = ctx.gpr[22] != aot_gpr_4;
    aot_gpr_4 = (832u << 16u);
      if (branch_taken) {
          goto L_08B59B6C;
      }
      goto L_08B59AA0;
    }
L_08B59AA0:
    aot_gpr_4 = (848u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (ctx.gpr[21] - aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B59AD0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 465u, 0x08B59AD0u, 0x08B5FF5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 873u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 873u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 873u, 0x08B5FF5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59AD0u) goto L_08B59AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59AD0:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59AE4u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59AE4u) goto L_08B59AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59AE4:
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59AF8u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61EF4, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59AF8u) goto L_08B59AF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59AF8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (32752u << 16u);
    aot_gpr_4 = (ctx.gpr[21] & aot_gpr_4);
    aot_gpr_5 = (31904u << 16u);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (848u << 16u);
      if (branch_taken) {
          goto L_08B59B58;
      }
      goto L_08B59B1C;
    }
L_08B59B1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (32752u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_5 = (32752u << 16u);
      if (branch_taken) {
          goto L_08B59B44;
      }
      goto L_08B59B30;
    }
L_08B59B30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
        goto L_08B592F0;
    }
    goto L_08B59B40;
L_08B59B40:
    aot_gpr_5 = (32752u << 16u);
    goto L_08B59B44;
L_08B59B44:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
      if (branch_taken) {
          goto L_08B59CEC;
      }
      goto L_08B59B58;
    }
L_08B59B58:
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (32752u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[21] & aot_gpr_4);
      if (branch_taken) {
          goto L_08B59C2C;
      }
      goto L_08B59B6C;
    }
L_08B59B6C:
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59BDC;
      }
      goto L_08B59B78;
    }
L_08B59B78:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16460)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16456)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B59B8Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59B8Cu) goto L_08B59B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59B8C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59BDC;
      }
      goto L_08B59B94;
    }
L_08B59B94:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16476)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16472)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B59BA8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61EF4, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59BA8u) goto L_08B59BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59BA8:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59BB4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 478u, 0x08B59BB4u, 0x08B626A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 496u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 496u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 496u, 0x08B626A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59BB4u) goto L_08B59BB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59BB4:
    ctx.gpr[31] = (0x08B59BBCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 479u, 0x08B59BBCu, 0x08B625C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59BBCu) goto L_08B59BBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59BBC:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[16] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08B59BDC;
      }
      goto L_08B59BC8;
    }
L_08B59BC8:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59BD4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 481u, 0x08B59BD4u, 0x08B62778u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 510u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 510u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 510u, 0x08B62778u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59BD4u) goto L_08B59BD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59BD4:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    goto L_08B59BDC;
L_08B59BDC:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B59BF0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 483u, 0x08B59BF0u, 0x08B5FF5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 873u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 873u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 873u, 0x08B5FF5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59BF0u) goto L_08B59BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59BF0:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59C04u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59C04u) goto L_08B59C04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59C04:
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B59C18u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61EF4, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59C18u) goto L_08B59C18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59C18:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (32752u << 16u);
    aot_gpr_4 = (ctx.gpr[21] & aot_gpr_4);
    goto L_08B59C2C;
L_08B59C2C:
    if (ctx.gpr[22] != aot_gpr_4) {
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
        goto L_08B59CF0;
    }
    goto L_08B59C34;
L_08B59C34:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B59C40u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 488u, 0x08B59C40u, 0x08B626A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 496u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 496u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 496u, 0x08B626A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59C40u) goto L_08B59C40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59C40:
    ctx.gpr[31] = (0x08B59C48u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 489u, 0x08B59C48u, 0x08B625C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59C48u) goto L_08B59C48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59C48:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B59C5Cu);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 490u, 0x08B59C5Cu, 0x08B61F5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 395u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 395u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59C5Cu) goto L_08B59C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59C5C:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[16] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08B59C88;
      }
      goto L_08B59C68;
    }
L_08B59C68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59C8C;
      }
      goto L_08B59C74;
    }
L_08B59C74:
    aot_gpr_4 = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (ctx.gpr[21] & aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59CD0;
      }
      goto L_08B59C88;
    }
L_08B59C88:
    aot_gpr_4 = (2234u << 16u);
    goto L_08B59C8C;
L_08B59C8C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16484)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16480)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59CA0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59CA0u) goto L_08B59CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59CA0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B59D3C;
      }
      goto L_08B59CA8;
    }
L_08B59CA8:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16492)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16488)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59CBCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59CBCu) goto L_08B59CBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59CBC:
    if (static_cast<std::int32_t>(aot_gpr_2) > 0) {
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
        goto L_08B59D40;
    }
    goto L_08B59CC4;
L_08B59CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08B59CF0;
      }
      goto L_08B59CCC;
    }
L_08B59CCC:
    aot_gpr_4 = (2234u << 16u);
    goto L_08B59CD0;
L_08B59CD0:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16500)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16496)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B59CE4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59CE4u) goto L_08B59CE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B59CE4:
    if (static_cast<std::int32_t>(aot_gpr_2) < 0) {
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
        goto L_08B59D40;
    }
    goto L_08B59CEC;
L_08B59CEC:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    goto L_08B59CF0;
L_08B59CF0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08B59CFCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 504u, 0x08B59CFCu, 0x08B5F500u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59CFCu) goto L_08B59CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59CFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08B59D08u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 505u, 0x08B59D08u, 0x08B5F500u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59D08u) goto L_08B59D08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59D08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08B59D14u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 506u, 0x08B59D14u, 0x08B5F500u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59D14u) goto L_08B59D14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59D14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08B59D20u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 507u, 0x08B59D20u, 0x08B5F500u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59D20u) goto L_08B59D20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59D20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_7);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_6);
      if (branch_taken) {
          goto L_08B595C0;
      }
      goto L_08B59D3C;
    }
L_08B59D3C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    goto L_08B59D40;
L_08B59D40:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08B59D4Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 510u, 0x08B59D4Cu, 0x08B5F500u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59D4Cu) goto L_08B59D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59D4C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08B59D58u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 511u, 0x08B59D58u, 0x08B5F500u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59D58u) goto L_08B59D58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59D58:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08B59D64u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 512u, 0x08B59D64u, 0x08B5F500u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59D64u) goto L_08B59D64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59D64:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08B59D70u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 513u, 0x08B59D70u, 0x08B5F500u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59D70u) goto L_08B59D70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59D70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08B59D7Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 514u, 0x08B59D7Cu, 0x08B5F500u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 736u, 0x08B5F500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59D7Cu) goto L_08B59D7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59D7C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    goto L_08B59D80;
L_08B59D80:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    if (aot_gpr_6 != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[23]);
        goto L_08B59D90;
    }
    goto L_08B59D90;
L_08B59D90:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    if (aot_gpr_6 == 0u) {
    ctx.gpr[3] = (aot_gpr_5 | 0u);
        goto L_08B59DAC;
    }
    goto L_08B59D9C;
L_08B59D9C:
    ctx.gpr[31] = (0x08B59DA4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 518u, 0x08B59DA4u, 0x08B62778u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 510u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 510u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 510u, 0x08B62778u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B59DA4u) goto L_08B59DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B59DA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B59DB0;
      }
      goto L_08B59DAC;
    }
L_08B59DAC:
    aot_gpr_2 = (aot_gpr_4 | 0u);
    goto L_08B59DB0;
L_08B59DB0:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B59DE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B59DFCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(15532)));
    goto L_08B58CC4;
L_08B59DFC:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B59E08:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B59E20u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(92));
    goto L_08B59E2C;
L_08B59E20:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B59E2C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B59E40;
      }
      goto L_08B59E34;
    }
L_08B59E34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B59E48;
      }
      goto L_08B59E40;
    }
L_08B59E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B59E50;
      }
      goto L_08B59E48;
    }
L_08B59E48:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B59E50:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_7 = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B59E80;
      }
      goto L_08B59E68;
    }
L_08B59E68:
    if (ctx.gpr[11] == ctx.gpr[9]) {
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
        goto L_08B59E50;
    }
    goto L_08B59E70;
L_08B59E70:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_7 = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B59E68;
      }
      goto L_08B59E80;
    }
L_08B59E80:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    aot_gpr_2 = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B59E90;
      }
      goto L_08B59E88;
    }
L_08B59E88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B59E9C;
      }
      goto L_08B59E90;
    }
L_08B59E90:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B59E9C:
    aot_gpr_7 = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_7 | 0u);
    aot_gpr_7 = (aot_gpr_5 | 0u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    goto L_08B59EB0;
L_08B59EB0:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B59ED4;
      }
      goto L_08B59EB8;
    }
L_08B59EB8:
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
        goto L_08B59ECC;
    }
    goto L_08B59EC0;
L_08B59EC0:
    aot_gpr_4 = (0u | 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B59ECC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B59ED4:
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
        goto L_08B59EB0;
    }
    goto L_08B59EDC;
L_08B59EDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B59E9C;
      }
      goto L_08B59EE4;
    }
L_08B59EE4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_2 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B59F3C;
      }
      goto L_08B59EF0;
    }
L_08B59EF0:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(14520));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_5);
    goto L_08B59F00;
L_08B59F00:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_gpr_7 & 2u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_5);
      if (branch_taken) {
          goto L_08B59F2C;
      }
      goto L_08B59F10;
    }
L_08B59F10:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_gpr_7 & 2u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08B59F28;
      }
      goto L_08B59F20;
    }
L_08B59F20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08B59F28;
      }
      goto L_08B59F28;
    }
L_08B59F28:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B59F2C;
L_08B59F2C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_5);
      if (branch_taken) {
          goto L_08B59F00;
      }
      goto L_08B59F3C;
    }
L_08B59F3C:
    jump_target = ctx.gpr[31];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B59F44:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B59F4C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    ctx.gpr[10] = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B59FA0;
      }
      goto L_08B59F54;
    }
L_08B59F54:
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[10]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 53 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B59FA0;
      }
      goto L_08B59F68;
    }
L_08B59F68:
    ctx.gpr[9] = (0u | 48u);
    aot_gpr_6 = (0u | 57u);
    aot_gpr_7 = (aot_gpr_4 + ctx.gpr[10]);
    goto L_08B59F74;
L_08B59F74:
    ctx.gpr[10] = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (ctx.gpr[10] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[10] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B59F94;
      }
      goto L_08B59F8C;
    }
L_08B59F8C:
    if (aot_gpr_7 == aot_gpr_6) {
    aot_gpr_7 = (aot_gpr_4 + ctx.gpr[10]);
        goto L_08B59F74;
    }
    goto L_08B59F94;
L_08B59F94:
    { const bool branch_taken = aot_gpr_7 == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B59FA8;
      }
      goto L_08B59F9C;
    }
L_08B59F9C:
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B59FA0;
L_08B59FA0:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (0u | 1u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B59FA8:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B59FB0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_7 = (0u | 0u);
      if (branch_taken) {
          goto L_08B59FD0;
      }
      goto L_08B59FBC;
    }
L_08B59FBC:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    goto L_08B59FC0;
L_08B59FC0:
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    if (aot_gpr_5 != 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
        goto L_08B59FC0;
    }
    goto L_08B59FD0;
L_08B59FD0:
    aot_gpr_5 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_7 = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08B5A014;
      }
      goto L_08B59FE8;
    }
L_08B59FE8:
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[9] = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_7 = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_08B59FE8;
      }
      goto L_08B5A014;
    }
L_08B5A014:
    jump_target = ctx.gpr[31];
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5A01C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[9] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B5A044;
      }
      goto L_08B5A030;
    }
L_08B5A030:
    ctx.gpr[8] = (0u | 10u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[8];
    ctx.gpr[9] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B5A044;
      }
      goto L_08B5A03C;
    }
L_08B5A03C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u - aot_gpr_4);
      if (branch_taken) {
          goto L_08B5A044;
      }
      goto L_08B5A044;
    }
L_08B5A044:
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16504));
    goto L_08B5A050;
L_08B5A050:
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[11] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr_2 = (ctx.hi);
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[9] = (aot_gpr_2 + aot_gpr_4);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B5A050;
      }
      goto L_08B5A084;
    }
L_08B5A084:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_4 = (ctx.gpr[10] + aot_gpr_5);
      if (branch_taken) {
          goto L_08B5A0A0;
      }
      goto L_08B5A08C;
    }
L_08B5A08C:
    aot_gpr_4 = (0u | 45u);
    aot_gpr_6 = (aot_gpr_5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[10] + aot_gpr_5);
    goto L_08B5A0A0;
L_08B5A0A0:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08B5A0ACu);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08B59FB0;
L_08B5A0AC:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5A0B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    ctx.gpr[22] = (aot_gpr_7 << 24u);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (16u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (aot_gpr_7 >> 20u);
    aot_gpr_7 = (aot_gpr_7 & ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[12] = (aot_gpr_6 | 0u);
    ctx.gpr[8] = (ctx.gpr[11] & 2048u);
    ctx.gpr[16] = (2236u << 16u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[11] = (ctx.gpr[11] & 2047u);
    aot_gpr_2 = (0u | 2047u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(16640));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words); }
    { const bool branch_taken = ctx.gpr[11] != aot_gpr_2;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08B5A19C;
      }
      goto L_08B5A13C;
    }
L_08B5A13C:
    aot_gpr_4 = (aot_gpr_7 | aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2233u << 16u);
      if (branch_taken) {
          goto L_08B5A184;
      }
      goto L_08B5A148;
    }
L_08B5A148:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_5 = (2233u << 16u);
      if (branch_taken) {
          goto L_08B5A16C;
      }
      goto L_08B5A150;
    }
L_08B5A150:
    aot_gpr_5 = (2233u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5A164u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-26536));
    goto L_08B5831C;
L_08B5A164:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B5A7E4;
      }
      goto L_08B5A16C;
    }
L_08B5A16C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5A17Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-26528));
    goto L_08B5831C;
L_08B5A17C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B5A7E4;
      }
      goto L_08B5A184;
    }
L_08B5A184:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5A194u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-26524));
    goto L_08B5831C;
L_08B5A194:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B5A7E4;
      }
      goto L_08B5A19C;
    }
L_08B5A19C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[12]);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16548)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16544)));
    ctx.gpr[20] = (ctx.gpr[12] | 0u);
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A1C0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A1C0u) goto L_08B5A1C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A1C0:
    if (static_cast<std::int32_t>(aot_gpr_2) >= 0) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
        goto L_08B5A204;
    }
    goto L_08B5A1C8;
L_08B5A1C8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (0u | 45u);
      if (branch_taken) {
          goto L_08B5A1DC;
      }
      goto L_08B5A1D0;
    }
L_08B5A1D0:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B5A1E8;
      }
      goto L_08B5A1DC;
    }
L_08B5A1DC:
    aot_gpr_5 = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16640), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_5);
    goto L_08B5A1E8;
L_08B5A1E8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A1F8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 590u, 0x08B5A1F8u, 0x08B62778u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 510u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 510u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 510u, 0x08B62778u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A1F8u) goto L_08B5A1F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5A1F8:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08B5A208;
      }
      goto L_08B5A204;
    }
L_08B5A204:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    goto L_08B5A208;
L_08B5A208:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16556)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16552)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A220u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A220u) goto L_08B5A220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A220:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
      if (branch_taken) {
          goto L_08B5A354;
      }
      goto L_08B5A228;
    }
L_08B5A228:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A234u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 595u, 0x08B5A234u, 0x08B5DFFCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 481u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 481u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 481u, 0x08B5DFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A234u) goto L_08B5A234;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5A234:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A250u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 596u, 0x08B5A250u, 0x08B61F5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 395u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 395u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A250u) goto L_08B5A250;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5A250:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    goto L_08B5A25C;
L_08B5A25C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < 163 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5A30C;
      }
      goto L_08B5A268;
    }
L_08B5A268:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16564)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16560)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A290u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 599u, 0x08B5A290u, 0x08B5E254u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 515u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 515u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 515u, 0x08B5E254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A290u) goto L_08B5A290;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5A290:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5A29Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 600u, 0x08B5A29Cu, 0x08B626A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 496u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 496u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 496u, 0x08B626A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A29Cu) goto L_08B5A29C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5A29C:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (ctx.gpr[21] + ctx.gpr[23]);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08B5A2B4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 601u, 0x08B5A2B4u, 0x08B625C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A2B4u) goto L_08B5A2B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5A2B4:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5A2C8u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 602u, 0x08B5A2C8u, 0x08B61F5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 395u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 395u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A2C8u) goto L_08B5A2C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5A2C8:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5A2DCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 603u, 0x08B5A2DCu, 0x08B62348u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 445u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 445u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A2DCu) goto L_08B5A2DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5A2DC:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16556)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16552)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A2FCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A2FCu) goto L_08B5A2FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A2FC:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08B5A25C;
      }
      goto L_08B5A308;
    }
L_08B5A308:
    aot_gpr_5 = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    goto L_08B5A30C;
L_08B5A30C:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08B5A354;
      }
      goto L_08B5A320;
    }
L_08B5A320:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    goto L_08B5A324;
L_08B5A324:
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_7);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
        goto L_08B5A324;
    }
    goto L_08B5A354;
L_08B5A354:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08B5A45C;
      }
      goto L_08B5A35C;
    }
L_08B5A35C:
    aot_gpr_4 = (0u | 102u);
    { const bool branch_taken = ctx.gpr[22] == aot_gpr_4;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5A448;
      }
      goto L_08B5A368;
    }
L_08B5A368:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16548)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16544)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A37Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A37Cu) goto L_08B5A37C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A37C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5A408;
      }
      goto L_08B5A384;
    }
L_08B5A384:
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16564)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16560)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A3A4u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A3A4u) goto L_08B5A3A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A3A4:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    goto L_08B5A3B0;
L_08B5A3B0:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16556)));
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x08B5A3C8u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16552)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A3C8u) goto L_08B5A3C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A3C8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5A400;
      }
      goto L_08B5A3D0;
    }
L_08B5A3D0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < -1020 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5A400;
      }
      goto L_08B5A3DC;
    }
L_08B5A3DC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A3F4u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A3F4u) goto L_08B5A3F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A3F4:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08B5A3B0;
      }
      goto L_08B5A400;
    }
L_08B5A400:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (2234u << 16u);
    goto L_08B5A408;
L_08B5A408:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16556)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16552)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A41Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A41Cu) goto L_08B5A41C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A41C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5A45C;
      }
      goto L_08B5A424;
    }
L_08B5A424:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16564)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16560)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A43Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 624u, 0x08B5A43Cu, 0x08B62348u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 445u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 445u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A43Cu) goto L_08B5A43C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5A43C:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08B5A45C;
      }
      goto L_08B5A448;
    }
L_08B5A448:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (0u | 48u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B5A45C;
L_08B5A45C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16564)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16560)));
    ctx.gpr[30] = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A47Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A47Cu) goto L_08B5A47C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A47C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_2);
      if (branch_taken) {
          goto L_08B5A4B0;
      }
      goto L_08B5A48C;
    }
L_08B5A48C:
    aot_gpr_5 = (0u | 102u);
    { const bool branch_taken = ctx.gpr[22] != aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08B5A4AC;
      }
      goto L_08B5A498;
    }
L_08B5A498:
    ctx.gpr[30] = (0u | 1u);
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    ctx.gpr[30] = (aot_gpr_4 | 0u);
        goto L_08B5A4A4;
    }
    goto L_08B5A4A4;
L_08B5A4A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[20] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08B5A4B0;
      }
      goto L_08B5A4AC;
    }
L_08B5A4AC:
    ctx.gpr[30] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08B5A4B0;
L_08B5A4B0:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16572)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16568)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16564)));
    ctx.gpr[31] = (0x08B5A4D0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16560)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A4D0u) goto L_08B5A4D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A4D0:
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    ctx.gpr[18] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    goto L_08B5A4E4;
L_08B5A4E4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5A500u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 635u, 0x08B5A500u, 0x08B626A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 496u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 496u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 496u, 0x08B626A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A500u) goto L_08B5A500;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5A500:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    ctx.gpr[31] = (0x08B5A50Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 636u, 0x08B5A50Cu, 0x08B625C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A50Cu) goto L_08B5A50C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5A50C:
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5A520u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 637u, 0x08B5A520u, 0x08B61F5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 395u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 395u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A520u) goto L_08B5A520;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5A520:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B5A5EC;
      }
      goto L_08B5A53C;
    }
L_08B5A53C:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A550u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A550u) goto L_08B5A550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A550:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5A5F0;
      }
      goto L_08B5A558;
    }
L_08B5A558:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16556)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16552)));
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A570u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 641u, 0x08B5A570u, 0x08B61F5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 395u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 395u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A570u) goto L_08B5A570;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5A570:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5A584u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A584u) goto L_08B5A584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A584:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) > 0;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5A5F0;
      }
      goto L_08B5A58C;
    }
L_08B5A58C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[23]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16564)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16560)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A5C0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A5C0u) goto L_08B5A5C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A5C0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_7 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5A5DCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_2);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A5DCu) goto L_08B5A5DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A5DC:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5A4E4;
      }
      goto L_08B5A5EC;
    }
L_08B5A5EC:
    aot_gpr_4 = (2234u << 16u);
    goto L_08B5A5F0;
L_08B5A5F0:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16580)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16576)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5A604u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A604u) goto L_08B5A604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A604:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(52))))));
    ctx.gpr[21] = (0u | 102u);
    if (static_cast<std::int32_t>(aot_gpr_2) >= 0) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08B5A61C;
    }
    goto L_08B5A61C;
L_08B5A61C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[23]);
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 48u);
      if (branch_taken) {
          goto L_08B5A660;
      }
      goto L_08B5A640;
    }
L_08B5A640:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_gpr_5 + ctx.gpr[22]);
    goto L_08B5A648;
L_08B5A648:
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (aot_gpr_5 + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B5A648;
      }
      goto L_08B5A660;
    }
L_08B5A660:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08B5A670u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08B59F4C;
L_08B5A670:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
        goto L_08B5A690;
    }
    goto L_08B5A678;
L_08B5A678:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (0u | 49u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    goto L_08B5A690;
L_08B5A690:
    if (aot_gpr_4 == 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
        goto L_08B5A6E8;
    }
    goto L_08B5A698;
L_08B5A698:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[21];
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08B5A6AC;
      }
      goto L_08B5A6A0;
    }
L_08B5A6A0:
    aot_gpr_5 = (0u | 1u);
    if (static_cast<std::int32_t>(ctx.gpr[17]) > 0) {
    aot_gpr_5 = (ctx.gpr[17] | 0u);
        goto L_08B5A6AC;
    }
    goto L_08B5A6AC;
L_08B5A6AC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5A6D8;
      }
      goto L_08B5A6BC;
    }
L_08B5A6BC:
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_6);
    goto L_08B5A6C0;
L_08B5A6C0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(-1))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_7 = (aot_gpr_4 + aot_gpr_6);
      if (branch_taken) {
          goto L_08B5A6C0;
      }
      goto L_08B5A6D8;
    }
L_08B5A6D8:
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (0u | 46u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B5A6E8;
      }
      goto L_08B5A6E8;
    }
L_08B5A6E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B5A740;
      }
      goto L_08B5A6F4;
    }
L_08B5A6F4:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (0u | 48u);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_7);
    aot_gpr_5 = (0u | 46u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    goto L_08B5A70C;
L_08B5A70C:
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08B5A72C;
      }
      goto L_08B5A714;
    }
L_08B5A714:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
      if (branch_taken) {
          goto L_08B5A72C;
      }
      goto L_08B5A71C;
    }
L_08B5A71C:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_7);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B5A70C;
      }
      goto L_08B5A72C;
    }
L_08B5A72C:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_7);
      if (branch_taken) {
          goto L_08B5A740;
      }
      goto L_08B5A734;
    }
L_08B5A734:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    goto L_08B5A740;
L_08B5A740:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5A7DC;
      }
      goto L_08B5A74C;
    }
L_08B5A74C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5A794;
      }
      goto L_08B5A760;
    }
L_08B5A760:
    aot_gpr_6 = (0u | 43u);
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_08B5A778;
    }
    goto L_08B5A778;
L_08B5A778:
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (0u | 48u);
      if (branch_taken) {
          goto L_08B5A7C4;
      }
      goto L_08B5A784;
    }
L_08B5A784:
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5A7C4;
      }
      goto L_08B5A794;
    }
L_08B5A794:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    aot_gpr_6 = (0u | 45u);
      if (branch_taken) {
          goto L_08B5A7C4;
      }
      goto L_08B5A79C;
    }
L_08B5A79C:
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[17]) < -9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5A7C0;
      }
      goto L_08B5A7B0;
    }
L_08B5A7B0:
    aot_gpr_6 = (0u | 48u);
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_08B5A7C0;
L_08B5A7C0:
    ctx.gpr[17] = (0u - ctx.gpr[17]);
    goto L_08B5A7C4;
L_08B5A7C4:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5A7D4u);
    aot_gpr_6 = (0u | 10u);
    goto L_08B5A01C;
L_08B5A7D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B5A7E4;
      }
      goto L_08B5A7DC;
    }
L_08B5A7DC:
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_08B5A7E4;
L_08B5A7E4:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5A818:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    { const bool branch_taken = aot_gpr_7 == ctx.gpr[8];
    ctx.gpr[16] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B5A870;
      }
      goto L_08B5A850;
    }
L_08B5A850:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (2236u << 16u);
      if (branch_taken) {
          goto L_08B5A91C;
      }
      goto L_08B5A860;
    }
L_08B5A860:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16804));
    ctx.gpr[20] = (2234u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5A8C0;
      }
      goto L_08B5A870;
    }
L_08B5A870:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[16] = (2234u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(16804));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16584)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5A88Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 305u, 0x08B55164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A88Cu) goto L_08B5A88C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A88C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16584), 0u);
    aot_gpr_4 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16588), ctx.gpr[17]);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[31] = aot_run_words[7];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5A8C0:
    aot_gpr_4 = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08B5A8C4;
L_08B5A8C4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16588)));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16588)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16584)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16588), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16584), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5A90C;
      }
      goto L_08B5A8F0;
    }
L_08B5A8F0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5A900u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 305u, 0x08B55164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5A900u) goto L_08B5A900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5A900:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16588), ctx.gpr[22]);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16584), 0u);
      if (branch_taken) {
          goto L_08B5A948;
      }
      goto L_08B5A90C;
    }
L_08B5A90C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B5A8C4;
      }
      goto L_08B5A91C;
    }
L_08B5A91C:
    aot_gpr_2 = (ctx.gpr[19] | 0u);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[31] = aot_run_words[7];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5A948:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[31] = aot_run_words[7];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5A974:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    ctx.gpr[10] = (aot_gpr_6 | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_4 = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B5AA3C;
      }
      goto L_08B5A998;
    }
L_08B5A998:
    ctx.gpr[10] = (0u | 37u);
    goto L_08B5A99C;
L_08B5A99C:
    if (ctx.gpr[8] != ctx.gpr[10]) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08B5AA30;
    }
    goto L_08B5A9A4;
L_08B5A9A4:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08B5AA30;
    }
    goto L_08B5A9B0;
L_08B5A9B0:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < 65 ? 1u : 0u);
    goto L_08B5A9BC;
L_08B5A9BC:
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-69));
        goto L_08B5A9E0;
    }
    goto L_08B5A9C4;
L_08B5A9C4:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-69));
      if (branch_taken) {
          goto L_08B5A9E0;
      }
      goto L_08B5A9D0;
    }
L_08B5A9D0:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5A9BC;
      }
      goto L_08B5A9E0;
    }
L_08B5A9E0:
    ctx.gpr[11] = (ctx.gpr[8] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08B5AA30;
    }
    goto L_08B5A9EC;
L_08B5A9EC:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26440)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5AA04:
    ctx.gpr[8] = (aot_gpr_5 | 0u);
    ctx.gpr[9] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_7 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08B5AA20u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    goto L_08B5AA64;
L_08B5AA20:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5AA2C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08B5AA30;
L_08B5AA30:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08B5A99C;
      }
      goto L_08B5AA3C;
    }
L_08B5AA3C:
    ctx.gpr[8] = (aot_gpr_5 | 0u);
    ctx.gpr[9] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_7 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08B5AA58u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 709u, 0x08B5AA58u, 0x08B5C42Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 57u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 57u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 57u, 0x08B5C42Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5AA58u) goto L_08B5AA58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5AA58:
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5AA64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-528));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(492), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(504), ctx.gpr[20]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(488), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(496), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(500), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(508), aot_run_words); }
    ctx.gpr[31] = (0x08B5AAA0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_7);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 711u, 0x08B5AAA0u, 0x08B5DF6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 472u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 472u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 472u, 0x08B5DF6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5AAA0u) goto L_08B5AAA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5AAA0:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(392), 0u);
    aot_gpr_5 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16592));
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16608));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(444), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(440), aot_gpr_4);
    aot_gpr_4 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26500));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(404), aot_gpr_4);
    aot_gpr_4 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26520));
    aot_gpr_5 = (2233u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(408), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-26492));
    aot_gpr_4 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26472));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(400), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(396), aot_gpr_4);
    goto L_08B5AAF4;
L_08B5AAF4:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u | 37u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(392));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(34));
    ctx.gpr[22] = (2234u << 16u);
    ctx.gpr[30] = (2234u << 16u);
    goto L_08B5AB0C;
L_08B5AB0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(15532)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16752)));
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5AB24u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 953u, 0x08B578C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5AB24u) goto L_08B5AB24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5AB24:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[18] = (ctx.gpr[17] - ctx.gpr[19]);
        goto L_08B5AB48;
    }
    goto L_08B5AB30;
L_08B5AB30:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B5AB0C;
      }
      goto L_08B5AB3C;
    }
L_08B5AB3C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[17] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B5AB48;
      }
      goto L_08B5AB48;
    }
L_08B5AB48:
    aot_gpr_7 = (ctx.gpr[18] | 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08B5AC04;
      }
      goto L_08B5AB54;
    }
L_08B5AB54:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_6 & 512u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5ABC8;
    }
    goto L_08B5AB64;
L_08B5AB64:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5ABA0;
      }
      goto L_08B5AB74;
    }
L_08B5AB74:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5AB84u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 721u, 0x08B5AB84u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5AB84u) goto L_08B5AB84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5AB84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 - ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5ABF8;
      }
      goto L_08B5ABA0;
    }
L_08B5ABA0:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B5ABB0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 723u, 0x08B5ABB0u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5ABB0u) goto L_08B5ABB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5ABB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5ABF8;
      }
      goto L_08B5ABC8;
    }
L_08B5ABC8:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5ABE8;
      }
      goto L_08B5ABD0;
    }
L_08B5ABD0:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5ABE8;
      }
      goto L_08B5ABD8;
    }
L_08B5ABD8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08B5ABE8;
L_08B5ABE8:
    aot_gpr_6 = (aot_gpr_7 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5ABF8u);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5A818;
L_08B5ABF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_gpr_4);
    goto L_08B5AC04;
L_08B5AC04:
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 12u, 0x08B5C084u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B5AC0C;
L_08B5AC0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B5AC2C;
      }
      goto L_08B5AC18;
    }
L_08B5AC18:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 12u, 0x08B5C084u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B5AC28;
L_08B5AC28:
    aot_gpr_4 = (0u | 0u);
    goto L_08B5AC2C;
L_08B5AC2C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(460), aot_gpr_4);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08B5AC48;
L_08B5AC48:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_gpr_7 = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (aot_gpr_7 < static_cast<std::uint32_t>(89) ? 1u : 0u);
    goto L_08B5AC58;
L_08B5AC58:
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08B5B790;
      }
      goto L_08B5AC60;
    }
L_08B5AC60:
    aot_gpr_7 = (aot_gpr_7 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_7);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26296)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08B5AC78:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AC84;
    }
L_08B5AC84:
    aot_gpr_4 = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AC90;
    }
L_08B5AC90:
    ctx.gpr[21] = (ctx.gpr[21] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AC9C;
    }
L_08B5AC9C:
    ctx.gpr[21] = (ctx.gpr[21] | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ACA8;
    }
L_08B5ACA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ACC0;
    }
L_08B5ACC0:
    ctx.gpr[30] = (0u - ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[21] | 4u);
      if (branch_taken) {
          goto L_08B5ACD4;
      }
      goto L_08B5ACCC;
    }
L_08B5ACCC:
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (ctx.gpr[21] | 4u);
    goto L_08B5ACD4;
L_08B5ACD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ACDC;
    }
L_08B5ACDC:
    aot_gpr_4 = (0u | 43u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ACEC;
    }
L_08B5ACEC:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (0u | 42u);
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_4;
    ctx.gpr[17] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B5AD24;
      }
      goto L_08B5AD00;
    }
L_08B5AD00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    if (static_cast<std::int32_t>(aot_gpr_5) < 0) {
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B5AD1C;
    }
    goto L_08B5AD1C;
L_08B5AD1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AD24;
    }
L_08B5AD24:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B5AD60;
      }
      goto L_08B5AD34;
    }
L_08B5AD34:
    aot_gpr_4 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-48));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B5AD34;
      }
      goto L_08B5AD60;
    }
L_08B5AD60:
    aot_gpr_7 = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (aot_gpr_7 < static_cast<std::uint32_t>(89) ? 1u : 0u);
    if (static_cast<std::int32_t>(aot_gpr_5) < 0) {
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B5AD70;
    }
    goto L_08B5AD70;
L_08B5AD70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5AC58;
      }
      goto L_08B5AD78;
    }
L_08B5AD78:
    ctx.gpr[21] = (ctx.gpr[21] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AD84;
    }
L_08B5AD84:
    aot_gpr_5 = (0u | 0u);
    goto L_08B5AD88;
L_08B5AD88:
    aot_gpr_4 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-48));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B5AD88;
      }
      goto L_08B5ADB4;
    }
L_08B5ADB4:
    aot_gpr_7 = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[30] = (aot_gpr_5 | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_gpr_7 < static_cast<std::uint32_t>(89) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5AC58;
      }
      goto L_08B5ADC4;
    }
L_08B5ADC4:
    ctx.gpr[21] = (ctx.gpr[21] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ADD0;
    }
L_08B5ADD0:
    ctx.gpr[21] = (ctx.gpr[21] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ADDC;
    }
L_08B5ADDC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 108u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5ADFC;
      }
      goto L_08B5ADEC;
    }
L_08B5ADEC:
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[21] = (ctx.gpr[21] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5ADFC;
    }
L_08B5ADFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] | 16u);
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AE04;
    }
L_08B5AE04:
    ctx.gpr[21] = (ctx.gpr[21] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5AC48;
      }
      goto L_08B5AE10;
    }
L_08B5AE10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(40));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    aot_gpr_7 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_7);
    aot_gpr_4 = (ctx.gpr[21] & 132u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (ctx.gpr[21] & 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(448), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(456), aot_gpr_5);
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5AE48;
    }
L_08B5AE48:
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] | 16u);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16668)));
    aot_gpr_5 = (ctx.gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16664)));
      if (branch_taken) {
          goto L_08B5AE70;
      }
      goto L_08B5AE60;
    }
L_08B5AE60:
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16668)));
    aot_gpr_5 = (ctx.gpr[21] & 32u);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16664)));
    goto L_08B5AE70;
L_08B5AE70:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[21] & 16u);
      if (branch_taken) {
          goto L_08B5AE98;
      }
      goto L_08B5AE78;
    }
L_08B5AE78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_5 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5AEF8;
      }
      goto L_08B5AE98;
    }
L_08B5AE98:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5AEB8;
      }
      goto L_08B5AEA0;
    }
L_08B5AEA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
      if (branch_taken) {
          goto L_08B5AEF0;
      }
      goto L_08B5AEB8;
    }
L_08B5AEB8:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
        goto L_08B5AEDC;
    }
    goto L_08B5AEC0;
L_08B5AEC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
      if (branch_taken) {
          goto L_08B5AEE8;
      }
      goto L_08B5AEDC;
    }
L_08B5AEDC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    goto L_08B5AEE8;
L_08B5AEE8:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 31u));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    goto L_08B5AEF0;
L_08B5AEF0:
    ctx.gpr[11] = (aot_gpr_7 | 0u);
    ctx.gpr[10] = (aot_gpr_6 | 0u);
    goto L_08B5AEF8;
L_08B5AEF8:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16628)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16624)));
    ctx.gpr[19] = (ctx.gpr[11] | 0u);
    ctx.gpr[18] = (ctx.gpr[10] | 0u);
    aot_gpr_6 = (ctx.gpr[19] ^ aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    aot_gpr_7 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_7);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5AF40;
      }
      goto L_08B5AF2C;
    }
L_08B5AF2C:
    aot_gpr_5 = (0u - ctx.gpr[11]);
    aot_gpr_6 = (0u | 45u);
    ctx.gpr[18] = (0u - ctx.gpr[10]);
    ctx.gpr[19] = (aot_gpr_5 - aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_6));
    goto L_08B5AF40;
L_08B5AF40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08B5B4E0;
      }
      goto L_08B5AF48;
    }
L_08B5AF48:
    aot_gpr_4 = (ctx.gpr[21] & 132u);
    aot_gpr_5 = (ctx.gpr[21] & 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(448), aot_gpr_4);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[21] & 1u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(456), aot_gpr_5);
    if (ctx.gpr[22] == aot_gpr_6) {
    ctx.gpr[22] = (0u | 6u);
        goto L_08B5AF6C;
    }
    goto L_08B5AF6C;
L_08B5AF6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_5 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    aot_gpr_4 = (0u | 103u);
    if (ctx.gpr[16] == aot_gpr_4) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(436), aot_gpr_7);
        goto L_08B5AFA8;
    }
    goto L_08B5AF94;
L_08B5AF94:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(436), aot_gpr_7);
    aot_gpr_4 = (0u | 71u);
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_4;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(432), aot_gpr_6);
      if (branch_taken) {
          goto L_08B5B0A4;
      }
      goto L_08B5AFA4;
    }
L_08B5AFA4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(436), aot_gpr_7);
    goto L_08B5AFA8;
L_08B5AFA8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(432), aot_gpr_6);
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16548)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16544)));
    aot_gpr_5 = (aot_gpr_7 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B5AFCCu);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5AFCCu) goto L_08B5AFCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5AFCC:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5B028;
      }
      goto L_08B5AFD4;
    }
L_08B5AFD4:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(436)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(432)));
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16548)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16544)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5AFF4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5AFF4u) goto L_08B5AFF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5AFF4:
    if (static_cast<std::int32_t>(aot_gpr_2) >= 0) {
    aot_gpr_5 = (ctx.gpr[19] | 0u);
        goto L_08B5B014;
    }
    goto L_08B5AFFC;
L_08B5AFFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(436)));
    ctx.gpr[31] = (0x08B5B008u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(432)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 787u, 0x08B5B008u, 0x08B62778u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 510u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 510u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 510u, 0x08B62778u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B008u) goto L_08B5B008;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5B008:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08B5B014;
L_08B5B014:
    ctx.gpr[31] = (0x08B5B01Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 789u, 0x08B5B01Cu, 0x08B5EF84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 674u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 674u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 674u, 0x08B5EF84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B01Cu) goto L_08B5B01C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5B01C:
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08B5B030;
      }
      goto L_08B5B028;
    }
L_08B5B028:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16556)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16552)));
    goto L_08B5B030;
L_08B5B030:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(420), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(416), aot_gpr_6);
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16636)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16632)));
    aot_gpr_5 = (aot_gpr_7 | 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (0u | 102u);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B5B05Cu);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B05Cu) goto L_08B5B05C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5B05C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
    aot_gpr_5 = (0u | 69u);
      if (branch_taken) {
          goto L_08B5B08C;
      }
      goto L_08B5B064;
    }
L_08B5B064:
    ctx.gpr[31] = (0x08B5B06Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 794u, 0x08B5B06Cu, 0x08B625C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B06Cu) goto L_08B5B06C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5B06C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(420)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(416)));
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5B080u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B080u) goto L_08B5B080;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5B080:
    if (static_cast<std::int32_t>(aot_gpr_2) < 0) {
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
        goto L_08B5B0A0;
    }
    goto L_08B5B088;
L_08B5B088:
    aot_gpr_5 = (0u | 69u);
    goto L_08B5B08C;
L_08B5B08C:
    aot_gpr_4 = (0u | 103u);
    if (ctx.gpr[16] == aot_gpr_4) {
    aot_gpr_5 = (0u | 101u);
        goto L_08B5B098;
    }
    goto L_08B5B098;
L_08B5B098:
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08B5B0A0;
L_08B5B0A0:
    ctx.gpr[18] = (0u | 1u);
    goto L_08B5B0A4;
L_08B5B0A4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_gpr_7 = (ctx.gpr[16] << 24u);
      if (branch_taken) {
          goto L_08B5B0BC;
      }
      goto L_08B5B0AC;
    }
L_08B5B0AC:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[22] = (0u | 1u);
        goto L_08B5B0B4;
    }
    goto L_08B5B0B4;
L_08B5B0B4:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_7 = (ctx.gpr[16] << 24u);
    goto L_08B5B0BC;
L_08B5B0BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(436)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(432)));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 24u));
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08B5B0D8u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_08B5A0B8;
L_08B5B0D8:
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    ctx.gpr[31] = (0x08B5B0E4u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    goto L_08B58974;
L_08B5B0E4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_2);
    aot_gpr_4 = (ctx.gpr[21] & 512u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_7 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5B0F4;
    }
L_08B5B0F4:
    aot_gpr_6 = (ctx.gpr[23] + aot_gpr_7);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08B5B108u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 807u, 0x08B5B108u, 0x08B5C0D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 15u, 0x08B5C0D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B108u) goto L_08B5B108;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5B108:
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5B114;
    }
L_08B5B114:
    aot_gpr_4 = (ctx.gpr[21] & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_08B5B144;
      }
      goto L_08B5B120;
    }
L_08B5B120:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 31u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_7);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
      if (branch_taken) {
          goto L_08B5AAF4;
      }
      goto L_08B5B144;
    }
L_08B5B144:
    aot_gpr_4 = (ctx.gpr[21] & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5B168;
      }
      goto L_08B5B150;
    }
L_08B5B150:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08B5AAF4;
      }
      goto L_08B5B168;
    }
L_08B5B168:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
        goto L_08B5B188;
    }
    goto L_08B5B170;
L_08B5B170:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B5AAF4;
      }
      goto L_08B5B188;
    }
L_08B5B188:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08B5AAF4;
      }
      goto L_08B5B19C;
    }
L_08B5B19C:
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] | 16u);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16668)));
    aot_gpr_5 = (ctx.gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16664)));
      if (branch_taken) {
          goto L_08B5B1C4;
      }
      goto L_08B5B1B4;
    }
L_08B5B1B4:
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16668)));
    aot_gpr_5 = (ctx.gpr[21] & 32u);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16664)));
    goto L_08B5B1C4;
L_08B5B1C4:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[21] & 16u);
      if (branch_taken) {
          goto L_08B5B1EC;
      }
      goto L_08B5B1CC;
    }
L_08B5B1CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_5 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5B248;
      }
      goto L_08B5B1EC;
    }
L_08B5B1EC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5B20C;
      }
      goto L_08B5B1F4;
    }
L_08B5B1F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_7 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5B240;
      }
      goto L_08B5B20C;
    }
L_08B5B20C:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
        goto L_08B5B22C;
    }
    goto L_08B5B214;
L_08B5B214:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 & 65535u);
      if (branch_taken) {
          goto L_08B5B238;
      }
      goto L_08B5B22C;
    }
L_08B5B22C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    goto L_08B5B238;
L_08B5B238:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5B240;
L_08B5B240:
    ctx.gpr[9] = (aot_gpr_7 | 0u);
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    goto L_08B5B248;
L_08B5B248:
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B5B4DC;
      }
      goto L_08B5B258;
    }
L_08B5B258:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(408)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(452), aot_gpr_6);
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16668)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (0u | 2u);
    ctx.gpr[21] = (ctx.gpr[21] | 2u);
    ctx.gpr[16] = (0u | 120u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16664)));
      if (branch_taken) {
          goto L_08B5B4DC;
      }
      goto L_08B5B290;
    }
L_08B5B290:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_5 = (ctx.gpr[21] & 132u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[21] & 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(448), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(456), aot_gpr_4);
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(404)));
        goto L_08B5B2B8;
    }
    goto L_08B5B2B8;
L_08B5B2B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    aot_gpr_4 = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08B5B300;
      }
      goto L_08B5B2C0;
    }
L_08B5B2C0:
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x08B5B2CCu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    goto L_08B580BC;
L_08B5B2CC:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(452)));
      if (branch_taken) {
          goto L_08B5B2F4;
      }
      goto L_08B5B2D8;
    }
L_08B5B2D8:
    aot_gpr_7 = (aot_gpr_5 - ctx.gpr[23]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_7);
      if (branch_taken) {
          goto L_08B5B314;
      }
      goto L_08B5B2E8;
    }
L_08B5B2E8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08B5B314;
      }
      goto L_08B5B2F4;
    }
L_08B5B2F4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08B5B314;
      }
      goto L_08B5B300;
    }
L_08B5B300:
    ctx.gpr[31] = (0x08B5B308u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    goto L_08B58974;
L_08B5B308:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_2);
    aot_gpr_7 = (aot_gpr_2 | 0u);
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(452)));
    goto L_08B5B314;
L_08B5B314:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5B320;
    }
L_08B5B320:
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(452)));
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] | 16u);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16668)));
    aot_gpr_5 = (ctx.gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16664)));
      if (branch_taken) {
          goto L_08B5B350;
      }
      goto L_08B5B33C;
    }
L_08B5B33C:
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(452)));
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16668)));
    aot_gpr_5 = (ctx.gpr[21] & 32u);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16664)));
    goto L_08B5B350;
L_08B5B350:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[21] & 16u);
      if (branch_taken) {
          goto L_08B5B378;
      }
      goto L_08B5B358;
    }
L_08B5B358:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_5 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5B3D4;
      }
      goto L_08B5B378;
    }
L_08B5B378:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5B398;
      }
      goto L_08B5B380;
    }
L_08B5B380:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_7 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5B3CC;
      }
      goto L_08B5B398;
    }
L_08B5B398:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
        goto L_08B5B3B8;
    }
    goto L_08B5B3A0;
L_08B5B3A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 & 65535u);
      if (branch_taken) {
          goto L_08B5B3C4;
      }
      goto L_08B5B3B8;
    }
L_08B5B3B8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    goto L_08B5B3C4;
L_08B5B3C4:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5B3CC;
L_08B5B3CC:
    ctx.gpr[9] = (aot_gpr_7 | 0u);
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    goto L_08B5B3D4;
L_08B5B3D4:
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B5B4DC;
      }
      goto L_08B5B3E8;
    }
L_08B5B3E8:
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(400)));
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16668)));
    aot_gpr_5 = (ctx.gpr[21] & 32u);
    ctx.gpr[9] = (ctx.gpr[21] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16664)));
      if (branch_taken) {
          goto L_08B5B41C;
      }
      goto L_08B5B404;
    }
L_08B5B404:
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(408)));
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16668)));
    aot_gpr_5 = (ctx.gpr[21] & 32u);
    ctx.gpr[9] = (ctx.gpr[21] & 1u);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16664)));
    goto L_08B5B41C;
L_08B5B41C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[21] & 16u);
      if (branch_taken) {
          goto L_08B5B444;
      }
      goto L_08B5B424;
    }
L_08B5B424:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_5 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5B4A0;
      }
      goto L_08B5B444;
    }
L_08B5B444:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5B464;
      }
      goto L_08B5B44C;
    }
L_08B5B44C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_7 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5B498;
      }
      goto L_08B5B464;
    }
L_08B5B464:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
        goto L_08B5B484;
    }
    goto L_08B5B46C;
L_08B5B46C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 & 65535u);
      if (branch_taken) {
          goto L_08B5B490;
      }
      goto L_08B5B484;
    }
L_08B5B484:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    goto L_08B5B490;
L_08B5B490:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5B498;
L_08B5B498:
    ctx.gpr[3] = (aot_gpr_7 | 0u);
    aot_gpr_2 = (aot_gpr_6 | 0u);
    goto L_08B5B4A0;
L_08B5B4A0:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_5 = (0u | 2u);
      if (branch_taken) {
          goto L_08B5B4DC;
      }
      goto L_08B5B4B4;
    }
L_08B5B4B4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16628)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16624)));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_6;
      if (branch_taken) {
          goto L_08B5B4D4;
      }
      goto L_08B5B4CC;
    }
L_08B5B4CC:
    { const bool branch_taken = ctx.gpr[3] == aot_gpr_7;
      if (branch_taken) {
          goto L_08B5B4DC;
      }
      goto L_08B5B4D4;
    }
L_08B5B4D4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    ctx.gpr[21] = (ctx.gpr[21] | 2u);
    goto L_08B5B4DC;
L_08B5B4DC:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_08B5B4E0;
L_08B5B4E0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(460), ctx.gpr[22]);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16628)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16624)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(452)));
      if (branch_taken) {
          goto L_08B5B500;
      }
      goto L_08B5B4F8;
    }
L_08B5B4F8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[21] = (ctx.gpr[21] & aot_gpr_4);
    goto L_08B5B500;
L_08B5B500:
    aot_gpr_4 = (ctx.gpr[21] & 132u);
    ctx.gpr[8] = (ctx.gpr[21] & 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(448), aot_gpr_4);
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(388));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_6;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(456), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B5B528;
      }
      goto L_08B5B518;
    }
L_08B5B518:
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_7;
      if (branch_taken) {
          goto L_08B5B528;
      }
      goto L_08B5B520;
    }
L_08B5B520:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(424), aot_gpr_5);
      if (branch_taken) {
          goto L_08B5B744;
      }
      goto L_08B5B528;
    }
L_08B5B528:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5B554;
      }
      goto L_08B5B530;
    }
L_08B5B530:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(424), aot_gpr_5);
      if (branch_taken) {
          goto L_08B5B570;
      }
      goto L_08B5B538;
    }
L_08B5B538:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(396)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    ctx.gpr[31] = (0x08B5B548u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    goto L_08B58974;
L_08B5B548:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_2);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5B554;
    }
L_08B5B554:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(424), aot_gpr_5);
      if (branch_taken) {
          goto L_08B5B5FC;
      }
      goto L_08B5B55C;
    }
L_08B5B55C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(424), aot_gpr_5);
      if (branch_taken) {
          goto L_08B5B538;
      }
      goto L_08B5B568;
    }
L_08B5B568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5B70C;
      }
      goto L_08B5B570;
    }
L_08B5B570:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16652)));
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16648)));
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16644)));
    aot_gpr_5 = (ctx.gpr[21] & 1u);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16640)));
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
    goto L_08B5B594;
L_08B5B594:
    aot_gpr_4 = (ctx.gpr[8] + aot_gpr_2);
    ctx.gpr[9] = (ctx.gpr[19] & ctx.gpr[15]);
    ctx.gpr[10] = (aot_gpr_4 < aot_gpr_2 ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[3]);
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (ctx.gpr[19] << 29u);
    ctx.gpr[18] = (ctx.gpr[18] >> 3u);
    ctx.gpr[19] = (ctx.gpr[19] >> 3u);
    ctx.gpr[18] = (ctx.gpr[1] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_6;
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5B594;
      }
      goto L_08B5B5D0;
    }
L_08B5B5D0:
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_7;
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5B594;
      }
      goto L_08B5B5D8;
    }
L_08B5B5D8:
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(452)));
      if (branch_taken) {
          goto L_08B5B744;
      }
      goto L_08B5B5E0;
    }
L_08B5B5E0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 48u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(424)));
        goto L_08B5B748;
    }
    goto L_08B5B5F0;
L_08B5B5F0:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B5B744;
      }
      goto L_08B5B5FC;
    }
L_08B5B5FC:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16660)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16656)));
    aot_gpr_6 = (ctx.gpr[19] ^ aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    aot_gpr_7 = (ctx.gpr[19] < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_7);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(452), ctx.gpr[12]);
      if (branch_taken) {
          goto L_08B5B6D8;
      }
      goto L_08B5B628;
    }
L_08B5B628:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(476), ctx.gpr[19]);
    goto L_08B5B62C;
L_08B5B62C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(472), ctx.gpr[18]);
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16660)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16656)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(484), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(480), ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(476)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(484)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(480)));
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5B668u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 887u, 0x08B5B668u, 0x08B6159Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 269u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 269u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 269u, 0x08B6159Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B668u) goto L_08B5B668;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5B668:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16652)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16648)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_2 + aot_gpr_4);
    aot_gpr_7 = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[3]);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(476)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(472)));
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5B6A8u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 888u, 0x08B5B6A8u, 0x08B61028u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 199u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 199u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 199u, 0x08B61028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B6A8u) goto L_08B5B6A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5B6A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(484)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(480)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_6 = (ctx.gpr[19] ^ aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    aot_gpr_7 = (ctx.gpr[19] < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_7);
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(476), ctx.gpr[19]);
        goto L_08B5B62C;
    }
    goto L_08B5B6D8;
L_08B5B6D8:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16652)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16648)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_7 = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[19]);
    aot_mem.aot_direct_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(452)));
      if (branch_taken) {
          goto L_08B5B744;
      }
      goto L_08B5B70C;
    }
L_08B5B70C:
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_4 = (ctx.gpr[12] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[19] & ctx.gpr[15]);
    aot_mem.aot_direct_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (ctx.gpr[19] << 28u);
    ctx.gpr[18] = (ctx.gpr[18] >> 4u);
    ctx.gpr[19] = (ctx.gpr[19] >> 4u);
    ctx.gpr[18] = (ctx.gpr[1] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_6;
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5B70C;
      }
      goto L_08B5B73C;
    }
L_08B5B73C:
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_7;
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5B70C;
      }
      goto L_08B5B744;
    }
L_08B5B744:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(424)));
    goto L_08B5B748;
L_08B5B748:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(452), ctx.gpr[12]);
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(388));
      if (branch_taken) {
          goto L_08B5B784;
      }
      goto L_08B5B758;
    }
L_08B5B758:
    aot_gpr_4 = (ctx.gpr[21] & 512u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_7 = (aot_gpr_5 - ctx.gpr[23]);
      if (branch_taken) {
          goto L_08B5B788;
      }
      goto L_08B5B764;
    }
L_08B5B764:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(40));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08B5B778u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0214.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 896u, 0x08B5B778u, 0x08B5C0D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0214_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0214_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 15u, 0x08B5C0D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B778u) goto L_08B5B778;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5B778:
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5B784;
    }
L_08B5B784:
    aot_gpr_7 = (aot_gpr_5 - ctx.gpr[23]);
    goto L_08B5B788;
L_08B5B788:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_7);
      if (branch_taken) {
          goto L_08B5B7B8;
      }
      goto L_08B5B790;
    }
L_08B5B790:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 11u, 0x08B5C080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B5B798;
    }
L_08B5B798:
    aot_gpr_7 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_7);
    aot_gpr_4 = (ctx.gpr[21] & 132u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (ctx.gpr[21] & 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(448), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(456), aot_gpr_5);
    goto L_08B5B7B8;
L_08B5B7B8:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(460)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_6 & 512u);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    if (aot_gpr_4 == 0u) {
    ctx.gpr[9] = (aot_gpr_7 | 0u);
        goto L_08B5B7D8;
    }
    goto L_08B5B7D8;
L_08B5B7D8:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08B5B7E8;
      }
      goto L_08B5B7E0;
    }
L_08B5B7E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5B7F8;
      }
      goto L_08B5B7E8;
    }
L_08B5B7E8:
    aot_gpr_4 = (ctx.gpr[21] & 2u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(448)));
        goto L_08B5B7FC;
    }
    goto L_08B5B7F4;
L_08B5B7F4:
    ctx.gpr[19] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    goto L_08B5B7F8;
L_08B5B7F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(448)));
    goto L_08B5B7FC;
L_08B5B7FC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5B99C;
      }
      goto L_08B5B804;
    }
L_08B5B804:
    ctx.gpr[18] = (ctx.gpr[30] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5B998;
      }
      goto L_08B5B810;
    }
L_08B5B810:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B5B8D4;
      }
      goto L_08B5B818;
    }
L_08B5B818:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5B894;
    }
    goto L_08B5B820;
L_08B5B820:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5B864;
      }
      goto L_08B5B830;
    }
L_08B5B830:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    ctx.gpr[31] = (0x08B5B840u);
    aot_gpr_6 = (0u | 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 913u, 0x08B5B840u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B840u) goto L_08B5B840;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5B840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5B8C4;
      }
      goto L_08B5B864;
    }
L_08B5B864:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B5B874u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 915u, 0x08B5B874u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B874u) goto L_08B5B874;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5B874:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5B8C4;
      }
      goto L_08B5B894;
    }
L_08B5B894:
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5B8AC;
    }
    goto L_08B5B89C;
L_08B5B89C:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B5B8A8;
      }
      goto L_08B5B8A4;
    }
L_08B5B8A4:
    aot_mem.aot_direct_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B5B8A8;
L_08B5B8A8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08B5B8AC;
L_08B5B8AC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_6 = (0u | 16u);
    ctx.gpr[31] = (0x08B5B8BCu);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5A818;
L_08B5B8BC:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_5 = (aot_gpr_6 & 512u);
    goto L_08B5B8C4;
L_08B5B8C4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B5B818;
      }
      goto L_08B5B8D4;
    }
L_08B5B8D4:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
      if (branch_taken) {
          goto L_08B5B958;
      }
      goto L_08B5B8DC;
    }
L_08B5B8DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5B924;
      }
      goto L_08B5B8EC;
    }
L_08B5B8EC:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    ctx.gpr[31] = (0x08B5B8FCu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 926u, 0x08B5B8FCu, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B8FCu) goto L_08B5B8FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5B8FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 - ctx.gpr[18]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_6 & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08B5B998;
      }
      goto L_08B5B924;
    }
L_08B5B924:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B5B934u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 928u, 0x08B5B934u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B934u) goto L_08B5B934;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5B934:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_5 = (aot_gpr_6 & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08B5B998;
      }
      goto L_08B5B958;
    }
L_08B5B958:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5B97C;
      }
      goto L_08B5B964;
    }
L_08B5B964:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5B97C;
      }
      goto L_08B5B96C;
    }
L_08B5B96C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08B5B97C;
L_08B5B97C:
    aot_gpr_5 = (aot_gpr_7 | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5B98Cu);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5A818;
L_08B5B98C:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_5 = (aot_gpr_6 & 512u);
    goto L_08B5B998;
L_08B5B998:
    ctx.gpr[18] = (0u | 1u);
    goto L_08B5B99C;
L_08B5B99C:
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(388));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B5BA5C;
      }
      goto L_08B5B9A8;
    }
L_08B5B9A8:
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BA24;
    }
    goto L_08B5B9B0;
L_08B5B9B0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5B9F4;
      }
      goto L_08B5B9C0;
    }
L_08B5B9C0:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B5B9D0u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 939u, 0x08B5B9D0u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5B9D0u) goto L_08B5B9D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5B9D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5BB20;
      }
      goto L_08B5B9F4;
    }
L_08B5B9F4:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B5BA04u);
    aot_gpr_5 = (ctx.gpr[9] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 941u, 0x08B5BA04u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BA04u) goto L_08B5BA04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BA04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5BB20;
      }
      goto L_08B5BA24;
    }
L_08B5BA24:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5BA40;
      }
      goto L_08B5BA2C;
    }
L_08B5BA2C:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5BA40;
      }
      goto L_08B5BA34;
    }
L_08B5BA34:
    aot_mem.aot_direct_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08B5BA40;
L_08B5BA40:
    aot_gpr_5 = (ctx.gpr[9] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[31] = (0x08B5BA50u);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5A818;
L_08B5BA50:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5BB20;
      }
      goto L_08B5BA5C;
    }
L_08B5BA5C:
    aot_gpr_4 = (ctx.gpr[21] & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 48u);
      if (branch_taken) {
          goto L_08B5BB20;
      }
      goto L_08B5BA68;
    }
L_08B5BA68:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(389), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08B5BAE8;
      }
      goto L_08B5BA74;
    }
L_08B5BA74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BAB8;
      }
      goto L_08B5BA84;
    }
L_08B5BA84:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    ctx.gpr[31] = (0x08B5BA94u);
    aot_gpr_6 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 951u, 0x08B5BA94u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BA94u) goto L_08B5BA94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BA94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5BB20;
      }
      goto L_08B5BAB8;
    }
L_08B5BAB8:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B5BAC8u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 953u, 0x08B5BAC8u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BAC8u) goto L_08B5BAC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BAC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5BB20;
      }
      goto L_08B5BAE8;
    }
L_08B5BAE8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5BB08;
      }
      goto L_08B5BAF4;
    }
L_08B5BAF4:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5BB08;
      }
      goto L_08B5BAFC;
    }
L_08B5BAFC:
    aot_mem.aot_direct_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08B5BB08;
L_08B5BB08:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(388));
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[31] = (0x08B5BB18u);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5A818;
L_08B5BB18:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_5 = (aot_gpr_6 & 512u);
    goto L_08B5BB20;
L_08B5BB20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(448)));
    aot_gpr_7 = (0u | 128u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_7;
    ctx.gpr[16] = (ctx.gpr[30] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B5BCAC;
      }
      goto L_08B5BB30;
    }
L_08B5BB30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5BCAC;
      }
      goto L_08B5BB38;
    }
L_08B5BB38:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B5BBFC;
      }
      goto L_08B5BB40;
    }
L_08B5BB40:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BBBC;
    }
    goto L_08B5BB48;
L_08B5BB48:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BB8C;
      }
      goto L_08B5BB58;
    }
L_08B5BB58:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5BB68u);
    aot_gpr_6 = (0u | 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 965u, 0x08B5BB68u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BB68u) goto L_08B5BB68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BB68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5BBEC;
      }
      goto L_08B5BB8C;
    }
L_08B5BB8C:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B5BB9Cu);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 967u, 0x08B5BB9Cu, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BB9Cu) goto L_08B5BB9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BB9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5BBEC;
      }
      goto L_08B5BBBC;
    }
L_08B5BBBC:
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BBD4;
    }
    goto L_08B5BBC4;
L_08B5BBC4:
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BBD4;
    }
    goto L_08B5BBCC;
L_08B5BBCC:
    aot_mem.aot_direct_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08B5BBD4;
L_08B5BBD4:
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (0u | 16u);
    ctx.gpr[31] = (0x08B5BBE4u);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5A818;
L_08B5BBE4:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_5 = (aot_gpr_6 & 512u);
    goto L_08B5BBEC;
L_08B5BBEC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B5BB40;
      }
      goto L_08B5BBFC;
    }
L_08B5BBFC:
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BC78;
    }
    goto L_08B5BC04;
L_08B5BC04:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BC48;
      }
      goto L_08B5BC14;
    }
L_08B5BC14:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5BC24u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 977u, 0x08B5BC24u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BC24u) goto L_08B5BC24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BC24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_5 - ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5BCAC;
      }
      goto L_08B5BC48;
    }
L_08B5BC48:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B5BC58u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 979u, 0x08B5BC58u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BC58u) goto L_08B5BC58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BC58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5BCAC;
      }
      goto L_08B5BC78;
    }
L_08B5BC78:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5BC94;
      }
      goto L_08B5BC80;
    }
L_08B5BC80:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5BC94;
      }
      goto L_08B5BC88;
    }
L_08B5BC88:
    aot_mem.aot_direct_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08B5BC94;
L_08B5BC94:
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5BCA4u);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5A818;
L_08B5BCA4:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_5 = (aot_gpr_6 & 512u);
    goto L_08B5BCAC;
L_08B5BCAC:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(460)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[16] - aot_gpr_7);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5BE40;
      }
      goto L_08B5BCC0;
    }
L_08B5BCC0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B5BD84;
      }
      goto L_08B5BCC8;
    }
L_08B5BCC8:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BD44;
    }
    goto L_08B5BCD0;
L_08B5BCD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BD14;
      }
      goto L_08B5BCE0;
    }
L_08B5BCE0:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5BCF0u);
    aot_gpr_6 = (0u | 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 990u, 0x08B5BCF0u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BCF0u) goto L_08B5BCF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BCF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5BD74;
      }
      goto L_08B5BD14;
    }
L_08B5BD14:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B5BD24u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 992u, 0x08B5BD24u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BD24u) goto L_08B5BD24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BD24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5BD74;
      }
      goto L_08B5BD44;
    }
L_08B5BD44:
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BD5C;
    }
    goto L_08B5BD4C;
L_08B5BD4C:
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BD5C;
    }
    goto L_08B5BD54;
L_08B5BD54:
    aot_mem.aot_direct_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08B5BD5C;
L_08B5BD5C:
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (0u | 16u);
    ctx.gpr[31] = (0x08B5BD6Cu);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5A818;
L_08B5BD6C:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_5 = (aot_gpr_6 & 512u);
    goto L_08B5BD74;
L_08B5BD74:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B5BCC8;
      }
      goto L_08B5BD84;
    }
L_08B5BD84:
    if (aot_gpr_5 == 0u) {
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BE08;
    }
    goto L_08B5BD8C;
L_08B5BD8C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BDD4;
      }
      goto L_08B5BD9C;
    }
L_08B5BD9C:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5BDACu);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 1002u, 0x08B5BDACu, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BDACu) goto L_08B5BDAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BDAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 - ctx.gpr[16]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_6 & 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5BE40;
      }
      goto L_08B5BDD4;
    }
L_08B5BDD4:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B5BDE4u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 1004u, 0x08B5BDE4u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BDE4u) goto L_08B5BDE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BDE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_5 = (aot_gpr_6 & 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5BE40;
      }
      goto L_08B5BE08;
    }
L_08B5BE08:
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_4 = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08B5BE24;
      }
      goto L_08B5BE10;
    }
L_08B5BE10:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_7 | 0u);
      if (branch_taken) {
          goto L_08B5BE24;
      }
      goto L_08B5BE18;
    }
L_08B5BE18:
    aot_mem.aot_direct_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (aot_gpr_7 | 0u);
    goto L_08B5BE24;
L_08B5BE24:
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5BE34u);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5A818;
L_08B5BE34:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_6 & 512u);
    goto L_08B5BE40;
L_08B5BE40:
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BEB0;
    }
    goto L_08B5BE48;
L_08B5BE48:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BE88;
      }
      goto L_08B5BE58;
    }
L_08B5BE58:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08B5BE68u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 1013u, 0x08B5BE68u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BE68u) goto L_08B5BE68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BE68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5BEDC;
      }
      goto L_08B5BE88;
    }
L_08B5BE88:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B5BE98u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 1015u, 0x08B5BE98u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BE98u) goto L_08B5BE98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BE98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08B5BEDC;
      }
      goto L_08B5BEB0;
    }
L_08B5BEB0:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5BECC;
      }
      goto L_08B5BEB8;
    }
L_08B5BEB8:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5BECC;
      }
      goto L_08B5BEC0;
    }
L_08B5BEC0:
    aot_mem.aot_direct_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08B5BECC;
L_08B5BECC:
    aot_gpr_6 = (aot_gpr_7 | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08B5BEDCu);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5A818;
L_08B5BEDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 9u, 0x08B5C064u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B5BEE8;
    }
L_08B5BEE8:
    ctx.gpr[16] = (ctx.gpr[30] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_gpr_5 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 9u, 0x08B5C064u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B5BEF4;
    }
L_08B5BEF4:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_6 & 512u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5BFC8;
      }
      goto L_08B5BF0C;
    }
L_08B5BF0C:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BF88;
    }
    goto L_08B5BF14;
L_08B5BF14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5BF58;
      }
      goto L_08B5BF24;
    }
L_08B5BF24:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5BF34u);
    aot_gpr_6 = (0u | 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 1026u, 0x08B5BF34u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BF34u) goto L_08B5BF34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BF34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5BFB8;
      }
      goto L_08B5BF58;
    }
L_08B5BF58:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[31] = (0x08B5BF68u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 1028u, 0x08B5BF68u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BF68u) goto L_08B5BF68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BF68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_6 & 512u);
      if (branch_taken) {
          goto L_08B5BFB8;
      }
      goto L_08B5BF88;
    }
L_08B5BF88:
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BFA0;
    }
    goto L_08B5BF90;
L_08B5BF90:
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5BFA0;
    }
    goto L_08B5BF98;
L_08B5BF98:
    aot_mem.aot_direct_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08B5BFA0;
L_08B5BFA0:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 16u);
    ctx.gpr[31] = (0x08B5BFB0u);
    aot_gpr_7 = (0u | 0u);
    goto L_08B5A818;
L_08B5BFB0:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr_5 = (aot_gpr_6 & 512u);
    goto L_08B5BFB8;
L_08B5BFB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B5BF0C;
      }
      goto L_08B5BFC8;
    }
L_08B5BFC8:
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 4u, 0x08B5C034u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B5BFD0;
L_08B5BFD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0214_entry, 214u, 2u, 0x08B5C00Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B5BFE0;
    }
L_08B5BFE0:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5BFF0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0213->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0213_entry, 1038u, 0x08B5BFF0u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5BFF0u) goto L_08B5BFF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08B5BFF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.pc = 0x08B5C000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0213(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0213_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_213(Runtime &runtime) {
    runtime.register_generated_unit(213u, 0x08B58000u, 16384u, &recomp_unit_0213, &recomp_unit_0213_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08B58004u, &recomp_unit_0213, "recomp_unit_0213",
                                          kEntryMasks_recomp_unit_0213, 64u);
}
} // namespace psprecomp
