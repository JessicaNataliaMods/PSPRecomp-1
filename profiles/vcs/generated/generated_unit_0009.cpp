#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0009[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0,
    0, 0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0,
    0, 0, 23, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0,
    0, 29, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0,
    0, 0, 69, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0,
    0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98,
    0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0,
    0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0,
    122, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0,
    0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0,
    0, 170, 0, 171, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 192, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199,
    0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207,
    0, 208, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0,
    0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0,
    0, 239, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0,
    0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 254, 255, 0, 0, 0, 0, 256, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0,
    0, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0,
    0, 277, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 286, 0, 287, 288, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0,
    0, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 320, 0,
    321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0,
    0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 335, 0, 0, 336, 0, 337, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 341, 0,
    0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 345, 346, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0,
    0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 364, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0,
    0, 0, 0, 0, 370, 0, 371, 0, 0, 372, 0, 373, 374, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379,
    0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 387, 388, 0, 389, 0, 0, 390, 0, 391, 0,
    0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 399,
    0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0,
    0, 0, 413, 0, 414, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 420, 0, 421, 0, 0, 0,
    422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 425, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    429, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 433, 434, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 444, 0, 445, 446, 0, 0, 0, 0, 0,
    447, 0, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0,
    0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 0,
    0, 0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0,
    0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 473, 474, 0, 0, 475, 0, 0, 476, 0, 477, 478, 0, 0,
    479, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 485,
};
void recomp_unit_0009_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08828000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0009[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08828000;
    case 2u: goto L_08828020;
    case 3u: goto L_0882802C;
    case 4u: goto L_0882803C;
    case 5u: goto L_0882805C;
    case 6u: goto L_08828068;
    case 7u: goto L_08828078;
    case 8u: goto L_08828088;
    case 9u: goto L_08828090;
    case 10u: goto L_08828098;
    case 11u: goto L_088280A0;
    case 12u: goto L_088280B0;
    case 13u: goto L_088280C4;
    case 14u: goto L_088280D4;
    case 15u: goto L_088280E0;
    case 16u: goto L_08828108;
    case 17u: goto L_08828124;
    case 18u: goto L_08828138;
    case 19u: goto L_08828148;
    case 20u: goto L_08828154;
    case 21u: goto L_08828170;
    case 22u: goto L_08828178;
    case 23u: goto L_08828188;
    case 24u: goto L_0882818C;
    case 25u: goto L_088281C8;
    case 26u: goto L_088281D4;
    case 27u: goto L_088281D8;
    case 28u: goto L_088281F4;
    case 29u: goto L_08828204;
    case 30u: goto L_08828210;
    case 31u: goto L_08828218;
    case 32u: goto L_08828220;
    case 33u: goto L_0882822C;
    case 34u: goto L_08828238;
    case 35u: goto L_08828240;
    case 36u: goto L_08828248;
    case 37u: goto L_08828250;
    case 38u: goto L_08828260;
    case 39u: goto L_088282AC;
    case 40u: goto L_088282B4;
    case 41u: goto L_088282BC;
    case 42u: goto L_088282C4;
    case 43u: goto L_088282F0;
    case 44u: goto L_088282FC;
    case 45u: goto L_08828364;
    case 46u: goto L_08828370;
    case 47u: goto L_088283E8;
    case 48u: goto L_08828458;
    case 49u: goto L_08828554;
    case 50u: goto L_08828584;
    case 51u: goto L_08828590;
    case 52u: goto L_088285F8;
    case 53u: goto L_08828600;
    case 54u: goto L_08828614;
    case 55u: goto L_08828628;
    case 56u: goto L_0882863C;
    case 57u: goto L_08828650;
    case 58u: goto L_0882868C;
    case 59u: goto L_088286C0;
    case 60u: goto L_088286D0;
    case 61u: goto L_08828714;
    case 62u: goto L_088287D0;
    case 63u: goto L_0882880C;
    case 64u: goto L_0882881C;
    case 65u: goto L_08828854;
    case 66u: goto L_08828864;
    case 67u: goto L_0882886C;
    case 68u: goto L_08828878;
    case 69u: goto L_08828888;
    case 70u: goto L_0882888C;
    case 71u: goto L_08828A0C;
    case 72u: goto L_08828A68;
    case 73u: goto L_08828AC4;
    case 74u: goto L_08828BA0;
    case 75u: goto L_08828BBC;
    case 76u: goto L_08828BCC;
    case 77u: goto L_08828BD4;
    case 78u: goto L_08828BE4;
    case 79u: goto L_08828C1C;
    case 80u: goto L_08828ED0;
    case 81u: goto L_08828F08;
    case 82u: goto L_08828FD4;
    case 83u: goto L_08828FDC;
    case 84u: goto L_08829008;
    case 85u: goto L_08829010;
    case 86u: goto L_08829040;
    case 87u: goto L_08829050;
    case 88u: goto L_08829058;
    case 89u: goto L_08829068;
    case 90u: goto L_08829078;
    case 91u: goto L_08829084;
    case 92u: goto L_08829090;
    case 93u: goto L_088290A0;
    case 94u: goto L_088290AC;
    case 95u: goto L_088290C8;
    case 96u: goto L_088290D4;
    case 97u: goto L_088290EC;
    case 98u: goto L_088290FC;
    case 99u: goto L_0882910C;
    case 100u: goto L_08829118;
    case 101u: goto L_08829124;
    case 102u: goto L_08829130;
    case 103u: goto L_0882913C;
    case 104u: goto L_08829150;
    case 105u: goto L_0882915C;
    case 106u: goto L_08829168;
    case 107u: goto L_08829174;
    case 108u: goto L_0882918C;
    case 109u: goto L_08829194;
    case 110u: goto L_088291A0;
    case 111u: goto L_08829358;
    case 112u: goto L_08829380;
    case 113u: goto L_088293F0;
    case 114u: goto L_08829404;
    case 115u: goto L_0882940C;
    case 116u: goto L_08829420;
    case 117u: goto L_08829428;
    case 118u: goto L_0882943C;
    case 119u: goto L_08829444;
    case 120u: goto L_0882945C;
    case 121u: goto L_08829468;
    case 122u: goto L_08829480;
    case 123u: goto L_0882948C;
    case 124u: goto L_088294A4;
    case 125u: goto L_088294B0;
    case 126u: goto L_08829500;
    case 127u: goto L_0882952C;
    case 128u: goto L_08829554;
    case 129u: goto L_08829580;
    case 130u: goto L_08829594;
    case 131u: goto L_088295BC;
    case 132u: goto L_088295D8;
    case 133u: goto L_08829620;
    case 134u: goto L_0882962C;
    case 135u: goto L_08829634;
    case 136u: goto L_0882963C;
    case 137u: goto L_08829644;
    case 138u: goto L_08829650;
    case 139u: goto L_08829660;
    case 140u: goto L_0882966C;
    case 141u: goto L_088296C0;
    case 142u: goto L_088296CC;
    case 143u: goto L_088296E4;
    case 144u: goto L_088296EC;
    case 145u: goto L_08829708;
    case 146u: goto L_08829714;
    case 147u: goto L_0882972C;
    case 148u: goto L_0882973C;
    case 149u: goto L_0882974C;
    case 150u: goto L_0882975C;
    case 151u: goto L_088297A4;
    case 152u: goto L_08829800;
    case 153u: goto L_08829850;
    case 154u: goto L_08829888;
    case 155u: goto L_088298A0;
    case 156u: goto L_088298A8;
    case 157u: goto L_088298B0;
    case 158u: goto L_088298B8;
    case 159u: goto L_088298BC;
    case 160u: goto L_088298E0;
    case 161u: goto L_088298F8;
    case 162u: goto L_08829914;
    case 163u: goto L_0882995C;
    case 164u: goto L_0882996C;
    case 165u: goto L_08829984;
    case 166u: goto L_0882999C;
    case 167u: goto L_088299AC;
    case 168u: goto L_088299E4;
    case 169u: goto L_088299F4;
    case 170u: goto L_08829A04;
    case 171u: goto L_08829A0C;
    case 172u: goto L_08829A10;
    case 173u: goto L_08829B4C;
    case 174u: goto L_08829BB4;
    case 175u: goto L_08829C20;
    case 176u: goto L_08829C30;
    case 177u: goto L_08829C40;
    case 178u: goto L_08829C48;
    case 179u: goto L_08829C58;
    case 180u: goto L_08829C90;
    case 181u: goto L_08829CC0;
    case 182u: goto L_08829CD4;
    case 183u: goto L_08829E48;
    case 184u: goto L_08829EB0;
    case 185u: goto L_08829F1C;
    case 186u: goto L_08829F60;
    case 187u: goto L_08829FB4;
    case 188u: goto L_08829FF0;
    case 189u: goto L_08829FF8;
    case 190u: goto L_0882A000;
    case 191u: goto L_0882A208;
    case 192u: goto L_0882A210;
    case 193u: goto L_0882A214;
    case 194u: goto L_0882A22C;
    case 195u: goto L_0882A234;
    case 196u: goto L_0882A244;
    case 197u: goto L_0882A25C;
    case 198u: goto L_0882A264;
    case 199u: goto L_0882A27C;
    case 200u: goto L_0882A284;
    case 201u: goto L_0882A294;
    case 202u: goto L_0882A2AC;
    case 203u: goto L_0882A2B4;
    case 204u: goto L_0882A2CC;
    case 205u: goto L_0882A2D4;
    case 206u: goto L_0882A2E4;
    case 207u: goto L_0882A2FC;
    case 208u: goto L_0882A304;
    case 209u: goto L_0882A31C;
    case 210u: goto L_0882A324;
    case 211u: goto L_0882A334;
    case 212u: goto L_0882A34C;
    case 213u: goto L_0882A354;
    case 214u: goto L_0882A36C;
    case 215u: goto L_0882A374;
    case 216u: goto L_0882A384;
    case 217u: goto L_0882A39C;
    case 218u: goto L_0882A3A4;
    case 219u: goto L_0882A3BC;
    case 220u: goto L_0882A3C4;
    case 221u: goto L_0882A3D4;
    case 222u: goto L_0882A44C;
    case 223u: goto L_0882A45C;
    case 224u: goto L_0882A4CC;
    case 225u: goto L_0882A4D4;
    case 226u: goto L_0882A4E4;
    case 227u: goto L_0882A554;
    case 228u: goto L_0882A558;
    case 229u: goto L_0882A588;
    case 230u: goto L_0882A5BC;
    case 231u: goto L_0882A614;
    case 232u: goto L_0882A61C;
    case 233u: goto L_0882A634;
    case 234u: goto L_0882A63C;
    case 235u: goto L_0882A650;
    case 236u: goto L_0882A658;
    case 237u: goto L_0882A664;
    case 238u: goto L_0882A670;
    case 239u: goto L_0882A684;
    case 240u: goto L_0882A68C;
    case 241u: goto L_0882A694;
    case 242u: goto L_0882A6BC;
    case 243u: goto L_0882A7E8;
    case 244u: goto L_0882A80C;
    case 245u: goto L_0882A81C;
    case 246u: goto L_0882A834;
    case 247u: goto L_0882A84C;
    case 248u: goto L_0882A864;
    case 249u: goto L_0882A87C;
    case 250u: goto L_0882A894;
    case 251u: goto L_0882A9E4;
    case 252u: goto L_0882AA04;
    case 253u: goto L_0882AA14;
    case 254u: goto L_0882AA28;
    case 255u: goto L_0882AA2C;
    case 256u: goto L_0882AA40;
    case 257u: goto L_0882AA44;
    case 258u: goto L_0882AA5C;
    case 259u: goto L_0882AB60;
    case 260u: goto L_0882AB70;
    case 261u: goto L_0882ABA0;
    case 262u: goto L_0882AC0C;
    case 263u: goto L_0882AC28;
    case 264u: goto L_0882AC30;
    case 265u: goto L_0882AC38;
    case 266u: goto L_0882AC6C;
    case 267u: goto L_0882AC78;
    case 268u: goto L_0882AC88;
    case 269u: goto L_0882AC90;
    case 270u: goto L_0882ACA4;
    case 271u: goto L_0882ACAC;
    case 272u: goto L_0882ACB4;
    case 273u: goto L_0882ACC0;
    case 274u: goto L_0882ACD4;
    case 275u: goto L_0882ACE4;
    case 276u: goto L_0882ACF4;
    case 277u: goto L_0882AD04;
    case 278u: goto L_0882AD0C;
    case 279u: goto L_0882AD18;
    case 280u: goto L_0882AD28;
    case 281u: goto L_0882AD30;
    case 282u: goto L_0882AD38;
    case 283u: goto L_0882AD50;
    case 284u: goto L_0882AD78;
    case 285u: goto L_0882AE04;
    case 286u: goto L_0882AE18;
    case 287u: goto L_0882AE20;
    case 288u: goto L_0882AE24;
    case 289u: goto L_0882AE38;
    case 290u: goto L_0882AE40;
    case 291u: goto L_0882AE60;
    case 292u: goto L_0882B044;
    case 293u: goto L_0882B04C;
    case 294u: goto L_0882B050;
    case 295u: goto L_0882B068;
    case 296u: goto L_0882B070;
    case 297u: goto L_0882B080;
    case 298u: goto L_0882B098;
    case 299u: goto L_0882B0A0;
    case 300u: goto L_0882B0B8;
    case 301u: goto L_0882B0C0;
    case 302u: goto L_0882B0D0;
    case 303u: goto L_0882B0E8;
    case 304u: goto L_0882B0F0;
    case 305u: goto L_0882B108;
    case 306u: goto L_0882B110;
    case 307u: goto L_0882B120;
    case 308u: goto L_0882B138;
    case 309u: goto L_0882B140;
    case 310u: goto L_0882B158;
    case 311u: goto L_0882B160;
    case 312u: goto L_0882B170;
    case 313u: goto L_0882B188;
    case 314u: goto L_0882B190;
    case 315u: goto L_0882B1A8;
    case 316u: goto L_0882B1B0;
    case 317u: goto L_0882B1C0;
    case 318u: goto L_0882B1D8;
    case 319u: goto L_0882B1E0;
    case 320u: goto L_0882B1F8;
    case 321u: goto L_0882B200;
    case 322u: goto L_0882B210;
    case 323u: goto L_0882B288;
    case 324u: goto L_0882B308;
    case 325u: goto L_0882B344;
    case 326u: goto L_0882B354;
    case 327u: goto L_0882B368;
    case 328u: goto L_0882B388;
    case 329u: goto L_0882B3CC;
    case 330u: goto L_0882B3F0;
    case 331u: goto L_0882B3F8;
    case 332u: goto L_0882B404;
    case 333u: goto L_0882B418;
    case 334u: goto L_0882B420;
    case 335u: goto L_0882B434;
    case 336u: goto L_0882B440;
    case 337u: goto L_0882B448;
    case 338u: goto L_0882B44C;
    case 339u: goto L_0882B45C;
    case 340u: goto L_0882B46C;
    case 341u: goto L_0882B478;
    case 342u: goto L_0882B484;
    case 343u: goto L_0882B48C;
    case 344u: goto L_0882B494;
    case 345u: goto L_0882B4A8;
    case 346u: goto L_0882B4AC;
    case 347u: goto L_0882B4B0;
    case 348u: goto L_0882B4BC;
    case 349u: goto L_0882B4E8;
    case 350u: goto L_0882B4FC;
    case 351u: goto L_0882B688;
    case 352u: goto L_0882B6AC;
    case 353u: goto L_0882B6D0;
    case 354u: goto L_0882B6E8;
    case 355u: goto L_0882B6F0;
    case 356u: goto L_0882B708;
    case 357u: goto L_0882B710;
    case 358u: goto L_0882B73C;
    case 359u: goto L_0882B75C;
    case 360u: goto L_0882B798;
    case 361u: goto L_0882B7A4;
    case 362u: goto L_0882B7B0;
    case 363u: goto L_0882B7B8;
    case 364u: goto L_0882B7C4;
    case 365u: goto L_0882B7D0;
    case 366u: goto L_0882B7D8;
    case 367u: goto L_0882B7E0;
    case 368u: goto L_0882B854;
    case 369u: goto L_0882B878;
    case 370u: goto L_0882B890;
    case 371u: goto L_0882B898;
    case 372u: goto L_0882B8A4;
    case 373u: goto L_0882B8AC;
    case 374u: goto L_0882B8B0;
    case 375u: goto L_0882B8BC;
    case 376u: goto L_0882B8CC;
    case 377u: goto L_0882B8DC;
    case 378u: goto L_0882B8EC;
    case 379u: goto L_0882B8FC;
    case 380u: goto L_0882B904;
    case 381u: goto L_0882B910;
    case 382u: goto L_0882B91C;
    case 383u: goto L_0882B928;
    case 384u: goto L_0882B934;
    case 385u: goto L_0882B944;
    case 386u: goto L_0882B950;
    case 387u: goto L_0882B958;
    case 388u: goto L_0882B95C;
    case 389u: goto L_0882B964;
    case 390u: goto L_0882B970;
    case 391u: goto L_0882B978;
    case 392u: goto L_0882B994;
    case 393u: goto L_0882B9A4;
    case 394u: goto L_0882B9B0;
    case 395u: goto L_0882B9C0;
    case 396u: goto L_0882B9CC;
    case 397u: goto L_0882B9E0;
    case 398u: goto L_0882B9EC;
    case 399u: goto L_0882B9FC;
    case 400u: goto L_0882BA04;
    case 401u: goto L_0882BA0C;
    case 402u: goto L_0882BA14;
    case 403u: goto L_0882BA1C;
    case 404u: goto L_0882BA24;
    case 405u: goto L_0882BA2C;
    case 406u: goto L_0882BA34;
    case 407u: goto L_0882BA3C;
    case 408u: goto L_0882BA44;
    case 409u: goto L_0882BA4C;
    case 410u: goto L_0882BA50;
    case 411u: goto L_0882BA58;
    case 412u: goto L_0882BA78;
    case 413u: goto L_0882BA88;
    case 414u: goto L_0882BA90;
    case 415u: goto L_0882BA98;
    case 416u: goto L_0882BAA4;
    case 417u: goto L_0882BABC;
    case 418u: goto L_0882BACC;
    case 419u: goto L_0882BADC;
    case 420u: goto L_0882BAE8;
    case 421u: goto L_0882BAF0;
    case 422u: goto L_0882BB00;
    case 423u: goto L_0882BB24;
    case 424u: goto L_0882BB30;
    case 425u: goto L_0882BB38;
    case 426u: goto L_0882BB40;
    case 427u: goto L_0882BB4C;
    case 428u: goto L_0882BB58;
    case 429u: goto L_0882BB80;
    case 430u: goto L_0882BB84;
    case 431u: goto L_0882BB94;
    case 432u: goto L_0882BBAC;
    case 433u: goto L_0882BBB4;
    case 434u: goto L_0882BBB8;
    case 435u: goto L_0882BBD0;
    case 436u: goto L_0882BBDC;
    case 437u: goto L_0882BC18;
    case 438u: goto L_0882BC28;
    case 439u: goto L_0882BCA0;
    case 440u: goto L_0882BCA8;
    case 441u: goto L_0882BCB0;
    case 442u: goto L_0882BCC0;
    case 443u: goto L_0882BCCC;
    case 444u: goto L_0882BCDC;
    case 445u: goto L_0882BCE4;
    case 446u: goto L_0882BCE8;
    case 447u: goto L_0882BD00;
    case 448u: goto L_0882BD0C;
    case 449u: goto L_0882BD1C;
    case 450u: goto L_0882BD28;
    case 451u: goto L_0882BD30;
    case 452u: goto L_0882BD74;
    case 453u: goto L_0882BD94;
    case 454u: goto L_0882BDC0;
    case 455u: goto L_0882BDC8;
    case 456u: goto L_0882BDD4;
    case 457u: goto L_0882BE14;
    case 458u: goto L_0882BE3C;
    case 459u: goto L_0882BE48;
    case 460u: goto L_0882BE58;
    case 461u: goto L_0882BE64;
    case 462u: goto L_0882BE6C;
    case 463u: goto L_0882BE90;
    case 464u: goto L_0882BE9C;
    case 465u: goto L_0882BEA4;
    case 466u: goto L_0882BEC4;
    case 467u: goto L_0882BEE4;
    case 468u: goto L_0882BF04;
    case 469u: goto L_0882BF14;
    case 470u: goto L_0882BF2C;
    case 471u: goto L_0882BF38;
    case 472u: goto L_0882BF44;
    case 473u: goto L_0882BF4C;
    case 474u: goto L_0882BF50;
    case 475u: goto L_0882BF5C;
    case 476u: goto L_0882BF68;
    case 477u: goto L_0882BF70;
    case 478u: goto L_0882BF74;
    case 479u: goto L_0882BF80;
    case 480u: goto L_0882BF8C;
    case 481u: goto L_0882BF94;
    case 482u: goto L_0882BFC8;
    case 483u: goto L_0882BFE8;
    case 484u: goto L_0882BFF0;
    case 485u: goto L_0882BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08828000:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    f13 = f13 / ctx.fpr[16];
    g6 = (0u | 49u);
    f12 = f13 + f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g6 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08828020;
    }
    goto L_08828020;
}
}
L_08828020:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_0882802C;
    }
    goto L_0882802C;
L_0882802C:
    ctx.gpr[17] = (0u | 49u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 49 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    ctx.gpr[17] = (hot_regs.g4 | 0u);
        goto L_0882803C;
    }
    goto L_0882803C;
L_0882803C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    f12 = hot_regs.f15 / ctx.fpr[16];
    g6 = (0u | 49u);
    f12 = f12 + ctx.fpr[17];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g6 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_0882805C;
    }
    goto L_0882805C;
}
}
L_0882805C:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08828068;
    }
    goto L_08828068;
L_08828068:
    ctx.gpr[18] = (0u | 49u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 49 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    ctx.gpr[18] = (hot_regs.g4 | 0u);
        goto L_08828078;
    }
    goto L_08828078;
L_08828078:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 65535u);
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08828090;
      }
      goto L_08828088;
    }
}
L_08828088:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_088280A0;
      }
      goto L_08828090;
    }
L_08828090:
    hot_regs.g31 = (0x08828098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08828098u) goto L_08828098;
    return;
L_08828098:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_088280A0;
L_088280A0:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[21] << 4u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08828148;
      }
      goto L_088280B0;
    }
}
L_088280B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 + g4);
    g4 = (g4 + g21);
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(28));
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(24));
    g21 = (g4 + g21);
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
    goto L_088280C4;
}
L_088280C4:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[16] + ctx.gpr[21]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08828138;
      }
      goto L_088280D4;
    }
}
L_088280D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (g4 << 6u);
    g4 = (g4 << 3u);
    g22 = (g22 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    goto L_088280E0;
}
L_088280E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), g21);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g21 = (g4 + ctx.gpr[22]);
    g4 = (g21 + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x08828108u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
    goto L_088281C8;
}
L_08828108:
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x08828124u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088281C8;
L_08828124:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(56));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g20) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_088280E0;
      }
      goto L_08828138;
    }
}
L_08828138:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g19) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(50));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_088280C4;
      }
      goto L_08828148;
    }
}
L_08828148:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08828188;
      }
      goto L_08828154;
    }
L_08828154:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 12u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08828178;
      }
      goto L_08828170;
    }
}
L_08828170:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0882818C;
      }
      goto L_08828178;
    }
L_08828178:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(482))))));
    g2 = (g4 & 32u);
    { const bool branch_taken = 0u == 0u;
    g2 = (0u < g2 ? 1u : 0u);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882818C;
      }
      goto L_08828188;
    }
}
L_08828188:
    hot_regs.g2 = (0u | 0u);
    goto L_0882818C;
L_0882818C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088281C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088282BC;
      }
      goto L_088281D4;
    }
}
L_088281D4:
    hot_regs.g7 = (0u | 3u);
    goto L_088281D8;
L_088281D8:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[9] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(86))))));
    g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g2 = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(g2) ? 1u : 0u);
    { const bool branch_taken = g2 == 0u;
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08828204;
      }
      goto L_088281F4;
    }
}
L_088281F4:
{
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g10 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g11 = (g11 << 2u);
    g10 = (g10 + g11);
    g10 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    goto L_08828204;
}
L_08828204:
{
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    if (g11 == ctx.gpr[8]) {
    g11 = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(58)));
    ctx.gpr[11] = g11;
        goto L_08828220;
    }
    goto L_08828210;
}
L_08828210:
    if (ctx.gpr[11] == hot_regs.g7) {
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(58)));
        goto L_08828220;
    }
    goto L_08828218;
L_08828218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08828240;
      }
      goto L_08828220;
    }
L_08828220:
    hot_regs.g2 = (ctx.gpr[11] & 8192u);
    { const bool branch_taken = hot_regs.g2 != 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08828238;
      }
      goto L_0882822C;
    }
L_0882822C:
{
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (g11 & 16384u);
    { const bool branch_taken = g11 == 0u;
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_08828240;
      }
      goto L_08828238;
    }
}
L_08828238:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (ctx.gpr[8] | 0u);
    g10 = (g10 & 255u);
    ctx.gpr[10] = g10;
    goto L_08828240;
}
L_08828240:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08828250;
      }
      goto L_08828248;
    }
L_08828248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088282B4;
      }
      goto L_08828250;
    }
L_08828250:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(84)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_088282B4;
      }
      goto L_08828260;
    }
L_08828260:
{
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g10 = ctx.gpr[10];
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(g10));
    g10 = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(4)));
    f15 = hot_regs.f12 - f15;
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(8)));
    f16 = hot_regs.f13 - f16;
    f17 = hot_regs.f14 - f17;
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f16; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f17; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 + f16;
    f15 = f15 + f17;
    f15 = std::sqrt(f15);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((f15 < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.gpr[10] = g10;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_088282B4;
      }
      goto L_088282AC;
    }
}
}
L_088282AC:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    goto L_088282B4;
L_088282B4:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088281D8;
      }
      goto L_088282BC;
    }
L_088282BC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088282C4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g7 = (2230u << 16u);
    hot_regs.g5 = (0u | 45u);
    hot_regs.g6 = (0u | 128u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-6032));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088282F0u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(26568));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088282F0u) goto L_088282F0;
    return;
L_088282F0:
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
L_088282FC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-224));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(112)));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g7 = (16051u << 16u);
    g5 = (g6 < g5 ? 1u : 0u);
    g7 = (g7 | 13107u);
    g6 = (16256u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(g6);
    hot_regs.f20 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), hot_regs.g31);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088286D0;
      }
      goto L_08828364;
    }
}
L_08828364:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    if (hot_regs.g4 == 0u) {
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_088283E8;
    }
    goto L_08828370;
L_08828370:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f18 = ctx.fpr[18];
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g28 = ctx.gpr[28];
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(80)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7676)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(88)));
    { const float fs = f13; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f15 + f13;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[16]; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    { const float fs = f13; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (15395u << 16u);
    f13 = ctx.fpr[17] + f13;
    g4 = (g4 | 55050u);
    f15 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7676)));
    { const float fs = f18; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f14 + f13;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7676)));
    { const float fs = f13; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f18 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[18] = f18;
      if (branch_taken) {
          goto L_08828458;
      }
      goto L_088283E8;
    }
}
}
L_088283E8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f18 = ctx.fpr[18];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g28 = ctx.gpr[28];
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7676)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(88)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f15 + f13;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[16]; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (15523u << 16u);
    f13 = ctx.fpr[17] + f13;
    g4 = (g4 | 55050u);
    f15 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7676)));
    { const float fs = f18; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f14 + f13;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7676)));
    { const float fs = f13; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f18 - f12;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[18] = f18;
    goto L_08828458;
}
}
L_08828458:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f15;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f15;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f15;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088286D0;
      }
      goto L_08828554;
    }
L_08828554:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(0u));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (0u | 80u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08828584u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08828584u) goto L_08828584;
    return;
L_08828584:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088286D0;
      }
      goto L_08828590;
    }
L_08828590:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(g4));
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g17 = (g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (0u | 0u);
    g4 = (48819u << 16u);
    g4 = (g4 | 13107u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    g4 = (15692u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30420)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30424)));
    g4 = (15523u << 16u);
    g4 = (g4 | 55050u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = (0u | 500u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    goto L_088285F8;
}
L_088285F8:
    hot_regs.g31 = (0x08828600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08828600u) goto L_08828600;
    return;
L_08828600:
    hot_regs.f12 = hot_regs.f20 - ctx.fpr[24];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    hot_regs.g31 = (0x08828614u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08828614u) goto L_08828614;
    return;
L_08828614:
    hot_regs.f12 = hot_regs.f20 - ctx.fpr[24];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    hot_regs.g31 = (0x08828628u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08828628u) goto L_08828628;
    return;
L_08828628:
    hot_regs.f12 = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[26] + hot_regs.f12;
    hot_regs.g31 = (0x0882863Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882863Cu) goto L_0882863C;
    return;
L_0882863C:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30428)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30432)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08828650u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08828650u) goto L_08828650;
    return;
L_08828650:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 + ctx.gpr[22]);
    hot_regs.g7 = (hot_regs.g6 < ctx.gpr[22] ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-30441)));
    hot_regs.g7 = (hot_regs.g4 + ctx.gpr[23]);
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (hot_regs.g4 & 255u);
    ctx.gpr[21] = (hot_regs.g6 | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-30441), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x0882868Cu);
    ctx.gpr[30] = (hot_regs.g5 & 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882868Cu) goto L_0882868C;
    return;
L_0882868C:
    hot_regs.f12 = ctx.fpr[28] - hot_regs.f22;
    hot_regs.g4 = (0u | 62u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.g31 = (0x088286C0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088286C0u) goto L_088286C0;
    return;
L_088286C0:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088285F8;
      }
      goto L_088286D0;
    }
}
L_088286D0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08828714:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(188), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088287D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 547u, 0x08827978u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088287D0u) goto L_088287D0;
    return;
L_088287D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g22 = ctx.gpr[22];
    ctx.gpr[23] = (hot_regs.g2 | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    g4 = (g4 - g5);
    g5 = (static_cast<std::int32_t>(g4) < 0 ? 1u : 0u);
    g18 = (2238u << 16u);
    g18 = (g18 + static_cast<std::uint32_t>(-272));
    ctx.gpr[19] = (g18 + static_cast<std::uint32_t>(24));
    ctx.gpr[20] = (g18 + static_cast<std::uint32_t>(48));
    g21 = (2233u << 16u);
    g21 = (g21 + static_cast<std::uint32_t>(-22600));
    g22 = (2238u << 16u);
    g22 = (g22 + static_cast<std::uint32_t>(12016));
    if (g5 != 0u) {
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
    ctx.gpr[21] = g21;
    ctx.gpr[22] = g22;
        goto L_0882880C;
    }
    goto L_0882880C;
}
L_0882880C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 500u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g5 != 0u) {
    hot_regs.g4 = (0u | 500u);
    hot_regs.g5 = g5;
        goto L_0882881C;
    }
    goto L_0882881C;
}
L_0882881C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    f12 = std::bit_cast<float>(g4);
    g4 = (17402u << 16u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 / hot_regs.f13;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7812)));
    g4 = (static_cast<std::int32_t>(g4) < 505 ? 1u : 0u);
    f14 = std::bit_cast<float>(g23);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g23 = (std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = g4 == 0u;
    g23 = (g23 & 255u);
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08828864;
      }
      goto L_08828854;
    }
}
}
L_08828854:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7816)));
    g4 = (static_cast<std::int32_t>(g4) < 252 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882886C;
      }
      goto L_08828864;
    }
}
L_08828864:
    hot_regs.g31 = (0x0882886Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 548u, 0x08827A6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882886Cu) goto L_0882886C;
    return;
L_0882886C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0882888C;
      }
      goto L_08828878;
    }
L_08828878:
    hot_regs.g4 = (0u | 64u);
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[23]) < 64 ? 1u : 0u);
    if (hot_regs.g5 == 0u) {
    hot_regs.g4 = (ctx.gpr[23] | 0u);
        goto L_08828888;
    }
    goto L_08828888;
L_08828888:
    ctx.gpr[23] = (hot_regs.g4 & 255u);
    goto L_0882888C;
L_0882888C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7816)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[18]);
    hot_regs.g5 = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[23]); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g5 = (ctx.lo);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (ctx.gpr[23] & 255u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7816)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g7 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[19]);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7816)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g7 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[20]);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7816)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[18]);
    hot_regs.g5 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7816)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7816)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7816)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[19]);
    hot_regs.g5 = (16153u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7816)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7816)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    hot_regs.g5 = (hot_regs.g4 << 3u);
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + ctx.gpr[21]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g6 = (2238u << 16u);
    ctx.gpr[23] = (hot_regs.g6 + static_cast<std::uint32_t>(-6208));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[23]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = hot_regs.f14 - hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f22 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08828A0Cu);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 501u, 0x08827628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08828A0Cu) goto L_08828A0C;
    return;
L_08828A0C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    hot_regs.g5 = (hot_regs.g4 << 3u);
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + ctx.gpr[21]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[23]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = hot_regs.f14 - hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08828A68u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 501u, 0x08827628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08828A68u) goto L_08828A68;
    return;
L_08828A68:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    hot_regs.g5 = (hot_regs.g4 << 3u);
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + ctx.gpr[21]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[23]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = hot_regs.f14 - hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08828AC4u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 501u, 0x08827628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08828AC4u) goto L_08828AC4;
    return;
L_08828AC4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7816)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[18]);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7816)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[19]);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7816)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[20]);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7816)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7812)));
    g6 = (g5 + g5);
    g6 = (g6 + ctx.gpr[22]);
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g7 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g7));
    g8 = (g4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g4));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g7));
    g5 = (g5 + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7812), g5);
    g4 = (g4 + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7816), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(126)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08828ED0;
      }
      goto L_08828BA0;
    }
}
}
L_08828BA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16880u << 16u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7820)));
    hot_regs.f22 = std::bit_cast<float>(g5);
    g5 = (16512u << 16u);
    g4 = (static_cast<std::int32_t>(g4) < 761 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.fpr[24] = std::bit_cast<float>(g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08828BCC;
      }
      goto L_08828BBC;
    }
}
L_08828BBC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7824)));
    g4 = (static_cast<std::int32_t>(g4) < 380 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08828BD4;
      }
      goto L_08828BCC;
    }
}
L_08828BCC:
    hot_regs.g31 = (0x08828BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 558u, 0x08827AF8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08828BD4u) goto L_08828BD4;
    return;
L_08828BD4:
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 140u);
      if (branch_taken) {
          goto L_08828C1C;
      }
      goto L_08828BE4;
    }
L_08828BE4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = hot_regs.f20 - hot_regs.f22;
    g4 = (16928u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / hot_regs.f13;
    g4 = (16256u << 16u);
    hot_regs.g5 = (17164u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    f12 = hot_regs.f15 - f12;
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08828C1C;
}
}
L_08828C1C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 2u));
    g5 = (g5 << 3u);
    g6 = (g6 >> 30u);
    g7 = (g5 + g5);
    g6 = (g4 + g6);
    g5 = (g5 + g7);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 2u));
    g5 = (g5 + g18);
    g6 = (g6 & 255u);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g6));
    g4 = (g4 & 255u);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g4));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g5 = (g5 << 3u);
    g7 = (g5 + g5);
    g5 = (g5 + g7);
    g5 = (g5 + g19);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g4));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g5 = (g5 << 3u);
    g7 = (g5 + g5);
    g5 = (g5 + g7);
    g5 = (g5 + g20);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(124)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g21);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(120)));
    { const float fs = f12; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (g5 << 3u);
    g4 = (g5 + g5);
    g4 = (g5 + g4);
    g4 = (g4 + g18);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(124)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g21);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(120)));
    { const float fs = f12; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (g5 << 3u);
    g4 = (g5 + g5);
    g4 = (g5 + g4);
    g4 = (g4 + g18);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(124)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g21);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(120)));
    { const float fs = f12; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (g5 << 3u);
    g4 = (g5 + g5);
    g4 = (g5 + g4);
    g4 = (g4 + g19);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(124)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g21);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(120)));
    { const float fs = f12; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (g5 << 3u);
    g4 = (g5 + g5);
    g4 = (g5 + g4);
    g4 = (g4 + g19);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(124)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g21);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(120)));
    { const float fs = f12; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (g5 << 3u);
    g4 = (g5 + g5);
    g4 = (g5 + g4);
    g4 = (g4 + g20);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(124)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g21);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(120)));
    { const float fs = f12; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (g5 << 3u);
    g4 = (g5 + g5);
    g4 = (g5 + g4);
    g4 = (g4 + g20);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    g4 = (g4 + g18);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    g4 = (g4 + g19);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    g4 = (g4 + g20);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7820)));
    g6 = (g4 + static_cast<std::uint32_t>(-256));
    g7 = (g5 + g5);
    g7 = (g7 + ctx.gpr[22]);
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g8 = (g4 + static_cast<std::uint32_t>(-255));
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g8));
    g9 = (g4 + static_cast<std::uint32_t>(-254));
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g9));
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g9));
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g8));
    g5 = (g5 + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7820), g5);
    g4 = (g4 + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7824), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08828ED0;
}
}
L_08828ED0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08828F08:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(332), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(348), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(352), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(356), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(360), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(364), hot_regs.g31);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g2 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[10] & 255u);
    hot_regs.g4 = (ctx.gpr[11] & 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(372)));
    ctx.gpr[30] = (hot_regs.g6 | 0u);
    ctx.gpr[23] = (hot_regs.g7 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), hot_regs.g5);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(368)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (16192u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(284), hot_regs.g2);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f13));
      if (branch_taken) {
          goto L_08828FDC;
      }
      goto L_08828FD4;
    }
L_08828FD4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g6);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
    goto L_08828FDC;
}
L_08828FDC:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (16192u << 16u);
    f14 = std::bit_cast<float>(hot_regs.g6);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    f12 = std::bit_cast<float>(hot_regs.g7);
    f12 = hot_regs.f22 + f12;
    ctx.set_fpu_condition((f14 <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08829010;
      }
      goto L_08829008;
    }
}
L_08829008:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g6);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
    goto L_08829010;
}
L_08829010:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g20 = ctx.gpr[20];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g20)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g6 = (std::bit_cast<std::uint32_t>(f12));
    g20 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g5 = (0u | 3u);
    g6 = (g5 < g20 ? 1u : 0u);
    ctx.gpr[22] = (ctx.lo);
    if (g6 != 0u) {
    g20 = (g5 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[20] = g20;
    hot_regs.f12 = f12;
        goto L_08829040;
    }
    goto L_08829040;
}
}
L_08829040:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 3u);
    hot_regs.g6 = (g5 < ctx.gpr[22] ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    ctx.gpr[22] = (g5 | 0u);
    hot_regs.g5 = g5;
        goto L_08829050;
    }
    goto L_08829050;
}
L_08829050:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08829078;
      }
      goto L_08829058;
    }
L_08829058:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    hot_regs.g5 = (g4 < ctx.gpr[20] ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[20] = (g4 | 0u);
    hot_regs.g4 = g4;
        goto L_08829068;
    }
    goto L_08829068;
}
L_08829068:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    hot_regs.g5 = (g4 < ctx.gpr[22] ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[22] = (g4 | 0u);
    hot_regs.g4 = g4;
        goto L_08829078;
    }
    goto L_08829078;
}
L_08829078:
{
    float f26 = ctx.fpr[26];
    f26 = std::bit_cast<float>(ctx.gpr[20]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    f26 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f26)));
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_08829090;
      }
      goto L_08829084;
    }
}
L_08829084:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[26] = ctx.fpr[26] + hot_regs.f12;
    goto L_08829090;
L_08829090:
{
    float f24 = ctx.fpr[24];
    f24 = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[26] = hot_regs.f20 / ctx.fpr[26];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    f24 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f24)));
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_088290AC;
      }
      goto L_088290A0;
    }
}
L_088290A0:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[24] = ctx.fpr[24] + hot_regs.f12;
    goto L_088290AC;
L_088290AC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), ctx.gpr[16]);
    ctx.fpr[24] = hot_regs.f22 / ctx.fpr[24];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x088290C8u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088290C8u) goto L_088290C8;
    return;
L_088290C8:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088290EC;
      }
      goto L_088290D4;
    }
L_088290D4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), ctx.gpr[16]);
    f12 = f12 - hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_088290EC;
}
L_088290EC:
    ctx.gpr[21] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[21] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0882975C;
      }
      goto L_088290FC;
    }
L_088290FC:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[19] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0882974C;
      }
      goto L_0882910C;
    }
L_0882910C:
{
    float f30 = ctx.fpr[30];
    f30 = std::bit_cast<float>(ctx.gpr[21]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    f30 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f30)));
    ctx.fpr[30] = f30;
      if (branch_taken) {
          goto L_08829124;
      }
      goto L_08829118;
    }
}
L_08829118:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[30] = ctx.fpr[30] + hot_regs.f12;
    goto L_08829124;
L_08829124:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.gpr[20]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0882913C;
      }
      goto L_08829130;
    }
}
L_08829130:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_0882913C;
L_0882913C:
{
    float f28 = ctx.fpr[28];
    float f30 = ctx.fpr[30];
    { const float fs = f30; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f30 = std::bit_cast<float>(0x7FC00000u); else f30 = fs * ft; }
    f28 = std::bit_cast<float>(ctx.gpr[19]);
    f30 = f30 / hot_regs.f12;
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    f28 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f28)));
    ctx.fpr[28] = f28;
    ctx.fpr[30] = f30;
      if (branch_taken) {
          goto L_0882915C;
      }
      goto L_08829150;
    }
}
L_08829150:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[28] = ctx.fpr[28] + hot_regs.f12;
    goto L_0882915C;
L_0882915C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.gpr[22]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08829174;
      }
      goto L_08829168;
    }
}
L_08829168:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_08829174;
L_08829174:
{
    float f28 = ctx.fpr[28];
    { const float fs = f28; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f28 = std::bit_cast<float>(0x7FC00000u); else f28 = fs * ft; }
    ctx.gpr[17] = (0u | 0u);
    f28 = f28 / hot_regs.f12;
    hot_regs.g4 = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.fpr[28] = f28;
      if (branch_taken) {
          goto L_0882973C;
      }
      goto L_0882918C;
    }
}
L_0882918C:
    hot_regs.g31 = (0x08829194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 513u, 0x08827784u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08829194u) goto L_08829194;
    return;
L_08829194:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882972C;
      }
      goto L_088291A0;
    }
L_088291A0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[17]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 / hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 / hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 / hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 / hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 / hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 / hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[17] + ctx.gpr[17]);
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g7 = (2238u << 16u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-6208));
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g7);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[26]; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = ctx.fpr[30] + hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = hot_regs.f14 / hot_regs.f20;
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g7);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f15 = ctx.fpr[28] + hot_regs.f15;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = hot_regs.f14 / hot_regs.f22;
    { const float fs = hot_regs.f15; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[30] + ctx.fpr[16];
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = hot_regs.f14 / hot_regs.f20;
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f15 = ctx.fpr[28] + hot_regs.f15;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[17] / hot_regs.f22;
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[26]; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = ctx.fpr[30] + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = hot_regs.f15 / hot_regs.f20;
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f14 = ctx.fpr[28] + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[16] / hot_regs.f22;
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08829358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08829358u) goto L_08829358;
    return;
L_08829358:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 127u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-64));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (15044u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39846u);
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08829380u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08829380u) goto L_08829380;
    return;
L_08829380:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 127u);
    g4 = (g4 + static_cast<std::uint32_t>(-64));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g19 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g19 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (14545u << 16u);
    g4 = (g4 | 46871u);
    f12 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.set_fpu_condition((f13 <= f12));
    g19 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08829580;
      }
      goto L_088293F0;
    }
}
}
L_088293F0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f12)) && f12 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0882940C;
      }
      goto L_08829404;
    }
}
L_08829404:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0882940C;
L_0882940C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f12)) && f12 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08829428;
      }
      goto L_08829420;
    }
}
L_08829420:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08829428;
L_08829428:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f12)) && f12 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08829444;
      }
      goto L_0882943C;
    }
}
L_0882943C:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08829444;
L_08829444:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f12)) && f12 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08829468;
      }
      goto L_0882945C;
    }
}
L_0882945C:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08829468;
L_08829468:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f12)) && f12 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0882948C;
      }
      goto L_08829480;
    }
}
L_08829480:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0882948C;
L_0882948C:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f12)) && f12 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088294B0;
      }
      goto L_088294A4;
    }
}
L_088294A4:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088294B0;
L_088294B0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (14545u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 46871u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882952C;
      }
      goto L_08829500;
    }
L_08829500:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829554;
      }
      goto L_0882952C;
    }
L_0882952C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08829554;
}
}
L_08829554:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08829580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08829580u) goto L_08829580;
    return;
L_08829580:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g31 = (0x08829594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08829594u) goto L_08829594;
    return;
L_08829594:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 127u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-64));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (15107u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4719u);
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x088295BCu);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088295BCu) goto L_088295BC;
    return;
L_088295BC:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 127u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-64));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g31 = (0x088295D8u);
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088295D8u) goto L_088295D8;
    return;
L_088295D8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 127u);
    g4 = (g4 + static_cast<std::uint32_t>(-64));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const float fs = f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) < 0;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088296EC;
      }
      goto L_08829620;
    }
}
}
L_08829620:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    if (hot_regs.g5 == 0u) {
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
        goto L_0882963C;
    }
    goto L_0882962C;
}
L_0882962C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08829644;
      }
      goto L_08829634;
    }
L_08829634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829650;
      }
      goto L_0882963C;
    }
L_0882963C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088296EC;
      }
      goto L_08829644;
    }
L_08829644:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), hot_regs.g4);
      if (branch_taken) {
          goto L_088296EC;
      }
      goto L_08829650;
    }
L_08829650:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0882966C;
      }
      goto L_08829660;
    }
}
}
L_08829660:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_0882966C;
L_0882966C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17096u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g4 = (20224u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (20224u << 16u);
      if (branch_taken) {
          goto L_088296CC;
      }
      goto L_088296C0;
    }
L_088296C0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088296E4;
      }
      goto L_088296CC;
    }
}
L_088296CC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 - hot_regs.f13;
    g4 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (hot_regs.g5 + g4);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_088296E4;
}
}
L_088296E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), hot_regs.g4);
      if (branch_taken) {
          goto L_088296EC;
      }
      goto L_088296EC;
    }
L_088296EC:
{
    float f12 = hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(268)));
    f12 = std::bit_cast<float>(ctx.gpr[20]);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(126), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08829714;
      }
      goto L_08829708;
    }
}
L_08829708:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_08829714;
L_08829714:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = hot_regs.f20 / f12;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(127), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_0882972C;
}
}
L_0882972C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g17 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0882918C;
      }
      goto L_0882973C;
    }
}
L_0882973C:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g19 < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0882910C;
      }
      goto L_0882974C;
    }
}
L_0882974C:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g21 < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_088290FC;
      }
      goto L_0882975C;
    }
}
L_0882975C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(312)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(316)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(320)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(324)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(328)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(332)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(340)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(348)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(352)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(356)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(360)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(364)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088297A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-240));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(482))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[20]);
    ctx.gpr[20] = (g4 | 0u);
    g4 = (hot_regs.g5 & 32u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088298B0;
      }
      goto L_08829800;
    }
}
L_08829800:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16928u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088298A8;
      }
      goto L_08829850;
    }
L_08829850:
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08829888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 547u, 0x08827978u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08829888u) goto L_08829888;
    return;
L_08829888:
    hot_regs.g4 = (16880u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088298B8;
      }
      goto L_088298A0;
    }
L_088298A0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_088298BC;
      }
      goto L_088298A8;
    }
L_088298A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829F1C;
      }
      goto L_088298B0;
    }
L_088298B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829F1C;
      }
      goto L_088298B8;
    }
L_088298B8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
    goto L_088298BC;
L_088298BC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    g4 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08829F1C;
      }
      goto L_088298E0;
    }
}
L_088298E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x088298F8u);
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 44u, 0x08A9061Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088298F8u) goto L_088298F8;
    return;
L_088298F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g31 = (0x08829914u);
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 44u, 0x08A9061Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08829914u) goto L_08829914;
    return;
L_08829914:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g19 = (2238u << 16u);
    g19 = (g19 + static_cast<std::uint32_t>(-272));
    g4 = (g19 + static_cast<std::uint32_t>(24));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), g4);
    g4 = (2238u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(12016));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), g4);
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(128));
    ctx.gpr[16] = (g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (g19 + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (g19 + static_cast<std::uint32_t>(72));
    ctx.gpr[22] = (g19 + static_cast<std::uint32_t>(96));
    ctx.gpr[21] = (g19 + static_cast<std::uint32_t>(120));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    goto L_0882995C;
}
L_0882995C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0882996Cu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 501u, 0x08827628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882996Cu) goto L_0882996C;
    return;
L_0882996C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 6 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0882995C;
      }
      goto L_08829984;
    }
}
L_08829984:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(482))))));
    g4 = (g4 & 16u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08829C20;
      }
      goto L_0882999C;
    }
}
L_0882999C:
    ctx.set_fpu_condition((hot_regs.f20 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (0u | 255u);
      if (branch_taken) {
          goto L_088299E4;
      }
      goto L_088299AC;
    }
L_088299AC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = hot_regs.f20 - ctx.fpr[24];
    g4 = (16512u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / hot_regs.f22;
    g4 = (16256u << 16u);
    hot_regs.g5 = (17279u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    f12 = hot_regs.f15 - f12;
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g16 = (std::bit_cast<std::uint32_t>(f12));
    g16 = (g16 & 255u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.f12 = f12;
    goto L_088299E4;
}
}
L_088299E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7820)));
    g4 = (static_cast<std::int32_t>(g4) < 755 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08829A04;
      }
      goto L_088299F4;
    }
}
L_088299F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7824)));
    g4 = (static_cast<std::int32_t>(g4) < 379 ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7824)));
    hot_regs.g4 = g4;
        goto L_08829A10;
    }
    goto L_08829A04;
}
L_08829A04:
    hot_regs.g31 = (0x08829A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 558u, 0x08827AF8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08829A0Cu) goto L_08829A0C;
    return;
L_08829A0C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7824)));
    goto L_08829A10;
L_08829A10:
{
    float f12 = hot_regs.f12;
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[19]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f26));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[19]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f26));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g5 = (16640u << 16u);
    g4 = (g4 + ctx.gpr[17]);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f26));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[30]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f26));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[30]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[23]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[23]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[22]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f26));
    g4 = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g16); const std::int32_t divisor = static_cast<std::int32_t>(g4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g5 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[22]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[21]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[21]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f26));
    g4 = (0u | 0u);
    g5 = (hot_regs.g29 | 0u);
    g16 = (ctx.lo);
    g16 = (g16 & 255u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.f12 = f12;
    goto L_08829B4C;
}
}
L_08829B4C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7824)));
    g6 = (g6 + g4);
    g6 = (g6 << 3u);
    g7 = (g6 + g6);
    g6 = (g6 + g7);
    g6 = (g6 + ctx.gpr[19]);
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g16));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g16));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g16));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g16));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7824)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(32)));
    g6 = (g6 + g4);
    g6 = (g6 << 3u);
    g7 = (g6 + g6);
    g6 = (g6 + g7);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(36)));
    g6 = (g6 + ctx.gpr[19]);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (static_cast<std::int32_t>(g4) < 6 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08829B4C;
      }
      goto L_08829BB4;
    }
}
L_08829BB4:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7824)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7820)));
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    g8 = (g5 + g5);
    g7 = (g4 + static_cast<std::uint32_t>(-256));
    g6 = (g8 + g6);
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g7));
    g8 = (g4 + static_cast<std::uint32_t>(-255));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g8));
    g9 = (g4 + static_cast<std::uint32_t>(-254));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g9));
    g10 = (g4 + static_cast<std::uint32_t>(-253));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g10));
    g11 = (g4 + static_cast<std::uint32_t>(-252));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g11));
    g2 = (g4 + static_cast<std::uint32_t>(-251));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g2));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(g7));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(g9));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(g10));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(g2));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(g11));
    g5 = (g5 + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7820), g5);
    g4 = (g4 + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7824), g4);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    goto L_08829C20;
}
L_08829C20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7828)));
    g4 = (static_cast<std::int32_t>(g4) < 1011 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08829C40;
      }
      goto L_08829C30;
    }
}
L_08829C30:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7832)));
    g4 = (static_cast<std::int32_t>(g4) < 507 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08829C48;
      }
      goto L_08829C40;
    }
}
L_08829C40:
    hot_regs.g31 = (0x08829C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 568u, 0x08827BA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08829C48u) goto L_08829C48;
    return;
L_08829C48:
    ctx.set_fpu_condition((hot_regs.f20 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (0u | 100u);
      if (branch_taken) {
          goto L_08829C90;
      }
      goto L_08829C58;
    }
L_08829C58:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = hot_regs.f20 - ctx.fpr[24];
    g4 = (16512u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / hot_regs.f22;
    g4 = (16256u << 16u);
    hot_regs.g5 = (17096u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    f12 = hot_regs.f15 - f12;
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g16 = (std::bit_cast<std::uint32_t>(f12));
    g16 = (g16 & 255u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.f12 = f12;
    goto L_08829C90;
}
}
L_08829C90:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    hot_regs.g5 = (16384u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (16544u << 16u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f20 = hot_regs.f20 / hot_regs.f15;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08829CC0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08829CC0u) goto L_08829CC0;
    return;
L_08829CC0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = f12 + ctx.fpr[28];
    hot_regs.f12 = f12;
        goto L_08829CD4;
    }
    goto L_08829CD4;
}
L_08829CD4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g28 = ctx.gpr[28];
    f12 = f12 / ctx.fpr[28];
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    g5 = (16320u << 16u);
    g4 = (g4 & g5);
    g4 = (g4 >> 22u);
    g4 = (g4 & 15u);
    g5 = (15523u << 16u);
    g5 = (g5 | 55050u);
    g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7832)));
    g6 = (g6 << 3u);
    hot_regs.g7 = (g6 + g6);
    g6 = (g6 + hot_regs.g7);
    g6 = (g6 + ctx.gpr[19]);
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f14 = std::bit_cast<float>(g5);
    g4 = (15948u << 16u);
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (g4 | 52429u);
    f12 = f12 + f13;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(g4);
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7832)));
    f14 = f12 + f13;
    g5 = (g5 << 3u);
    g6 = (g5 + g5);
    g5 = (g5 + g6);
    g5 = (g5 + ctx.gpr[19]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f20));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7832)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7832)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f20));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7832)));
    f13 = f20 + f13;
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[30]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7832)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[30]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7832)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[23]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7832)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[23]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7832)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[22]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7832)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[22]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7832)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[21]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7832)));
    ctx.gpr[20] = (0u | 0u);
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[21]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f20));
    g4 = (ctx.gpr[16] & 255u);
    g5 = (hot_regs.g29 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08829E48;
}
}
L_08829E48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g20 = ctx.gpr[20];
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7832)));
    g6 = (g6 + g20);
    g6 = (g6 << 3u);
    g7 = (g6 + g6);
    g6 = (g6 + g7);
    g6 = (g6 + ctx.gpr[19]);
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g4));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7832)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(32)));
    g6 = (g6 + g20);
    g6 = (g6 << 3u);
    g7 = (g6 + g6);
    g6 = (g6 + g7);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(36)));
    g6 = (g6 + ctx.gpr[19]);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    g20 = (g20 + static_cast<std::uint32_t>(1));
    g6 = (static_cast<std::int32_t>(g20) < 6 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08829E48;
      }
      goto L_08829EB0;
    }
}
L_08829EB0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7832)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7828)));
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    g8 = (g5 + g5);
    g7 = (g4 + static_cast<std::uint32_t>(-384));
    g6 = (g8 + g6);
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g7));
    g8 = (g4 + static_cast<std::uint32_t>(-383));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g8));
    g9 = (g4 + static_cast<std::uint32_t>(-382));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g9));
    g10 = (g4 + static_cast<std::uint32_t>(-381));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g10));
    g11 = (g4 + static_cast<std::uint32_t>(-380));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g11));
    g2 = (g4 + static_cast<std::uint32_t>(-379));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g2));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(g7));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(g9));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(g10));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(g2));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(g11));
    g5 = (g5 + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7828), g5);
    g4 = (g4 + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7832), g4);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    goto L_08829F1C;
}
L_08829F1C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08829F60:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-464));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(482))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(436), ctx.gpr[18]);
    ctx.gpr[18] = (g5 | 0u);
    g5 = (ctx.gpr[8] & 32u);
    g5 = (0u < g5 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(432), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(440), ctx.gpr[19]);
    ctx.gpr[17] = (hot_regs.g7 & 255u);
    ctx.gpr[19] = (hot_regs.g6 | 0u);
    g5 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(428), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(444), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(448), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(452), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(456), hot_regs.g31);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08829FF8;
      }
      goto L_08829FB4;
    }
}
L_08829FB4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(482))))));
    g5 = (0u + static_cast<std::uint32_t>(-17));
    g4 = (g4 & g5);
    g4 = (g4 | 16u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g20 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (0u | 2u);
    g5 = (aot_mem.aot_load16(g20 + static_cast<std::uint32_t>(50)));
    if (g5 == g4) {
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[20] = g20;
        goto L_0882A000;
    }
    goto L_08829FF0;
}
L_08829FF0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
      if (branch_taken) {
          goto L_0882A558;
      }
      goto L_08829FF8;
    }
L_08829FF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A588;
      }
      goto L_0882A000;
    }
L_0882A000:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (g29 + static_cast<std::uint32_t>(336));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(336), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f13 = std::bit_cast<float>(g6);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g6 = (15360u << 16u);
    f14 = std::bit_cast<float>(g6);
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f13));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(336), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f15 = std::bit_cast<float>(g6);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f15));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(336), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    f15 = std::bit_cast<float>(g4);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    g4 = (g29 + static_cast<std::uint32_t>(338));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f15));
    g5 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(72)));
    g5 = (g5 + static_cast<std::uint32_t>(6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f15 = std::bit_cast<float>(g6);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f15));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f16 = std::bit_cast<float>(g6);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f16));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(g5));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    f16 = std::bit_cast<float>(g4);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    g4 = (g29 + static_cast<std::uint32_t>(340));
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f16));
    g5 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(72)));
    g5 = (g5 + static_cast<std::uint32_t>(12));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(340), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f16 = std::bit_cast<float>(g6);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f16));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(340), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f16 = std::bit_cast<float>(g6);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f16));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(340), static_cast<std::uint16_t>(g5));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    f16 = std::bit_cast<float>(g4);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    g4 = (g29 + static_cast<std::uint32_t>(342));
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f16));
    g5 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(72)));
    g5 = (g5 + static_cast<std::uint32_t>(18));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f16 = std::bit_cast<float>(g6);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f16));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f16 = std::bit_cast<float>(g6);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    g6 = (15820u << 16u);
    ctx.set_fpu_condition((f13 < f15));
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    g20 = (g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(160));
    hot_regs.f22 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f16));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(g5));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    f16 = std::bit_cast<float>(g4);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    g5 = (g6 | 52429u);
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[24] = std::bit_cast<float>(g5);
    ctx.gpr[22] = (0u | 1u);
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[20] = g20;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_0882A210;
      }
      goto L_0882A208;
    }
}
}
L_0882A208:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0882A214;
      }
      goto L_0882A210;
    }
L_0882A210:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    goto L_0882A214;
L_0882A214:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f15));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
        goto L_0882A234;
    }
    goto L_0882A22C;
}
L_0882A22C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_0882A234;
      }
      goto L_0882A234;
    }
L_0882A234:
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f20));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
        goto L_0882A244;
    }
    goto L_0882A244;
L_0882A244:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((hot_regs.f13 <= f14));
    // nop
    if (ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f14 = f14;
        goto L_0882A264;
    }
    goto L_0882A25C;
}
}
L_0882A25C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0882A264;
      }
      goto L_0882A264;
    }
L_0882A264:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((f13 <= hot_regs.f15));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = f13;
        goto L_0882A284;
    }
    goto L_0882A27C;
}
}
L_0882A27C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_0882A284;
      }
      goto L_0882A284;
    }
L_0882A284:
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
        goto L_0882A294;
    }
    goto L_0882A294;
L_0882A294:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((hot_regs.f14 < f15));
    // nop
    if (!ctx.fpu_condition()) {
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f15 = f15;
        goto L_0882A2B4;
    }
    goto L_0882A2AC;
}
}
L_0882A2AC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0882A2B4;
      }
      goto L_0882A2B4;
    }
L_0882A2B4:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g29 = hot_regs.g29;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((f14 < ctx.fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f14 = f14;
        goto L_0882A2D4;
    }
    goto L_0882A2CC;
}
}
L_0882A2CC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0882A2D4;
      }
      goto L_0882A2D4;
    }
L_0882A2D4:
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
        goto L_0882A2E4;
    }
    goto L_0882A2E4;
L_0882A2E4:
{
    float f16 = ctx.fpr[16];
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((hot_regs.f15 <= f16));
    // nop
    if (ctx.fpu_condition()) {
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = f16;
        goto L_0882A304;
    }
    goto L_0882A2FC;
}
}
L_0882A2FC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0882A304;
      }
      goto L_0882A304;
    }
L_0882A304:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g29 = hot_regs.g29;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((f15 <= ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f15 = f15;
        goto L_0882A324;
    }
    goto L_0882A31C;
}
}
L_0882A31C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0882A324;
      }
      goto L_0882A324;
    }
L_0882A324:
    ctx.set_fpu_condition((hot_regs.f15 < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_0882A334;
    }
    goto L_0882A334;
L_0882A334:
{
    float f17 = ctx.fpr[17];
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[16] < f17));
    // nop
    if (!ctx.fpu_condition()) {
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = f17;
        goto L_0882A354;
    }
    goto L_0882A34C;
}
}
L_0882A34C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0882A354;
      }
      goto L_0882A354;
    }
L_0882A354:
{
    float f16 = ctx.fpr[16];
{
    std::uint32_t g29 = hot_regs.g29;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((f16 < ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[16] = f16;
        goto L_0882A374;
    }
    goto L_0882A36C;
}
}
L_0882A36C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_0882A374;
      }
      goto L_0882A374;
    }
L_0882A374:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
        goto L_0882A384;
    }
    goto L_0882A384;
L_0882A384:
{
    float f18 = ctx.fpr[18];
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[17] <= f18));
    // nop
    if (ctx.fpu_condition()) {
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = f18;
        goto L_0882A3A4;
    }
    goto L_0882A39C;
}
}
L_0882A39C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0882A3A4;
      }
      goto L_0882A3A4;
    }
L_0882A3A4:
{
    float f17 = ctx.fpr[17];
{
    std::uint32_t g29 = hot_regs.g29;
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((f17 <= ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[17] = f17;
        goto L_0882A3C4;
    }
    goto L_0882A3BC;
}
}
L_0882A3BC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_0882A3C4;
      }
      goto L_0882A3C4;
    }
L_0882A3C4:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
        goto L_0882A3D4;
    }
    goto L_0882A3D4;
L_0882A3D4:
{
    float f13 = hot_regs.f13;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f16));
    g5 = (g29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(f16));
    g5 = (g29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g5 = (17302u << 16u);
    f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f20 = ctx.fpr[17] - f16;
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0882A4D4;
      }
      goto L_0882A44C;
    }
}
}
L_0882A44C:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 77u);
    hot_regs.g31 = (0x0882A45Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882A45Cu) goto L_0882A45C;
    return;
L_0882A45C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[9] = (g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    g4 = (g4 & 16u);
    g10 = (0u < g4 ? 1u : 0u);
    g10 = (g10 & 255u);
    g4 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    hot_regs.g31 = (0x0882A4CCu);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g4 = g4;
    ctx.gpr[10] = g10;
    goto L_08828F08;
}
L_0882A4CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A554;
      }
      goto L_0882A4D4;
    }
L_0882A4D4:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 78u);
    hot_regs.g31 = (0x0882A4E4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882A4E4u) goto L_0882A4E4;
    return;
L_0882A4E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[9] = (g29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    g4 = (g4 & 16u);
    g10 = (0u < g4 ? 1u : 0u);
    g10 = (g10 & 255u);
    g4 = (0u | 1u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    hot_regs.g31 = (0x0882A554u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g4 = g4;
    ctx.gpr[10] = g10;
    goto L_08828F08;
}
L_0882A554:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    goto L_0882A558;
L_0882A558:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (0u + static_cast<std::uint32_t>(-33));
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g4 = (g4 | 32u);
    g6 = (65528u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(g4));
    g4 = (g5 & g6);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), g4);
    g5 = (0u + static_cast<std::uint32_t>(-513));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0882A588;
}
L_0882A588:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(416)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(420)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(424)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(428)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(432)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(436)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(440)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(444)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(448)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(452)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(456)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(464));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0882A5BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-640));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(600), g17);
    g17 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(596), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(604), ctx.gpr[18]);
    g4 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(608), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(612), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(616), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(620), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(624), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(628), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(632), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0882A61C;
      }
      goto L_0882A614;
    }
}
L_0882A614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AB70;
      }
      goto L_0882A61C;
    }
L_0882A61C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0882A684;
      }
      goto L_0882A634;
    }
}
L_0882A634:
    hot_regs.g6 = (0u | 7u);
    hot_regs.g5 = (0u | 0u);
    goto L_0882A63C;
L_0882A63C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g7 = (g7 + hot_regs.g5);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = g7 != hot_regs.g6;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0882A670;
      }
      goto L_0882A650;
    }
}
L_0882A650:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882A664;
      }
      goto L_0882A658;
    }
L_0882A658:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = 0u == 0u;
    g18 = (g18 + hot_regs.g5);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0882A670;
      }
      goto L_0882A664;
    }
}
L_0882A664:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = 0u == 0u;
    g19 = (g19 + hot_regs.g5);
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0882A684;
      }
      goto L_0882A670;
    }
}
L_0882A670:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g7 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0882A63C;
      }
      goto L_0882A684;
    }
}
L_0882A684:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0882A694;
      }
      goto L_0882A68C;
    }
L_0882A68C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AB70;
      }
      goto L_0882A694;
    }
L_0882A694:
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    ctx.gpr[30] = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(352));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0882A6BCu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 44u, 0x08A9061Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882A6BCu) goto L_0882A6BC;
    return;
L_0882A6BC:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g31 = (0x0882A7E8u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 44u, 0x08A9061Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882A7E8u) goto L_0882A7E8;
    return;
L_0882A7E8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g31 = (0x0882A80Cu);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 44u, 0x08A9061Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882A80Cu) goto L_0882A80C;
    return;
L_0882A80C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0882A81Cu);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 501u, 0x08827628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882A81Cu) goto L_0882A81C;
    return;
L_0882A81C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0882A834u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 501u, 0x08827628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882A834u) goto L_0882A834;
    return;
L_0882A834:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0882A84Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 501u, 0x08827628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882A84Cu) goto L_0882A84C;
    return;
L_0882A84C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0882A864u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 501u, 0x08827628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882A864u) goto L_0882A864;
    return;
L_0882A864:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0882A87Cu);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 501u, 0x08827628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882A87Cu) goto L_0882A87C;
    return;
L_0882A87C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0882A894u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 501u, 0x08827628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882A894u) goto L_0882A894;
    return;
L_0882A894:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(288)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(312)));
    hot_regs.f12 = hot_regs.f13 + hot_regs.f14;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (0u | 1u);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (hot_regs.g5 << 2u);
    goto L_0882A9E4;
L_0882A9E4:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g29 + g6);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(288)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(312)));
    f15 = f15 + ctx.fpr[16];
    ctx.set_fpu_condition((f15 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g6 = g6;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_0882AA14;
      }
      goto L_0882AA04;
    }
}
}
L_0882AA04:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(288)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(312)));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    f12 = f12 + hot_regs.f15;
    hot_regs.f12 = f12;
    goto L_0882AA14;
}
L_0882AA14:
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((hot_regs.f15 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882AA2C;
      }
      goto L_0882AA28;
    }
L_0882AA28:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(288)));
    goto L_0882AA2C;
L_0882AA2C:
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(312)));
    ctx.set_fpu_condition((hot_regs.f15 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882AA44;
      }
      goto L_0882AA40;
    }
L_0882AA40:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(312)));
    goto L_0882AA44;
L_0882AA44:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g5 = (g5 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g6 = (static_cast<std::int32_t>(g5) < 6 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g6 = (g5 << 2u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0882A9E4;
      }
      goto L_0882AA5C;
    }
}
L_0882AA5C:
    hot_regs.g5 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (hot_regs.g29 + hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(288)));
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(312)));
    hot_regs.f14 = hot_regs.f14 - hot_regs.f15;
    hot_regs.g4 = (hot_regs.g4 << 4u);
    hot_regs.g4 = (hot_regs.g29 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g2 = (0u | 2u);
    ctx.gpr[3] = (0u | 1u);
    hot_regs.g4 = (0u | 2u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g31 = (0x0882AB60u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08828F08;
L_0882AB60:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (0u | 77u);
    hot_regs.g31 = (0x0882AB70u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882AB70u) goto L_0882AB70;
    return;
L_0882AB70:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(596)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(600)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(604)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(608)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(612)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(616)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(620)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(624)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(628)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(632)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(640));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0882ABA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-448));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-15960)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-30416)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(376), g5);
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7660)));
    g6 = (g6 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(384), g4);
    g4 = (g5 < g6 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(408), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(412), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(416), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(420), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(424), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(428), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(432), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(436), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(440), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(444), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0882AC30;
      }
      goto L_0882AC0C;
    }
}
L_0882AC0C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[22] = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(384), ctx.gpr[22]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882AC38;
      }
      goto L_0882AC28;
    }
}
L_0882AC28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B388;
      }
      goto L_0882AC30;
    }
L_0882AC30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B388;
      }
      goto L_0882AC38;
    }
L_0882AC38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[22] << 5u);
    hot_regs.g5 = (0u + g4);
    g4 = (g4 << 4u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    g4 = (hot_regs.g5 + g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(380), g4);
    g4 = (15820u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(32));
    g4 = (15360u << 16u);
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(64));
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_0882AC6C;
}
L_0882AC6C:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(376)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_0882AC88;
      }
      goto L_0882AC78;
    }
L_0882AC78:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
        goto L_0882AC90;
    }
    goto L_0882AC88;
}
L_0882AC88:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882ACB4;
      }
      goto L_0882AC90;
    }
L_0882AC90:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[22]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(380)));
    hot_regs.g4 = g4;
        goto L_0882ACAC;
    }
    goto L_0882ACA4;
}
L_0882ACA4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882ACB4;
      }
      goto L_0882ACAC;
    }
L_0882ACAC:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_0882ACB4;
L_0882ACB4:
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B368;
      }
      goto L_0882ACC0;
    }
L_0882ACC0:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g7 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0882ACE4;
      }
      goto L_0882ACD4;
    }
}
L_0882ACD4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_0882ACE4;
}
L_0882ACE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (hot_regs.g7 | 0u);
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(16)));
    if (g5 == ctx.gpr[8]) {
    g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(58)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_0882AD0C;
    }
    goto L_0882ACF4;
}
L_0882ACF4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g6 = (0u | 3u);
    if (g5 == hot_regs.g6) {
    g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(58)));
    hot_regs.g5 = g5;
        goto L_0882AD0C;
    }
    goto L_0882AD04;
}
L_0882AD04:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882AD30;
      }
      goto L_0882AD0C;
    }
L_0882AD0C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 8192u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g7 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0882AD28;
      }
      goto L_0882AD18;
    }
}
L_0882AD18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(58)));
    g4 = (g4 & 16384u);
    { const bool branch_taken = g4 == 0u;
    g4 = (hot_regs.g7 & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882AD30;
      }
      goto L_0882AD28;
    }
}
L_0882AD28:
    hot_regs.g7 = (ctx.gpr[8] | 0u);
    hot_regs.g4 = (hot_regs.g7 & 255u);
    goto L_0882AD30;
L_0882AD30:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B368;
      }
      goto L_0882AD38;
    }
L_0882AD38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 512u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882B368;
      }
      goto L_0882AD50;
    }
}
L_0882AD50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    g4 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882B368;
      }
      goto L_0882AD78;
    }
}
L_0882AD78:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (0u | 0u);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[23] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0882AE38;
      }
      goto L_0882AE04;
    }
L_0882AE04:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x0882AE18u);
    hot_regs.g6 = (hot_regs.g6 + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 379u, 0x088B2FA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882AE18u) goto L_0882AE18;
    return;
L_0882AE18:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AE24;
      }
      goto L_0882AE20;
    }
L_0882AE20:
    ctx.gpr[19] = (0u | 1u);
    goto L_0882AE24;
L_0882AE24:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0882AE04;
      }
      goto L_0882AE38;
    }
}
L_0882AE38:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B368;
      }
      goto L_0882AE40;
    }
L_0882AE40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(482))))));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-30416), g4);
    g4 = (hot_regs.g5 & 16u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882B344;
      }
      goto L_0882AE60;
    }
}
L_0882AE60:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(72)));
    g5 = (g29 + static_cast<std::uint32_t>(304));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(304), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f12 = std::bit_cast<float>(g6);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const float fs = f12; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(304), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f13 = std::bit_cast<float>(g6);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(f13));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(304), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g4 = (g29 + static_cast<std::uint32_t>(306));
    { const float fs = f13; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(f13));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(72)));
    g5 = (g5 + static_cast<std::uint32_t>(6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(306), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f13 = std::bit_cast<float>(g6);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(f13));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(306), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f14 = std::bit_cast<float>(g6);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(f14));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(306), static_cast<std::uint16_t>(g5));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    g4 = (g29 + static_cast<std::uint32_t>(308));
    { const float fs = f14; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(f14));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(72)));
    g5 = (g5 + static_cast<std::uint32_t>(12));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(308), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f14 = std::bit_cast<float>(g6);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(f14));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(308), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f14 = std::bit_cast<float>(g6);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(f14));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(308), static_cast<std::uint16_t>(g5));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    g4 = (g29 + static_cast<std::uint32_t>(310));
    { const float fs = f14; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(f14));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(72)));
    g5 = (g5 + static_cast<std::uint32_t>(18));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(310), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f14 = std::bit_cast<float>(g6);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(f14));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(310), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    f14 = std::bit_cast<float>(g6);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    ctx.set_fpu_condition((f12 < f13));
    { const float fs = f14; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(f14));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(310), static_cast<std::uint16_t>(g5));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0882B04C;
      }
      goto L_0882B044;
    }
}
}
L_0882B044:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_0882B050;
      }
      goto L_0882B04C;
    }
L_0882B04C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    goto L_0882B050;
L_0882B050:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    hot_regs.f12 = f12;
        goto L_0882B070;
    }
    goto L_0882B068;
}
}
L_0882B068:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_0882B070;
      }
      goto L_0882B070;
    }
L_0882B070:
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
        goto L_0882B080;
    }
    goto L_0882B080;
L_0882B080:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((hot_regs.f13 <= f14));
    // nop
    if (ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    hot_regs.f14 = f14;
        goto L_0882B0A0;
    }
    goto L_0882B098;
}
}
L_0882B098:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_0882B0A0;
      }
      goto L_0882B0A0;
    }
L_0882B0A0:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.set_fpu_condition((f13 <= hot_regs.f15));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    hot_regs.f13 = f13;
        goto L_0882B0C0;
    }
    goto L_0882B0B8;
}
}
L_0882B0B8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_0882B0C0;
      }
      goto L_0882B0C0;
    }
L_0882B0C0:
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
        goto L_0882B0D0;
    }
    goto L_0882B0D0;
L_0882B0D0:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((hot_regs.f14 < f15));
    // nop
    if (!ctx.fpu_condition()) {
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    hot_regs.f15 = f15;
        goto L_0882B0F0;
    }
    goto L_0882B0E8;
}
}
L_0882B0E8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_0882B0F0;
      }
      goto L_0882B0F0;
    }
L_0882B0F0:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g29 = hot_regs.g29;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.set_fpu_condition((f14 < ctx.fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f14 = f14;
        goto L_0882B110;
    }
    goto L_0882B108;
}
}
L_0882B108:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          goto L_0882B110;
      }
      goto L_0882B110;
    }
L_0882B110:
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
        goto L_0882B120;
    }
    goto L_0882B120;
L_0882B120:
{
    float f16 = ctx.fpr[16];
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((hot_regs.f15 <= f16));
    // nop
    if (ctx.fpu_condition()) {
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.fpr[16] = f16;
        goto L_0882B140;
    }
    goto L_0882B138;
}
}
L_0882B138:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_0882B140;
      }
      goto L_0882B140;
    }
L_0882B140:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g29 = hot_regs.g29;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.set_fpu_condition((f15 <= ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.f15 = f15;
        goto L_0882B160;
    }
    goto L_0882B158;
}
}
L_0882B158:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          goto L_0882B160;
      }
      goto L_0882B160;
    }
L_0882B160:
    ctx.set_fpu_condition((hot_regs.f15 < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_0882B170;
    }
    goto L_0882B170;
L_0882B170:
{
    float f16 = ctx.fpr[16];
{
    std::uint32_t g29 = hot_regs.g29;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.set_fpu_condition((f16 < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.fpr[16] = f16;
        goto L_0882B190;
    }
    goto L_0882B188;
}
}
L_0882B188:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_0882B190;
      }
      goto L_0882B190;
    }
L_0882B190:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
        goto L_0882B1B0;
    }
    goto L_0882B1A8;
}
L_0882B1A8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
      if (branch_taken) {
          goto L_0882B1B0;
      }
      goto L_0882B1B0;
    }
L_0882B1B0:
    ctx.set_fpu_condition((hot_regs.f22 <= ctx.fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_0882B1C0;
    }
    goto L_0882B1C0;
L_0882B1C0:
{
    float f16 = ctx.fpr[16];
{
    std::uint32_t g29 = hot_regs.g29;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.set_fpu_condition((f16 <= ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.fpr[16] = f16;
        goto L_0882B1E0;
    }
    goto L_0882B1D8;
}
}
L_0882B1D8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_0882B1E0;
      }
      goto L_0882B1E0;
    }
L_0882B1E0:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[18]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
        goto L_0882B200;
    }
    goto L_0882B1F8;
}
L_0882B1F8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
      if (branch_taken) {
          goto L_0882B200;
      }
      goto L_0882B200;
    }
L_0882B200:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_0882B210;
    }
    goto L_0882B210;
L_0882B210:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 78u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x0882B288u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B288u) goto L_0882B288;
    return;
L_0882B288:
{
    float f12 = hot_regs.f12;
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = ctx.fpr[24] - hot_regs.f22;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(f26));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f26));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f26));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f26));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(f26));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[9] = (g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(482))))));
    g4 = (g4 & 16u);
    g10 = (0u < g4 ? 1u : 0u);
    g10 = (g10 & 255u);
    g4 = (0u | 1u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(160));
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g2 = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g31 = (0x0882B308u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g4 = g4;
    ctx.gpr[10] = g10;
    hot_regs.f12 = f12;
    goto L_08828F08;
}
}
L_0882B308:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (0u + static_cast<std::uint32_t>(-33));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g20 + static_cast<std::uint32_t>(482))))));
    g4 = (g5 & g4);
    g4 = (g4 | 32u);
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(g4));
    g4 = (65528u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g5 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(72)));
    g4 = (g5 & g4);
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(72), g4);
    g5 = (0u + static_cast<std::uint32_t>(-513));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(72), g4);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0882B368;
      }
      goto L_0882B344;
    }
}
L_0882B344:
    hot_regs.g4 = (0u | 79u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x0882B354u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B354u) goto L_0882B354;
    return;
L_0882B354:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(482))))));
    g4 = (0u + static_cast<std::uint32_t>(-17));
    g4 = (hot_regs.g5 & g4);
    g4 = (g4 | 16u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_0882B368;
}
L_0882B368:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(384)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(380)));
    hot_regs.g6 = (g22 | 0u);
    g22 = (g4 + static_cast<std::uint32_t>(-1));
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(380), g4);
    { const bool branch_taken = hot_regs.g6 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(384), g22);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_0882AC6C;
      }
      goto L_0882B388;
    }
}
L_0882B388:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(388)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(392)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(396)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(400)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(404)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(408)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(416)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(420)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(424)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(428)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(432)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(436)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(440)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(444)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0882B3CC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g7 = (2178u << 16u);
    hot_regs.g5 = (0u | 45u);
    hot_regs.g6 = (0u | 128u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-6032));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0882B3F0u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(30288));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B3F0u) goto L_0882B3F0;
    return;
L_0882B3F0:
    hot_regs.g31 = (0x0882B3F8u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30412));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B3F8u) goto L_0882B3F8;
    return;
L_0882B3F8:
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
L_0882B404:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0882B418u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_0882B45C;
}
L_0882B418:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B440;
      }
      goto L_0882B420;
    }
L_0882B420:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (128u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882B448;
      }
      goto L_0882B434;
    }
}
L_0882B434:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = 0u == 0u;
    g2 = (0u < g2 ? 1u : 0u);
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_0882B44C;
      }
      goto L_0882B440;
    }
}
L_0882B440:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0882B44C;
      }
      goto L_0882B448;
    }
L_0882B448:
    hot_regs.g2 = (0u | 1u);
    goto L_0882B44C;
L_0882B44C:
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
L_0882B45C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0882B48C;
      }
      goto L_0882B46C;
    }
}
L_0882B46C:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x0882B478u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 640u, 0x08B66A58u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B478u) goto L_0882B478;
    return;
L_0882B478:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) >= 0;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882B494;
      }
      goto L_0882B484;
    }
L_0882B484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B4AC;
      }
      goto L_0882B48C;
    }
L_0882B48C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0882B4B0;
      }
      goto L_0882B494;
    }
L_0882B494:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    g5 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0882B4AC;
      }
      goto L_0882B4A8;
    }
}
L_0882B4A8:
    hot_regs.g4 = (0u | 1u);
    goto L_0882B4AC;
L_0882B4AC:
    hot_regs.g2 = (hot_regs.g4 & 255u);
    goto L_0882B4B0;
L_0882B4B0:
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
L_0882B4BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    ctx.set_vfpu_scalar_bits_ct<32u>(hot_regs.g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[0] = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0882B4E8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0882B4FCu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 258u, 0x08A696F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B4FCu) goto L_0882B4FC;
    return;
L_0882B4FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(482))))));
    g6 = (0u + static_cast<std::uint32_t>(-129));
    g5 = (g5 & g6);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(g5));
    g5 = (2234u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(19768));
    g8 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(424)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(92), g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(416), 0u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g4 = (0u + static_cast<std::uint32_t>(-2));
    g9 = (0u + static_cast<std::uint32_t>(-15));
    g8 = (g8 & g4);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(483))))));
    g5 = (g5 & g9);
    g7 = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(424), g8);
    g5 = (g5 | 8u);
    g8 = (ctx.gpr[10] & g7);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), g5);
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(482))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(473), static_cast<std::uint8_t>(0u));
    g8 = (0u | 0u);
    g4 = (g5 & g4);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(474), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(482))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(g4));
    g4 = (0u + static_cast<std::uint32_t>(-5));
    g8 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(464), 0u);
    g4 = (g5 & g4);
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(482))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(435), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(434), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(433), static_cast<std::uint8_t>(0u));
    g4 = (g4 & g7);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(432), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(439), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(438), static_cast<std::uint8_t>(0u));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(482))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(437), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(436), static_cast<std::uint8_t>(0u));
    g5 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(g5));
    g7 = (0u + static_cast<std::uint32_t>(-17));
    g5 = (0u | 0u);
    g4 = (g4 & g7);
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(g5));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(482))))));
    g5 = (0u + static_cast<std::uint32_t>(-33));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(482))))));
    g5 = (0u + static_cast<std::uint32_t>(-65));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(483))))));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(482))))));
    g9 = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(g8));
    g4 = (g4 & g9);
    g5 = (g5 & g6);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(444), 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(90))))));
    g6 = (0u + static_cast<std::uint32_t>(-249));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(448), 0u);
    g5 = (0u | 0u);
    g4 = (g4 & g6);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(475), static_cast<std::uint8_t>(g5));
    g4 = (g4 | 104u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(g8));
    g4 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(478), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(480), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(483))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(481), static_cast<std::uint8_t>(g4));
    g4 = (g5 & g7);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(452), 0u);
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0882B688:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x0882B6ACu);
    ctx.gpr[18] = (hot_regs.g6 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 258u, 0x08A696F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B6ACu) goto L_0882B6AC;
    return;
L_0882B6AC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(19768));
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(424)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(92), g4);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(416), 0u);
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(424), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0882B6F0;
      }
      goto L_0882B6D0;
    }
}
L_0882B6D0:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g5);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x0882B6E8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B6E8u) goto L_0882B6E8;
    return;
L_0882B6E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B708;
      }
      goto L_0882B6F0;
    }
L_0882B6F0:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(56));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g5);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x0882B708u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B708u) goto L_0882B708;
    return;
L_0882B708:
    hot_regs.g31 = (0x0882B710u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 140u, 0x0882C98Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B710u) goto L_0882B710;
    return;
L_0882B710:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(483))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-17));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(g4));
    hot_regs.g2 = (g17 | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0882B73C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x0882B75Cu);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 258u, 0x08A696F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B75Cu) goto L_0882B75C;
    return;
L_0882B75C:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(19768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(424)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), hot_regs.g4);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(416), 0u);
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(424), hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(56));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(352));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x0882B798u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B798u) goto L_0882B798;
    return;
L_0882B798:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B7B8;
      }
      goto L_0882B7A4;
    }
L_0882B7A4:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x0882B7B0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1117u, 0x08ACFE30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B7B0u) goto L_0882B7B0;
    return;
L_0882B7B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B7C4;
      }
      goto L_0882B7B8;
    }
L_0882B7B8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0882B7C4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B7C4u) goto L_0882B7C4;
    return;
L_0882B7C4:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0882B7D0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B7D0u) goto L_0882B7D0;
    return;
L_0882B7D0:
    hot_regs.g31 = (0x0882B7D8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1139u, 0x08ACFF50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B7D8u) goto L_0882B7D8;
    return;
L_0882B7D8:
    hot_regs.g31 = (0x0882B7E0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 140u, 0x0882C98Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B7E0u) goto L_0882B7E0;
    return;
L_0882B7E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(483))))));
    g5 = (0u + static_cast<std::uint32_t>(-17));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(90))))));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(90))))));
    g6 = (0u + static_cast<std::uint32_t>(-8));
    g5 = (g5 & 7u);
    g4 = (g4 & g6);
    g5 = (g5 & 7u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(90))))));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(90))))));
    g4 = (g4 & 248u);
    g4 = (g4 >> 3u);
    g6 = (0u + static_cast<std::uint32_t>(-249));
    g4 = (g4 & 31u);
    g5 = (g5 & g6);
    g4 = (g4 << 3u);
    g4 = (g5 | g4);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(g4));
    hot_regs.g2 = (g17 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0882B854:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0882B978;
      }
      goto L_0882B878;
    }
}
L_0882B878:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(19768));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(452)));
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (0u | 3u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882B898;
      }
      goto L_0882B890;
    }
}
L_0882B890:
    hot_regs.g31 = (0x0882B898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B898u) goto L_0882B898;
    return;
L_0882B898:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    hot_regs.g4 = g4;
        goto L_0882B8B0;
    }
    goto L_0882B8A4;
}
L_0882B8A4:
    hot_regs.g31 = (0x0882B8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B8ACu) goto L_0882B8AC;
    return;
L_0882B8AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    goto L_0882B8B0;
L_0882B8B0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g31 = (0x0882B8BCu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 636u, 0x08B66A10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B8BCu) goto L_0882B8BC;
    return;
L_0882B8BC:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 3u);
    hot_regs.g31 = (0x0882B8CCu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 422u, 0x0880DD60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B8CCu) goto L_0882B8CC;
    return;
L_0882B8CC:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(470))))));
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_0882B904;
      }
      goto L_0882B8DC;
    }
L_0882B8DC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0882B8FC;
      }
      goto L_0882B8EC;
    }
}
L_0882B8EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0882B8FC;
}
L_0882B8FC:
    hot_regs.g31 = (0x0882B904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 460u, 0x088DF770u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B904u) goto L_0882B904;
    return;
L_0882B904:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0882B928;
      }
      goto L_0882B910;
    }
L_0882B910:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-30396)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_0882B928;
      }
      goto L_0882B91C;
    }
L_0882B91C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & 65535u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-30396), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_0882B928;
}
L_0882B928:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(352));
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882B95C;
      }
      goto L_0882B934;
    }
}
L_0882B934:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(424)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882B95C;
      }
      goto L_0882B944;
    }
}
L_0882B944:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(416)));
    if (g4 == 0u) {
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
        goto L_0882B95C;
    }
    goto L_0882B950;
}
L_0882B950:
    hot_regs.g31 = (0x0882B958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B958u) goto L_0882B958;
    return;
L_0882B958:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_0882B95C;
L_0882B95C:
    hot_regs.g31 = (0x0882B964u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 501u, 0x08A66220u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B964u) goto L_0882B964;
    return;
L_0882B964:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B978;
      }
      goto L_0882B970;
    }
L_0882B970:
    hot_regs.g31 = (0x0882B978u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_0882B9CC;
L_0882B978:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0882B994:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0882B9A4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 620u, 0x08B66838u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B9A4u) goto L_0882B9A4;
    return;
L_0882B9A4:
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
L_0882B9B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0882B9C0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 628u, 0x08B668F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B9C0u) goto L_0882B9C0;
    return;
L_0882B9C0:
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
L_0882B9CC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0882B9E0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 630u, 0x08B66938u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882B9E0u) goto L_0882B9E0;
    return;
L_0882B9E0:
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
L_0882B9EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(476)));
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882BA4C;
      }
      goto L_0882B9FC;
    }
}
L_0882B9FC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0882BA4C;
      }
      goto L_0882BA04;
    }
L_0882BA04:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0882BA2C;
      }
      goto L_0882BA0C;
    }
L_0882BA0C:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882BA34;
      }
      goto L_0882BA14;
    }
L_0882BA14:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0882BA3C;
      }
      goto L_0882BA1C;
    }
L_0882BA1C:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0882BA44;
      }
      goto L_0882BA24;
    }
L_0882BA24:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_0882BA50;
      }
      goto L_0882BA2C;
    }
L_0882BA2C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0882BA50;
      }
      goto L_0882BA34;
    }
L_0882BA34:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_0882BA50;
      }
      goto L_0882BA3C;
    }
L_0882BA3C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0882BA50;
      }
      goto L_0882BA44;
    }
L_0882BA44:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0882BA50;
      }
      goto L_0882BA4C;
    }
L_0882BA4C:
    hot_regs.g2 = (0u | 1u);
    goto L_0882BA50;
L_0882BA50:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BA58:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (hot_regs.g5 & 64u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0882BA90;
      }
      goto L_0882BA78;
    }
}
L_0882BA78:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(470))))));
    g4 = (0u + static_cast<std::uint32_t>(-1));
    if (hot_regs.g5 != g4) {
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(476)));
    hot_regs.g4 = g4;
        goto L_0882BA98;
    }
    goto L_0882BA88;
}
L_0882BA88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BAE8;
      }
      goto L_0882BA90;
    }
L_0882BA90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BAF0;
      }
      goto L_0882BA98;
    }
L_0882BA98:
    hot_regs.g6 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_0882BAE8;
      }
      goto L_0882BAA4;
    }
L_0882BAA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    g4 = (g4 & 128u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882BAE8;
      }
      goto L_0882BABC;
    }
}
L_0882BABC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0882BADC;
      }
      goto L_0882BACC;
    }
}
L_0882BACC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0882BADC;
}
L_0882BADC:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    hot_regs.g31 = (0x0882BAE8u);
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(436));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 434u, 0x08AA1BA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BAE8u) goto L_0882BAE8;
    return;
L_0882BAE8:
    hot_regs.g31 = (0x0882BAF0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 129u, 0x08AD0934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BAF0u) goto L_0882BAF0;
    return;
L_0882BAF0:
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
L_0882BB00:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0882BB38;
      }
      goto L_0882BB24;
    }
}
L_0882BB24:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(479), static_cast<std::uint8_t>(hot_regs.g7));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(448), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0882BB40;
      }
      goto L_0882BB30;
    }
L_0882BB30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BB4C;
      }
      goto L_0882BB38;
    }
L_0882BB38:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0882BBB8;
      }
      goto L_0882BB40;
    }
L_0882BB40:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(448)));
    hot_regs.g31 = (0x0882BB4Cu);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(448));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BB4Cu) goto L_0882BB4C;
    return;
L_0882BB4C:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(352));
    hot_regs.g31 = (0x0882BB58u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BB58u) goto L_0882BB58;
    return;
L_0882BB58:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882BB84;
      }
      goto L_0882BB80;
    }
}
L_0882BB80:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(444), ctx.gpr[16]);
    goto L_0882BB84;
L_0882BB84:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 2048u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882BBAC;
      }
      goto L_0882BB94;
    }
}
L_0882BB94:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2049));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x0882BBACu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BBACu) goto L_0882BBAC;
    return;
L_0882BBAC:
    hot_regs.g31 = (0x0882BBB4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_0882BBDC;
L_0882BBB4:
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    goto L_0882BBB8;
L_0882BBB8:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0882BBD0:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(448), 0u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(444), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BBDC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-672));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(620), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(624), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(628), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(632), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(636), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(640), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(644), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(648), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(652), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(656), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0882BCA8;
      }
      goto L_0882BC18;
    }
}
L_0882BC18:
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(352));
    hot_regs.g31 = (0x0882BC28u);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BC28u) goto L_0882BC28;
    return;
L_0882BC28:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(400));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f20));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), 0u);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    g22 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & g22);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), g4);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(336), 0u);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    g4 = (g4 & g22);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(344), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(240));
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(352));
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_0882BCB0;
      }
      goto L_0882BCA0;
    }
}
}
L_0882BCA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BDC8;
      }
      goto L_0882BCA8;
    }
L_0882BCA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BF94;
      }
      goto L_0882BCB0;
    }
L_0882BCB0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(479))))));
    hot_regs.g31 = (0x0882BCC0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 222u, 0x08905074u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BCC0u) goto L_0882BCC0;
    return;
L_0882BCC0:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), 0u);
      if (branch_taken) {
          goto L_0882BCE4;
      }
      goto L_0882BCCC;
    }
L_0882BCCC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(440)));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(440)));
    hot_regs.g4 = g4;
        goto L_0882BCE8;
    }
    goto L_0882BCDC;
}
L_0882BCDC:
    hot_regs.g31 = (0x0882BCE4u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(432)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BCE4u) goto L_0882BCE4;
    return;
L_0882BCE4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(440)));
    goto L_0882BCE8;
L_0882BCE8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), ctx.gpr[19]);
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(440), hot_regs.g4);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    hot_regs.g31 = (0x0882BD00u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BD00u) goto L_0882BD00;
    return;
L_0882BD00:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x0882BD0Cu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BD0Cu) goto L_0882BD0C;
    return;
L_0882BD0C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(440)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882BD30;
      }
      goto L_0882BD1C;
    }
}
L_0882BD1C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BD30;
      }
      goto L_0882BD28;
    }
L_0882BD28:
    hot_regs.g31 = (0x0882BD30u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(432)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BD30u) goto L_0882BD30;
    return;
L_0882BD30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    { const std::uint32_t vfpu_address = g21 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g21 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g21 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882BDC0;
      }
      goto L_0882BD74;
    }
}
L_0882BD74:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2120)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882BDC0;
      }
      goto L_0882BD94;
    }
}
L_0882BD94:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2120)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x0882BDC0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BDC0u) goto L_0882BDC0;
    return;
L_0882BDC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BE14;
      }
      goto L_0882BDC8;
    }
L_0882BDC8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    hot_regs.g31 = (0x0882BDD4u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BDD4u) goto L_0882BDD4;
    return;
L_0882BDD4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    { const std::uint32_t vfpu_address = g21 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g21 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g21 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    goto L_0882BE14;
}
L_0882BE14:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x0882BE3Cu);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 935u, 0x0885FEC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BE3Cu) goto L_0882BE3C;
    return;
L_0882BE3C:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x0882BE48u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BE48u) goto L_0882BE48;
    return;
L_0882BE48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882BE6C;
      }
      goto L_0882BE58;
    }
}
L_0882BE58:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BE6C;
      }
      goto L_0882BE64;
    }
L_0882BE64:
    hot_regs.g31 = (0x0882BE6Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BE6Cu) goto L_0882BE6C;
    return;
L_0882BE6C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(352)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(356)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(360)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0882BE90u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BE90u) goto L_0882BE90;
    return;
L_0882BE90:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0882BE9Cu);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BE9Cu) goto L_0882BE9C;
    return;
L_0882BE9C:
    hot_regs.g31 = (0x0882BEA4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BEA4u) goto L_0882BEA4;
    return;
L_0882BEA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882BF04;
      }
      goto L_0882BEC4;
    }
}
L_0882BEC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882BF04;
      }
      goto L_0882BEE4;
    }
}
L_0882BEE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(344)));
    hot_regs.g4 = g4;
        goto L_0882BF2C;
    }
    goto L_0882BF04;
}
L_0882BF04:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(320));
    hot_regs.g31 = (0x0882BF14u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BF14u) goto L_0882BF14;
    return;
L_0882BF14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    g4 = (g4 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(344)));
    hot_regs.g4 = g4;
    goto L_0882BF2C;
}
L_0882BF2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(264)));
    hot_regs.g4 = g4;
        goto L_0882BF50;
    }
    goto L_0882BF38;
}
L_0882BF38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(336)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(264)));
    hot_regs.g4 = g4;
        goto L_0882BF50;
    }
    goto L_0882BF44;
}
L_0882BF44:
    hot_regs.g31 = (0x0882BF4Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BF4Cu) goto L_0882BF4C;
    return;
L_0882BF4C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(264)));
    goto L_0882BF50;
L_0882BF50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    hot_regs.g4 = g4;
        goto L_0882BF74;
    }
    goto L_0882BF5C;
}
L_0882BF5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    hot_regs.g4 = g4;
        goto L_0882BF74;
    }
    goto L_0882BF68;
}
L_0882BF68:
    hot_regs.g31 = (0x0882BF70u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BF70u) goto L_0882BF70;
    return;
L_0882BF70:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    goto L_0882BF74;
L_0882BF74:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0882BF94;
      }
      goto L_0882BF80;
    }
}
L_0882BF80:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BF94;
      }
      goto L_0882BF8C;
    }
L_0882BF8C:
    hot_regs.g31 = (0x0882BF94u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BF94u) goto L_0882BF94;
    return;
L_0882BF94:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(616)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(620)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(624)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(628)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(632)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(636)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(640)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(644)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(648)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(652)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(656)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0882BFC8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g31);
    hot_regs.g31 = (0x0882BFE8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 108u, 0x0882C728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0882BFE8u) goto L_0882BFE8;
    return;
L_0882BFE8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 6u, 0x0882C04Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0882BFF0;
    }
L_0882BFF0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(473)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 5u, 0x0882C044u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0882BFFC;
    }
L_0882BFFC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.pc = 0x0882C000u; return;
}

void recomp_unit_0009(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0009_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_9(Runtime &runtime) {
    runtime.register_generated_unit(9u, 0x08828000u, 16384u, &recomp_unit_0009, &recomp_unit_0009_entry);
    runtime.register_function(0x08828000u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828020u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882802Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882803Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882805Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828068u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828078u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828088u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828090u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828098u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828108u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828124u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828138u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828148u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828154u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828170u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828178u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828188u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882818Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828204u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828210u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828218u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828220u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882822Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828238u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828240u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828248u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828250u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828260u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828364u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828370u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088283E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828458u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828554u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828584u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828590u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828600u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828614u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828628u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882863Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828650u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882868Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088286C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088286D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828714u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088287D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882880Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882881Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828854u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828864u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882886Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828878u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828888u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882888Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A68u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828AC4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BA0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BCCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C1Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828ED0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F08u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FDCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829008u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829010u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829040u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829050u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829058u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829068u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829078u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829084u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829090u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882910Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829118u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829124u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829130u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882913Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829150u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882915Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829168u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829174u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882918Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829194u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088291A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829358u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829380u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829404u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882940Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829420u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829428u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882943Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829444u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882945Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829468u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829480u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882948Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829500u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882952Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829554u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829580u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829594u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088295BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088295D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829620u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882962Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829634u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882963Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829644u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829650u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829660u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882966Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829708u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829714u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882972Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882973Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882974Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882975Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829800u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829850u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829888u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829914u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882995Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882996Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829984u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882999Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A10u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829BB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C40u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829EB0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F1Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A000u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A208u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A210u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A214u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A22Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A234u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A244u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A25Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A264u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A27Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A284u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A294u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A304u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A31Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A324u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A334u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A34Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A354u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A36Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A374u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A384u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A39Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A3A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A3BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A3C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A3D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A44Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A45Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A554u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A558u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A588u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A5BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A614u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A61Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A634u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A63Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A650u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A658u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A664u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A670u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A684u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A68Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A694u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A6BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A7E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A80Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A81Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A834u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A84Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A864u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A87Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A894u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA14u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA2Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA40u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA5Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AB60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AB70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ABA0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC6Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACA4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACF4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE24u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE40u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B044u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B04Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B050u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B068u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B070u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B080u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B098u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B0A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B0B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B0C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B0D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B0E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B0F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B108u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B110u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B120u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B138u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B140u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B158u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B160u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B170u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B188u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B190u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B200u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B210u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B288u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B308u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B344u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B354u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B368u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B388u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B3CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B3F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B3F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B404u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B418u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B420u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B434u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B440u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B448u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B44Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B45Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B46Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B478u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B484u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B48Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B494u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B4A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B4ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B4B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B4BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B4E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B4FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B688u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B708u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B710u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B73Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B75Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B798u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B7A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B7B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B7B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B7C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B7D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B7D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B7E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B854u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B878u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B890u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B898u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B904u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B910u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B91Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B928u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B934u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B944u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B950u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B958u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B95Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B964u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B970u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B978u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B994u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA14u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA1Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA24u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA2Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA34u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA3Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BAA4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BABCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BACCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BADCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BAE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BAF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB00u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB24u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB40u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB80u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB84u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BBACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BBB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BBB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BBD0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BBDCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCA0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCA8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCB0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCCCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCDCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD00u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD1Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD74u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BDC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BDC8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BDD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE14u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE3Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE6Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE9Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BEA4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BEC4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BEE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF14u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF2Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF5Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF68u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF74u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF80u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF8Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFC8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFFCu, &recomp_unit_0009, "recomp_unit_0009");
}
} // namespace psprecomp
