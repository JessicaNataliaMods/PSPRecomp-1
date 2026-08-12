#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0159[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 55, 0, 0, 0, 0, 56, 0, 0, 57, 58, 0, 0, 0, 59, 0, 0,
    0, 60, 61, 0, 0, 0, 62, 0, 0, 0, 63, 64, 0, 0, 0, 65, 0, 0, 0, 66, 67, 0, 0, 0, 68, 69, 0, 0, 0, 70, 71, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0,
    99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 0, 0, 114, 0, 115,
    0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 142, 0, 143,
    0, 144, 0, 0, 0, 0, 0, 145, 146, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 160, 161, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172,
    0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 178,
    0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 0, 0, 188,
    0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0,
    0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0,
    227, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0,
    0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 240, 241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 244,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 247, 248, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0,
    0, 0, 0, 0, 253, 254, 255, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0,
    0, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0,
    0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0,
    0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0,
    285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0,
    292, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0,
    0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0,
    0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 347,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 366, 0, 0, 367, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0,
    0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0,
    387, 388, 0, 0, 0, 0, 0, 389, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 393, 394, 0, 395, 0, 0, 396, 0, 397,
};
void recomp_unit_0159_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A80000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0159[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A80000;
    case 2u: goto L_08A80044;
    case 3u: goto L_08A8007C;
    case 4u: goto L_08A80088;
    case 5u: goto L_08A80098;
    case 6u: goto L_08A800A8;
    case 7u: goto L_08A800B4;
    case 8u: goto L_08A800CC;
    case 9u: goto L_08A800FC;
    case 10u: goto L_08A8013C;
    case 11u: goto L_08A80148;
    case 12u: goto L_08A80218;
    case 13u: goto L_08A80220;
    case 14u: goto L_08A80228;
    case 15u: goto L_08A80258;
    case 16u: goto L_08A80264;
    case 17u: goto L_08A8029C;
    case 18u: goto L_08A802A8;
    case 19u: goto L_08A80374;
    case 20u: goto L_08A80380;
    case 21u: goto L_08A8044C;
    case 22u: goto L_08A80458;
    case 23u: goto L_08A80524;
    case 24u: goto L_08A80530;
    case 25u: goto L_08A805FC;
    case 26u: goto L_08A80608;
    case 27u: goto L_08A80640;
    case 28u: goto L_08A80664;
    case 29u: goto L_08A80724;
    case 30u: goto L_08A80730;
    case 31u: goto L_08A807F0;
    case 32u: goto L_08A807FC;
    case 33u: goto L_08A808BC;
    case 34u: goto L_08A808E0;
    case 35u: goto L_08A809A0;
    case 36u: goto L_08A809AC;
    case 37u: goto L_08A80A6C;
    case 38u: goto L_08A80A78;
    case 39u: goto L_08A80B38;
    case 40u: goto L_08A80B44;
    case 41u: goto L_08A80C04;
    case 42u: goto L_08A80C10;
    case 43u: goto L_08A80C38;
    case 44u: goto L_08A80C44;
    case 45u: goto L_08A80C6C;
    case 46u: goto L_08A80C7C;
    case 47u: goto L_08A80CA4;
    case 48u: goto L_08A80CB4;
    case 49u: goto L_08A80CDC;
    case 50u: goto L_08A80CF8;
    case 51u: goto L_08A80D0C;
    case 52u: goto L_08A80D1C;
    case 53u: goto L_08A80D2C;
    case 54u: goto L_08A80D3C;
    case 55u: goto L_08A80D40;
    case 56u: goto L_08A80D54;
    case 57u: goto L_08A80D60;
    case 58u: goto L_08A80D64;
    case 59u: goto L_08A80D74;
    case 60u: goto L_08A80D84;
    case 61u: goto L_08A80D88;
    case 62u: goto L_08A80D98;
    case 63u: goto L_08A80DA8;
    case 64u: goto L_08A80DAC;
    case 65u: goto L_08A80DBC;
    case 66u: goto L_08A80DCC;
    case 67u: goto L_08A80DD0;
    case 68u: goto L_08A80DE0;
    case 69u: goto L_08A80DE4;
    case 70u: goto L_08A80DF4;
    case 71u: goto L_08A80DF8;
    case 72u: goto L_08A80E00;
    case 73u: goto L_08A80E34;
    case 74u: goto L_08A811F4;
    case 75u: goto L_08A81200;
    case 76u: goto L_08A81380;
    case 77u: goto L_08A8138C;
    case 78u: goto L_08A8167C;
    case 79u: goto L_08A81688;
    case 80u: goto L_08A81758;
    case 81u: goto L_08A81764;
    case 82u: goto L_08A817CC;
    case 83u: goto L_08A817D8;
    case 84u: goto L_08A8180C;
    case 85u: goto L_08A81818;
    case 86u: goto L_08A8184C;
    case 87u: goto L_08A81854;
    case 88u: goto L_08A81874;
    case 89u: goto L_08A81A54;
    case 90u: goto L_08A81A60;
    case 91u: goto L_08A81B34;
    case 92u: goto L_08A81B40;
    case 93u: goto L_08A81CD0;
    case 94u: goto L_08A81CDC;
    case 95u: goto L_08A81D2C;
    case 96u: goto L_08A81D38;
    case 97u: goto L_08A81D60;
    case 98u: goto L_08A81D6C;
    case 99u: goto L_08A81D80;
    case 100u: goto L_08A81D8C;
    case 101u: goto L_08A81DA0;
    case 102u: goto L_08A81DA8;
    case 103u: goto L_08A81DC0;
    case 104u: goto L_08A81DD0;
    case 105u: goto L_08A81DDC;
    case 106u: goto L_08A81E04;
    case 107u: goto L_08A81E2C;
    case 108u: goto L_08A81E34;
    case 109u: goto L_08A81E3C;
    case 110u: goto L_08A81E4C;
    case 111u: goto L_08A81E54;
    case 112u: goto L_08A81E5C;
    case 113u: goto L_08A81E64;
    case 114u: goto L_08A81E74;
    case 115u: goto L_08A81E7C;
    case 116u: goto L_08A81E8C;
    case 117u: goto L_08A81E94;
    case 118u: goto L_08A81EA4;
    case 119u: goto L_08A81EB0;
    case 120u: goto L_08A81EBC;
    case 121u: goto L_08A81EC4;
    case 122u: goto L_08A81ECC;
    case 123u: goto L_08A81EE4;
    case 124u: goto L_08A81F10;
    case 125u: goto L_08A81F1C;
    case 126u: goto L_08A81F24;
    case 127u: goto L_08A81F2C;
    case 128u: goto L_08A81F34;
    case 129u: goto L_08A81F3C;
    case 130u: goto L_08A81F48;
    case 131u: goto L_08A81F50;
    case 132u: goto L_08A81F58;
    case 133u: goto L_08A81F64;
    case 134u: goto L_08A81F70;
    case 135u: goto L_08A81F7C;
    case 136u: goto L_08A81FA0;
    case 137u: goto L_08A81FA8;
    case 138u: goto L_08A81FC8;
    case 139u: goto L_08A81FD0;
    case 140u: goto L_08A81FE0;
    case 141u: goto L_08A81FF0;
    case 142u: goto L_08A81FF4;
    case 143u: goto L_08A81FFC;
    case 144u: goto L_08A82004;
    case 145u: goto L_08A8201C;
    case 146u: goto L_08A82020;
    case 147u: goto L_08A82024;
    case 148u: goto L_08A82054;
    case 149u: goto L_08A8205C;
    case 150u: goto L_08A82064;
    case 151u: goto L_08A8206C;
    case 152u: goto L_08A82080;
    case 153u: goto L_08A82098;
    case 154u: goto L_08A820A0;
    case 155u: goto L_08A820B0;
    case 156u: goto L_08A820C0;
    case 157u: goto L_08A820C4;
    case 158u: goto L_08A820CC;
    case 159u: goto L_08A820D4;
    case 160u: goto L_08A820EC;
    case 161u: goto L_08A820F0;
    case 162u: goto L_08A820F4;
    case 163u: goto L_08A82124;
    case 164u: goto L_08A82134;
    case 165u: goto L_08A8213C;
    case 166u: goto L_08A82150;
    case 167u: goto L_08A82154;
    case 168u: goto L_08A82170;
    case 169u: goto L_08A8218C;
    case 170u: goto L_08A82198;
    case 171u: goto L_08A821B4;
    case 172u: goto L_08A821FC;
    case 173u: goto L_08A8220C;
    case 174u: goto L_08A82218;
    case 175u: goto L_08A8223C;
    case 176u: goto L_08A82258;
    case 177u: goto L_08A82270;
    case 178u: goto L_08A8227C;
    case 179u: goto L_08A82288;
    case 180u: goto L_08A82290;
    case 181u: goto L_08A822A4;
    case 182u: goto L_08A822C4;
    case 183u: goto L_08A822CC;
    case 184u: goto L_08A822D4;
    case 185u: goto L_08A822DC;
    case 186u: goto L_08A822E4;
    case 187u: goto L_08A822EC;
    case 188u: goto L_08A822FC;
    case 189u: goto L_08A82304;
    case 190u: goto L_08A82310;
    case 191u: goto L_08A8232C;
    case 192u: goto L_08A8233C;
    case 193u: goto L_08A8234C;
    case 194u: goto L_08A82384;
    case 195u: goto L_08A82398;
    case 196u: goto L_08A823A0;
    case 197u: goto L_08A823C4;
    case 198u: goto L_08A823D4;
    case 199u: goto L_08A823E4;
    case 200u: goto L_08A823EC;
    case 201u: goto L_08A823FC;
    case 202u: goto L_08A82420;
    case 203u: goto L_08A8242C;
    case 204u: goto L_08A82438;
    case 205u: goto L_08A82480;
    case 206u: goto L_08A82490;
    case 207u: goto L_08A824A0;
    case 208u: goto L_08A824AC;
    case 209u: goto L_08A824C0;
    case 210u: goto L_08A824CC;
    case 211u: goto L_08A82580;
    case 212u: goto L_08A825AC;
    case 213u: goto L_08A825BC;
    case 214u: goto L_08A825D0;
    case 215u: goto L_08A825E0;
    case 216u: goto L_08A825F4;
    case 217u: goto L_08A82604;
    case 218u: goto L_08A82610;
    case 219u: goto L_08A82618;
    case 220u: goto L_08A826E0;
    case 221u: goto L_08A826FC;
    case 222u: goto L_08A8275C;
    case 223u: goto L_08A82770;
    case 224u: goto L_08A82798;
    case 225u: goto L_08A827E0;
    case 226u: goto L_08A827F4;
    case 227u: goto L_08A82800;
    case 228u: goto L_08A82814;
    case 229u: goto L_08A82820;
    case 230u: goto L_08A8282C;
    case 231u: goto L_08A82834;
    case 232u: goto L_08A82848;
    case 233u: goto L_08A82854;
    case 234u: goto L_08A82864;
    case 235u: goto L_08A82874;
    case 236u: goto L_08A82884;
    case 237u: goto L_08A82890;
    case 238u: goto L_08A828AC;
    case 239u: goto L_08A828C8;
    case 240u: goto L_08A828CC;
    case 241u: goto L_08A828D0;
    case 242u: goto L_08A828D8;
    case 243u: goto L_08A828F0;
    case 244u: goto L_08A828FC;
    case 245u: goto L_08A82910;
    case 246u: goto L_08A8292C;
    case 247u: goto L_08A82930;
    case 248u: goto L_08A82934;
    case 249u: goto L_08A8293C;
    case 250u: goto L_08A82954;
    case 251u: goto L_08A82960;
    case 252u: goto L_08A82974;
    case 253u: goto L_08A82990;
    case 254u: goto L_08A82994;
    case 255u: goto L_08A82998;
    case 256u: goto L_08A829A0;
    case 257u: goto L_08A829B8;
    case 258u: goto L_08A829C4;
    case 259u: goto L_08A829CC;
    case 260u: goto L_08A829DC;
    case 261u: goto L_08A829E8;
    case 262u: goto L_08A829F8;
    case 263u: goto L_08A82A08;
    case 264u: goto L_08A82A18;
    case 265u: goto L_08A82A24;
    case 266u: goto L_08A82A3C;
    case 267u: goto L_08A82A48;
    case 268u: goto L_08A82A58;
    case 269u: goto L_08A82A78;
    case 270u: goto L_08A82A88;
    case 271u: goto L_08A82A94;
    case 272u: goto L_08A82AA8;
    case 273u: goto L_08A82AB4;
    case 274u: goto L_08A82AC4;
    case 275u: goto L_08A82AD4;
    case 276u: goto L_08A82AEC;
    case 277u: goto L_08A82AF8;
    case 278u: goto L_08A82B08;
    case 279u: goto L_08A82B18;
    case 280u: goto L_08A82B28;
    case 281u: goto L_08A82B38;
    case 282u: goto L_08A82B50;
    case 283u: goto L_08A82B60;
    case 284u: goto L_08A82B70;
    case 285u: goto L_08A82B80;
    case 286u: goto L_08A82B90;
    case 287u: goto L_08A82BA0;
    case 288u: goto L_08A82BCC;
    case 289u: goto L_08A82CCC;
    case 290u: goto L_08A82CE0;
    case 291u: goto L_08A82CEC;
    case 292u: goto L_08A82D00;
    case 293u: goto L_08A82D08;
    case 294u: goto L_08A82D18;
    case 295u: goto L_08A82D30;
    case 296u: goto L_08A82D40;
    case 297u: goto L_08A82D4C;
    case 298u: goto L_08A82D74;
    case 299u: goto L_08A82D80;
    case 300u: goto L_08A82E40;
    case 301u: goto L_08A82E4C;
    case 302u: goto L_08A82F0C;
    case 303u: goto L_08A82F18;
    case 304u: goto L_08A82FD8;
    case 305u: goto L_08A82FE4;
    case 306u: goto L_08A82FF8;
    case 307u: goto L_08A83024;
    case 308u: goto L_08A83034;
    case 309u: goto L_08A8305C;
    case 310u: goto L_08A83068;
    case 311u: goto L_08A83090;
    case 312u: goto L_08A8309C;
    case 313u: goto L_08A8315C;
    case 314u: goto L_08A83168;
    case 315u: goto L_08A83184;
    case 316u: goto L_08A83194;
    case 317u: goto L_08A831A8;
    case 318u: goto L_08A831B8;
    case 319u: goto L_08A831D0;
    case 320u: goto L_08A83230;
    case 321u: goto L_08A83240;
    case 322u: goto L_08A83274;
    case 323u: goto L_08A83280;
    case 324u: goto L_08A83340;
    case 325u: goto L_08A83350;
    case 326u: goto L_08A83384;
    case 327u: goto L_08A83390;
    case 328u: goto L_08A834E4;
    case 329u: goto L_08A834F4;
    case 330u: goto L_08A83528;
    case 331u: goto L_08A83538;
    case 332u: goto L_08A8362C;
    case 333u: goto L_08A8363C;
    case 334u: goto L_08A83664;
    case 335u: goto L_08A83674;
    case 336u: goto L_08A83730;
    case 337u: goto L_08A83758;
    case 338u: goto L_08A837F4;
    case 339u: goto L_08A83804;
    case 340u: goto L_08A83810;
    case 341u: goto L_08A83820;
    case 342u: goto L_08A83828;
    case 343u: goto L_08A83838;
    case 344u: goto L_08A8384C;
    case 345u: goto L_08A8385C;
    case 346u: goto L_08A83868;
    case 347u: goto L_08A8387C;
    case 348u: goto L_08A83888;
    case 349u: goto L_08A838F0;
    case 350u: goto L_08A838FC;
    case 351u: goto L_08A83964;
    case 352u: goto L_08A83970;
    case 353u: goto L_08A839D8;
    case 354u: goto L_08A839E4;
    case 355u: goto L_08A83A08;
    case 356u: goto L_08A83A18;
    case 357u: goto L_08A83A2C;
    case 358u: goto L_08A83A38;
    case 359u: goto L_08A83A4C;
    case 360u: goto L_08A83A58;
    case 361u: goto L_08A83AC0;
    case 362u: goto L_08A83ACC;
    case 363u: goto L_08A83BA8;
    case 364u: goto L_08A83BB8;
    case 365u: goto L_08A83BD8;
    case 366u: goto L_08A83BDC;
    case 367u: goto L_08A83BE8;
    case 368u: goto L_08A83C50;
    case 369u: goto L_08A83C60;
    case 370u: goto L_08A83C74;
    case 371u: goto L_08A83C80;
    case 372u: goto L_08A83CCC;
    case 373u: goto L_08A83D44;
    case 374u: goto L_08A83D54;
    case 375u: goto L_08A83D68;
    case 376u: goto L_08A83D78;
    case 377u: goto L_08A83DF4;
    case 378u: goto L_08A83E04;
    case 379u: goto L_08A83E18;
    case 380u: goto L_08A83E28;
    case 381u: goto L_08A83E8C;
    case 382u: goto L_08A83EB4;
    case 383u: goto L_08A83F04;
    case 384u: goto L_08A83F10;
    case 385u: goto L_08A83F70;
    case 386u: goto L_08A83F78;
    case 387u: goto L_08A83F80;
    case 388u: goto L_08A83F84;
    case 389u: goto L_08A83F9C;
    case 390u: goto L_08A83FA0;
    case 391u: goto L_08A83FB8;
    case 392u: goto L_08A83FD4;
    case 393u: goto L_08A83FD8;
    case 394u: goto L_08A83FDC;
    case 395u: goto L_08A83FE4;
    case 396u: goto L_08A83FF0;
    case 397u: goto L_08A83FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A80000:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (0u | 57u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A80044u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A80044u) goto L_08A80044;
    return;
L_08A80044:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 56u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A8007Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8007Cu) goto L_08A8007C;
    return;
L_08A8007C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08A800A8;
    }
    goto L_08A80088;
}
L_08A80088:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(116));
    hot_regs.g31 = (0x08A80098u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A80098u) goto L_08A80098;
    return;
L_08A80098:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08A800A8;
}
L_08A800A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A800CC;
      }
      goto L_08A800B4;
    }
}
L_08A800B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    g5 = (32u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(72));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (hot_regs.g6 | g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A800CC;
}
L_08A800CC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A800FC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A8013Cu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8013Cu) goto L_08A8013C;
    return;
L_08A8013C:
    hot_regs.g4 = (0u | 8u);
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A80220;
      }
      goto L_08A80148;
    }
L_08A80148:
    hot_regs.g4 = (ctx.gpr[16] & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[19] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[16] >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[19] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g5 = (ctx.gpr[16] & 1u);
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(304));
    hot_regs.g6 = (ctx.gpr[17] << 5u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A80228;
      }
      goto L_08A80218;
    }
L_08A80218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80258;
      }
      goto L_08A80220;
    }
L_08A80220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80CDC;
      }
      goto L_08A80228;
    }
L_08A80228:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(209));
    hot_regs.g5 = (hot_regs.g5 + ctx.gpr[17]);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A80258;
L_08A80258:
    hot_regs.g5 = (ctx.gpr[16] & 2u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8029C;
      }
      goto L_08A80264;
    }
L_08A80264:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(216));
    hot_regs.g6 = (ctx.gpr[17] << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A8029C;
L_08A8029C:
    hot_regs.g5 = (ctx.gpr[16] & 4u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80374;
      }
      goto L_08A802A8;
    }
L_08A802A8:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(232));
    hot_regs.g6 = (ctx.gpr[17] << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g5 >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A80374;
L_08A80374:
    hot_regs.g5 = (ctx.gpr[16] & 8u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8044C;
      }
      goto L_08A80380;
    }
L_08A80380:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(248));
    hot_regs.g6 = (ctx.gpr[17] << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g5 >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A8044C;
L_08A8044C:
    hot_regs.g5 = (ctx.gpr[16] & 16u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80524;
      }
      goto L_08A80458;
    }
L_08A80458:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(264));
    hot_regs.g6 = (ctx.gpr[17] << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g5 >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A80524;
L_08A80524:
    hot_regs.g5 = (ctx.gpr[16] & 32u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A805FC;
      }
      goto L_08A80530;
    }
L_08A80530:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(280));
    hot_regs.g6 = (ctx.gpr[17] << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g5 >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A805FC;
L_08A805FC:
    hot_regs.g5 = (ctx.gpr[16] & 64u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80640;
      }
      goto L_08A80608;
    }
L_08A80608:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(432));
    hot_regs.g6 = (ctx.gpr[17] << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A80640;
L_08A80640:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = (ctx.gpr[16] & 128u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A80724;
      }
      goto L_08A80664;
    }
}
}
L_08A80664:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g5 >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A80724;
L_08A80724:
    hot_regs.g5 = (ctx.gpr[16] & 256u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A807F0;
      }
      goto L_08A80730;
    }
L_08A80730:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g5 >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A807F0;
L_08A807F0:
    hot_regs.g5 = (ctx.gpr[16] & 512u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A808BC;
      }
      goto L_08A807FC;
    }
L_08A807FC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g5 >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A808BC;
L_08A808BC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = (ctx.gpr[16] & 1024u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A809A0;
      }
      goto L_08A808E0;
    }
}
}
L_08A808E0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g5 >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A809A0;
L_08A809A0:
    hot_regs.g5 = (ctx.gpr[16] & 2048u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80A6C;
      }
      goto L_08A809AC;
    }
L_08A809AC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g5 >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A80A6C;
L_08A80A6C:
    hot_regs.g5 = (ctx.gpr[16] & 4096u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80B38;
      }
      goto L_08A80A78;
    }
L_08A80A78:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g5 >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A80B38;
L_08A80B38:
    hot_regs.g5 = (ctx.gpr[16] & 8192u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80C04;
      }
      goto L_08A80B44;
    }
L_08A80B44:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g5 >> 16u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A80C04;
L_08A80C04:
    hot_regs.g5 = (ctx.gpr[16] & 16384u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80C38;
      }
      goto L_08A80C10;
    }
L_08A80C10:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(28)));
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A80C38;
L_08A80C38:
    hot_regs.g5 = (ctx.gpr[16] & 32768u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80C6C;
      }
      goto L_08A80C44;
    }
L_08A80C44:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(29)));
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A80C6C;
L_08A80C6C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (1u << 16u);
    g5 = (ctx.gpr[16] & g5);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A80CA4;
      }
      goto L_08A80C7C;
    }
}
L_08A80C7C:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(30)));
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A80CA4;
L_08A80CA4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2u << 16u);
    g5 = (ctx.gpr[16] & g5);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A80CDC;
      }
      goto L_08A80CB4;
    }
}
L_08A80CB4:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(31)));
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[19] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A80CDC;
L_08A80CDC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A80CF8:
    hot_regs.g2 = (0u | 0u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(48))))));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A80D3C;
      }
      goto L_08A80D0C;
    }
L_08A80D0C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(50))))));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(50))))));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A80D3C;
      }
      goto L_08A80D1C;
    }
L_08A80D1C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A80D3C;
      }
      goto L_08A80D2C;
    }
L_08A80D2C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A80D40;
      }
      goto L_08A80D3C;
    }
L_08A80D3C:
    hot_regs.g2 = (0u | 2u);
    goto L_08A80D40;
L_08A80D40:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A80D60;
      }
      goto L_08A80D54;
    }
L_08A80D54:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = hot_regs.g7 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A80D64;
      }
      goto L_08A80D60;
    }
L_08A80D60:
    hot_regs.g2 = (hot_regs.g2 | 128u);
    goto L_08A80D64;
L_08A80D64:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(24)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A80D84;
      }
      goto L_08A80D74;
    }
L_08A80D74:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(28)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A80D88;
      }
      goto L_08A80D84;
    }
L_08A80D84:
    hot_regs.g2 = (hot_regs.g2 | 1u);
    goto L_08A80D88;
L_08A80D88:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(44))))));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A80DA8;
      }
      goto L_08A80D98;
    }
L_08A80D98:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(45))))));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(45))))));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A80DAC;
      }
      goto L_08A80DA8;
    }
L_08A80DA8:
    hot_regs.g2 = (hot_regs.g2 | 4u);
    goto L_08A80DAC;
L_08A80DAC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(52))))));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A80DCC;
      }
      goto L_08A80DBC;
    }
L_08A80DBC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(53))))));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(53))))));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A80DD0;
      }
      goto L_08A80DCC;
    }
L_08A80DCC:
    hot_regs.g2 = (hot_regs.g2 | 16u);
    goto L_08A80DD0;
L_08A80DD0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(54))))));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(54))))));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A80DE4;
      }
      goto L_08A80DE0;
    }
L_08A80DE0:
    hot_regs.g2 = (hot_regs.g2 | 32u);
    goto L_08A80DE4;
L_08A80DE4:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(55))))));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(55))))));
    { const bool branch_taken = hot_regs.g4 == g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A80DF8;
      }
      goto L_08A80DF4;
    }
}
L_08A80DF4:
    hot_regs.g2 = (hot_regs.g2 | 64u);
    goto L_08A80DF8;
L_08A80DF8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A80E00:
    hot_regs.g4 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g7 & 2u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A811F4;
      }
      goto L_08A80E34;
    }
L_08A80E34:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[9] = (hot_regs.g4 & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[9] = (hot_regs.g4 & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[9] = (hot_regs.g4 & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[9] = (hot_regs.g4 & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(48))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(50))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(49))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(51))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A811F4;
L_08A811F4:
    hot_regs.g4 = (hot_regs.g7 & 128u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81380;
      }
      goto L_08A81200;
    }
L_08A81200:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[9] = (hot_regs.g4 & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g4 = (hot_regs.g4 - ctx.gpr[8]);
    ctx.gpr[8] = (hot_regs.g4 & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A81380;
L_08A81380:
    hot_regs.g4 = (hot_regs.g7 & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8167C;
      }
      goto L_08A8138C;
    }
L_08A8138C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[9] = (hot_regs.g4 & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[9] = (hot_regs.g4 & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[9] = (hot_regs.g4 & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[9] = (hot_regs.g4 & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[8] & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A8167C;
L_08A8167C:
    hot_regs.g4 = (hot_regs.g7 & 4u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81758;
      }
      goto L_08A81688;
    }
L_08A81688:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(44))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(45))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(47))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(46))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A81758;
L_08A81758:
    hot_regs.g4 = (hot_regs.g7 & 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A817CC;
      }
      goto L_08A81764;
    }
L_08A81764:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(52))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(53))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A817CC;
L_08A817CC:
    hot_regs.g4 = (hot_regs.g7 & 32u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8180C;
      }
      goto L_08A817D8;
    }
L_08A817D8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(54))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A8180C;
L_08A8180C:
    hot_regs.g4 = (hot_regs.g7 & 64u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8184C;
      }
      goto L_08A81818;
    }
L_08A81818:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(55))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A8184C;
L_08A8184C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81854:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g7 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g7);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g4 & 2u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A81A54;
      }
      goto L_08A81874;
    }
}
L_08A81874:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g7);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(12), g7);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(8), g7);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(g7));
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(g7));
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(g7));
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(g7));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    goto L_08A81A54;
}
L_08A81A54:
    hot_regs.g7 = (hot_regs.g4 & 128u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81B34;
      }
      goto L_08A81A60;
    }
L_08A81A60:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(16), g7);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), g7);
    g8 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g7 = (g7 + g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), g7);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    goto L_08A81B34;
}
L_08A81B34:
    hot_regs.g7 = (hot_regs.g4 & 1u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81CD0;
      }
      goto L_08A81B40;
    }
L_08A81B40:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(24), g7);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(28), g7);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(36), g7);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(32), g7);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    goto L_08A81CD0;
}
L_08A81CD0:
    hot_regs.g7 = (hot_regs.g4 & 4u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81D2C;
      }
      goto L_08A81CDC;
    }
L_08A81CDC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(g7));
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(g7));
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(g7));
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(g7));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A81D2C;
}
L_08A81D2C:
    hot_regs.g7 = (hot_regs.g4 & 16u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81D60;
      }
      goto L_08A81D38;
    }
L_08A81D38:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g7));
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(g7));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A81D60;
}
L_08A81D60:
    hot_regs.g7 = (hot_regs.g4 & 32u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81D80;
      }
      goto L_08A81D6C;
    }
L_08A81D6C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(g7));
    hot_regs.g7 = g7;
    goto L_08A81D80;
}
L_08A81D80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 64u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A81DA0;
      }
      goto L_08A81D8C;
    }
}
L_08A81D8C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g7);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A81DA0;
}
L_08A81DA0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81DA8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A81DDC;
      }
      goto L_08A81DC0;
    }
}
L_08A81DC0:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08A81DD0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81DD0u) goto L_08A81DD0;
    return;
L_08A81DD0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A81DDC;
L_08A81DDC:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(204))))));
    g4 = (g4 & 2u);
    g4 = (0u < g4 ? 1u : 0u);
    g2 = (g4 & 255u);
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A81E04:
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(104)));
    g18 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(900)));
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    { const bool branch_taken = g18 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A81EA4;
      }
      goto L_08A81E2C;
    }
}
L_08A81E2C:
    hot_regs.g31 = (0x08A81E34u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81E34u) goto L_08A81E34;
    return;
L_08A81E34:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81EA4;
      }
      goto L_08A81E3C;
    }
L_08A81E3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 55u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A81EC4;
      }
      goto L_08A81E4C;
    }
L_08A81E4C:
    hot_regs.g31 = (0x08A81E54u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81E54u) goto L_08A81E54;
    return;
L_08A81E54:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81EA4;
      }
      goto L_08A81E5C;
    }
L_08A81E5C:
    hot_regs.g31 = (0x08A81E64u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81E64u) goto L_08A81E64;
    return;
L_08A81E64:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(48))))));
    hot_regs.g5 = (0u | 97u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A81EA4;
      }
      goto L_08A81E74;
    }
L_08A81E74:
    hot_regs.g31 = (0x08A81E7Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81E7Cu) goto L_08A81E7C;
    return;
L_08A81E7C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(48))))));
    hot_regs.g5 = (0u | 187u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A81EA4;
      }
      goto L_08A81E8C;
    }
L_08A81E8C:
    hot_regs.g31 = (0x08A81E94u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81E94u) goto L_08A81E94;
    return;
L_08A81E94:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(48))))));
    hot_regs.g5 = (0u | 98u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A81ECC;
      }
      goto L_08A81EA4;
    }
L_08A81EA4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A81EB0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 448u, 0x08A9B950u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81EB0u) goto L_08A81EB0;
    return;
L_08A81EB0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A81EBCu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_08A81EE4;
L_08A81EBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81ECC;
      }
      goto L_08A81EC4;
    }
L_08A81EC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81ECC;
      }
      goto L_08A81ECC;
    }
L_08A81ECC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A81EE4:
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g19);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), hot_regs.g31);
    g19 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = g19 == 0u;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A81F24;
      }
      goto L_08A81F10;
    }
}
L_08A81F10:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g19 != 0u;
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A81F2C;
      }
      goto L_08A81F1C;
    }
}
L_08A81F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82150;
      }
      goto L_08A81F24;
    }
L_08A81F24:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A82154;
      }
      goto L_08A81F2C;
    }
L_08A81F2C:
    hot_regs.g31 = (0x08A81F34u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81F34u) goto L_08A81F34;
    return;
L_08A81F34:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81FA8;
      }
      goto L_08A81F3C;
    }
L_08A81F3C:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A81F48u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 262u, 0x08908E80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81F48u) goto L_08A81F48;
    return;
L_08A81F48:
    hot_regs.g31 = (0x08A81F50u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81F50u) goto L_08A81F50;
    return;
L_08A81F50:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81F64;
      }
      goto L_08A81F58;
    }
L_08A81F58:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A81F64u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81F64u) goto L_08A81F64;
    return;
L_08A81F64:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A81F70u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81F70u) goto L_08A81F70;
    return;
L_08A81F70:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A81F7Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81F7Cu) goto L_08A81F7C;
    return;
L_08A81F7C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-497));
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 | 64u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (0x08A81FA0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A81FA0u) goto L_08A81FA0;
    return;
L_08A81FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82150;
      }
      goto L_08A81FA8;
    }
L_08A81FA8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (2237u << 16u);
    g16 = (g16 + static_cast<std::uint32_t>(-28736));
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (hot_regs.g6 | 0u);
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A81FFC;
      }
      goto L_08A81FC8;
    }
}
L_08A81FC8:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    goto L_08A81FD0;
L_08A81FD0:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 < ctx.gpr[19] ? 1u : 0u);
    g7 = (g7 & 255u);
    if (g7 != 0u) {
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(12));
    hot_regs.g7 = g7;
        goto L_08A81FF0;
    }
    goto L_08A81FE0;
}
L_08A81FE0:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (g5 | 0u);
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A81FF4;
      }
      goto L_08A81FF0;
    }
}
L_08A81FF0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    goto L_08A81FF4;
L_08A81FF4:
    if (hot_regs.g5 != 0u) {
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
        goto L_08A81FD0;
    }
    goto L_08A81FFC;
L_08A81FFC:
    if (hot_regs.g4 == hot_regs.g6) {
    hot_regs.g4 = (hot_regs.g6 | 0u);
        goto L_08A82020;
    }
    goto L_08A82004;
L_08A82004:
{
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g5 = (ctx.gpr[19] < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    if (g5 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g5 = g5;
        goto L_08A82024;
    }
    goto L_08A8201C;
}
L_08A8201C:
    hot_regs.g4 = (hot_regs.g6 | 0u);
    goto L_08A82020;
L_08A82020:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g4);
    goto L_08A82024;
L_08A82024:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g6);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g5 = (g4 ^ g5);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    if (g5 == 0u) {
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08A8205C;
    }
    goto L_08A82054;
}
L_08A82054:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A8205C;
      }
      goto L_08A8205C;
    }
L_08A8205C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A82150;
      }
      goto L_08A82064;
    }
L_08A82064:
    hot_regs.g31 = (0x08A8206Cu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 609u, 0x08A7F510u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8206Cu) goto L_08A8206C;
    return;
L_08A8206C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A82150;
      }
      goto L_08A82080;
    }
}
L_08A82080:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (g16 | 0u);
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A820CC;
      }
      goto L_08A82098;
    }
}
L_08A82098:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    goto L_08A820A0;
L_08A820A0:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 < ctx.gpr[19] ? 1u : 0u);
    g6 = (g6 & 255u);
    if (g6 != 0u) {
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(12));
    hot_regs.g6 = g6;
        goto L_08A820C0;
    }
    goto L_08A820B0;
}
L_08A820B0:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (g5 | 0u);
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A820C4;
      }
      goto L_08A820C0;
    }
}
L_08A820C0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    goto L_08A820C4;
L_08A820C4:
    if (hot_regs.g5 != 0u) {
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
        goto L_08A820A0;
    }
    goto L_08A820CC;
L_08A820CC:
    if (hot_regs.g4 == ctx.gpr[16]) {
    hot_regs.g4 = (ctx.gpr[16] | 0u);
        goto L_08A820F0;
    }
    goto L_08A820D4;
L_08A820D4:
{
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g5 = (ctx.gpr[19] < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    if (g5 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g4);
    hot_regs.g5 = g5;
        goto L_08A820F4;
    }
    goto L_08A820EC;
}
L_08A820EC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A820F0;
L_08A820F0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g4);
    goto L_08A820F4;
L_08A820F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g16);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    g4 = (g16 ^ g4);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_08A82134;
    }
    goto L_08A82124;
}
L_08A82124:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8213C;
      }
      goto L_08A82134;
    }
}
L_08A82134:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    g4 = (g4 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = g4;
    goto L_08A8213C;
}
L_08A8213C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A82150u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A82150u) goto L_08A82150;
    return;
L_08A82150:
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    goto L_08A82154;
L_08A82154:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A82170:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g4 = (2179u << 16u);
    hot_regs.g7 = (hot_regs.g4 + static_cast<std::uint32_t>(912));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08A8218Cu);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8218Cu) goto L_08A8218C;
    return;
L_08A8218C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A82198:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08A821B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 570u, 0x0888FA44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A821B4u) goto L_08A821B4;
    return;
L_08A821B4:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(30952));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(368), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (1u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08A821FCu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 497u, 0x08A05F1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A821FCu) goto L_08A821FC;
    return;
L_08A821FC:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(g4) < 0;
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A82218;
      }
      goto L_08A8220C;
    }
}
L_08A8220C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A82218u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 501u, 0x08A05F5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A82218u) goto L_08A82218;
    return;
L_08A82218:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A8223C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A82290;
      }
      goto L_08A82258;
    }
}
L_08A82258:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(30952));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g31 = (0x08A82270u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 499u, 0x08A05F3Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A82270u) goto L_08A82270;
    return;
L_08A82270:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A8227Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 573u, 0x0888FABCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8227Cu) goto L_08A8227C;
    return;
L_08A8227C:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82290;
      }
      goto L_08A82288;
    }
L_08A82288:
    hot_regs.g31 = (0x08A82290u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A82290u) goto L_08A82290;
    return;
L_08A82290:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A822A4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g6 == hot_regs.g5;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A822DC;
      }
      goto L_08A822C4;
    }
}
L_08A822C4:
    hot_regs.g31 = (0x08A822CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A822CCu) goto L_08A822CC;
    return;
L_08A822CC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A822E4;
      }
      goto L_08A822D4;
    }
L_08A822D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82304;
      }
      goto L_08A822DC;
    }
L_08A822DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82384;
      }
      goto L_08A822E4;
    }
L_08A822E4:
    hot_regs.g31 = (0x08A822ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 544u, 0x08AD323Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A822ECu) goto L_08A822EC;
    return;
L_08A822EC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 22u);
    hot_regs.g31 = (0x08A822FCu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A822FCu) goto L_08A822FC;
    return;
L_08A822FC:
    hot_regs.g31 = (0x08A82304u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A82304u) goto L_08A82304;
    return;
L_08A82304:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A82310u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1055u, 0x08ACFA70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A82310u) goto L_08A82310;
    return;
L_08A82310:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(184));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A8232Cu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8232Cu) goto L_08A8232C;
    return;
L_08A8232C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8234C;
      }
      goto L_08A8233C;
    }
}
L_08A8233C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A8234C;
}
L_08A8234C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(56)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g17 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A82384;
}
}
L_08A82384:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A82398:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A823A0:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    g16 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A823D4;
      }
      goto L_08A823C4;
    }
}
L_08A823C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A823D4;
}
L_08A823D4:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (hot_regs.g6 + static_cast<std::uint32_t>(132));
    hot_regs.g31 = (0x08A823E4u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 434u, 0x08AA1BA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A823E4u) goto L_08A823E4;
    return;
L_08A823E4:
    hot_regs.g31 = (0x08A823ECu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 582u, 0x0888FB40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A823ECu) goto L_08A823EC;
    return;
L_08A823EC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A823FC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(2)));
    hot_regs.g5 = (hot_regs.g5 | 64u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (2216u << 16u);
    hot_regs.g31 = (0x08A82420u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(9260));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A82420u) goto L_08A82420;
    return;
L_08A82420:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8242C:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(hot_regs.g5));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A82438:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g7);
    g7 = (2237u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(-28736));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(100)));
    g7 = (aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    { const bool branch_taken = hot_regs.g5 != g7;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A8275C;
      }
      goto L_08A82480;
    }
}
L_08A82480:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-497));
      if (branch_taken) {
          goto L_08A824AC;
      }
      goto L_08A82490;
    }
L_08A82490:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08A824A0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A824A0u) goto L_08A824A0;
    return;
L_08A824A0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A824AC;
L_08A824AC:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08A824C0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A824C0u) goto L_08A824C0;
    return;
L_08A824C0:
    hot_regs.g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(96));
    hot_regs.g31 = (0x08A824CCu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A824CCu) goto L_08A824CC;
    return;
L_08A824CC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (g22 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g21 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g22 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g21 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g22 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g21 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g21 + static_cast<std::uint32_t>(613))))));
    g5 = (0u + static_cast<std::uint32_t>(-33));
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load8(g22 + static_cast<std::uint32_t>(192)));
    g5 = (g5 & 1u);
    g5 = (g5 << 5u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g21 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g22 + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store8(g21 + static_cast<std::uint32_t>(644), static_cast<std::uint8_t>(g4));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g21 + static_cast<std::uint32_t>(616))))));
    g5 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load8(g22 + static_cast<std::uint32_t>(193)));
    g5 = (g5 & 1u);
    g5 = (g5 << 1u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g21 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g22 + static_cast<std::uint32_t>(206))))));
    aot_mem.aot_store8(g21 + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(528)));
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(680), g4);
    g4 = (aot_mem.aot_load8(g22 + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = g4 != ctx.gpr[20];
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A825AC;
      }
      goto L_08A82580;
    }
}
}
L_08A82580:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(72)));
    g5 = (32u << 16u);
    g4 = (g4 | g5);
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(72), g4);
    g5 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(194)));
    g4 = (g4 & ctx.gpr[19]);
    g5 = (g5 & 31u);
    g5 = (g5 << 4u);
    g4 = (g4 | g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A82604;
      }
      goto L_08A825AC;
    }
}
L_08A825AC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(194)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A825D0;
      }
      goto L_08A825BC;
    }
L_08A825BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & ctx.gpr[19]);
    g4 = (g4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A82604;
      }
      goto L_08A825D0;
    }
}
L_08A825D0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(194)));
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A825F4;
      }
      goto L_08A825E0;
    }
L_08A825E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & ctx.gpr[19]);
    g4 = (g4 | 48u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A82604;
      }
      goto L_08A825F4;
    }
}
L_08A825F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & ctx.gpr[19]);
    g4 = (g4 | 64u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    goto L_08A82604;
}
L_08A82604:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A826E0;
      }
      goto L_08A82610;
    }
L_08A82610:
    hot_regs.g31 = (0x08A82618u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A82618u) goto L_08A82618;
    return;
L_08A82618:
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(384));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(492)));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(516))))));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(512))))));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(518))))));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(513))))));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(500)));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(519))))));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(514))))));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(480)));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(517))))));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(515))))));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(484)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(116), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(488)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(112), hot_regs.g5);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(522))))));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(523))))));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(520))))));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(521))))));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A826E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 188u, 0x089DD2B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A826E0u) goto L_08A826E0;
    return;
L_08A826E0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(613))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-17));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g31 = (0x08A826FCu);
    hot_regs.g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A826FCu) goto L_08A826FC;
    return;
L_08A826FC:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(hot_regs.g2));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(615))))));
    hot_regs.g4 = (hot_regs.g4 | 4u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(548), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(133)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(549), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(550), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(135)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(551), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(137)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(553), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(138)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(554), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(139)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(555), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A8275Cu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8275Cu) goto L_08A8275C;
    return;
L_08A8275C:
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(64))))));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A82770u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 454u, 0x0888EA48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A82770u) goto L_08A82770;
    return;
L_08A82770:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A82798:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[21] = (hot_regs.g7 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A827E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 470u, 0x0888EBACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A827E0u) goto L_08A827E0;
    return;
L_08A827E0:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), hot_regs.g2);
    g4 = (46470u << 16u);
    g4 = (g4 | 14269u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A82800;
      }
      goto L_08A827F4;
    }
}
L_08A827F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 8192u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82800;
}
L_08A82800:
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(468));
    hot_regs.g6 = (ctx.gpr[18] + static_cast<std::uint32_t>(468));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A82814u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    goto L_08A80CF8;
L_08A82814:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g2);
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A8282C;
      }
      goto L_08A82820;
    }
L_08A82820:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 32768u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A8282C;
}
L_08A8282C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 128u);
    goto L_08A82834;
L_08A82834:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A82848u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    goto L_08A83EB4;
L_08A82848:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), hot_regs.g2);
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82864;
      }
      goto L_08A82854;
    }
L_08A82854:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[22] << (ctx.gpr[19] & 31u));
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82864;
}
L_08A82864:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A82834;
      }
      goto L_08A82874;
    }
}
L_08A82874:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(448)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A82890;
      }
      goto L_08A82884;
    }
L_08A82884:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 2048u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82890;
}
L_08A82890:
{
    float f13 = hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    f13 = hot_regs.f12 - f13;
    ctx.set_fpu_condition((f13 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A828CC;
      }
      goto L_08A828AC;
    }
}
L_08A828AC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A828D0;
      }
      goto L_08A828C8;
    }
}
L_08A828C8:
    hot_regs.g4 = (0u | 1u);
    goto L_08A828CC;
L_08A828CC:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08A828D0;
L_08A828D0:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A828F0;
      }
      goto L_08A828D8;
    }
L_08A828D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A828FC;
      }
      goto L_08A828F0;
    }
}
L_08A828F0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    goto L_08A828FC;
L_08A828FC:
{
    float f13 = hot_regs.f13;
    f13 = hot_regs.f12 - f13;
    ctx.set_fpu_condition((f13 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A82930;
      }
      goto L_08A82910;
    }
}
L_08A82910:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A82934;
      }
      goto L_08A8292C;
    }
}
L_08A8292C:
    hot_regs.g4 = (0u | 1u);
    goto L_08A82930;
L_08A82930:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08A82934;
L_08A82934:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82954;
      }
      goto L_08A8293C;
    }
L_08A8293C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 2u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A82960;
      }
      goto L_08A82954;
    }
}
L_08A82954:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    goto L_08A82960;
L_08A82960:
{
    float f13 = hot_regs.f13;
    f13 = hot_regs.f12 - f13;
    ctx.set_fpu_condition((f13 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A82994;
      }
      goto L_08A82974;
    }
}
L_08A82974:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (13702u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A82998;
      }
      goto L_08A82990;
    }
}
L_08A82990:
    hot_regs.g4 = (0u | 1u);
    goto L_08A82994;
L_08A82994:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08A82998;
L_08A82998:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A829B8;
      }
      goto L_08A829A0;
    }
L_08A829A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 4u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A829C4;
      }
      goto L_08A829B8;
    }
}
L_08A829B8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    goto L_08A829C4;
L_08A829C4:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A829DC;
      }
      goto L_08A829CC;
    }
L_08A829CC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(195)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(195)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A829E8;
      }
      goto L_08A829DC;
    }
L_08A829DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 8u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A829E8;
}
L_08A829E8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A82A08;
      }
      goto L_08A829F8;
    }
L_08A829F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (16u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82A08;
}
L_08A82A08:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(194)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A82A24;
      }
      goto L_08A82A18;
    }
L_08A82A18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82A24;
}
L_08A82A24:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A82A48;
      }
      goto L_08A82A3C;
    }
}
L_08A82A3C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 32u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82A48;
}
L_08A82A48:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(196)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A82AA8;
      }
      goto L_08A82A58;
    }
L_08A82A58:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(204))))));
    g5 = (hot_regs.g4 & 2u);
    hot_regs.g6 = (g5 >> 1u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    g7 = (g5 & 2u);
    g7 = (g7 >> 1u);
    { const bool branch_taken = hot_regs.g6 != g7;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A82AA8;
      }
      goto L_08A82A78;
    }
}
L_08A82A78:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(193)));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = g6 != hot_regs.g7;
    g6 = (hot_regs.g4 & 1u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A82AA8;
      }
      goto L_08A82A88;
    }
}
L_08A82A88:
    hot_regs.g7 = (hot_regs.g5 & 1u);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    hot_regs.g4 = (hot_regs.g4 & 4u);
      if (branch_taken) {
          goto L_08A82AA8;
      }
      goto L_08A82A94;
    }
L_08A82A94:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 >> 2u);
    g5 = (g5 & 4u);
    g5 = (g5 >> 2u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A82AB4;
      }
      goto L_08A82AA8;
    }
}
L_08A82AA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 64u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82AB4;
}
L_08A82AB4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(206))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A82AD4;
      }
      goto L_08A82AC4;
    }
L_08A82AC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (1u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82AD4;
}
L_08A82AD4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A82AF8;
      }
      goto L_08A82AEC;
    }
}
L_08A82AEC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 16384u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82AF8;
}
L_08A82AF8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(207))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(207))))));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A82B18;
      }
      goto L_08A82B08;
    }
L_08A82B08:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (2u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82B18;
}
L_08A82B18:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(205))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(205))))));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A82B38;
      }
      goto L_08A82B28;
    }
L_08A82B28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (4u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82B38;
}
L_08A82B38:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(460)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A82B60;
      }
      goto L_08A82B50;
    }
}
L_08A82B50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (8u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82B60;
}
L_08A82B60:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(524)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A82B80;
      }
      goto L_08A82B70;
    }
L_08A82B70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (32u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82B80;
}
L_08A82B80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(528)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A82BA0;
      }
      goto L_08A82B90;
    }
L_08A82B90:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (64u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_08A82BA0;
}
L_08A82BA0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A82BCC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[19] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[19] >> 16u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[19] & 8192u);
    ctx.gpr[20] = (hot_regs.g7 + static_cast<std::uint32_t>(12));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[21] = (hot_regs.g7 | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82CE0;
      }
      goto L_08A82CCC;
    }
L_08A82CCC:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A82CE0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 492u, 0x0888EDD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A82CE0u) goto L_08A82CE0;
    return;
L_08A82CE0:
    hot_regs.g4 = (ctx.gpr[19] & 32768u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A82D00;
      }
      goto L_08A82CEC;
    }
L_08A82CEC:
    hot_regs.g6 = (ctx.gpr[18] + static_cast<std::uint32_t>(468));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A82D00u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_08A80E00;
L_08A82D00:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 128u);
    goto L_08A82D08;
L_08A82D08:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[21] << (ctx.gpr[20] & 31u));
    g4 = (ctx.gpr[19] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A82D30;
      }
      goto L_08A82D18;
    }
}
L_08A82D18:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A82D30u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    goto L_08A800FC;
L_08A82D30:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08A82D08;
      }
      goto L_08A82D40;
    }
}
L_08A82D40:
    hot_regs.g4 = (ctx.gpr[19] & 2048u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82D74;
      }
      goto L_08A82D4C;
    }
L_08A82D4C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(448)));
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A82D74;
L_08A82D74:
    hot_regs.g4 = (ctx.gpr[19] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E40;
      }
      goto L_08A82D80;
    }
L_08A82D80:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A82E40;
L_08A82E40:
    hot_regs.g4 = (ctx.gpr[19] & 2u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82F0C;
      }
      goto L_08A82E4C;
    }
L_08A82E4C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A82F0C;
L_08A82F0C:
    hot_regs.g4 = (ctx.gpr[19] & 4u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82FD8;
      }
      goto L_08A82F18;
    }
L_08A82F18:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A82FD8;
L_08A82FD8:
    hot_regs.g4 = (ctx.gpr[19] & 8u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83024;
      }
      goto L_08A82FE4;
    }
L_08A82FE4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(195)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 128u);
        goto L_08A82FF8;
    }
    goto L_08A82FF8;
L_08A82FF8:
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A83024;
L_08A83024:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16u << 16u);
    g4 = (ctx.gpr[19] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8305C;
      }
      goto L_08A83034;
    }
}
L_08A83034:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A8305C;
L_08A8305C:
    hot_regs.g4 = (ctx.gpr[19] & 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83090;
      }
      goto L_08A83068;
    }
L_08A83068:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(194)));
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A83090;
L_08A83090:
    hot_regs.g4 = (ctx.gpr[19] & 32u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8315C;
      }
      goto L_08A8309C;
    }
L_08A8309C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A8315C;
L_08A8315C:
    hot_regs.g4 = (ctx.gpr[19] & 64u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83230;
      }
      goto L_08A83168;
    }
L_08A83168:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g4 = (aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(196)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(204))))));
    hot_regs.g7 = (hot_regs.g6 & 8u);
    ctx.gpr[8] = (aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(193)));
    if (hot_regs.g7 != 0u) {
    hot_regs.g5 = (0u | 1024u);
        goto L_08A83184;
    }
    goto L_08A83184;
}
L_08A83184:
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (hot_regs.g6 & 4u);
    if (ctx.gpr[9] != 0u) {
    hot_regs.g7 = (0u | 512u);
        goto L_08A83194;
    }
    goto L_08A83194;
L_08A83194:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 | hot_regs.g7);
    hot_regs.g4 = (hot_regs.g4 | g5);
    g5 = (0u | 0u);
    if (ctx.gpr[8] != 0u) {
    g5 = (0u | 256u);
    hot_regs.g5 = g5;
        goto L_08A831A8;
    }
    goto L_08A831A8;
}
L_08A831A8:
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (hot_regs.g6 & 2u);
    if (ctx.gpr[8] != 0u) {
    hot_regs.g7 = (0u | 128u);
        goto L_08A831B8;
    }
    goto L_08A831B8;
L_08A831B8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g5 | hot_regs.g7);
    hot_regs.g4 = (hot_regs.g4 | g5);
    g5 = (0u | 0u);
    g6 = (g6 & 1u);
    if (g6 != 0u) {
    g5 = (0u | 64u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_08A831D0;
    }
    goto L_08A831D0;
}
L_08A831D0:
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A83230;
L_08A83230:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (1u << 16u);
    g4 = (ctx.gpr[19] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83274;
      }
      goto L_08A83240;
    }
}
L_08A83240:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(206))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A83274;
L_08A83274:
    hot_regs.g4 = (ctx.gpr[19] & 16384u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83340;
      }
      goto L_08A83280;
    }
L_08A83280:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A83340;
L_08A83340:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2u << 16u);
    g4 = (ctx.gpr[19] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83384;
      }
      goto L_08A83350;
    }
}
L_08A83350:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(207))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A83384;
L_08A83384:
    hot_regs.g4 = (ctx.gpr[19] & 4096u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A834E4;
      }
      goto L_08A83390;
    }
L_08A83390:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(133)));
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(134)));
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(137)));
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(138)));
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A834E4;
L_08A834E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (4u << 16u);
    g4 = (ctx.gpr[19] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83528;
      }
      goto L_08A834F4;
    }
}
L_08A834F4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(205))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A83528;
L_08A83528:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (8u << 16u);
    g4 = (ctx.gpr[19] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8362C;
      }
      goto L_08A83538;
    }
}
L_08A83538:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(460)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(464))))));
    hot_regs.g4 = (hot_regs.g4 << 24u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 24u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A8362C;
L_08A8362C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (32u << 16u);
    g4 = (ctx.gpr[19] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83664;
      }
      goto L_08A8363C;
    }
}
L_08A8363C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(524)));
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A83664;
L_08A83664:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (64u << 16u);
    g4 = (ctx.gpr[19] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83730;
      }
      goto L_08A83674;
    }
}
L_08A83674:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(528)));
    hot_regs.g5 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g6 = (hot_regs.g4 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g5 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A83730;
L_08A83730:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A83758:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    ctx.gpr[19] = (g6 | 0u);
    g18 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g7 = (g7 << 8u);
    g6 = (g6 | g7);
    g17 = (g6 & 65535u);
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g7 = (g7 << 8u);
    g6 = (g6 | g7);
    g6 = (g6 & 65535u);
    g6 = (g6 << 16u);
    g17 = (g17 | g6);
    g6 = (g17 & 8192u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[20] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A83804;
      }
      goto L_08A837F4;
    }
}
L_08A837F4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A83804u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 511u, 0x0888F3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A83804u) goto L_08A83804;
    return;
L_08A83804:
    hot_regs.g4 = (ctx.gpr[17] & 32768u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83820;
      }
      goto L_08A83810;
    }
L_08A83810:
    hot_regs.g6 = (ctx.gpr[19] + static_cast<std::uint32_t>(468));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A83820u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    goto L_08A81854;
L_08A83820:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 128u);
    goto L_08A83828;
L_08A83828:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[21] << (ctx.gpr[22] & 31u));
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8384C;
      }
      goto L_08A83838;
    }
}
L_08A83838:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A8384Cu);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 91u, 0x08A8450Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8384Cu) goto L_08A8384C;
    return;
L_08A8384C:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (g22 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g22) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_08A83828;
      }
      goto L_08A8385C;
    }
}
L_08A8385C:
    hot_regs.g4 = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8387C;
      }
      goto L_08A83868;
    }
L_08A83868:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A8387C;
}
L_08A8387C:
    hot_regs.g4 = (ctx.gpr[17] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A838F0;
      }
      goto L_08A83888;
    }
L_08A83888:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g4 = (g4 | g5);
    g4 = (g4 & 65535u);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), hot_regs.g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 << 8u);
    g5 = (g5 | g6);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g4 = (g4 | g5);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A838F0;
}
L_08A838F0:
    hot_regs.g4 = (ctx.gpr[17] & 2u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83964;
      }
      goto L_08A838FC;
    }
L_08A838FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g4 = (g4 | g5);
    g4 = (g4 & 65535u);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), hot_regs.g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 << 8u);
    g5 = (g5 | g6);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g4 = (g4 | g5);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A83964;
}
L_08A83964:
    hot_regs.g4 = (ctx.gpr[17] & 4u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A839D8;
      }
      goto L_08A83970;
    }
L_08A83970:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g4 = (g4 | g5);
    g4 = (g4 & 65535u);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), hot_regs.g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 << 8u);
    g5 = (g5 | g6);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g4 = (g4 | g5);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A839D8;
}
L_08A839D8:
    hot_regs.g4 = (ctx.gpr[17] & 8u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83A08;
      }
      goto L_08A839E4;
    }
L_08A839E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g4 & 127u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(g5));
    g4 = (g4 & 128u);
    g4 = (0u < g4 ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A83A08;
}
L_08A83A08:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16u << 16u);
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83A2C;
      }
      goto L_08A83A18;
    }
}
L_08A83A18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A83A2C;
}
L_08A83A2C:
    hot_regs.g4 = (ctx.gpr[17] & 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83A4C;
      }
      goto L_08A83A38;
    }
L_08A83A38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A83A4C;
}
L_08A83A4C:
    hot_regs.g4 = (ctx.gpr[17] & 32u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83AC0;
      }
      goto L_08A83A58;
    }
L_08A83A58:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g4 = (g4 | g5);
    g4 = (g4 & 65535u);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), hot_regs.g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 << 8u);
    g5 = (g5 | g6);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g4 = (g4 | g5);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A83AC0;
}
L_08A83AC0:
    hot_regs.g4 = (ctx.gpr[17] & 64u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83BA8;
      }
      goto L_08A83ACC;
    }
L_08A83ACC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g4 = (g4 | g5);
    g4 = (g4 & 65535u);
    g5 = (g4 & 63u);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(204))))));
    g6 = (0u + static_cast<std::uint32_t>(-2));
    g5 = (g5 & g6);
    g6 = (g4 & 64u);
    g6 = (0u < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    g6 = (g6 & 1u);
    g5 = (g5 | g6);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(204))))));
    g6 = (0u + static_cast<std::uint32_t>(-3));
    g5 = (g5 & g6);
    g6 = (g4 & 128u);
    g6 = (0u < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    g6 = (g6 & 1u);
    g6 = (g6 << 1u);
    g5 = (g5 | g6);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g5));
    g5 = (g4 & 256u);
    g5 = (0u < g5 ? 1u : 0u);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(204))))));
    g6 = (0u + static_cast<std::uint32_t>(-5));
    g5 = (g5 & g6);
    g6 = (g4 & 512u);
    g6 = (0u < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    g6 = (g6 & 1u);
    g6 = (g6 << 2u);
    g5 = (g5 | g6);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(204))))));
    g6 = (0u + static_cast<std::uint32_t>(-9));
    g5 = (g5 & g6);
    g4 = (g4 & 1024u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 1u);
    g4 = (g4 << 3u);
    g4 = (g5 | g4);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A83BA8;
}
L_08A83BA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (1u << 16u);
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83BDC;
      }
      goto L_08A83BB8;
    }
}
L_08A83BB8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = static_cast<std::int32_t>(g4) < 0;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83BDC;
      }
      goto L_08A83BD8;
    }
}
L_08A83BD8:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A83BDC;
L_08A83BDC:
    hot_regs.g4 = (ctx.gpr[17] & 16384u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83C50;
      }
      goto L_08A83BE8;
    }
L_08A83BE8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g4 = (g4 | g5);
    g4 = (g4 & 65535u);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), hot_regs.g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 << 8u);
    g5 = (g5 | g6);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g4 = (g4 | g5);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A83C50;
}
L_08A83C50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2u << 16u);
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83C74;
      }
      goto L_08A83C60;
    }
}
L_08A83C60:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A83C74;
}
L_08A83C74:
    hot_regs.g4 = (ctx.gpr[17] & 4096u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83D44;
      }
      goto L_08A83C80;
    }
L_08A83C80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (hot_regs.g7 << 8u);
    hot_regs.g5 = (hot_regs.g5 | hot_regs.g7);
    hot_regs.g5 = (hot_regs.g5 << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A83CCCu);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 16u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A83CCCu) goto L_08A83CCC;
    return;
L_08A83CCC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(133), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(134), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(138), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A83D44;
}
L_08A83D44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (4u << 16u);
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83D68;
      }
      goto L_08A83D54;
    }
}
L_08A83D54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A83D68;
}
L_08A83D68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (8u << 16u);
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83DF4;
      }
      goto L_08A83D78;
    }
}
L_08A83D78:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g4 = (g4 | g5);
    g4 = (g4 & 65535u);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), hot_regs.g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 << 8u);
    g5 = (g5 | g6);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g4 = (g4 | g5);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A83DF4;
}
L_08A83DF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (32u << 16u);
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83E18;
      }
      goto L_08A83E04;
    }
}
L_08A83E04:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A83E18;
}
L_08A83E18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (64u << 16u);
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83E8C;
      }
      goto L_08A83E28;
    }
}
L_08A83E28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g4 = (g4 | g5);
    g4 = (g4 & 65535u);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), hot_regs.g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 << 8u);
    g5 = (g5 | g6);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g4 = (g4 | g5);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(528), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A83E8C;
}
L_08A83E8C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A83EB4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), hot_regs.g31);
    ctx.gpr[19] = (hot_regs.g7 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A83F04u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A83F04u) goto L_08A83F04;
    return;
L_08A83F04:
    hot_regs.g4 = (0u | 8u);
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A83F78;
      }
      goto L_08A83F10;
    }
L_08A83F10:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g21 = ctx.gpr[21];
    ctx.gpr[20] = (0u | 0u);
    g4 = (g18 + static_cast<std::uint32_t>(209));
    g4 = (g4 + g19);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g19 + ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(209)));
    g21 = (g19 << 2u);
    ctx.gpr[22] = (ctx.gpr[17] + g21);
    g5 = (g18 + static_cast<std::uint32_t>(232));
    g5 = (g5 + g21);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (46470u << 16u);
    g5 = (g5 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    g5 = (g18 + static_cast<std::uint32_t>(248));
    g5 = (g5 + g21);
    g6 = (47747u << 16u);
    g6 = (g6 | 4719u);
    hot_regs.f20 = std::bit_cast<float>(g6);
    g6 = (g18 + static_cast<std::uint32_t>(264));
    g6 = (g6 + g21);
    g7 = (g18 + static_cast<std::uint32_t>(280));
    { const bool branch_taken = g4 != ctx.gpr[8];
    g7 = (g7 + g21);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08A83F80;
      }
      goto L_08A83F70;
    }
}
L_08A83F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83F84;
      }
      goto L_08A83F78;
    }
L_08A83F78:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 90u, 0x08A844E0u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A83F80;
    }
L_08A83F80:
    ctx.gpr[20] = (0u | 1u);
    goto L_08A83F84;
L_08A83F84:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(216));
    g4 = (g4 + ctx.gpr[21]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = g4 == ctx.gpr[8];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A83FA0;
      }
      goto L_08A83F9C;
    }
}
L_08A83F9C:
    ctx.gpr[20] = (ctx.gpr[20] | 2u);
    goto L_08A83FA0;
L_08A83FA0:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(232)));
    f13 = hot_regs.f12 - f13;
    ctx.set_fpu_condition((f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A83FD8;
      }
      goto L_08A83FB8;
    }
}
L_08A83FB8:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (13702u << 16u);
    g8 = (g8 | 14269u);
    hot_regs.f15 = std::bit_cast<float>(g8);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A83FDC;
      }
      goto L_08A83FD4;
    }
}
L_08A83FD4:
    hot_regs.g4 = (0u | 1u);
    goto L_08A83FD8;
L_08A83FD8:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08A83FDC;
L_08A83FDC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A83FF0;
      }
      goto L_08A83FE4;
    }
L_08A83FE4:
    ctx.gpr[20] = (ctx.gpr[20] | 4u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A83FF8;
      }
      goto L_08A83FF0;
    }
L_08A83FF0:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    goto L_08A83FF8;
L_08A83FF8:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(248)));
    f13 = hot_regs.f12 - f13;
    hot_regs.f13 = f13;
    ctx.pc = 0x08A84000u; return;}

}

void recomp_unit_0159(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0159_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_159(Runtime &runtime) {
    runtime.register_generated_unit(159u, 0x08A80000u, 16384u, &recomp_unit_0159, &recomp_unit_0159_entry);
    runtime.register_function(0x08A80000u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80044u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8007Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80088u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80098u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8013Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80148u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80218u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80220u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80228u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80258u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80264u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8029Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A802A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80374u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80380u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8044Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80458u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80524u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80530u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A805FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80608u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80640u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80664u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80724u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80730u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A807F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A807FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A808BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A808E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A809A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A809ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80A6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80A78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CDCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CF8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D1Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D40u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D84u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D98u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DBCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DCCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DE4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DF8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E00u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A811F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81200u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81380u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8138Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8167Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81688u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81758u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81764u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8180Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81818u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8184Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81854u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81874u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B40u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81CD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81CDCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D8Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DDCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E8Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E94u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81EA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81EB0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81EBCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81EC4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81ECCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81EE4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F1Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FFCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82004u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8201Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82020u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82024u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82054u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8205Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82064u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8206Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82080u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82098u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82124u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82134u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8213Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82150u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82154u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82170u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8218Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82198u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8220Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82218u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8223Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82258u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82270u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8227Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82288u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82290u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82304u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82310u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8232Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8233Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8234Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82384u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82398u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82420u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8242Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82438u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82480u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82490u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A824A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A824ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A824C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A824CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82580u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82604u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82610u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82618u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8275Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82770u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82798u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A827E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A827F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82800u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82814u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82820u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8282Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82834u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82848u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82854u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82864u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82874u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82884u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82890u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82910u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8292Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82930u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82934u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8293Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82954u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82960u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82974u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82990u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82994u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82998u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A94u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AC4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AF8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B28u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82BA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82BCCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CCCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D00u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D30u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D40u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E40u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FE4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FF8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83024u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83034u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8305Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83068u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83090u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8309Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8315Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83168u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83184u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83194u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83230u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83240u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83274u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83280u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83340u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83350u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83384u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83390u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83528u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83538u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8362Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8363Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83664u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83674u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83730u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83758u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A837F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83804u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83810u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83820u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83828u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83838u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8384Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8385Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83868u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8387Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83888u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83964u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83970u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A839D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A839E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83AC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83ACCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BDCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BE8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83CCCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D68u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E28u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E8Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F84u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F9Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FDCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FE4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FF8u, &recomp_unit_0159, "recomp_unit_0159");
}
} // namespace psprecomp
